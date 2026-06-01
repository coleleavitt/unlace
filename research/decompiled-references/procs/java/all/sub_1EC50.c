const char *__fastcall sub_1EC50(__int64 a1, const char *a2)
{
  const char *i; // rdi
  char *v3; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
  {
    for ( i = a2; ; i = v3 + 1 )
    {
      v3 = strchr(i, 47);
      if ( !v3 )
        break;
      *v3 = 46;
    }
  }
  return a2;
}
