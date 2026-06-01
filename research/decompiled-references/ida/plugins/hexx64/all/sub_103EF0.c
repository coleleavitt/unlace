unsigned __int64 __fastcall sub_103EF0(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+0h] [rbp-58h] BYREF
  int v9; // [rsp+18h] [rbp-40h]
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v11; // [rsp+30h] [rbp-28h]
  __m128i v12; // [rsp+38h] [rbp-20h]
  unsigned __int64 v13; // [rsp+48h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v8[0] = &off_4DD380;
  v5 = *(_QWORD *)(a2 + 1440);
  v6 = *(_QWORD *)(a2 + 128);
  v8[1] = a1;
  v8[2] = a2;
  v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD4D8), (__m128i)(unsigned __int64)&off_4DD260);
  v9 = a4;
  v11 = v8;
  v12 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + v6));
  if ( !(unsigned int)sub_64E60(a3, (__int64)&v10, 0) )
    sub_317450(a3 + 2, (__int64 (__fastcall ***)(_QWORD, __int64))&v10.m128i_i64[1]);
  return v13 - __readfsqword(0x28u);
}

