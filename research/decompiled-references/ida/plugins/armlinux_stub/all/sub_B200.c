unsigned __int64 __fastcall sub_B200(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  void *v4; // rdi
  const char *v6; // rsi
  const char *v7; // [rsp+0h] [rbp-50h] BYREF
  __int128 v8; // [rsp+8h] [rbp-48h]
  unsigned __int64 v9; // [rsp+18h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  *a1 = &off_36F98;
  a1[13] = off_36FF0;
  if ( (debug & 0x10000) == 0 )
    goto LABEL_2;
  v7 = nullptr;
  v8 = 0;
  get_dbctx_id();
  sub_B140((__int64 *)&v7);
  v6 = s;
  if ( (_QWORD)v8 )
    v6 = v7;
  sub_9F20((__int64)"%s: dbg_plugmod_t deleting...\n", v6);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
    if ( (_QWORD *)dbg != a1 + 15 )
      goto LABEL_3;
  }
  else
  {
LABEL_2:
    if ( (_QWORD *)dbg != a1 + 15 )
      goto LABEL_3;
  }
  dbg = 0;
LABEL_3:
  clr_module_data();
  a1[166] = &off_37610;
  remove_event_listener();
  a1[34] = off_37988;
  a1[142] = &off_376B8;
  free_debug_event();
  v2 = a1[151];
  a1[142] = &unk_37CE0;
  if ( v2 )
  {
    a1[152] = 0;
    qfree();
  }
  if ( a1[144] )
  {
    a1[145] = 0;
    qfree();
  }
  sub_A390((__int64)(a1 + 34));
  v3 = a1[30];
  while ( v3 )
  {
    sub_9D50(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x28u);
  }
  a1[13] = &off_37610;
  *a1 = &off_37638;
  remove_event_listener();
  return v9 - __readfsqword(0x28u);
}

