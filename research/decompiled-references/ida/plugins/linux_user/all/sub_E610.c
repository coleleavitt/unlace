_QWORD *sub_E610()
{
  __int64 v0; // rbx
  const char *v1; // rsi
  int *v2; // rdi
  _QWORD *v3; // rbx
  __int64 (__fastcall *v4)(_QWORD *); // rax
  const char *v6; // rsi
  char *v7; // [rsp+10h] [rbp-50h] BYREF
  __int128 v8; // [rsp+18h] [rbp-48h]
  unsigned __int64 v9; // [rsp+28h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_BC00(v0);
  *(_QWORD *)v0 = &off_44CC8;
  *(_QWORD *)(v0 + 104) = off_44D20;
  sub_14FA0(v0 + 224);
  *(_QWORD *)(v0 + 1712) = v0;
  v1 = (const char *)v0;
  v2 = &dword_48084;
  *(_QWORD *)(v0 + 1704) = 0;
  *(_QWORD *)(v0 + 1696) = &off_44C78;
  *(_BYTE *)(v0 + 201) = 18;
  v3 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v7 = nullptr;
    v8 = 0;
    get_dbctx_id();
    sub_BF00((__int64 *)&v7);
    v1 = s;
    if ( (_QWORD)v8 )
      v1 = v7;
    sub_AF10((__int64)"%s: dbg_plugmod_t created\n", v1);
    v2 = (int *)v7;
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  if ( !(unsigned __int8)sub_189B0(v2, v1) )
    goto LABEL_7;
  if ( (unsigned __int8)netnode_inited()
    && !(unsigned __int8)is_miniidb()
    && !(unsigned __int8)getinf_flag()
    && ((unsigned int)getinf() != 18 || (unsigned int)(*(_DWORD *)(get_ph() + 4) + 1) > 1) )
  {
    sub_189C0(5, 256);
LABEL_7:
    if ( v3 )
    {
      v4 = *(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL);
      if ( v4 == sub_E5D0 )
      {
        sub_E410(v3);
        qfree();
      }
      else
      {
        v4(v3);
      }
    }
    return nullptr;
  }
  hook_event_listener();
  v3[19] |= 0x100000000000uLL;
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v7 = nullptr;
    v8 = 0;
    get_dbctx_id();
    sub_BF00((__int64 *)&v7);
    v6 = s;
    if ( (_QWORD)v8 )
      v6 = v7;
    sub_AF10((__int64)"%s: init_plugin() is successful\n", v6);
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  hook_event_listener();
  dbg = v3 + 15;
  return v3;
}

