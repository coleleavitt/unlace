__int64 __fastcall sub_87530(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  const char *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // r9
  __int64 v16; // rax
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // rbp
  void *v20; // rax
  _BYTE v21[32]; // [rsp+0h] [rbp-22B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-2298h]
  __int64 v23; // [rsp+28h] [rbp-2290h]
  __int64 v24; // [rsp+70h] [rbp-2248h]
  __int64 v25; // [rsp+78h] [rbp-2240h]
  __int64 v26; // [rsp+120h] [rbp-2198h]
  __int64 v27; // [rsp+128h] [rbp-2190h]
  __int64 v28; // [rsp+240h] [rbp-2078h]
  __int64 v29; // [rsp+248h] [rbp-2070h]
  __int64 v30; // [rsp+258h] [rbp-2060h]
  char v31[4096]; // [rsp+270h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1270h] [rbp-1048h] BYREF
  unsigned __int64 v33; // [rsp+2278h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v1 = *(__int64 **)(a1 + 136);
  v2 = *v1;
  if ( !*v1 || *(_DWORD *)(v2 + 8) != 1 )
  {
    sub_1D740((__int64)"Input source is not local file.\n");
    return 0;
  }
  v3 = src;
  if ( *(_QWORD *)(v2 + 24) )
    v3 = *(const char **)(v2 + 16);
  v4 = v1[24];
  if ( !v4 )
    return 0;
  if ( (unsigned __int8)qisabspath(v1[24]) )
  {
    qstrncpy(s, v4, 4096);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)qisabspath(v3) )
  {
    if ( !qmake_full_path(s, 4096, v3) || !(unsigned __int8)qdirname(v31, 4096, s) )
      return 0;
    goto LABEL_35;
  }
  if ( !(unsigned __int8)qdirname(v31, 4096, v3) )
    return 0;
LABEL_35:
  qmakepath(s, 4096, v31, v1[24], 0, v15);
LABEL_8:
  v5 = open_linput(s, 0);
  v6 = v5;
  if ( !v5 )
  {
    sub_1D740((__int64)"Cannot open file: %s.\n", s);
    return 0;
  }
  sub_17FA0((__int64)v21, v5, 0);
  sub_18160((__int64)v21, nullptr);
  if ( (unsigned __int8)sub_18180((__int64)v21) && (unsigned __int8)sub_186E0((__int64)v21) )
  {
    if ( (unsigned __int8)sub_20BC0((__int64)v21) )
    {
      v16 = operator new(0x28u);
      *(_DWORD *)(v16 + 8) = 1;
      v7 = v16;
      *(_QWORD *)v16 = &off_C9478;
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      v17 = strlen(s);
      v18 = v17 + 1;
      v19 = v17;
      v20 = (void *)qvector_reserve(v7 + 16, 0, v17 + 1, 1);
      *(_QWORD *)(v7 + 16) = v20;
      *(_QWORD *)(v7 + 24) = v18;
      memmove(v20, s, v19);
      *(_BYTE *)(*(_QWORD *)(v7 + 16) + v19) = 0;
      goto LABEL_12;
    }
    sub_1D740((__int64)"Failed to read ELF sections from: %s\n", s);
  }
  else
  {
    sub_1D740((__int64)"Failed to read ELF ident/header from: %s\n", s);
  }
  v7 = 0;
LABEL_12:
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  v8 = v26;
  if ( v26 )
  {
    v9 = v27;
    if ( v27 )
    {
      v10 = 0;
      do
      {
        v11 = (__int64 *)(v8 + 96 * v10);
        v12 = v11[3];
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v13);
        }
        ++v10;
        v8 = v26;
      }
      while ( v9 != v10 );
    }
    v27 = 0;
    qfree(v8);
  }
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  close_linput(v6);
  return v7;
}
