__int64 __fastcall sub_2ACC0(__int64 a1, unsigned __int8 *a2, _DWORD *a3)
{
  _QWORD *v3; // r14
  bool v4; // cc
  __int64 v6; // r12
  unsigned __int8 *i; // rax
  unsigned __int8 *v8; // rbp
  __int64 *v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int8 *v14; // rbp
  int v15; // eax
  int v17; // eax
  _QWORD *v18; // [rsp+28h] [rbp-80h]
  char v19; // [rsp+3Eh] [rbp-6Ah]
  unsigned int v20; // [rsp+40h] [rbp-68h]
  unsigned int v21; // [rsp+44h] [rbp-64h]
  const char *v22; // [rsp+48h] [rbp-60h] BYREF
  int v23; // [rsp+50h] [rbp-58h]
  char v24; // [rsp+54h] [rbp-54h]
  char v25; // [rsp+63h] [rbp-45h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v3 = &unk_71960;
  v4 = *(_DWORD *)(a1 + 24) <= 241;
  v26 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = &unk_718E0;
  v6 = -9218;
  v18 = v3 + 16;
  for ( i = sub_2A250(a2, (const char **)a1, &v22); ; i = sub_2A250(v8, (const char **)a1, &v22) )
  {
    v8 = i;
    v9 = (__int64 *)((char *)a3 + *v3);
    v10 = qsscanf();
    v11 = v20;
    v12 = v21;
    if ( v19 != 104 )
    {
      v11 = v21;
      v12 = v20;
    }
    *v9 = v12 | (v11 << 32);
    if ( v10 != 6 )
      return 2;
    if ( *v8 == 9 )
      break;
    v3 += 2;
    if ( v18 == v3 )
      goto LABEL_16;
LABEL_5:
    ;
  }
  do
  {
    do
      v13 = *++v8;
    while ( (unsigned __int8)v13 > 0xDu );
  }
  while ( _bittest64(&v6, v13) );
  if ( (_BYTE)v13 != 13 )
    goto LABEL_14;
  do
  {
    do
      LOBYTE(v13) = *++v8;
    while ( (_BYTE)v13 == 13 );
LABEL_14:
    ;
  }
  while ( (_BYTE)v13 == 10 );
  v3 += 2;
  if ( v18 != v3 )
    goto LABEL_5;
LABEL_16:
  v14 = sub_2A250(v8, (const char **)a1, &v22);
  v25 = 0;
  v15 = qsscanf();
  if ( v23 != 1920230503 )
    return 2;
  if ( v24 )
    return 2;
  if ( v15 != 3 )
    return 2;
  sub_2A250(v14, (const char **)a1, &v22);
  v25 = 0;
  v17 = qsscanf();
  if ( v23 != 1920230505 || v24 || v17 != 3 )
    return 2;
  *a3 |= 2u;
  return 0;
}

