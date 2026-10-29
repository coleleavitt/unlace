void __fastcall sub_E19B0(__int64 a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v4; // ebx
  char *i; // rbp
  unsigned int v6; // eax
  char *v7; // rdx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a4 )
  {
    v4 = a3;
    if ( a3 > 0 )
    {
      for ( i = a4; *i <= 65; ++i )
      {
        ++a2;
        if ( !--v4 )
          return;
      }
      if ( v4 != 1 && i[v4 - 1] <= 65 )
      {
        v6 = v4 - 1;
        v7 = &i[v4 - 1 - 1];
        while ( 1 )
        {
          v4 = v6;
          if ( v6 == 1 )
            break;
          if ( *v7-- > 65 )
            break;
          --v6;
        }
      }
      v8 = sub_E1710(a1, 96, a2, v4, 0);
      sub_DCC50(a1, v8, (__int64)i, v4, v9, v10);
    }
  }
}
