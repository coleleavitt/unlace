_QWORD *sub_10500()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rbx
  const char *v2; // rsi
  int v3; // edx
  const char *v5; // rsi
  __int64 (__fastcall *v6)(_QWORD *); // rax
  const char *v7; // [rsp+10h] [rbp-50h] BYREF
  __int128 v8; // [rsp+18h] [rbp-48h]
  unsigned __int64 v9; // [rsp+28h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  v0 = (_QWORD *)qalloc_or_throw();
  sub_F830((__int64)v0);
  *v0 = &off_46210;
  v0[13] = off_46268;
  sub_2A290(v0 + 28, "macosx");
  v0[28] = off_473E0;
  v0[136] = off_47658;
  sub_15140(v0 + 160, v0 + 28, 0);
  v0[191] = v0;
  v0[190] = 0;
  v0[189] = &off_46198;
  v1 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v7 = nullptr;
    v8 = 0;
    get_dbctx_id();
    sub_FAC0((__int64 *)&v7);
    v2 = s;
    if ( (_QWORD)v8 )
      v2 = v7;
    sub_D8B0((__int64)"%s: dbg_plugmod_t created\n", v2);
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  if ( !(unsigned __int8)netnode_inited()
    || (unsigned __int8)is_miniidb()
    || (unsigned __int8)getinf_flag()
    || (unsigned int)getinf() == 25 && (unsigned int)(*(_DWORD *)(v1[1] + 4LL) + 1) <= 1 )
  {
    hook_event_listener();
    v1[19] |= 0x140000000000uLL;
    v3 = *(_DWORD *)debug;
    *((_BYTE *)v1 + 201) = 25;
    if ( (v3 & 0x10000) != 0 )
    {
      v7 = nullptr;
      v8 = 0;
      get_dbctx_id();
      sub_FAC0((__int64 *)&v7);
      v5 = s;
      if ( (_QWORD)v8 )
        v5 = v7;
      sub_D8B0((__int64)"%s: init_plugin() is successful\n", v5);
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
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
      if ( v6 != sub_FE70 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v6)(v1, 256);
        return nullptr;
      }
      sub_FB80(v1);
      qfree();
    }
    return nullptr;
  }
  return v1;
}

