unsigned __int64 __fastcall sub_121C0(_QWORD *a1)
{
  const char *v2; // rsi
  const char *v3; // [rsp+0h] [rbp-50h] BYREF
  __int128 v4; // [rsp+8h] [rbp-48h]
  unsigned __int64 v5; // [rsp+18h] [rbp-38h]

  v5 = __readfsqword(0x28u);
  *a1 = &off_70E18;
  a1[13] = off_70E70;
  if ( (*(_DWORD *)debug & 0x10000) == 0 )
    goto LABEL_2;
  v3 = nullptr;
  v4 = 0;
  get_dbctx_id();
  sub_F490((__int64 *)&v3);
  v2 = s1;
  if ( (_QWORD)v4 )
    v2 = v3;
  sub_E960((__int64)"%s: dbg_plugmod_t deleting...\n", v2);
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
    if ( (_QWORD *)dbg == a1 + 15 )
      goto LABEL_8;
  }
  else
  {
LABEL_2:
    if ( (_QWORD *)dbg == a1 + 15 )
LABEL_8:
      dbg = 0;
  }
  clr_module_data();
  sub_155D0(a1 + 28);
  *a1 = &off_72278;
  a1[13] = &off_72250;
  remove_event_listener();
  return v5 - __readfsqword(0x28u);
}

