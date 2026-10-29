_QWORD *sub_123B0()
{
  char *v0; // rbx
  const char *v1; // rsi
  _QWORD *v2; // rbx
  __int64 (__fastcall *v3)(_QWORD *); // rax
  const char *v5; // rsi
  const char *v6; // [rsp+10h] [rbp-50h] BYREF
  __int128 v7; // [rsp+18h] [rbp-48h]
  unsigned __int64 v8; // [rsp+28h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  v0 = (char *)qalloc_or_throw();
  sub_F150((__int64)v0);
  *(_QWORD *)v0 = &off_70E18;
  *((_QWORD *)v0 + 13) = off_70E70;
  sub_1B520(v0 + 224);
  v1 = v0;
  v2 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v6 = nullptr;
    v7 = 0;
    get_dbctx_id();
    sub_F490((__int64 *)&v6);
    v1 = s1;
    if ( (_QWORD)v7 )
      v1 = v6;
    sub_E960((__int64)"%s: dbg_plugmod_t created\n", v1);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  if ( (unsigned __int8)netnode_inited() && (unsigned int)(*(_DWORD *)(v2[1] + 4LL) + 1) > 1 )
  {
    if ( v2 )
    {
      v3 = *(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL);
      if ( v3 != sub_12370 )
      {
        ((void (__fastcall *)(_QWORD *, const char *))v3)(v2, v1);
        return nullptr;
      }
      sub_121C0(v2);
      qfree();
    }
    return nullptr;
  }
  else
  {
    v2[19] |= 0x500000000000uLL;
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
    {
      v6 = nullptr;
      v7 = 0;
      get_dbctx_id();
      sub_F490((__int64 *)&v6);
      v5 = s1;
      if ( (_QWORD)v7 )
        v5 = v6;
      sub_E960((__int64)"%s: init_plugin() is successful\n", v5);
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
    }
    hook_event_listener();
    dbg = v2 + 15;
  }
  return v2;
}

