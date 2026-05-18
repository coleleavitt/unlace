size_t __fastcall sub_D4C70(__int64 a1, size_t a2)
{
  unsigned __int8 v2; // dl
  size_t result; // rax
  const char *v4; // rbx

  if ( (*(_BYTE *)(a1 + 14) & 4) != 0 )
  {
    v4 = *(const char **)a1;
    return (size_t)&v4[strlen(*(const char **)a1) + 1];
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 8);
    result = a2;
    if ( (v2 & 0xF0) != 0 )
      return (size_t)*(&off_241440 + (v2 >> 4) - 1);
  }
  return result;
}
