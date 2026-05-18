unsigned __int64 __fastcall sub_C6D30(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int32 v5; // edx
  _BYTE v7[304]; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int64 v8; // [rsp+138h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  qmemcpy(v7, a1, sizeof(v7));
  qmemcpy(a1, a2, 0x130u);
  qmemcpy(a2, v7, 0x130u);
  v2 = a1[1].m128i_i64[0];
  a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
  a2[1].m128i_i64[0] = v2;
  v3 = a1->m128i_i64[1];
  a1->m128i_i64[1] = a2->m128i_i64[1];
  a2->m128i_i64[1] = v3;
  v4 = a1[15].m128i_i64[1];
  a1[15].m128i_i64[1] = a2[15].m128i_i64[1];
  a2[15].m128i_i64[1] = v4;
  a2[17].m128i_i32[3] = a1[17].m128i_i32[3];
  a2[12].m128i_i8[4] = a1[12].m128i_i8[4];
  a2[13] = _mm_loadu_si128(a1 + 13);
  a2[14] = _mm_loadu_si128(a1 + 14);
  v5 = a1[15].m128i_i32[0];
  ++a2[14].m128i_i32[1];
  a2[15].m128i_i32[0] = v5;
  return __readfsqword(0x28u) ^ v8;
}
