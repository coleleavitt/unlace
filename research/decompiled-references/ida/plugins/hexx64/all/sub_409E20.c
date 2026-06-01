void __fastcall sub_409E20(__int64 a1, double a2)
{
  unsigned __int16 v2; // ax
  int v3; // r14d
  int v4; // r13d
  __int64 v5; // rbx
  int v6; // ebp
  int dtype_size; // eax

  v2 = *(_WORD *)(a1 + 48);
  if ( v2 == 18 )
  {
LABEL_18:
    v4 = 31;
    v3 = 0;
    goto LABEL_8;
  }
  if ( v2 > 0x12u )
  {
    if ( v2 == 209 )
      goto LABEL_7;
    if ( v2 != 216 )
      return;
  }
  else if ( v2 != 7 )
  {
    if ( v2 != 16 )
    {
      if ( v2 != 6 )
        return;
LABEL_7:
      v3 = 0;
      v4 = 31;
      if ( *(_BYTE *)(a1 + 65) != 1 )
        goto LABEL_8;
LABEL_16:
      if ( *(_WORD *)(a1 + 70) == 4 )
      {
        v4 = 20;
        v3 = 11;
      }
      goto LABEL_8;
    }
    goto LABEL_18;
  }
  v4 = 22;
  v3 = 9;
  if ( *(_BYTE *)(a1 + 65) == 1 )
    goto LABEL_16;
LABEL_8:
  v5 = 0;
  v6 = 1;
  do
  {
    if ( (v6 & v3) != 0 )
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 3u, dtype_size, 0, 0x3BEA45E214ADDC55LL, v5, a2, 0);
    }
    ++v5;
    v6 *= 2;
  }
  while ( v5 != 5 );
  sub_3FB370(a1, v4, a2);
}

