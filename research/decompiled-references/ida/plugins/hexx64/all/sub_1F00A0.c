__int64 __fastcall sub_1F00A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rax
  int *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int *v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  char v22; // al

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v5 = *(_QWORD *)(a1 + 72);
  v7 = *(int **)(a2 + 8);
  v8 = v5 + 8;
  v9 = *(_QWORD *)(v5 + 16);
  v10 = v7[4];
  if ( !v9 )
    return 0;
  v11 = v8;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 24);
      if ( (int)v10 <= *(_DWORD *)(v9 + 32) )
        break;
      v9 = *(_QWORD *)(v9 + 24);
      if ( !v13 )
        goto LABEL_8;
    }
    v11 = v9;
    v9 = *(_QWORD *)(v9 + 16);
  }
  while ( v12 );
LABEL_8:
  if ( v8 == v11 || (int)v10 < *(_DWORD *)(v11 + 32) )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 440LL) < v10 )
    sub_1ECB80(a3);
  v14 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)v7 + 432LL) + 104 * v10);
  v7[4] = *(_DWORD *)(a1 + 92);
  v15 = sub_155920((__int64 *)(a1 + 48));
  sub_155800((unsigned int *)v15, a3);
  *(_DWORD *)v15 = 1;
  v18 = j__qalloc_or_throw(16, v13, v16, v17);
  sub_123A40(v18, (unsigned __int8 *)a2, v19, v20);
  *(_QWORD *)(v15 + 32) = v18;
  *(_QWORD *)(v15 + 8) = a2;
  v21 = *(_QWORD *)(a1 + 8);
  v22 = sub_1EEA60((unsigned __int8 *)v21);
  if ( (unsigned __int8)sub_1EFB00(
                          *(_QWORD *)(v21 + 1504),
                          (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL),
                          v14,
                          *(int **)(a1 + 80),
                          *(_DWORD *)(a1 + 88),
                          v22,
                          a3) )
    return 0;
  else
    return 4294967276LL;
}

