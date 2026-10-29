__int64 __fastcall sub_D8F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+8h] [rbp-50h]
  _BYTE v15[28]; // [rsp+18h] [rbp-40h]
  int v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  unsigned __int64 v18; // [rsp+48h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  *(_OWORD *)&v15[12] = 0;
  v16 = 0;
  v13 = 64;
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_20280), (__m128i)(unsigned __int64)"Step back");
  v17 = 0xFFFFFFFFLL;
  *(__m128 *)v15 = _mm_loadh_ps((const double *)&PLUGIN_ptr);
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64))callui)(
                          127,
                          &v13,
                          a3,
                          a4,
                          a5,
                          a6)
    && !(unsigned __int8)callui(
                           129,
                           "Debug/Step into",
                           "replay:stepBack",
                           1,
                           v6,
                           v7,
                           v13,
                           v14.m128i_i64[0],
                           v14.m128i_i64[1],
                           *(_QWORD *)v15) )
  {
    callui(128, "replay:stepBack", v8, v9, v10, v11, v13, v14.m128i_i64[0], v14.m128i_i64[1], *(_QWORD *)v15);
  }
  return 0;
}

