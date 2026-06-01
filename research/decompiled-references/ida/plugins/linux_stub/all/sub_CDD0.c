unsigned __int64 __fastcall sub_CDD0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  const char *v5; // rsi
  const char *v6; // [rsp+0h] [rbp-50h] BYREF
  __int128 v7; // [rsp+8h] [rbp-48h]
  unsigned __int64 v8; // [rsp+18h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  *a1 = &off_37A70;
  a1[13] = off_37AC8;
  if ( (debug & 0x10000) != 0 )
  {
    v6 = nullptr;
    v7 = 0;
    get_dbctx_id();
    sub_CD10((__int64 *)&v6);
    v5 = s;
    if ( (_QWORD)v7 )
      v5 = v6;
    sub_B0F0((__int64)"%s: dbg_plugmod_t deleting...\n", v5);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  sub_AF60();
  if ( (_QWORD *)dbg == a1 + 15 )
    dbg = 0;
  clr_module_data();
  a1[164] = &off_38350;
  remove_event_listener();
  v2 = a1[160];
  a1[28] = off_38378;
  a1[136] = off_385F0;
  if ( v2 )
  {
    a1[161] = 0;
    qfree();
  }
  a1[28] = off_38998;
  a1[136] = &off_386C8;
  free_debug_event();
  v3 = a1[145];
  a1[136] = &unk_38CF0;
  if ( v3 )
  {
    a1[146] = 0;
    qfree();
  }
  if ( a1[138] )
  {
    a1[139] = 0;
    qfree();
  }
  sub_B8D0((__int64)(a1 + 28));
  *a1 = &off_38648;
  a1[13] = &off_38350;
  remove_event_listener();
  return v8 - __readfsqword(0x28u);
}

