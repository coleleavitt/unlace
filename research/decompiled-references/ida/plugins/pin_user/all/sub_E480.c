unsigned __int64 __fastcall sub_E480(_QWORD *a1)
{
  __int64 v2; // rdi
  const char *v4; // rsi
  const char *v5; // [rsp+0h] [rbp-50h] BYREF
  __int128 v6; // [rsp+8h] [rbp-48h]
  unsigned __int64 v7; // [rsp+18h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  *a1 = &off_38928;
  a1[13] = off_38980;
  if ( (debug & 0x10000) != 0 )
  {
    v5 = nullptr;
    v6 = 0;
    get_dbctx_id();
    sub_E3C0((__int64 *)&v5);
    v4 = s;
    if ( (_QWORD)v6 )
      v4 = v5;
    sub_BC00((__int64)"%s: dbg_plugmod_t deleting...\n", v4);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  if ( byte_3C3A8 && (unsigned __int8)netnode_inited() )
    sub_B520();
  sub_136B0();
  if ( (_QWORD *)dbg == a1 + 15 )
    dbg = 0;
  clr_module_data();
  a1[315] = &off_39470;
  remove_event_listener();
  v2 = a1[311];
  a1[28] = off_39550;
  if ( v2 )
  {
    a1[312] = 0;
    qfree();
  }
  sub_19A40(a1 + 147);
  a1[28] = off_39A88;
  sub_D070((__int64)(a1 + 28));
  *a1 = &off_39498;
  a1[13] = &off_39470;
  remove_event_listener();
  return v7 - __readfsqword(0x28u);
}

