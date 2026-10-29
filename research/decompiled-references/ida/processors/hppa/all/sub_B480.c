__int64 __fastcall sub_B480(char **a1, int a2, int a3, int a4, _BYTE *a5, unsigned __int64 a6)
{
  char *v8; // rdx
  char *v9; // rsi
  char *v10; // rax
  char v11; // cl

  if ( (a4 & 1) != 0 || a1 != (char **)&off_15A60 )
    goto LABEL_6;
  if ( (a2 & 0xFFFFFFFB) == 1 )
    return 0;
  a1 = (char **)&off_15A60;
  v8 = &byte_1084C;
  if ( !a2 )
    goto LABEL_8;
  do
  {
    do
    {
      a1 += 2;
LABEL_6:
      v8 = *a1;
      if ( !*a1 )
        return (__int64)v8;
    }
    while ( *((char *)a1 + 8) != a2 );
LABEL_8:
    ;
  }
  while ( *((char *)a1 + 9) != a3 );
  if ( !*v8 )
    return (__int64)a5;
  if ( (unsigned __int64)a5 < a6 )
  {
    v8 = a5 + 1;
    *a5 = 44;
    v9 = (char *)(a6 - 1);
    if ( (unsigned __int64)(a5 + 1) >= a6 )
    {
      if ( a4 )
        *(_BYTE *)(a6 - 1) = 42;
      goto LABEL_21;
    }
    if ( a4 )
    {
      v8 = a5 + 2;
      a5[1] = 42;
      if ( (unsigned __int64)(a5 + 2) >= a6 )
      {
LABEL_21:
        *(_BYTE *)(a6 - 1) = 0;
LABEL_22:
        *(_BYTE *)(a6 - 1) = 0;
        return a6 - 1;
      }
    }
    v10 = *a1;
    if ( v9 == v8 )
      goto LABEL_22;
    while ( 1 )
    {
      v11 = *v10++;
      *v8 = v11;
      if ( !v11 )
        return (__int64)v8;
      if ( v9 == ++v8 )
        goto LABEL_22;
    }
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_B5A0(518);
}

