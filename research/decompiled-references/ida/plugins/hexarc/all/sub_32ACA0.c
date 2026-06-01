void *__fastcall sub_32ACA0(__int64 *a1, const char *a2)
{
  size_t v2; // r13
  const char *v3; // r12
  __int64 v4; // rbp
  size_t v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rax

  v2 = 1;
  v3 = (const char *)&unk_3EF793;
  if ( a2 )
  {
    v3 = a2;
    v2 = strlen(a2) + 1;
  }
  v4 = a1[1];
  v5 = v2;
  if ( v4 )
    v5 = --v4 + v2;
  v6 = *a1;
  if ( a1[2] < v5 + 1 )
  {
    v8 = qvector_reserve();
    *a1 = v8;
    v6 = v8;
  }
  a1[1] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 0;
  return memmove((void *)(v4 + *a1), v3, v2);
}

