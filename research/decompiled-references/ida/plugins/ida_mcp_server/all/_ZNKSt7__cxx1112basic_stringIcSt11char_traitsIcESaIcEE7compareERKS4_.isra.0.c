int __fastcall std::string::compare(const void *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v6; // rdx
  int result; // eax
  __int64 v8; // rbx
  size_t v9; // [rsp+8h] [rbp-10h]

  v6 = a4;
  if ( a2 <= a4 )
    v6 = a2;
  if ( !v6 || (v9 = a4, result = memcmp(a1, a3, v6), a4 = v9, !result) )
  {
    v8 = a2 - a4;
    result = 0x7FFFFFFF;
    if ( v8 <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
        return v8;
    }
  }
  return result;
}

