__int64 __fastcall sub_3D2CC0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a1 & 7) > 2 )
    return 0;
  sub_3D2BF0(a4, a1 & 7, a1 >> 3, a2, a3);
  return 1;
}

