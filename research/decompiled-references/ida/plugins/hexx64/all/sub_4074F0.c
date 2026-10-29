__int64 __fastcall sub_4074F0(__int64 a1, __int64 a2, __m128i a3, __m128 a4, __m128 a5)
{
  __int16 v5; // ax
  bool v6; // zf
  __int64 result; // rax

  v5 = *(_WORD *)(a1 + 48);
  if ( v5 == 153 )
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 65) == 1 && *(_BYTE *)(a1 + 105) == 5 && *(_QWORD *)(a1 + 112) == 1 )
    {
      if ( !*(_BYTE *)(a2 + 16) && !(unsigned __int8)sub_3FACB0(a2, a3, a4, a5) )
        sub_3EB430(*(double *)a3.m128i_i64);
      sub_407440(a1, *(_DWORD *)(a2 + 12), a3, a4, a5);
      return 1;
    }
  }
  else if ( v5 == 588 )
  {
    return sub_3F7F00(a1, a1 + 24, 1, *(double *)a3.m128i_i64, a4, a5);
  }
  else
  {
    v6 = v5 == 46;
    result = 0;
    if ( v6 && *(_BYTE *)(a1 + 65) == 5 && *(_QWORD *)(a1 + 72) == 128 )
      return sub_3F7F00(a1, a1 + 24, 0, *(double *)a3.m128i_i64, a4, a5);
  }
  return result;
}

