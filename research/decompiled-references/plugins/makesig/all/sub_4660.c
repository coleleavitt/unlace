_QWORD *sub_4660()
{
  _QWORD *v0; // rbx
  __m128i v1; // xmm0
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // [rsp+0h] [rbp-68h] BYREF
  __m128i v6; // [rsp+8h] [rbp-60h]
  _QWORD *v7; // [rsp+18h] [rbp-50h]
  _QWORD *v8; // [rsp+20h] [rbp-48h]
  const char *v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v0 = (_QWORD *)qalloc_or_throw(352);
  memset(v0, 0, 0x68u);
  v0[1] = get_ph();
  v0[2] = get_ash();
  v0[3] = get_eah();
  *((_OWORD *)v0 + 2) = 0;
  *v0 = off_1FD00;
  v0[13] = off_1FCD0;
  *((_OWORD *)v0 + 3) = 0;
  *((_OWORD *)v0 + 4) = 0;
  *((_OWORD *)v0 + 5) = 0;
  v7 = v0 + 13;
  *((_OWORD *)v0 + 21) = 0;
  v9 = "Ctrl-Shift-F12";
  v1 = _mm_unpacklo_epi64(
         _mm_loadl_epi64((const __m128i *)&off_1FD18),
         (__m128i)(unsigned __int64)"Create ~S~IG file...");
  v0[12] = 0;
  v11 = 0x4FFFFFFFFLL;
  *((_DWORD *)v0 + 28) = 1;
  v0[15] = v0;
  v0[41] = 0;
  qword_20508 = (__int64)v0;
  v5 = 64;
  v8 = v0;
  v10 = 0;
  v6 = v1;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, int *))callui)(127, &v5) )
    callui(
      129,
      "File/Produce file/Create HTML file...",
      "makesig:create_signature",
      1,
      v2,
      v3,
      v5,
      v6.m128i_i64[0],
      v6.m128i_i64[1],
      v7,
      v8,
      v9,
      v10,
      v11);
  return v0;
}
