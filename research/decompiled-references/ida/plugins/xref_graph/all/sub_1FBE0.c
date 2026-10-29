unsigned __int64 __fastcall sub_1FBE0(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128i v8; // [rsp+20h] [rbp-38h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v6 = a2;
  v9 = __readfsqword(0x28u);
  v4 = sub_1AB20(a1);
  v7[0] = &v6;
  v7[1] = a3;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BC48), (__m128i)(unsigned __int64)sub_1FE40);
  sub_1AA10(v4, (__int64)v7);
  if ( v8.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v8.m128i_i64[0])(v7, v7, 3);
  return v9 - __readfsqword(0x28u);
}

