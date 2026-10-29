__int64 *__fastcall sub_15F330(__m128i *a1, __int64 *a2, __int64 *a3, double a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebp
  unsigned int v8; // r12d

  v6 = a2[12];
  v7 = -32768;
  if ( v6 )
    v7 = sub_CFB20(a1->m128i_i64[0], v6);
  sub_11C930((__int64)a1, 0, v7);
  v8 = a1[3].m128i_u32[1];
  a1[3].m128i_i32[1] = v8 + 3;
  if ( a3 )
    sub_15F080(a1, v7, v8, *a3, (__int64)"idx");
  else
    sub_15F080(a1, v7, v8, *a2, (__int64)"tbl");
  sub_F2F50((__int64)a1, (__int64)a2, (__int64)a3, v8, a1[3].m128i_i32[2] + 1, a1[3].m128i_u32[1], a4);
  return sub_E22B0(a1->m128i_i64, v7);
}
