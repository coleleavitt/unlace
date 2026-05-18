__int64 __fastcall sub_CA590(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = a3 - 1;
  if ( a3 > 0 )
  {
    v4 = *a1;
    if ( (_BYTE)v4 )
    {
      if ( byte_1BF000[v4] == byte_1BF000[*a2] )
      {
        do
        {
          --v3;
          ++a1;
          ++a2;
          if ( v3 == -1 )
            return 0;
          v5 = *a1;
        }
        while ( (_BYTE)v5 && byte_1BF000[v5] == byte_1BF000[*a2] );
      }
    }
  }
  if ( v3 < 0 )
    return 0;
  return byte_1BF000[*a1] - (unsigned int)byte_1BF000[*a2];
}
