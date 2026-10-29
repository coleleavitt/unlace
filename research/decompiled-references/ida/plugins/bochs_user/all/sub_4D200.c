const char *__fastcall sub_4D200(__int64 a1)
{
  bool v1; // zf
  const char *result; // rax

  v1 = *(_QWORD *)(a1 + 40) == 0;
  *(_BYTE *)(a1 + 56) = 0;
  result = s1;
  if ( !v1 )
    return *(const char **)(a1 + 32);
  return result;
}

