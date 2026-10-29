__int64 __fastcall sub_54BA0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // r13
  __int64 v7; // rsi
  size_t v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  char *v12; // rbp
  __int64 v13; // rax

  result = *(_QWORD *)(a1 + 24);
  v3 = 8 * result;
  v4 = (8 * result) >> 3;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *a2;
    v8 = 0;
    v9 = a2[1];
    v10 = 8 * v9;
    v11 = v4 + v9;
    if ( a2[2] < v11 )
    {
      v13 = qvector_reserve(a2, v7, v11, 8);
      *a2 = v13;
      v7 = v13;
      v8 = 8 * a2[1] - v10;
    }
    v12 = (char *)(v7 + v10);
    memmove(&v12[v3], v12, v8);
    result = 0;
    if ( v3 )
    {
      do
      {
        *(_QWORD *)&v12[result] = *(_QWORD *)(v6 + result);
        result += 8;
      }
      while ( v3 != result );
    }
    a2[1] += v4;
  }
  return result;
}

