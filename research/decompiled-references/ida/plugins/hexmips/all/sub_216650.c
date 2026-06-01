int *__fastcall sub_216650(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v5; // r13
  __int64 v7; // r15
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // r12
  int *result; // rax
  __int64 v12; // rbp
  __int64 v13; // r15
  int *v14; // r13
  char v15; // dl
  int v16; // edx
  __int64 v18; // [rsp+10h] [rbp-48h]

  v5 = (a3 - 1) / 2;
  v18 = a3 & 1;
  if ( a2 >= v5 )
  {
    result = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    v7 = a2;
    if ( a2 != (a3 - 2) / 2 )
      goto LABEL_10;
    goto LABEL_12;
  }
  v7 = a2;
  do
  {
    v8 = sub_211240(a5, *(_DWORD *)(a1 + 8 * (v7 + 1)), *(_DWORD *)(a1 + 8 * (v7 + 1) - 4));
    v9 = v7;
    v7 = 2 * (v7 + 1) - v8;
    v10 = 4 * v7;
    result = (int *)(a1 + 4 * v7);
    *(_DWORD *)(a1 + 4 * v9) = *result;
  }
  while ( v7 < v5 );
  if ( !v18 && (a3 - 2) / 2 == v7 )
  {
LABEL_12:
    v16 = *(_DWORD *)(a1 + 4 * (2 * v7 + 2) - 4);
    v7 = 2 * v7 + 1;
    v10 = 4 * v7;
    *result = v16;
    result = (int *)(a1 + 4 * v7);
  }
  v12 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v14 = (int *)(a1 + 4 * v12);
      v15 = sub_211240(a5, *v14, a4);
      result = (int *)(a1 + v10);
      if ( !v15 )
        break;
      v13 = v12;
      *result = *v14;
      if ( a2 >= v12 )
      {
        result = (int *)(a1 + 4 * v12);
        break;
      }
      v12 = (v12 - 1) / 2;
      v10 = 4 * v13;
    }
  }
LABEL_10:
  *result = a4;
  return result;
}

