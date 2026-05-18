void *__fastcall sub_A3DB0(__int64 a1, __int64 *a2)
{
  const char *v2; // rbx
  size_t v3; // rdx

  v2 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  if ( v2 )
  {
    v3 = strlen(v2) + 1;
  }
  else
  {
    v3 = 1;
    v2 = "";
  }
  return sub_9E3C0(a2, v2, v3);
}
