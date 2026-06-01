const char *__fastcall sub_41140(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  const char *v4; // rdi
  const char *result; // rax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = v2 + 48LL * *(_QWORD *)(a1 + 80);
  if ( v3 == v2 )
    return nullptr;
  while ( 1 )
  {
    v4 = s;
    if ( *(_QWORD *)(v2 + 8) )
      v4 = *(const char **)v2;
    if ( !strcmp(v4, a2) )
      break;
    v2 += 48;
    if ( v3 == v2 )
      return nullptr;
  }
  result = s;
  if ( *(_QWORD *)(v2 + 32) )
    return *(const char **)(v2 + 24);
  return result;
}

