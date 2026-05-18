__int64 __fastcall sub_F0870(__int64 a1, __m128i *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 *v4; // rax
  __int64 v6; // rdx
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v11; // [rsp+0h] [rbp-68h] BYREF
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  __m128i v13; // [rsp+20h] [rbp-48h] BYREF
  __m128i v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  unsigned __int64 v16; // [rsp+48h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  result = 0;
  if ( a2->m128i_i8[0] != 44 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(__int64 **)a1;
    v6 = *(_QWORD *)(v3 + 56);
    v13.m128i_i16[2] = 1;
    v12.m128i_i64[0] = 0;
    v11.m128i_i64[0] = (__int64)v4;
    v11.m128i_i64[1] = (__int64)sub_F9A20;
    v13.m128i_i64[1] = v6;
    if ( !a2 || (sub_CDCD0((__int64)&v11, (__int64)a2), v13.m128i_i16[2]) )
    {
      if ( (a2->m128i_i32[1] & 0x20000001) != 0x20000000 && !a2[3].m128i_i64[1] )
      {
        v7 = (__m128i *)sub_DEEF0(**(_QWORD **)a1, 155, "1");
        if ( v7 )
        {
          v8 = *(_QWORD *)(v3 + 48);
          v11 = _mm_loadu_si128(v7);
          v12 = _mm_loadu_si128(v7 + 1);
          v13 = _mm_loadu_si128(v7 + 2);
          v14 = _mm_loadu_si128(v7 + 3);
          v9 = _mm_loadu_si128(a2);
          v15 = v7[4].m128i_i64[0];
          *v7 = v9;
          v7[1] = _mm_loadu_si128(a2 + 1);
          v7[2] = _mm_loadu_si128(a2 + 2);
          v7[3] = _mm_loadu_si128(a2 + 3);
          v7[4].m128i_i64[0] = a2[4].m128i_i64[0];
          v10 = v15;
          *a2 = _mm_load_si128(&v11);
          a2[4].m128i_i64[0] = v10;
          a2[1] = _mm_load_si128(&v12);
          a2[2] = _mm_load_si128(&v13);
          a2[3] = _mm_load_si128(&v14);
          *(_QWORD *)(v3 + 48) = sub_F07D0(*(_QWORD *)a1, v8, (__int64)v7);
          *(_WORD *)(a1 + 36) = 1;
        }
      }
    }
    return 1;
  }
  return result;
}
