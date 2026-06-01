_QWORD *sub_144C0()
{
  char *v0; // rbx
  const char *v1; // rsi
  _QWORD *v2; // rbx
  int v3; // eax
  __int64 (__fastcall *v4)(_QWORD *); // rax
  const char *v6; // rsi
  const char *v7; // [rsp+10h] [rbp-50h] BYREF
  __int128 v8; // [rsp+18h] [rbp-48h]
  unsigned __int64 v9; // [rsp+28h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  v0 = (char *)qalloc_or_throw();
  sub_138B0((__int64)v0);
  *(_QWORD *)v0 = &off_7D2C8;
  *((_QWORD *)v0 + 13) = off_7D320;
  sub_1E9B0(v0 + 224);
  *((_QWORD *)v0 + 264) = v0;
  v1 = v0;
  *((_QWORD *)v0 + 263) = 0;
  *((_QWORD *)v0 + 262) = &off_7D278;
  v2 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v7 = nullptr;
    v8 = 0;
    get_dbctx_id();
    sub_13B20((__int64 *)&v7);
    v1 = nptr;
    if ( (_QWORD)v8 )
      v1 = v7;
    sub_111A0((__int64)"%s: dbg_plugmod_t created\n", v1);
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  v3 = *(_DWORD *)(v2[1] + 4LL);
  if ( v3 == 60 || v3 == -1 )
  {
    *((_BYTE *)v2 + 200) = 0;
    if ( (unsigned __int8)netnode_inited() )
      sub_F870(nullptr);
    v2[19] |= 0x80000000000uLL;
    hook_event_listener();
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
    {
      v7 = nullptr;
      v8 = 0;
      get_dbctx_id();
      sub_13B20((__int64 *)&v7);
      v6 = nptr;
      if ( (_QWORD)v8 )
        v6 = v7;
      sub_111A0((__int64)"%s: init_plugin() is successful\n", v6);
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree();
      }
    }
    hook_event_listener();
    dbg = v2 + 15;
  }
  else
  {
    if ( v2 )
    {
      v4 = *(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL);
      if ( v4 == sub_13DD0 )
      {
        sub_13BE0(v2);
        qfree();
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, const char *))v4)(v2, v1);
      }
    }
    return nullptr;
  }
  return v2;
}

