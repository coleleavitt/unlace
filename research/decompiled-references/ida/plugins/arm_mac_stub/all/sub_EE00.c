unsigned __int64 __fastcall sub_EE00(_QWORD *a1)
{
  __int64 v2; // rdi
  void **v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r15
  void *v6; // rdi
  const char *v8; // rsi
  const char *v9; // [rsp+0h] [rbp-50h] BYREF
  __int128 v10; // [rsp+8h] [rbp-48h]
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  *a1 = &off_45458;
  a1[13] = off_454B0;
  if ( (debug & 0x10000) != 0 )
  {
    v9 = nullptr;
    v10 = 0;
    get_dbctx_id();
    sub_ED40((__int64 *)&v9);
    v8 = s;
    if ( (_QWORD)v10 )
      v8 = v9;
    sub_C7B0((__int64)"%s: dbg_plugmod_t deleting...\n", v8);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  if ( byte_48828 && (unsigned __int8)netnode_inited() )
  {
    sub_C680();
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
  a1[198] = &off_46310;
  remove_event_listener();
  a1[195] = &off_46310;
  remove_event_listener();
  v2 = a1[192];
  a1[142] = off_46658;
  a1[34] = off_463E0;
  a1[166] = &off_45DE0;
  if ( v2 )
  {
    a1[193] = 0;
    qfree();
  }
  if ( a1[187] )
  {
    a1[188] = 0;
    qfree();
  }
  v3 = (void **)a1[172];
  a1[166] = &off_45D58;
  sub_BE30(v3);
  a1[34] = off_46980;
  a1[142] = &off_466B0;
  free_debug_event();
  v4 = a1[151];
  a1[142] = &unk_46CD8;
  if ( v4 )
  {
    a1[152] = 0;
    qfree();
  }
  if ( a1[144] )
  {
    a1[145] = 0;
    qfree();
  }
  sub_DAE0((__int64)(a1 + 34));
  v5 = a1[30];
  while ( v5 )
  {
    sub_C450(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  a1[13] = &off_46310;
  *a1 = &off_46338;
  remove_event_listener();
  return v11 - __readfsqword(0x28u);
}

