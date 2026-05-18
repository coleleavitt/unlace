FILE *__fastcall sub_196A20(const char *a1)
{
  FILE *result; // rax
  const char *v2; // rax

  result = sub_196960(a1);
  if ( !result )
  {
    v2 = (const char *)sub_18FFF0(-1);
    sub_2F260((__int64)"Can't open for read file '%s': %s", a1, v2);
  }
  return result;
}
