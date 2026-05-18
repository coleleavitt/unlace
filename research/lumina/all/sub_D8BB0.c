void __fastcall sub_D8BB0(__m128i *a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rdx

  if ( !a1[6].m128i_i8[15] )
    sub_CC760((__int64)a1);
  if ( a1[2].m128i_i32[2] > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1[2].m128i_i64[0] + 32LL * v3 + 24);
      if ( !v4 )
        goto LABEL_6;
      if ( a1[4].m128i_i32[2] )
      {
        *(_WORD *)(v4 + 114) |= 8u;
LABEL_6:
        if ( a1[2].m128i_i32[2] <= ++v3 )
          break;
      }
      else
      {
        sub_D8A60(v4, a2);
        if ( a1[2].m128i_i32[2] <= ++v3 )
          break;
      }
    }
  }
  a1[2].m128i_i32[3] &= 0xFFFFFFEE;
  sub_D04F0((__int64)a1);
  if ( !a1[6].m128i_i8[15] )
    sub_CC7E0((__int64)a1, a2, v5);
  if ( !a1[4].m128i_i32[2] )
    sub_CF460(a1);
}
