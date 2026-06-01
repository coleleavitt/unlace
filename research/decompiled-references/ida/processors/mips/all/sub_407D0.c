_DWORD *__fastcall sub_407D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r10
  _DWORD *result; // rax
  _QWORD *v8; // rbx
  int *v9; // rdi
  int *v10; // rsi
  int v11; // edx
  _DWORD *v12; // rsi
  _DWORD *v13; // rsi
  _DWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // r9
  char v18; // r8
  int v19; // ecx
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  _DWORD *v24; // rax
  unsigned __int64 v25; // r8
  _DWORD *v26; // r8
  __int64 i; // rdx
  _DWORD *v28; // r10
  char *v29; // rax
  __int64 j; // rdx
  char *v31; // rsi

  v6 = 8LL * a3;
  result = (_DWORD *)(a3 - 1);
  v8 = (_QWORD *)(a2 + 8LL * (_QWORD)result);
  while ( 1 )
  {
    v9 = *(int **)(a2 + 8LL * (_QWORD)result);
    if ( *v9 != -1 )
      break;
LABEL_4:
    result = (_DWORD *)((char *)result - 1);
    v6 -= 8;
    if ( (_DWORD)result == -1 )
      return result;
  }
  v10 = *(int **)(a1 + 8LL * (_QWORD)result);
  v11 = *v10;
  if ( *v9 > 15 || v11 <= 16 )
  {
LABEL_2:
    *v10 = v11 ^ 0x10;
    *v9 ^= 0x10u;
    if ( !*v10 )
      *v10 = 32;
    goto LABEL_4;
  }
  v12 = (_DWORD *)*v8;
  if ( *(_DWORD *)*v8 == -1 )
  {
    if ( (a3 != 2) > (int)result )
    {
      **(_DWORD **)(a2 + 16) = **(_DWORD **)(a2 + 8);
      **(_DWORD **)(a1 + 16) = **(_DWORD **)(a1 + 8);
      v11 = **(_DWORD **)(a1 + 8LL * (_QWORD)result);
    }
    **(_DWORD **)(a1 + v6) = v11;
    **(_DWORD **)(a2 + v6) = 16;
    **(_DWORD **)(a1 + 8LL * (_QWORD)result) = 16;
    v13 = *(_DWORD **)(a2 + v6);
    v14 = *(_DWORD **)(a1 + v6);
    *v14 ^= 0x10u;
    *v13 ^= 0x10u;
    if ( !*v14 )
      *v14 = 32;
    v10 = *(int **)(a1 + 8LL * (_QWORD)result);
    v9 = *(int **)(a2 + 8LL * (_QWORD)result);
    v11 = *v10;
    goto LABEL_2;
  }
  if ( under_debugger )
    BUG();
  interr(10363);
  v16 = v15 - (_QWORD)v12;
  v17 = v12;
  v20 = v19 & (0x287Bu >> v18);
  v21 = 0xCCCCCCCCCCCCCCCDLL * (v16 >> 3);
  if ( v16 <= 0 )
    return v17;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = v21 >> 1;
      v23 = 10 * (v21 >> 1);
      v24 = &v17[v23];
      v25 = *(_QWORD *)&v17[v23 + 2];
      if ( v25 >= v20 )
        break;
      v17 = v24 + 10;
      v21 = v21 - 1 - v22;
      if ( v21 <= 0 )
        return v17;
    }
    if ( v20 >= v25 )
      break;
    v21 >>= 1;
    if ( v22 <= 0 )
      return v17;
  }
  v26 = v17;
  for ( i = 0xCCCCCCCCCCCCCCCDLL * ((v23 * 4) >> 3); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v28 = &v26[10 * (i >> 1)];
      if ( *((_QWORD *)v28 + 1) >= v20 )
        break;
      v26 = v28 + 10;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_27;
    }
  }
LABEL_27:
  v29 = (char *)(v24 + 10);
  for ( j = 0xCCCCCCCCCCCCCCCDLL * (((char *)&v17[10 * v21] - v29) >> 3); j > 0; j >>= 1 )
  {
    while ( 1 )
    {
      v31 = &v29[40 * (j >> 1)];
      if ( v20 < *((_QWORD *)v31 + 1) )
        break;
      v29 = v31 + 40;
      j = j - 1 - (j >> 1);
      if ( j <= 0 )
        return v26;
    }
  }
  return v26;
}

