int *__fastcall sub_21AED0(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, double a6)
{
  __int64 v6; // r13
  __int64 v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // r12
  int *result; // rax
  __int64 v13; // rbp
  __int64 v14; // r15
  int *v15; // r13
  char v16; // dl
  int v17; // edx
  __int64 v19; // [rsp+10h] [rbp-48h]

  v6 = (a3 - 1) / 2;
  v19 = a3 & 1;
  if ( a2 >= v6 )
  {
    result = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    v8 = a2;
    if ( a2 != (a3 - 2) / 2 )
      goto LABEL_10;
    goto LABEL_12;
  }
  v8 = a2;
  do
  {
    v9 = sub_215AC0(a5, *(_DWORD *)(a1 + 8 * (v8 + 1)), *(_DWORD *)(a1 + 8 * (v8 + 1) - 4), a6);
    v10 = v8;
    v8 = 2 * (v8 + 1) - v9;
    v11 = 4 * v8;
    result = (int *)(a1 + 4 * v8);
    *(_DWORD *)(a1 + 4 * v10) = *result;
  }
  while ( v8 < v6 );
  if ( !v19 && (a3 - 2) / 2 == v8 )
  {
LABEL_12:
    v17 = *(_DWORD *)(a1 + 4 * (2 * v8 + 2) - 4);
    v8 = 2 * v8 + 1;
    v11 = 4 * v8;
    *result = v17;
    result = (int *)(a1 + 4 * v8);
  }
  v13 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v15 = (int *)(a1 + 4 * v13);
      v16 = sub_215AC0(a5, *v15, a4, a6);
      result = (int *)(a1 + v11);
      if ( !v16 )
        break;
      v14 = v13;
      *result = *v15;
      if ( a2 >= v13 )
      {
        result = (int *)(a1 + 4 * v13);
        break;
      }
      v13 = (v13 - 1) / 2;
      v11 = 4 * v14;
    }
  }
LABEL_10:
  *result = a4;
  return result;
}

