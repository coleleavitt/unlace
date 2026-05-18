__int64 __fastcall sub_CE4C0(int *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // rbx
  int *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // r11d
  _BYTE *v7; // rdi

  v2 = *a2;
  if ( *a1 > 0 )
  {
    v3 = a1;
    v4 = 0;
    v5 = (unsigned int)(*a1 - 1) + 1LL;
    do
    {
      v6 = v4;
      if ( (v3[6 * (int)v4 + 6] & 0x300) == 0 )
      {
        v7 = *(_BYTE **)&v3[6 * v4 + 4];
        if ( v7 )
        {
          if ( v2 && !(unsigned int)sub_CA2B0(v7, v2) )
            return (unsigned int)(v6 + 1);
        }
        else if ( !v2 )
        {
          return (unsigned int)(v6 + 1);
        }
      }
      ++v4;
    }
    while ( v4 != v5 );
  }
  return 0;
}
