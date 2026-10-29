unsigned __int64 __fastcall sub_3BE20(__int64 a1, unsigned __int64 *a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v4; // [rsp+10h] [rbp-38h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3[0] = sub_3A760;
  v3[1] = 0;
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_A0C30), (__m128i)(unsigned __int64)sub_38510);
  sub_3BAA0(a2, a1, (__int64)v3, (__int64)",");
  if ( v4.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4.m128i_i64[0])(v3, v3, 3);
  return v5 - __readfsqword(0x28u);
}
