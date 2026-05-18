__int64 *__fastcall sub_DD010(__int64 a1, __int64 a2, int a3)
{
  __int64 *result; // rax
  int v6; // ecx
  __int64 v7; // rsi
  int v8; // r8d
  char v9; // di
  __int64 *v10; // rcx

  result = sub_DBF10(a1, a3 / 2 + 1);
  if ( result )
  {
    if ( a3 - 1 <= 0 )
    {
      v10 = result;
    }
    else
    {
      v6 = 0;
      do
      {
        v7 = v6;
        v8 = v6;
        v6 += 2;
        v9 = *(_BYTE *)(a2 + v7);
        *((_BYTE *)result + (v8 >> 1)) = (*(_BYTE *)(a2 + v7 + 1)
                                        + 8 * ((*(char *)(a2 + v7 + 1) >> 6) & 1)
                                        + ((*(char *)(a2 + v7 + 1) >> 6) & 1))
                                       & 0xF
                                       | (16 * (v9 + 8 * ((v9 >> 6) & 1) + ((v9 >> 6) & 1)));
      }
      while ( a3 - 1 > v6 );
      v10 = (__int64 *)((char *)result + (v6 >> 1));
    }
    *(_BYTE *)v10 = 0;
  }
  return result;
}
