unsigned __int64 __fastcall sub_156E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  void **v5; // rdi
  __int64 v6; // r15
  void *v7; // rdi
  const char *v9; // rsi
  const char *v10; // [rsp+0h] [rbp-50h] BYREF
  __int128 v11; // [rsp+8h] [rbp-48h]
  unsigned __int64 v12; // [rsp+18h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_8B5D0;
  *(_QWORD *)(a1 + 104) = off_8B628;
  if ( (debug & 0x10000) != 0 )
  {
    v10 = nullptr;
    v11 = 0;
    get_dbctx_id();
    sub_15620((__int64 *)&v10);
    v9 = s;
    if ( (_QWORD)v11 )
      v9 = v10;
    sub_12E30((__int64)"%s: dbg_plugmod_t deleting...\n", v9);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  sub_1E5E0();
  if ( dbg == a1 + 120 )
    dbg = 0;
  clr_module_data();
  *(_QWORD *)(a1 + 2944) = &off_8CF10;
  remove_event_listener();
  *(_QWORD *)(a1 + 2920) = &off_8CF10;
  remove_event_listener();
  v2 = *(_QWORD *)(a1 + 2880);
  *(_QWORD *)(a1 + 2576) = &off_8C9F8;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2888) = 0;
    qfree();
  }
  sub_12180(*(void **)(a1 + 2848));
  sub_59060(a1 + 2576);
  *(_QWORD *)(a1 + 2312) = &off_8C9A8;
  sub_591C0(a1 + 2312);
  sub_59060(a1 + 2312);
  v3 = *(_QWORD *)(a1 + 2280);
  *(_QWORD *)(a1 + 272) = off_8CFB8;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 2288) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 2256) )
  {
    *(_QWORD *)(a1 + 2264) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 2232) )
  {
    *(_QWORD *)(a1 + 2240) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 2208) )
  {
    *(_QWORD *)(a1 + 2216) = 0;
    qfree();
  }
  v4 = *(_QWORD *)(a1 + 2184);
  *(_QWORD *)(a1 + 1976) = &off_8C258;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 2192) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 2144) )
  {
    *(_QWORD *)(a1 + 2152) = 0;
    qfree();
  }
  v5 = *(void ***)(a1 + 2024);
  *(_QWORD *)(a1 + 1976) = &off_8C1D0;
  sub_122C0(v5);
  *(_QWORD *)(a1 + 272) = off_8D350;
  sub_49E50(a1 + 272);
  v6 = *(_QWORD *)(a1 + 240);
  while ( v6 )
  {
    sub_12C60(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x28u);
  }
  *(_QWORD *)(a1 + 104) = &off_8CF10;
  *(_QWORD *)a1 = &off_8CF38;
  remove_event_listener();
  return v12 - __readfsqword(0x28u);
}

