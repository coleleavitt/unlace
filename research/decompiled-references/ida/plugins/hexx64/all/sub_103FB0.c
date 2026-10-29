unsigned __int64 __fastcall sub_103FB0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD v10[5]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v11; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+40h] [rbp-28h]
  __m128i v13; // [rsp+48h] [rbp-20h]
  unsigned __int64 v14; // [rsp+58h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v10[2] = a3;
  v6 = *(_QWORD *)(a1 + 320);
  v10[0] = &off_4DD418;
  v7 = *(_QWORD *)(v6 + 128);
  v8 = *(_QWORD *)(v6 + 1440);
  v10[3] = a4;
  v10[1] = a1;
  v10[4] = a5;
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD4D8), (__m128i)(unsigned __int64)&off_4DD260);
  v12 = v10;
  v13 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(v8 + v7));
  if ( !(unsigned int)sub_64E60(a2, (__int64)&v11, 0) )
    sub_317450(a2 + 2, (__int64 (__fastcall ***)(_QWORD, __int64))&v11.m128i_i64[1]);
  return v14 - __readfsqword(0x28u);
}

