__int64 __fastcall sub_8670(__int64 a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( a2 > 7 )
  {
    if ( a2 <= 11 )
      sub_7F90(a2 - 8, a3, (__int64)a4);
    else
      sub_84F0(a2, (__int64)a3, a4, (__int64)a4, a5, a6);
  }
  else
  {
    a3[1] = 1;
    *((_WORD *)a3 + 3) = (a2 >> 1) + 21;
  }
  a4[32] = 0;
  result = *a3;
  a4[28] = result;
  a3[5] = 9;
  ++a3[32];
  return result;
}

