_QWORD *sub_BB00()
{
  __int64 v0; // rbx
  _QWORD *v1; // rbx
  const char *v2; // rsi
  unsigned __int64 v3; // rax
  int v4; // edx
  __int64 (__fastcall *v6)(_QWORD *); // rax
  const char *v7; // rsi
  int v8; // eax
  const char *v9; // [rsp+10h] [rbp-50h] BYREF
  __int128 v10; // [rsp+18h] [rbp-48h]
  unsigned __int64 v11; // [rsp+28h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_AEB0(v0);
  *(_DWORD *)(v0 + 232) = 0;
  *(_QWORD *)v0 = &off_36F98;
  *(_QWORD *)(v0 + 104) = off_36FF0;
  *(_QWORD *)(v0 + 240) = 0;
  *(_QWORD *)(v0 + 248) = v0 + 232;
  *(_QWORD *)(v0 + 256) = v0 + 232;
  *(_QWORD *)(v0 + 264) = 0;
  sub_1C810(v0 + 272, "linux");
  *(_QWORD *)(v0 + 1344) = v0;
  *(_QWORD *)(v0 + 1336) = 0;
  *(_QWORD *)(v0 + 1328) = off_36F20;
  *(_BYTE *)(v0 + 201) = 18;
  v1 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v9 = nullptr;
    v10 = 0;
    get_dbctx_id();
    sub_B140((__int64 *)&v9);
    v2 = s;
    if ( (_QWORD)v10 )
      v2 = v9;
    sub_9F20((__int64)"%s: dbg_plugmod_t created\n", v2);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  if ( !(unsigned __int8)netnode_inited()
    || (unsigned __int8)is_miniidb()
    || (unsigned __int8)getinf_flag()
    || (unsigned int)getinf() == 18 && ((v8 = *(_DWORD *)(get_ph() + 4), v8 == 13) || v8 == -1) )
  {
    hook_event_listener();
    v3 = v1[19] & 0xFFFFFF7FFFFFFFFFLL;
    *((_WORD *)v1 + 101) = 0;
    v4 = *(_DWORD *)debug;
    v1[19] = v3 | 0x140000000000LL;
    if ( (v4 & 0x10000) != 0 )
    {
      v9 = nullptr;
      v10 = 0;
      get_dbctx_id();
      sub_B140((__int64 *)&v9);
      v7 = s;
      if ( (_QWORD)v10 )
        v7 = v9;
      sub_9F20((__int64)"%s: init_plugin() is successful\n", v7);
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
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
      if ( v6 != sub_B470 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v6)(v1, 256);
        return nullptr;
      }
      sub_B200(v1);
      qfree();
    }
    return nullptr;
  }
  return v1;
}

