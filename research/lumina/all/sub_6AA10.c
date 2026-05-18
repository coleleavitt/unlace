void *__fastcall sub_6AA10(__int64 *a1, const char *a2)
{
  size_t v2; // rdx
  char *v3; // rbx

  v2 = 1;
  v3 = "";
  if ( a2 )
  {
    v3 = (char *)a2;
    v2 = strlen(a2) + 1;
  }
  return sub_67AC0(a1, v3, v2);
}
