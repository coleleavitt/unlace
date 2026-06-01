__int64 __fastcall sub_1A930(__int64 a1, const char **a2, const char *a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  const char *v6; // rbp
  const char *v7; // rsi
  unsigned __int8 v9; // [rsp+7h] [rbp-41h]

  while ( 1 )
  {
    v9 = sub_1A780((__int64)a2, 0x539u, (__int64)"%s", a3);
    if ( !v9 )
      break;
    if ( (unsigned __int64)a2[1] <= 1 )
    {
      sub_1A6B0((__int64)"Name is empty, please input a name for the graph\n");
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 1760);
      v5 = v4 + 24LL * *(_QWORD *)(a1 + 1768);
      if ( v4 == v5 )
        return v9;
      v6 = *a2;
      while ( 1 )
      {
        v7 = s1;
        if ( *(_QWORD *)(v4 + 8) )
          v7 = *(const char **)v4;
        if ( !strcmp(v6, v7) )
          break;
        v4 += 24;
        if ( v5 == v4 )
          return v9;
      }
      sub_1A6B0((__int64)"Name is already used, please input another name for the graph\n");
    }
  }
  return v9;
}
