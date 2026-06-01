_QWORD *sub_ED50()
{
  char *v0; // rbx
  const char *v1; // rsi
  int *v2; // rdi
  _QWORD *v3; // rbx
  __int64 (__fastcall *v4)(_QWORD *); // rax
  int v5; // edx
  const char *v7; // rsi
  char *v8; // [rsp+10h] [rbp-50h] BYREF
  __int128 v9; // [rsp+18h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  v0 = (char *)qalloc_or_throw();
  sub_E170((__int64)v0);
  *(_QWORD *)v0 = &off_38928;
  *((_QWORD *)v0 + 13) = off_38980;
  sub_13630(v0 + 224);
  *((_QWORD *)v0 + 317) = v0;
  v1 = v0;
  v2 = &dword_3C3A4;
  *((_QWORD *)v0 + 316) = 0;
  *((_QWORD *)v0 + 315) = &off_388D8;
  v3 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v8 = nullptr;
    v9 = 0;
    get_dbctx_id();
    sub_E3C0((__int64 *)&v8);
    v1 = s;
    if ( (_QWORD)v9 )
      v1 = v8;
    sub_BC00((__int64)"%s: dbg_plugmod_t created\n", v1);
    v2 = (int *)v8;
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3[1] + 4LL) + 1) <= 1 && (unsigned __int8)sub_13690(v2, v1) )
  {
    hook_event_listener();
    v3[19] |= 0x140000000000uLL;
    v5 = *(_DWORD *)debug;
    *((_BYTE *)v3 + 201) = 18;
    if ( (v5 & 0x10000) != 0 )
    {
      v8 = nullptr;
      v9 = 0;
      get_dbctx_id();
      sub_E3C0((__int64 *)&v8);
      v7 = s;
      if ( (_QWORD)v9 )
        v7 = v8;
      sub_BC00((__int64)"%s: init_plugin() is successful\n", v7);
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
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
      v4 = *(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL);
      if ( v4 != sub_E6C0 )
      {
        ((void (__fastcall *)(_QWORD *, const char *))v4)(v3, v1);
        return nullptr;
      }
      sub_E480(v3);
      qfree();
    }
    return nullptr;
  }
  return v3;
}

