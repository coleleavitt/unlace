__int64 __fastcall sub_1BA580(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v10; // r13
  __int64 i; // rbx
  __int64 v12; // r10
  int *v13; // rcx
  __int64 v14; // rbp
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // r10
  __int64 v18; // rbp
  _QWORD *v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // edx

  result = a3 - 1;
  v8 = a3 & 1;
  v10 = (a3 - 1) / 2;
  if ( a2 >= v10 )
  {
    v13 = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
    {
      v18 = *a5;
      *a5 = 0;
      *(_OWORD *)(a5 + 1) = 0;
      goto LABEL_18;
    }
    result = a2;
    goto LABEL_23;
  }
  for ( i = a2; ; i = result )
  {
    v12 = 8 * (i + 1);
    result = 2 * (i + 1);
    v13 = (int *)(a1 + v12);
    v14 = *(_QWORD *)a5[3];
    v15 = *(_DWORD *)(a1 + v12);
    v16 = v14 + 24LL * v15;
    if ( *(_QWORD *)(v16 + 8) )
    {
      v17 = v14 + 24LL * *(int *)(a1 + v12 - 4);
      if ( !*(_QWORD *)(v17 + 8) || **(_QWORD **)v16 < **(_QWORD **)v17 )
      {
        --result;
        v13 = (int *)(a1 + 4 * result);
        v15 = *v13;
      }
    }
    *(_DWORD *)(a1 + 4 * i) = v15;
    if ( result >= v10 )
      break;
  }
  if ( !v8 )
  {
LABEL_23:
    if ( (a3 - 2) / 2 == result )
    {
      v24 = 2 * result + 2;
      v25 = *(_DWORD *)(a1 + 4 * v24 - 4);
      result = v24 - 1;
      *v13 = v25;
      v13 = (int *)(a1 + 4 * result);
    }
  }
  v18 = *a5;
  v19 = (_QWORD *)a5[3];
  *a5 = 0;
  *(_OWORD *)(a5 + 1) = 0;
  v20 = (result - 1) / 2;
  if ( result > a2 )
  {
    while ( 1 )
    {
      v13 = (int *)(a1 + 4 * v20);
      v22 = *v13;
      v23 = *v19 + 24 * v22;
      if ( !*(_QWORD *)(v23 + 8) )
        break;
      v21 = 24LL * a4 + *v19;
      if ( *(_QWORD *)(v21 + 8) )
      {
        if ( **(_QWORD **)v23 >= **(_QWORD **)v21 )
          break;
      }
      *(_DWORD *)(a1 + 4 * result) = v22;
      result = v20;
      if ( a2 >= v20 )
        goto LABEL_18;
      v20 = (v20 - 1) / 2;
    }
    v13 = (int *)(a1 + 4 * result);
  }
LABEL_18:
  *v13 = a4;
  if ( v18 )
    return qfree();
  return result;
}

