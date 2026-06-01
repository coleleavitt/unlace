unsigned __int64 __fastcall sub_E410(_QWORD *a1)
{
  const char *v2; // rsi
  const char *v3; // [rsp+0h] [rbp-50h] BYREF
  __int128 v4; // [rsp+8h] [rbp-48h]
  unsigned __int64 v5; // [rsp+18h] [rbp-38h]

  v5 = __readfsqword(0x28u);
  *a1 = &off_44CC8;
  a1[13] = off_44D20;
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v3 = nullptr;
    v4 = 0;
    get_dbctx_id();
    sub_BF00((__int64 *)&v3);
    v2 = s;
    if ( (_QWORD)v4 )
      v2 = v3;
    sub_AF10((__int64)"%s: dbg_plugmod_t deleting...\n", v2);
    if ( v3 )
    {
      *(_QWORD *)&v4 = 0;
      qfree();
    }
  }
  sub_189C0();
  sub_AD80();
  if ( (_QWORD *)dbg == a1 + 15 )
    dbg = 0;
  clr_module_data();
  a1[212] = &off_45498;
  remove_event_listener();
  sub_14AB0(a1 + 28);
  a1[13] = &off_45498;
  *a1 = &off_454C0;
  remove_event_listener();
  return v5 - __readfsqword(0x28u);
}

