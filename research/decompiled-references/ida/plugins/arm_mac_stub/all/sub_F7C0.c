_QWORD *sub_F7C0()
{
  __int64 v0; // rbx
  _QWORD *v1; // rbx
  const char *v2; // rsi
  int v3; // edx
  const char *v5; // rsi
  __int64 (__fastcall *v6)(_QWORD *); // rax
  int v7; // eax
  const char *v8; // [rsp+10h] [rbp-50h] BYREF
  __int128 v9; // [rsp+18h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_EAB0(v0);
  *(_DWORD *)(v0 + 232) = 0;
  *(_QWORD *)v0 = &off_45458;
  *(_QWORD *)(v0 + 104) = off_454B0;
  *(_QWORD *)(v0 + 240) = 0;
  *(_QWORD *)(v0 + 248) = v0 + 232;
  *(_QWORD *)(v0 + 256) = v0 + 232;
  *(_QWORD *)(v0 + 264) = 0;
  sub_29590(v0 + 272, "macosx");
  *(_QWORD *)(v0 + 272) = off_463E0;
  *(_QWORD *)(v0 + 1136) = off_46658;
  sub_14440(v0 + 1328, v0 + 272, 13);
  *(_QWORD *)(v0 + 1568) = 0;
  *(_QWORD *)(v0 + 1560) = &off_453E0;
  *(_QWORD *)(v0 + 1576) = v0;
  *(_QWORD *)(v0 + 1592) = 0;
  *(_QWORD *)(v0 + 1584) = off_453B8;
  *(_QWORD *)(v0 + 1600) = v0;
  v1 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v8 = nullptr;
    v9 = 0;
    get_dbctx_id();
    sub_ED40((__int64 *)&v8);
    v2 = s;
    if ( (_QWORD)v9 )
      v2 = v8;
    sub_C7B0((__int64)"%s: dbg_plugmod_t created\n", v2);
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  if ( !(unsigned __int8)netnode_inited()
    || (unsigned __int8)is_miniidb()
    || (unsigned __int8)getinf_flag()
    || (unsigned int)getinf() == 25 && ((v7 = *(_DWORD *)(v1[1] + 4LL), v7 == 13) || v7 == -1) )
  {
    hook_event_listener();
    hook_event_listener();
    v1[19] |= 0x140000000000uLL;
    v3 = *(_DWORD *)debug;
    *((_BYTE *)v1 + 201) = 25;
    if ( (v3 & 0x10000) != 0 )
    {
      v8 = nullptr;
      v9 = 0;
      get_dbctx_id();
      sub_ED40((__int64 *)&v8);
      v5 = s;
      if ( (_QWORD)v9 )
        v5 = v8;
      sub_C7B0((__int64)"%s: init_plugin() is successful\n", v5);
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
    hook_event_listener();
    dbg = v1 + 15;
  }
  else
  {
    if ( v1 )
    {
      v6 = *(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL);
      if ( v6 != sub_F130 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v6)(v1, 256);
        return nullptr;
      }
      sub_EE00(v1);
      qfree();
    }
    return nullptr;
  }
  return v1;
}

