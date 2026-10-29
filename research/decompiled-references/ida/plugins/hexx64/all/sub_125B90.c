char __fastcall sub_125B90(unsigned __int8 *a1, __int64 a2, unsigned int *a3, unsigned int a4, double a5)
{
  unsigned __int8 *i; // r13
  unsigned int *j; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // eax
  unsigned int *v11; // r9
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  char result; // al
  unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // rdx
  __int64 v18; // r12
  unsigned __int8 *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // rax
  _DWORD *v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-50h]

  for ( i = a1;
        (*(_DWORD *)i == 4 || *(_DWORD *)i == 67 && *((_DWORD *)i + 17) == *((_DWORD *)i + 9)) && i[32] == 4;
        i = *((unsigned __int8 **)i + 5) )
  {
    ;
  }
  for ( j = a3; (*j == 4 || *j == 67 && j[17] == j[9]) && *((_BYTE *)j + 32) == 4; j = *((unsigned int **)j + 5) )
    ;
  v8 = (__int64)(j + 8);
  v9 = (__int64)(j + 12);
  v28 = *j;
  v10 = sub_32EA00(*(_DWORD *)a1);
  v11 = a3;
  if ( v28 != v10 )
  {
    v9 = (__int64)(j + 8);
    v8 = (__int64)(j + 12);
  }
  if ( (a4 & 2) != 0 || (v12 = *(_DWORD *)i, v13 = *j, *(_DWORD *)i == *j) )
  {
    if ( *((_DWORD *)a1 + 17) == a3[17] )
    {
LABEL_17:
      v14 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 62 )
        return *((_QWORD *)i + 3) == *((_QWORD *)j + 3);
      goto LABEL_23;
    }
    if ( *(_DWORD *)i == 2 && *j == 2 && *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      return 0;
  }
  else
  {
    if ( (a4 & 1) == 0 )
      return 0;
    if ( v12 == 64 )
    {
      if ( v13 != 63 || *((_DWORD *)i + 17) >= (signed int)j[17] )
        return 0;
    }
    else if ( v13 != 64 || v12 != 63 || (signed int)j[17] >= *((_DWORD *)i + 17) )
    {
      return 0;
    }
    if ( *((_DWORD *)a1 + 17) == a3[17] )
      goto LABEL_17;
  }
  v14 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)a1 - 65) <= 2 )
    return 0;
  if ( v14 == 62 )
    return *((_QWORD *)i + 3) == *((_QWORD *)j + 3);
LABEL_23:
  if ( (a4 & 4) != 0 )
  {
    if ( !sub_1255D0(a1 + 64, a2, (__int64)(a3 + 16), 0, a5) )
      return 0;
    v14 = *(_DWORD *)a1;
    v11 = a3;
  }
  if ( v14 != 20 )
    goto LABEL_46;
  if ( *((_DWORD *)a1 + 17) != v11[17] && (a4 & 1) == 0 )
    return 0;
  if ( a1[48] != 2 )
  {
    if ( a1[32] == 2 )
    {
      v16 = a1 + 48;
      v17 = a1 + 32;
      goto LABEL_30;
    }
LABEL_46:
    if ( !sub_1255D0(i + 32, a2, v9, a4, a5) || !sub_1255D0(i + 48, a2, v8, a4, a5) )
    {
      v20 = *(unsigned int *)i;
      if ( (unsigned int)v20 > 0x21 || (v21 = 0x306385000LL, !_bittest64(&v21, v20)) )
      {
        v24 = *j;
        if ( (_DWORD)v20 == (_DWORD)v24 )
          return 0;
        if ( (unsigned int)v24 > 0x21 )
          return 0;
        v25 = 0x306385000LL;
        if ( !_bittest64(&v25, v24) )
          return 0;
      }
      if ( !sub_1255D0(i + 32, a2, v8, a4, a5) || !sub_1255D0(i + 48, a2, v9, a4, a5) )
        return 0;
    }
    v22 = *(unsigned int *)i;
    if ( (_DWORD)v22 == 62 )
    {
      if ( (i[5] & 0x10) != 0 )
        return sub_1255D0(i + 64, a2, (__int64)(j + 16), a4, a5);
    }
    else if ( (unsigned int)v22 <= 0x3B )
    {
      v23 = 0xCFFFC0000000003LL;
      if ( _bittest64(&v23, v22) )
        return sub_1255D0(i + 64, a2, (__int64)(j + 16), a4, a5);
    }
    result = 1;
    if ( i[64] != 8 )
      return result;
    return sub_1255D0(i + 64, a2, (__int64)(j + 16), a4, a5);
  }
  v16 = a1 + 32;
  v17 = a1 + 48;
LABEL_30:
  v18 = (__int64)(v11 + 8);
  v19 = (unsigned __int8 *)(v11 + 12);
  if ( *((_BYTE *)v11 + 48) == 2 )
    goto LABEL_33;
  if ( *((_BYTE *)v11 + 32) != 2 )
    return 0;
  v18 = (__int64)(v11 + 12);
  v19 = (unsigned __int8 *)(v11 + 8);
LABEL_33:
  if ( !sub_1255D0(v19, a2, (__int64)v17, 1, a5) )
    return 0;
  if ( *v16 == 4 )
  {
    v27 = *((_DWORD **)v16 + 1);
    if ( *v27 == 10 )
      v16 = (unsigned __int8 *)(v27 + 8);
  }
  if ( *(_BYTE *)v18 == 4 )
  {
    v26 = *(_DWORD **)(v18 + 8);
    if ( *v26 == 10 )
      v18 = (__int64)(v26 + 8);
  }
  return sub_1255D0(v16, a2, v18, 1, a5);
}

