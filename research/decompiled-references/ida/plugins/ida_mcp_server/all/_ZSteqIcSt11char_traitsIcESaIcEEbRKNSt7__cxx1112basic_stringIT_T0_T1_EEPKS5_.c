bool __fastcall std::operator==<char>(__int64 a1, const char *a2)
{
  size_t v2; // rbx
  bool v3; // zf
  bool result; // al

  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 == strlen(a2);
  result = 0;
  if ( v3 )
  {
    result = 1;
    if ( v2 )
      return memcmp(*(const void **)a1, a2, v2) == 0;
  }
  return result;
}

