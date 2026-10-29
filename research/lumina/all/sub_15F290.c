__int64 *__fastcall sub_15F290(__m128i *a1, signed int a2, double a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  _QWORD *v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r12d

  v3 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 32) + 32LL * a2 + 24);
  sub_11C930((__int64)a1, 0, a2);
  v4 = a1[3].m128i_u32[1];
  a1[3].m128i_i32[1] = v4 + 3;
  sub_15F080(a1, a2, v4, 0, 0);
  v5 = *(_QWORD **)(v3 + 16);
  v6 = a1[3].m128i_u32[1];
  if ( v5 )
  {
    v7 = a1[3].m128i_i32[2] + 1;
    do
    {
      sub_F2F50((__int64)a1, v5[2], 0, v4, v7, v6, a3);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return sub_E22B0(a1->m128i_i64, a2);
}
