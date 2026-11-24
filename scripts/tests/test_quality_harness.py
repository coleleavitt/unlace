import sqlite3
import unittest

from scripts.quality import cfg, db, metrics, report, runner, textmetrics


SOURCE = """
int f(int *v, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0 && n > 2)
            break;
        s += v[i];
    }
    switch (n) {
    case 1: s++; break;
    case 2: s--; /* fall */
    default: s = 0;
    }
    return s;
}
"""


class CfgTests(unittest.TestCase):
    def test_body_is_cut_at_the_declaration_line(self):
        body = cfg.function_body(SOURCE, 2)
        self.assertTrue(body.startswith("{") and body.endswith("}"))
        self.assertIn("switch", body)

    def test_counts_and_identity(self):
        g = cfg.build(cfg.function_body(SOURCE, 2))
        self.assertEqual(g["counts"]["loop"], 1)
        self.assertEqual(g["counts"]["switch"], 1)
        self.assertEqual(g["counts"]["case"], 2)
        self.assertEqual(cfg.ged(g, g), 0)

    def test_short_circuit_matches_nested_ifs(self):
        a = cfg.build("{ if (x && y) f(); g(); }")
        b = cfg.build("{ if (x) { if (y) { f(); } } g(); }")
        self.assertEqual(cfg.ged(a, b), 0)

    def test_constant_loops_have_no_condition_node(self):
        a = cfg.build("{ while (1) { if (x) break; y(); } }")
        b = cfg.build("{ for (;;) { if (x) break; y(); } }")
        self.assertEqual(cfg.ged(a, b), 0)

    def test_goto_and_noreturn_shape_edges(self):
        g = cfg.build("{ if (a) goto out; abort(); out: return; }")
        self.assertEqual(g["counts"]["goto"], 1)
        self.assertGreaterEqual(cfg.ged(g, cfg.build("{ return; }")), 1)

    def test_ged_is_at_least_the_lower_bound(self):
        a = cfg.build(cfg.function_body(SOURCE, 2))
        b = cfg.build("{ while (x) { y(); } return; }")
        self.assertGreaterEqual(cfg.ged(a, b), cfg.ged_lower_bound(a, b))

    def test_literals_and_comments_do_not_count(self):
        g = cfg.build('{ s = "if (x) { goto y; }"; /* while (1) */ return; }')
        self.assertEqual(g["counts"]["if"], 0)
        self.assertEqual(g["counts"]["loop"], 0)


class MetricTests(unittest.TestCase):
    def test_signature(self):
        ret, params, variadic = metrics.signature("unsigned int *sub_10(char *a0, long a1, ...)\n{\n}")
        self.assertEqual(ret, "unsigned int *")
        self.assertEqual(params, ["char *a0", "long a1"])
        self.assertTrue(variadic)
        self.assertEqual(metrics.signature("void f(void) {}")[1], [])

    def test_casts(self):
        self.assertEqual(metrics.count_casts("x = (int)y + (char *)p; if (a) (b);"), 2)

    def test_scorecard(self):
        gt_int = {"ptr": 0, "base": "int", "kind": "primitive", "size": 4, "unsigned": False}
        fn = {"entry": 0x10, "params": [{"index": 0, "type": gt_int}], "variadic": False,
              "return": gt_int, "locals": [], "calls": [], "lines": [0x10, 0x14],
              "noreturn": False, "facts": {"cfg": cfg.build("{ return a; }")}}
        rec = {"code": "int sub_10(int a0)\n{\n  return a0;\n}\n", "error": None,
               "warnings": [], "variables": [{"name": "a0", "type": "int", "kind": "arg", "arg_index": 0}],
               "line_mappings": [{"line_number": 3, "addresses": [0x10, 0x14]}]}
        card = metrics.score(fn, rec, {"shift": 0})
        self.assertEqual(card["proto_exact"], 1.0)
        self.assertEqual(card["cfg_ged"], 0.0)
        self.assertEqual(card["addr_coverage"], 1.0)
        self.assertEqual(metrics.score(fn, None, {}), {"found": 0.0})

    def test_every_metric_has_a_direction_entry(self):
        for name, (hib, text) in metrics.METRICS.items():
            self.assertIn(hib, (True, False, None), name)
            self.assertTrue(text, name)


