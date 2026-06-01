_QWORD *sub_D860()
{
  __int64 v0; // rbx
  _QWORD *v1; // rbx
  const char *v2; // rsi
  __int64 (__fastcall *v4)(_QWORD *); // rax
  const char *v5; // rsi
  const char *v6; // [rsp+10h] [rbp-50h] BYREF
  __int128 v7; // [rsp+18h] [rbp-48h]
  unsigned __int64 v8; // [rsp+28h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_CA80(v0);
  *(_QWORD *)v0 = &off_37A70;
  *(_QWORD *)(v0 + 104) = off_37AC8;
  sub_1E2D0(v0 + 224, "linux");
  *(_QWORD *)(v0 + 1280) = 0;
  *(_QWORD *)(v0 + 224) = off_38378;
  *(_QWORD *)(v0 + 1088) = off_385F0;
  *(_BYTE *)(v0 + 1304) = 0;
  *(_QWORD *)(v0 + 1320) = 0;
  *(_QWORD *)(v0 + 1312) = &off_379F8;
  *(_QWORD *)(v0 + 1328) = v0;
  *(_BYTE *)(v0 + 201) = 18;
  *(_OWORD *)(v0 + 1288) = 0;
  v1 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v6 = nullptr;
    v7 = 0;
    get_dbctx_id();
    sub_CD10((__int64 *)&v6);
    v2 = s;
    if ( (_QWORD)v7 )
      v2 = v6;
    sub_B0F0((__int64)"%s: dbg_plugmod_t created\n", v2);
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  if ( !(unsigned __int8)netnode_inited()
    || (unsigned __int8)is_miniidb()
    || (unsigned __int8)getinf_flag()
    || (unsigned int)getinf() == 18 && (unsigned int)(*(_DWORD *)(get_ph() + 4) + 1) <= 1 )
  {
    hook_event_listener();
    v1[19] |= 0x140000000000uLL;
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
    {
      v6 = nullptr;
      v7 = 0;
      get_dbctx_id();
      sub_CD10((__int64 *)&v6);
      v5 = s;
      if ( (_QWORD)v7 )
        v5 = v6;
      sub_B0F0((__int64)"%s: init_plugin() is successful\n", v5);
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
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
      v4 = *(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL);
      if ( v4 != sub_D040 )
      {
        ((void (__fastcall *)(_QWORD *, __int64, double))v4)(v1, 256, 0.0);
        return nullptr;
      }
      sub_CDD0(v1);
      qfree();
    }
    return nullptr;
  }
  return v1;
}

