void *__fastcall sub_CFAA0(__int64 *a1, _QWORD *a2, int a3, double a4)
{
  __int64 v4; // r15
  __int64 *v5; // r14
  __int64 *v6; // r13
  int i; // ebx
  int v8; // esi
  int v9; // r12d
  int v10; // esi
  int *v11; // rax
  int *j; // rcx
  int v13; // edx
  int *v14; // rax
  int *k; // rcx
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  void *result; // rax

  v4 = a3;
  v5 = a1 + 2;
  v6 = a1 + 4;
  for ( i = a3 + 1; (unsigned __int64)i < a2[58]; ++i )
  {
    v9 = i - 1;
    v10 = i - 1;
    if ( sub_64930(a1, i) )
      sub_64190(a1, v10, a4);
    else
      sub_64340(a1, v10, a4);
    sub_64340(a1, i, a4);
    if ( sub_64930(v5, i) )
      sub_64190(v5, v9, a4);
    else
      sub_64340(v5, v9, a4);
    sub_64340(v5, i, a4);
    if ( sub_64930(v6, i) )
      sub_64190(v6, v9, a4);
    else
      sub_64340(v6, v9, a4);
    v8 = i;
    sub_64340(v6, v8, a4);
  }
  v11 = (int *)a1[6];
  for ( j = &v11[a1[7]]; v11 != j; ++v11 )
  {
    while ( 1 )
    {
      v13 = *v11;
      if ( (int)v4 >= *v11 )
        break;
      *v11 = v13 - 1;
LABEL_16:
      if ( ++v11 == j )
        goto LABEL_20;
    }
    if ( (_DWORD)v4 != v13 )
      goto LABEL_16;
    *v11 = -1;
  }
LABEL_20:
  v14 = (int *)a1[9];
  for ( k = &v14[a1[10]]; v14 != k; ++v14 )
  {
    while ( 1 )
    {
      v16 = *v14;
      if ( (int)v4 >= *v14 )
        break;
      *v14 = v16 - 1;
LABEL_23:
      if ( ++v14 == k )
        goto LABEL_27;
    }
    if ( (_DWORD)v4 != v16 )
      goto LABEL_23;
    *v14 = -1;
  }
LABEL_27:
  v17 = sub_13D280(a2, v4);
  v18 = *(_DWORD *)(v17 + 24);
  BYTE1(v18) &= 0x7Eu;
  *(_DWORD *)(v17 + 24) = v18 | 0x100000;
  result = memmove((void *)(a2[57] + 4 * v4), (const void *)(a2[57] + 4 * v4 + 4), 4 * (a2[58] - v4) - 4);
  --a2[58];
  return result;
}

