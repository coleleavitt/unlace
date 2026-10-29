const char *__fastcall sub_80DA0(__int64 a1, __int64 *a2)
{
  const char *v2; // rax
  const char *result; // rax
  const char *v4; // rbx
  size_t v5; // r12
  void *v6; // rdi
  const char *v7; // r13
  __int64 v8; // rax

  v2 = src;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  result = (const char *)qbasename(v2);
  v4 = result;
  if ( result && (result = (const char *)strlen(result), (v5 = (size_t)result) != 0) )
  {
    v6 = (void *)*a2;
    v7 = result + 1;
    if ( a2[2] < (unsigned __int64)(result + 1) )
    {
      v8 = qvector_reserve(a2, *a2, result + 1, 1);
      *a2 = v8;
      v6 = (void *)v8;
    }
    a2[1] = (__int64)v7;
    memmove(v6, v4, v5);
    result = (const char *)*a2;
    *(_BYTE *)(*a2 + v5) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return result;
}
