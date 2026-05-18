char *__fastcall sub_D0C40(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6; // r10d
  int v7; // eax
  char *result; // rax
  char *v9; // rsi
  int v10; // edx

  v6 = *(_DWORD *)(a2 + 144);
  v7 = v6 - 1;
  if ( a3 >= 0 )
    v7 = a3;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 103LL) )
    result = (char *)&unk_241F50;
  else
    result = (char *)(*(_QWORD *)(a2 + 136) + 24LL * v7);
  if ( !*(_BYTE *)(a1 + 103) && v6 > a3 )
  {
    v9 = &result[24 * (v6 - 1 - a3) + 24];
    do
    {
      while ( *((_DWORD *)result + 1) != a4 )
      {
LABEL_10:
        result += 24;
        if ( result == v9 )
          return result;
      }
      if ( *result != 94 )
      {
        if ( *result == -121 )
        {
          *result = 126;
          *((_DWORD *)result + 1) = a6;
        }
        goto LABEL_10;
      }
      v10 = *((_DWORD *)result + 2);
      *result = 80;
      result += 24;
      *((_DWORD *)result - 5) = a5 + v10;
      *((_QWORD *)result - 2) = *((unsigned int *)result - 3);
    }
    while ( result != v9 );
  }
  return result;
}
