_QWORD *sub_100E0()
{
  __int64 v0; // rbx
  const char *v1; // rsi
  int *v2; // rdi
  _QWORD *v3; // rbx
  __int64 (__fastcall *v4)(__int64); // rax
  const char *v6; // rsi
  char *v7; // [rsp+10h] [rbp-50h] BYREF
  __int128 v8; // [rsp+18h] [rbp-48h]
  unsigned __int64 v9; // [rsp+28h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_F4A0(v0);
  *(_QWORD *)v0 = &off_68508;
  *(_QWORD *)(v0 + 104) = off_68560;
  sub_381D0(v0 + 224, 1024);
  *(_QWORD *)(v0 + 480) = 0;
  *(_QWORD *)(v0 + 224) = &off_68CC8;
  sub_13070(v0 + 488, v0 + 224);
  sub_381D0(v0 + 2192, 1024);
  *(_DWORD *)(v0 + 2456) = 0;
  v1 = (const char *)v0;
  *(_BYTE *)(v0 + 2520) = 0;
  v2 = &dword_6AA64;
  *(_QWORD *)(v0 + 2464) = 0;
  *(_QWORD *)(v0 + 2192) = &off_68D18;
  *(_QWORD *)(v0 + 2472) = v0 + 2456;
  *(_QWORD *)(v0 + 2480) = v0 + 2456;
  *(_QWORD *)(v0 + 2488) = 0;
  *(_QWORD *)(v0 + 2496) = 0;
  *(_QWORD *)(v0 + 2528) = 0;
  *(_QWORD *)(v0 + 2544) = 0;
  *(_QWORD *)(v0 + 2536) = &off_684B8;
  *(_QWORD *)(v0 + 2552) = v0;
  *(_OWORD *)(v0 + 2504) = 0;
  v3 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v7 = nullptr;
    v8 = 0;
    get_dbctx_id();
    sub_F710((__int64 *)&v7);
    v1 = s;
    if ( (_QWORD)v8 )
      v1 = v7;
    sub_D8A0((__int64)"%s: dbg_plugmod_t created\n", v1);
    v2 = (int *)v7;
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  if ( (unsigned __int8)sub_144E0(v2, v1, 0.0)
    && ((unsigned __int8)netnode_inited() && !(unsigned __int8)is_miniidb() && !(unsigned __int8)getinf_flag()
     || (v3[19] & 1) != 0) )
  {
    hook_event_listener();
    v3[19] |= 0x40000000000uLL;
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
    {
      v7 = nullptr;
      v8 = 0;
      get_dbctx_id();
      sub_F710((__int64 *)&v7);
      v6 = s;
      if ( (_QWORD)v8 )
        v6 = v7;
      sub_D8A0((__int64)"%s: init_plugin() is successful\n", v6);
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree();
      }
    }
    hook_event_listener();
    dbg = v3 + 15;
  }
  else
  {
    if ( v3 )
    {
      v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 16LL);
      if ( v4 != sub_FA10 )
      {
        v4((__int64)v3);
        return nullptr;
      }
      sub_F7D0((__int64)v3);
      qfree();
    }
    return nullptr;
  }
  return v3;
}

