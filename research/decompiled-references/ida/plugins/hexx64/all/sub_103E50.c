unsigned __int64 __fastcall sub_103E50(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+18h] [rbp-40h]
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-28h]
  __m128i v13; // [rsp+38h] [rbp-20h]
  unsigned __int64 v14; // [rsp+48h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v9[1] = a1;
  v6 = *(_QWORD *)(a2 + 1440);
  v9[0] = &off_4DD380;
  v7 = *(_QWORD *)(a2 + 128);
  v9[2] = a2;
  v10 = a4;
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD4D8), (__m128i)(unsigned __int64)&off_4DD260);
  v12 = v9;
  v13 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + v7));
  sub_317450(a3, (__int64 (__fastcall ***)(_QWORD, __int64))&v11.m128i_i64[1]);
  return v14 - __readfsqword(0x28u);
}

