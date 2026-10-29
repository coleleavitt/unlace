__int64 __fastcall sub_8630(__int64 a1, int a2, __int64 a3, unsigned __int8 *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( a2 > 7 )
  {
    if ( a2 <= 11 )
      return sub_7F90(a2 - 8, (unsigned __int8 *)a3, (__int64)a4);
    else
      return sub_84F0(a2, a3, a4, (__int64)a4, a5, a6);
  }
  else
  {
    *(_BYTE *)(a3 + 1) = 1;
    *(_BYTE *)(a3 + 5) = 2;
    *(_WORD *)(a3 + 6) = (a2 >> 1) + 21;
  }
  return result;
}

