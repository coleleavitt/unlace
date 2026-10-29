__int64 *__fastcall sub_DC720(__int64 a1, const char *a2)
{
  size_t v2; // rbp
  __int64 *v3; // rax
  __int64 *v4; // rcx

  if ( !a2 )
    return nullptr;
  v2 = strlen(a2) + 1;
  v3 = sub_DBFF0(a1, v2);
  v4 = v3;
  if ( v3 )
    return (__int64 *)memcpy(v3, a2, v2);
  return v4;
}
