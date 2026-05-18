int __fastcall sub_C7E50(__int64 a1, int a2, char *a3, int a4, char *a5)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int v9; // ebx
  int result; // eax

  v6 = a4;
  if ( a2 )
  {
    v7 = a2;
    while ( a3[v7 - 1] == 32 )
    {
      if ( !--v7 )
        goto LABEL_11;
    }
    if ( !a4 )
      goto LABEL_6;
  }
  else
  {
LABEL_11:
    v7 = 0;
    if ( !a4 )
      return 0;
  }
  do
  {
    if ( a5[v6 - 1] != 32 )
      break;
    --v6;
  }
  while ( v6 );
LABEL_6:
  v8 = v7;
  if ( v6 <= v7 )
    v8 = v6;
  v9 = v7 - v6;
  result = memcmp(a3, a5, v8);
  if ( !result )
    return v9;
  return result;
}
