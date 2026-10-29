__int64 *__fastcall sub_33B40(__int64 a1, int a2, int a3, int a4)
{
  __int64 *result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp
  int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r13
  __int64 *v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax

  result = (__int64 *)(a1 + 32);
  v5 = (__int64 *)(a1 + 8);
  v6 = a3;
  v8 = a3;
  if ( a2 != 1 )
    result = v5;
  v9 = a4 - (__int64)a3 + 1;
  v10 = result[1];
  v11 = result;
  v12 = v10 + v9;
  if ( v10 < v10 + v9 )
  {
    v14 = *result;
    v15 = result[1];
    if ( v11[2] < v12 )
    {
      v16 = qvector_reserve(v11, v14, v10 + v9, 4);
      *v11 = v16;
      v14 = v16;
      v15 = v11[1];
      v9 = v12 - v15;
    }
    result = (__int64 *)memset((void *)(v14 + 4 * v15), 0, 4 * v9);
  }
  else if ( v12 == v10 )
  {
    goto LABEL_6;
  }
  v11[1] = v12;
LABEL_6:
  v13 = v10 - v6;
  if ( a4 >= (int)v6 )
  {
    while ( 1 )
    {
      result = (__int64 *)*v11;
      *(_DWORD *)(*v11 + 4 * (v13 + v6)) = v8++;
      if ( a4 < v8 )
        break;
      v6 = v8;
    }
  }
  return result;
}
