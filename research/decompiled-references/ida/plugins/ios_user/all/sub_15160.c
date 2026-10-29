__int64 sub_15160()
{
  __int64 module_data; // rax
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int16 v5; // dx
  const char *v6; // rdi
  size_t v7; // rax
  size_t v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // rax
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  struct _Unwind_Exception *v18; // rax
  struct _Unwind_Exception *v19; // rbx
  __int16 v20; // [rsp+24h] [rbp-108Ch] BYREF
  __int16 v21; // [rsp+26h] [rbp-108Ah] BYREF
  int v22; // [rsp+28h] [rbp-1088h] BYREF
  int v23; // [rsp+2Ch] [rbp-1084h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-1080h]
  __int128 v25; // [rsp+38h] [rbp-1078h]
  __int64 v26; // [rsp+50h] [rbp-1060h] BYREF
  __int128 v27; // [rsp+58h] [rbp-1058h]
  char s[4104]; // [rsp+70h] [rbp-1040h] BYREF
  unsigned __int64 v29; // [rsp+1078h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  module_data = get_module_data();
  if ( !module_data )
  {
    sub_11FC0();
    v19 = v18;
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    _Unwind_Resume(v19);
  }
  v1 = module_data;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v2 == sub_11DE0 )
    v3 = v1 + 272;
  else
    v3 = v2(v1);
  v25 = 0;
  v4 = (_QWORD *)qvector_reserve();
  v24 = v4;
  *(_QWORD *)&v25 = 792;
  *v4 = 0x5B323235313A3040LL;
  *(_QWORD *)((char *)v4 + 783) = 0xA3E3E38433A7966LL;
  qmemcpy(
    (void *)((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_733C8 - ((char *)v4 - ((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v4 - (((_DWORD)v4 + 8) & 0xFFFFFFF8) + 791) >> 3));
  *((_BYTE *)v24 + 791) = 0;
  v22 = *(_DWORD *)(v3 + 1176);
  v20 = *(unsigned __int8 *)(v3 + 2032);
  v5 = *(unsigned __int8 *)(v3 + 2033);
  memset(s, 0, 0x1000u);
  v21 = v5;
  qstrncpy();
  v23 = 0;
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    v6 = ::s;
    if ( (_QWORD)v25 )
      v6 = (const char *)v24;
    if ( !(unsigned int)sub_13DB0(
                          (__int64)v6,
                          sub_11F40,
                          &qword_8FA50,
                          &v22,
                          &qword_8F6A8,
                          v3 + 912,
                          v3 + 2008,
                          s,
                          &v26,
                          &v23,
                          &v20,
                          &v21) )
    {
      v9 = 0;
      goto LABEL_14;
    }
    if ( *(__int64 *)(v3 + 912) >= 0 )
      break;
    sub_130A0((__int64)"AUTOHIDE NONE\nWrong timeout value");
  }
  if ( *(_DWORD *)(v3 + 1176) != v22 )
  {
    *(_DWORD *)(v3 + 1176) = v22;
    sub_54870(v3);
  }
  v7 = strlen(s);
  v8 = v7;
  if ( v7 )
  {
    v15 = *(void **)(v3 + 1936);
    v16 = v7 + 1;
    if ( *(_QWORD *)(v3 + 1952) < v7 + 1 )
    {
      v17 = qvector_reserve();
      *(_QWORD *)(v3 + 1936) = v17;
      v15 = (void *)v17;
    }
    *(_QWORD *)(v3 + 1944) = v16;
    memmove(v15, s, v8);
    *(_BYTE *)(*(_QWORD *)(v3 + 1936) + v8) = 0;
  }
  else
  {
    *(_QWORD *)(v3 + 1944) = 0;
  }
  v9 = 1;
  *(_BYTE *)(v3 + 2033) = v21 != 0;
LABEL_14:
  v10 = v26;
  if ( v26 )
  {
    v11 = v27;
    if ( (_QWORD)v27 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v10 + 24 * v12);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = v26;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v9;
}

