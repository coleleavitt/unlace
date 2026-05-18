void *__fastcall sub_6A6D0(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v3; // rax

  v2 = s1;
  sub_69D50(a2);
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  if ( !v2 )
    return sub_67AC0(a2, "", 1u);
  v3 = strlen(v2);
  return sub_67AC0(a2, v2, v3 + 1);
}
