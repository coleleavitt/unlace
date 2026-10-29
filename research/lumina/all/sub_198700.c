void *__fastcall sub_198700(const char *a1)
{
  size_t v1; // r12
  void *v2; // rax
  void *v3; // rbp

  if ( !a1 )
    return nullptr;
  v1 = strlen(a1) + 1;
  v2 = malloc(v1);
  v3 = v2;
  if ( !v2 )
  {
    sub_18FA40(1u);
    *__errno_location() = 12;
    sub_18FA40(1u);
    return nullptr;
  }
  sub_1998A0(v2, a1, v1);
  return v3;
}
