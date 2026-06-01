const char *__fastcall sub_30380(__int64 a1)
{
  __int64 v1; // rdx
  const char *result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  result = nptr;
  if ( *(_QWORD *)(v1 + 40) )
    return *(const char **)(v1 + 32);
  return result;
}

