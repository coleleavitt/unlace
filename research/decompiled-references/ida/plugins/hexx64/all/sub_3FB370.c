void __fastcall sub_3FB370(__int64 a1, int a2, double a3)
{
  int v3; // ebp
  __int64 i; // rbx
  int dtype_size; // eax

  v3 = 1;
  for ( i = 0; i != 5; ++i )
  {
    if ( (v3 & a2) != 0 )
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 0x3Du, dtype_size, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, i, a3, 0);
    }
    v3 *= 2;
  }
}

