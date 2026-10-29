__int64 __fastcall sub_27010(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, double a5)
{
  __int64 v6; // r12
  __int64 result; // rax

  if ( a2 )
    a3[2].m128i_i8[1] = *(_BYTE *)(a2 + 33) & 3 | a3[2].m128i_i8[1] & 0xFC;
  v6 = *(_QWORD *)(a1 + 616);
  result = sub_26E20(a1, a3, a4, a5);
  *(_QWORD *)(a1 + 616) = v6;
  a3[2].m128i_i8[8] = 0;
  a3[5].m128i_i8[0] = 1;
  a3[7].m128i_i8[8] = 2;
  a3[10].m128i_i8[0] = 3;
  a3[12].m128i_i8[8] = 4;
  a3[15].m128i_i8[0] = 5;
  a3[17].m128i_i8[8] = 6;
  a3[20].m128i_i8[0] = 7;
  if ( !(_DWORD)result )
    a3[1].m128i_i32[2] = 0;
  return result;
}
