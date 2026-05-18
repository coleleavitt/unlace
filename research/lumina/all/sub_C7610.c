__int64 __fastcall sub_C7610(void *dest, const char *src)
{
  size_t v2; // rbp

  v2 = strlen(src) + 1;
  memcpy(dest, src, v2);
  return (__int64)dest + v2;
}
