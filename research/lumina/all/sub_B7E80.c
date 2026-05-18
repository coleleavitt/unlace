__int64 __fastcall sub_B7E80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int8 *v7; // r15
  char *v8; // rbx
  int v9; // edi
  char *v10; // r15
  __int16 *v11; // rbx
  int v12; // edi
  __int64 i; // rbx
  size_t v14; // r14
  __int64 v15; // rdx
  unsigned __int8 *v16; // rsi
  const char *v17; // r15
  void *ptr; // [rsp+10h] [rbp-1478h] BYREF
  __int128 v20; // [rsp+18h] [rbp-1470h]
  _BYTE v21[16]; // [rsp+30h] [rbp-1458h] BYREF
  __int16 v22; // [rsp+40h] [rbp-1448h] BYREF
  _BYTE v23[1022]; // [rsp+42h] [rbp-1446h] BYREF
  _BYTE v24[3074]; // [rsp+440h] [rbp-1048h] BYREF
  char v25; // [rsp+1042h] [rbp-446h] BYREF
  unsigned __int64 v26; // [rsp+1448h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = operator new(0x50u);
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 72) = -1;
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  v5 = sub_185130(off_239C00, 6, v4, 1);
  v6 = sub_464B0(v24, 4096);
  if ( v6 )
  {
    v7 = (unsigned __int8 *)v6;
    v22 = 24415;
    v8 = v23;
    do
    {
      v9 = *v7;
      if ( !(_BYTE)v9 )
        break;
      ++v8;
      ++v7;
      *(v8 - 1) = toupper(v9);
    }
    while ( v8 != &v25 );
    strcpy(v8, "__");
    if ( (word_2439A4 & 0x80u) != 0 )
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"cfg: define macro %s\n", (const char *)&v22);
    sub_180010(v5, &v22, "", 0, 0);
    sub_2FF70(1, v21, 16);
    v10 = v23;
    v11 = (__int16 *)v21;
    v22 = 24415;
    do
    {
      v12 = *(unsigned __int8 *)v11;
      v11 = (__int16 *)((char *)v11 + 1);
      if ( !(_BYTE)v12 )
        break;
      *v10++ = toupper(v12);
    }
    while ( v11 != &v22 );
    strcpy(v10, "__");
    if ( (word_2439A4 & 0x80u) != 0 )
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"cfg: define macro %s\n", (const char *)&v22);
    sub_180010(v5, &v22, "", 0, 0);
  }
  if ( a2 )
  {
    for ( i = 0; i != a2; ++i )
    {
      v17 = *(const char **)(a1 + 8 * i);
      ptr = nullptr;
      v20 = 0;
      if ( !v17
        || (v14 = strlen(v17),
            ptr = (void *)sub_1987B0(&ptr, 0, v14 + 1, 1),
            *(_QWORD *)&v20 = v14 + 1,
            memmove(ptr, v17, v14),
            *((_BYTE *)ptr + v14) = 0,
            v15 = v20,
            v16 = (unsigned __int8 *)ptr,
            !(_QWORD)v20) )
      {
        v15 = 1;
        v16 = (unsigned __int8 *)s1;
      }
      sub_B7DA0(v5, v16, v15);
      if ( ptr )
      {
        *(_QWORD *)&v20 = 0;
        j__free(ptr);
      }
    }
  }
  return v5;
}
