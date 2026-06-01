unsigned __int64 __fastcall sub_2B8C80(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+8h] [rbp-40h] BYREF
  __m128i v4; // [rsp+18h] [rbp-30h]
  unsigned __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  v3[0] = a2;
  v3[1] = 0;
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD428), (__m128i)(unsigned __int64)sub_2BDE20);
  create_nodeval_vd_merge_handler();
  if ( v4.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4.m128i_i64[0])(v3, v3, 3);
  return v5 - __readfsqword(0x28u);
}

