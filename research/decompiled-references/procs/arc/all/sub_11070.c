__int64 __fastcall sub_11070(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, __int64 a6, bool *a7)
{
  unsigned int v9; // ebx
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int128 v13; // [rsp+18h] [rbp-50h]
  __int16 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
  v12 = 0;
  v13 = 0;
  v9 = sub_10FF0(a1, a2, a3, &si128);
  if ( (_BYTE)v9 )
  {
    if ( a4 )
      *a4 = si128.m128i_i64[0];
    if ( a5 )
      *a5 = si128.m128i_i64[1];
    if ( a7 )
      *a7 = (v14 & 0x400) != 0;
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v9;
}
