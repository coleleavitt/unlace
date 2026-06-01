void *__fastcall sub_61A0(void *src, size_t n, __int64 *a3)
{
  size_t v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax

  v3 = n;
  v6 = a3[1];
  if ( v6 )
  {
    --v6;
    v3 = n + v6;
  }
  v7 = *a3;
  if ( a3[2] < v3 + 1 )
  {
    v9 = qvector_reserve(a3, v7, v3 + 1, 1);
    *a3 = v9;
    v7 = v9;
  }
  a3[1] = v3 + 1;
  *(_BYTE *)(v7 + v3) = 0;
  return memmove((void *)(v6 + *a3), src, n);
}

