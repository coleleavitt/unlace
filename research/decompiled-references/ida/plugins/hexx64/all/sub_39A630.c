void __fastcall sub_39A630(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v14; // r9
  bool v15; // zf
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+8h] [rbp-A0h] BYREF
  _DWORD v20[4]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  __m128i v23; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  __int64 v26; // [rsp+60h] [rbp-48h]
  __int64 v27; // [rsp+68h] [rbp-40h]
  unsigned __int64 v28; // [rsp+78h] [rbp-30h]

  v19 = a2;
  v28 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_384450((__int64 *)&v19, 1) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      115,
      v19,
      0xFFFFFFFFLL,
      5,
      &callui,
      v14);
    return;
  }
  v15 = *(_QWORD *)(a1 + 8) == 0;
  v20[2] = a5;
  v16 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  v20[0] = a3;
  v20[1] = a4;
  v22 = -1;
  v21 = v16;
  if ( v15 || (a6 & 8) != 0 )
  {
LABEL_6:
    sub_3948E0((__int64)v20, a6, a1, 0, *(double *)v16.m128i_i64, a8, a9, a10);
    return;
  }
  v16.m128i_i64[0] = 0;
  v17 = *(_QWORD *)(a1 + 128);
  v24 = 0;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  v23 = 0;
  if ( (unsigned int)sub_3937C0(&v23, v17, a1, (__int64)v20, 0, 1, 0.0, a8, a9, a10) != 1 )
  {
    if ( v27 )
      qfree(v27);
    goto LABEL_6;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    149,
    *(_QWORD *)(a1 + 8),
    &v23,
    7,
    &callui,
    v18);
  if ( v27 )
    qfree(v27);
}

