void *__fastcall sub_2AA600(__int64 *a1, const void *a2, size_t a3)
{
  size_t v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax

  v3 = a3;
  v6 = a1[1];
  if ( v6 )
    v3 = --v6 + a3;
  v7 = *a1;
  if ( a1[2] < v3 + 1 )
  {
    v9 = qvector_reserve();
    *a1 = v9;
    v7 = v9;
  }
  a1[1] = v3 + 1;
  *(_BYTE *)(v7 + v3) = 0;
  return memmove((void *)(v6 + *a1), a2, a3);
}

