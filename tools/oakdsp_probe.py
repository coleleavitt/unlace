#!/usr/bin/env python3
"""Record the OakDSP opcode map from IDA's oakdsp processor module (idalib) as tools/oakdsp_oracle.txt.

Every 16-bit first word is decoded once, followed by 0x1234 0x0000 0x0000 so a two-word form reads a
known immediate.  Each output line is a run of consecutive first words with the same verdict:
'FIRST LAST LEN MNEMONIC' (hex words; LEN 0 = not an instruction, mnemonic '-').  Run it with the idapro
package importable (IDA 9.x idalib); tools/gen_oakdsp.py reads the file, IDA is not needed to regenerate.
"""
import os, struct, sys, tempfile

def main():
    out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(os.path.dirname(__file__), 'oakdsp_oracle.txt')
    import idapro
    d = tempfile.mkdtemp()
    binp = os.path.join(d, 'oak_words.bin')
    with open(binp, 'wb') as f:
        for w in range(65536):
            f.write(struct.pack('<HHHH', w, 0x1234, 0, 0))
    idapro.open_database(binp, run_auto_analysis=False, args='-poakdsp')
    import ida_ua, idc, ida_lines
    rows = []
    for w in range(65536):
        ea = 4 * w
        n = ida_ua.create_insn(ea)
        mn = '-'
        if n:
            t = ida_lines.tag_remove(idc.generate_disasm_line(ea, 0) or '').split(';')[0].split()
            mn = t[0].lower() if t else '-'
        rows.append((n, mn))
    idapro.close_database(save=False)
    with open(out, 'w') as f:
        f.write('# OakDSP first-word map from IDA 9.5 oakdsp (tools/oakdsp_probe.py): FIRST LAST LEN MNEMONIC\n')
        s = 0
        for w in range(1, 65537):
            if w == 65536 or rows[w] != rows[s]:
                f.write('%04x %04x %d %s\n' % (s, w - 1, rows[s][0], rows[s][1]))
                s = w

if __name__ == '__main__':
    main()
