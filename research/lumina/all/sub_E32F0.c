__int64 __fastcall sub_E32F0(_BYTE *a1, char *a2, int a3, unsigned __int8 a4, char a5)
{
  int v5; // r12d
  char *v8; // r8
  unsigned __int8 v9; // r10
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  int v13; // r9d
  char *v14; // r8
  unsigned __int8 v15; // r10
  int v16; // eax
  __int64 v17; // r8
  bool v18; // al
  __int64 *v20; // rax
  unsigned __int8 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax

  v5 = 0;
  if ( a2 )
    v5 = strlen(a2) & 0x3FFFFFFF;
  v8 = (char *)sub_C2AB0((__int64)(a1 + 584), (unsigned __int8 *)a2, nullptr)[2];
  if ( v8 )
  {
    v9 = a4;
    v10 = 0;
    do
    {
      v11 = sub_C4960(v8, a3, v9);
      if ( v11 > v13 )
      {
        v13 = v11;
        v10 = v12;
      }
      v8 = *(char **)(v12 + 16);
    }
    while ( v8 );
    if ( a5 )
      goto LABEL_16;
    if ( v10 && (a1[44] & 2) == 0 )
      goto LABEL_20;
LABEL_11:
    v14 = (char *)sub_C49D0((v5 + (unsigned int)byte_1BF000[(unsigned __int8)*a2]) % 0x17, (unsigned __int8 *)a2);
    if ( !v14 )
    {
      v18 = 1;
      goto LABEL_17;
    }
    v15 = a4;
    do
    {
      v16 = sub_C4960(v14, a3, v15);
      if ( v16 > v13 )
      {
        v13 = v16;
        v10 = v17;
      }
      v14 = *(char **)(v17 + 16);
    }
    while ( v14 );
LABEL_16:
    v18 = v13 <= 5;
LABEL_17:
    if ( (a5 & 1) == 0 || !v18 )
    {
      if ( v10 )
        goto LABEL_20;
      return 0;
    }
    goto LABEL_23;
  }
  if ( !a5 )
  {
    v10 = 0;
    goto LABEL_11;
  }
LABEL_23:
  v20 = sub_DC1C0((__int64)a1, v5 + 73LL);
  v10 = (__int64)v20;
  if ( !v20 )
    return 0;
  *(_BYTE *)v20 = a3;
  v20[7] = (__int64)(v20 + 9);
  *((_DWORD *)v20 + 1) = a4;
  v21 = (unsigned __int8 *)memcpy(v20 + 9, a2, v5 + 1);
  v22 = *(unsigned __int8 *)(v10 + 72);
  if ( (_BYTE)v22 )
  {
    do
    {
      *v21++ = byte_1BF000[v22];
      v22 = *v21;
    }
    while ( (_BYTE)v22 );
    v21 = *(unsigned __int8 **)(v10 + 56);
  }
  v23 = sub_D1F90((__int64)(a1 + 584), v21, v10);
  if ( v10 == v23 )
  {
    sub_C9250((__int64)a1, (_QWORD *)v10);
    if ( !a1[103] && !a1[104] )
    {
      v10 = 0;
      sub_DBE60((__int64)a1);
      return v10;
    }
    return 0;
  }
  *(_QWORD *)(v10 + 16) = v23;
LABEL_20:
  if ( !*(_QWORD *)(v10 + 24) && (a5 & 1) == 0 )
    return 0;
  return v10;
}
