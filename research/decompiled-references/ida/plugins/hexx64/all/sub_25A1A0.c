int __fastcall sub_25A1A0(__int64 a1, __int64 a2, double a3)
{
  int result; // eax
  const char *v6; // rsi
  const char *v7; // rdi

  result = sub_259850(a1, a2, 0, a3);
  if ( !result )
  {
    v6 = s1;
    if ( *(_QWORD *)(a2 + 72) )
    {
      v6 = *(const char **)(a2 + 64);
      v7 = s1;
      if ( !*(_QWORD *)(a1 + 72) )
        return strcmp(v7, v6);
    }
    else
    {
      v7 = s1;
      if ( !*(_QWORD *)(a1 + 72) )
        return strcmp(v7, v6);
    }
    v7 = *(const char **)(a1 + 64);
    return strcmp(v7, v6);
  }
  return result;
}

