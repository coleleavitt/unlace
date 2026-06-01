__int64 sub_160E0()
{
  __int64 v0; // rbx
  const char *v1; // rsi
  int *v2; // rdi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // edx
  const char *v7; // rsi
  char *v8; // [rsp+10h] [rbp-50h] BYREF
  __int128 v9; // [rsp+18h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_14E80(v0);
  *(_DWORD *)(v0 + 232) = 0;
  *(_QWORD *)v0 = &off_8B5D0;
  *(_QWORD *)(v0 + 104) = off_8B628;
  *(_QWORD *)(v0 + 240) = 0;
  *(_QWORD *)(v0 + 248) = v0 + 232;
  *(_QWORD *)(v0 + 256) = v0 + 232;
  *(_QWORD *)(v0 + 264) = 0;
  sub_1CBE0(v0 + 272);
  sub_59150(v0 + 2312, 1024);
  *(_QWORD *)(v0 + 2568) = 0;
  *(_QWORD *)(v0 + 2312) = &off_8C9A8;
  sub_59150(v0 + 2576, 1024);
  *(_DWORD *)(v0 + 2840) = 0;
  v1 = (const char *)v0;
  *(_BYTE *)(v0 + 2904) = 0;
  v2 = &dword_8F9A4;
  *(_QWORD *)(v0 + 2848) = 0;
  *(_QWORD *)(v0 + 2576) = &off_8C9F8;
  *(_QWORD *)(v0 + 2856) = v0 + 2840;
  *(_QWORD *)(v0 + 2864) = v0 + 2840;
  *(_QWORD *)(v0 + 2920) = &off_8B558;
  *(_QWORD *)(v0 + 2872) = 0;
  *(_QWORD *)(v0 + 2880) = 0;
  *(_QWORD *)(v0 + 2912) = 0;
  *(_QWORD *)(v0 + 2928) = 0;
  *(_QWORD *)(v0 + 2936) = v0;
  *(_QWORD *)(v0 + 2952) = 0;
  *(_QWORD *)(v0 + 2944) = off_8B580;
  *(_QWORD *)(v0 + 2960) = v0;
  *(_OWORD *)(v0 + 2888) = 0;
  v3 = set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v9 = 0;
    v8 = nullptr;
    get_dbctx_id();
    sub_15620((__int64 *)&v8);
    v1 = s;
    if ( (_QWORD)v9 )
      v1 = v8;
    sub_12E30((__int64)"%s: dbg_plugmod_t created\n", v1);
    v2 = (int *)v8;
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  *(_QWORD *)(v3 + 152) &= ~0x8000000000uLL;
  if ( (unsigned __int8)sub_1E5A0(v2, v1, 0.0)
    && ((unsigned __int8)netnode_inited() && !(unsigned __int8)is_miniidb() && !(unsigned __int8)getinf_flag()
     || (*(_BYTE *)(v3 + 152) & 1) != 0) )
  {
    hook_event_listener();
    hook_event_listener();
    *(_QWORD *)(v3 + 152) |= 0x140000000000uLL;
    v5 = *(_DWORD *)debug;
    *(_BYTE *)(v3 + 201) = 25;
    if ( (v5 & 0x10000) != 0 )
    {
      v8 = nullptr;
      v9 = 0;
      get_dbctx_id();
      sub_15620((__int64 *)&v8);
      v7 = s;
      if ( (_QWORD)v9 )
        v7 = v8;
      sub_12E30((__int64)"%s: init_plugin() is successful\n", v7);
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
    hook_event_listener();
    dbg = v3 + 120;
  }
  else
  {
    if ( v3 )
    {
      v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL);
      if ( v4 != sub_15A50 )
      {
        v4(v3);
        return 0;
      }
      sub_156E0(v3);
      qfree();
    }
    return 0;
  }
  return v3;
}

