unsigned __int64 __fastcall sub_FB80(_QWORD *a1)
{
  __int64 v2; // rdi
  void **v3; // rdi
  __int64 v4; // rdi
  const char *v6; // rsi
  const char *v7; // [rsp+0h] [rbp-50h] BYREF
  __int128 v8; // [rsp+8h] [rbp-48h]
  unsigned __int64 v9; // [rsp+18h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  *a1 = &off_46210;
  a1[13] = off_46268;
  if ( (debug & 0x10000) != 0 )
  {
    v7 = nullptr;
    v8 = 0;
    get_dbctx_id();
    sub_FAC0((__int64 *)&v7);
    v6 = s;
    if ( (_QWORD)v8 )
      v6 = v7;
    sub_D8B0((__int64)"%s: dbg_plugmod_t deleting...\n", v6);
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  if ( byte_49CA8 && (unsigned __int8)netnode_inited() )
  {
    sub_D780();
    if ( (_QWORD *)dbg != a1 + 15 )
      goto LABEL_4;
  }
  else if ( (_QWORD *)dbg != a1 + 15 )
  {
    goto LABEL_4;
  }
  dbg = 0;
LABEL_4:
  clr_module_data();
  a1[189] = &off_47310;
  remove_event_listener();
  v2 = a1[186];
  a1[136] = off_47658;
  a1[28] = off_473E0;
  a1[160] = &off_46A40;
  if ( v2 )
  {
    a1[187] = 0;
    qfree();
  }
  if ( a1[181] )
  {
    a1[182] = 0;
    qfree();
  }
  v3 = (void **)a1[166];
  a1[160] = &off_469B8;
  sub_D100(v3);
  a1[28] = off_47980;
  a1[136] = &off_476B0;
  free_debug_event();
  v4 = a1[145];
  a1[136] = &unk_47CD8;
  if ( v4 )
  {
    a1[146] = 0;
    qfree();
  }
  if ( a1[138] )
  {
    a1[139] = 0;
    qfree();
  }
  sub_E9E0((__int64)(a1 + 28));
  *a1 = &off_47338;
  a1[13] = &off_47310;
  remove_event_listener();
  return v9 - __readfsqword(0x28u);
}

