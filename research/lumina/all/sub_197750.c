char *__fastcall sub_197750(char *a1, size_t a2)
{
  char *result; // rax
  const char *v3; // rax

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)sub_18FFF0(-1);
    sub_2F260((__int64)"getcwd: %s", v3);
  }
  return result;
}
