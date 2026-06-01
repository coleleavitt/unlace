int __fastcall sub_252E20(__int64 a1, __int64 a2)
{
  int result; // eax
  const char *v5; // rsi
  const char *v6; // rdi

  result = sub_2524D0(a1, a2, 0);
  if ( !result )
  {
    v5 = s1;
    if ( *(_QWORD *)(a2 + 72) )
    {
      v5 = *(const char **)(a2 + 64);
      v6 = s1;
      if ( !*(_QWORD *)(a1 + 72) )
        return strcmp(v6, v5);
    }
    else
    {
      v6 = s1;
      if ( !*(_QWORD *)(a1 + 72) )
        return strcmp(v6, v5);
    }
    v6 = *(const char **)(a1 + 64);
    return strcmp(v6, v5);
  }
  return result;
}

