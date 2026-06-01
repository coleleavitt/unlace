_QWORD *sub_B320()
{
  char *v0; // rbx
  const char *v1; // rsi
  int *v2; // rdi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(_QWORD *); // rax
  const char *v8; // rsi
  char *v9; // [rsp+10h] [rbp-50h] BYREF
  __int128 v10; // [rsp+18h] [rbp-48h]
  unsigned __int64 v11; // [rsp+28h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v0 = (char *)qalloc_or_throw();
  sub_AA10((__int64)v0);
  *(_QWORD *)v0 = &off_1FEC0;
  *((_QWORD *)v0 + 13) = off_1FF18;
  sub_10570(v0 + 224);
  v1 = v0;
  v2 = &dword_25004;
  v3 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v9 = nullptr;
    v10 = 0;
    get_dbctx_id();
    sub_AFF0((__int64 *)&v9);
    v1 = s;
    if ( (_QWORD)v10 )
      v1 = v9;
    sub_9D40((__int64)"%s: dbg_plugmod_t created\n", v1);
    v2 = (int *)v9;
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  v4 = (unsigned int)(*(_DWORD *)(v3[1] + 4LL) + 1);
  if ( (unsigned int)v4 <= 0x10 && (v5 = 90115, _bittest64(&v5, v4)) && (unsigned __int8)sub_117B0(v2, v1) )
  {
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
    {
      v9 = nullptr;
      v10 = 0;
      get_dbctx_id();
      sub_AFF0((__int64 *)&v9);
      v8 = s;
      if ( (_QWORD)v10 )
        v8 = v9;
      sub_9D40((__int64)"%s: init_plugin() is successful\n", v8);
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
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
      v6 = *(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL);
      if ( v6 != sub_B2E0 )
      {
        ((void (__fastcall *)(_QWORD *, const char *))v6)(v3, v1);
        return nullptr;
      }
      sub_B0B0(v3);
      qfree();
    }
    return nullptr;
  }
  return v3;
}

