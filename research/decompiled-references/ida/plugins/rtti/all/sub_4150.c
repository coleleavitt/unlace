void *__fastcall sub_4150(__int64 *a1, const char *a2)
{
  size_t v3; // rax
  __int64 v4; // rbp
  size_t v5; // r12
  size_t v6; // r14
  __int64 v7; // rsi
  __int64 v9; // rax

  v3 = strlen(a2);
  v4 = a1[1];
  v5 = v3;
  v6 = v3;
  if ( v4 )
  {
    --v4;
    v6 = v3 + v4;
  }
  v7 = *a1;
  if ( a1[2] < v6 + 1 )
  {
    v9 = qvector_reserve();
    *a1 = v9;
    v7 = v9;
  }
  a1[1] = v6 + 1;
  *(_BYTE *)(v7 + v6) = 0;
  return memmove((void *)(v4 + *a1), a2, v5);
}
