int __fastcall std::string::compare(void *s1, size_t a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // rdx
  size_t v6; // rbp
  int result; // eax

  v4 = strlen(a3);
  v5 = a2;
  v6 = v4;
  if ( v4 <= a2 )
    v5 = v4;
  if ( !v5 || (result = memcmp(s1, a3, v5)) == 0 )
  {
    result = 0x7FFFFFFF;
    if ( (__int64)(a2 - v6) <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( (__int64)(a2 - v6) >= (__int64)0xFFFFFFFF80000000LL )
        return a2 - v6;
    }
  }
  return result;
}

