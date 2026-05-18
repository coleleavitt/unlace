void *__fastcall sub_D2260(size_t n, __int64 a2)
{
  void *v2; // rax
  void *v3; // rcx

  v2 = (void *)sub_D1E10(n, a2);
  v3 = v2;
  if ( v2 )
    return memset(v2, 0, n);
  return v3;
}
