unsigned __int64 __fastcall sub_B0B0(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rbx
  void *v8; // rdi
  const char *v10; // rsi
  const char *v11; // [rsp+0h] [rbp-50h] BYREF
  __int128 v12; // [rsp+8h] [rbp-48h]
  unsigned __int64 v13; // [rsp+18h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  *a1 = &off_1FEC0;
  v2 = *(_DWORD *)debug;
  a1[13] = off_1FF18;
  if ( (v2 & 0x10000) != 0 )
  {
    v11 = nullptr;
    v12 = 0;
    get_dbctx_id();
    sub_AFF0((__int64 *)&v11);
    v10 = s;
    if ( (_QWORD)v12 )
      v10 = v11;
    sub_9D40((__int64)"%s: dbg_plugmod_t deleting...\n", v10);
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  sub_117C0();
  if ( (_QWORD *)dbg == a1 + 15 )
    dbg = 0;
  clr_module_data();
  v3 = a1[150];
  a1[28] = off_20820;
  while ( v3 )
  {
    sub_9B70(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x30u);
  }
  v5 = a1[144];
  while ( v5 )
  {
    sub_9B70(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  v7 = a1[138];
  while ( v7 )
  {
    sub_9B70(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x30u);
  }
  sub_9FB0((__int64)(a1 + 28));
  *a1 = &off_207A0;
  a1[13] = &off_20778;
  remove_event_listener();
  return v13 - __readfsqword(0x28u);
}

