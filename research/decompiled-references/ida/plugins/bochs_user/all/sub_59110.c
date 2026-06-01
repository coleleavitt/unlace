const char *__fastcall sub_59110(__int64 a1)
{
  bool v1; // zf
  const char *result; // rax

  v1 = *(_QWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 24) = 0;
  result = s1;
  if ( !v1 )
    return *(const char **)a1;
  return result;
}