class TextMetricTests(unittest.TestCase):
    def test_flags_carriers_temps_and_stack_derefs(self):
        body = r"""int f(__int64 a1) {
    __int64 v16; // temp
    __int64 c4; // rsp
    __int64 c3 = a1; // rbx
    _BOOL c12 = !c3; // ZF
    char c10 = 0; // CF
    *(_BYTE *)(c4 + 8) = 0;
    *(_QWORD *)(rbp - 0x10) = v16;
    if (c12) {
    } else {
        goto label_1;
    }
label_1:;
    return c3;
}
"""
        m = textmetrics.measure(body)
        self.assertEqual(m["flag_vars"], 2)
        self.assertEqual(m["leaked_temps"], 1)
        self.assertEqual(m["register_carriers"], 2)
        self.assertEqual(m["raw_stack_accesses"], 2)
        self.assertEqual(m["empty_blocks"], 1)
        self.assertEqual(m["dead_stores"], 1, "c10 is written and never read")

    def test_aarch64_nzcv_pack_and_overflow_idioms(self):
        body = r"""void g(void * a1) {
    __int64 c2 = 5; // r9
    _BOOL c8 = c2 == 3LL; // reg?
    char v20 = LOBYTE(c2 < 2LL); // temp
    _BOOL c9 = (_QWORD)2LL <= (_QWORD)c2; // reg?
    _BOOL c10 = __OFSUB__(c2, 2LL); // reg?
    int c11 = ((_DWORD)(v20) << 0x1f) | ((_DWORD)(c8) << 0x1e) | ((_DWORD)(c9) << 0x1d) | ((_DWORD)(c10) << 0x1c); // reg?
}
"""
        m = textmetrics.measure(body)
        self.assertEqual(m["flag_vars"], 5)
        self.assertEqual(m["dead_stores"], 1, "only the NZCV word is never read")

    def test_compound_assignments_and_stores_through_pointers_are_reads(self):
        body = r"""int h(struct s * a1) {
    int n = 0;
    n += 2;
    a1->x = n;
    *a1 = 0;
    return 0;
}
"""
        self.assertEqual(textmetrics.measure(body)["dead_stores"], 0)

    def test_ghidra_engine_flags_and_register_inputs(self):
        body = r"""int f(int a1) {
  char in_CF;
  long in_RAX;
  bool v1;
  v1 = SCARRY4(a1, 1);
  if (v1 != in_CF) {
    return (int)in_RAX;
  }
  return 0;
}
"""
        m = textmetrics.measure(body)
        self.assertEqual(m["flag_vars"], 2)
        self.assertEqual(m["register_carriers"], 1)


class PairTests(unittest.TestCase):
    def test_linked_image_shift_is_calibrated(self):
        gt = {"relocatable": False, "functions": {
            "0x1000": {"entry": 0x1000, "key": "0x1000"}, "0x1100": {"entry": 0x1100, "key": "0x1100"}}}
        doc = {"functions": [{"address": 0x101000, "name": "a"}, {"address": 0x101100, "name": "b"}]}
        paired, shift, _ = runner.pair(gt, doc)
        self.assertEqual(shift, 0x100000)
        self.assertEqual(len(paired), 2)

    def test_object_pairs_by_section_offset(self):
        gt = {"relocatable": True, "functions": {
            "0x40": {"entry": 0x40, "key": ".text+0x40"}}}
        doc = {"functions": [{"address": 0x100040, "name": "f",
                              "object_location": {"section": ".text", "offset": 0x40}}]}
        paired, shift, _ = runner.pair(gt, doc)
        self.assertEqual(list(paired), ["0x40"])
        self.assertEqual(shift, 0x100000)


class ReportTests(unittest.TestCase):
    def test_compare_counts_direction(self):
        con = sqlite3.connect(":memory:")
        con.executescript(db.SCHEMA)
        con.executemany("INSERT INTO metrics VALUES(?,?,?)",
                        [("cfg_ged", 0, ""), ("proto_exact", 1, "")])
        bid = db.upsert_binary(con, {"id": "u/c/b"})
        f1 = db.upsert_function(con, bid, "0x1", "f1", 1, 10, {})
        f2 = db.upsert_function(con, bid, "0x2", "f2", 2, 10, {})
        a = db.new_run(con, label="x=off", tool="unlace")
        b = db.new_run(con, label="x=on", tool="unlace")
        con.executemany("INSERT INTO results VALUES(?,?,?,?)", [
            (a, f1, "cfg_ged", 4), (b, f1, "cfg_ged", 1),
            (a, f2, "cfg_ged", 0), (b, f2, "cfg_ged", 2),
            (a, f1, "proto_exact", 0), (b, f1, "proto_exact", 1)])
        out = report.compare(con, "x=off", "x=on")
        ged = out["metrics"]["cfg_ged"]
        self.assertEqual((ged["improved"], ged["worse"]), (1, 1))
        self.assertEqual(ged["regressions"][0]["function"], "f2")
        self.assertEqual(out["metrics"]["proto_exact"]["improved"], 1)
        self.assertEqual(report.worst(con, b, "cfg_ged")["functions"][0]["function"], "f2")


if __name__ == "__main__":
    unittest.main()
