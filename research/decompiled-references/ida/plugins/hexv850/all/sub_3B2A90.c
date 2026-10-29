__int64 __fastcall sub_3B2A90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128i a7,
        __m128i a8,
        double a9,
        double a10,
        __m128 a11)
{
  double v12; // xmm4_8
  double v13; // xmm5_8
  __m128 *v14; // r13
  __int64 v15; // rbx
  __m128 *v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm4
  __m128 v20; // xmm5
  __m128 *v21; // rbx
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 *v24; // rdi
  __int64 v25; // rdi
  __m128 v26; // xmm0
  __int64 (__fastcall **v28)(); // [rsp+0h] [rbp-98h] BYREF
  int v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+10h] [rbp-88h]
  __int128 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int128 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  __m128 *v36; // [rsp+50h] [rbp-48h]
  __int128 v37; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  v35 = a3;
  v31 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v28 = off_4BADD0;
  v36 = nullptr;
  v33 = 0;
  v37 = 0;
  sub_3AA340(a2, (__int64 *)&v28, a4);
  v14 = v36;
  v15 = 40 * v37;
  v16 = (__m128 *)((char *)v36 + 40 * v37);
  if ( v36 != v16 )
  {
    v17 = 0xCCCCCCCCCCCCCCCDLL * (v15 >> 3);
    if ( v17 )
    {
      _BitScanReverse64(&v18, v17);
      sub_3B2700(
        (__int64)v36,
        (unsigned __int64)v36 + 40 * v37,
        2LL * (int)v18,
        0.0,
        *(double *)a6.m128_u64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128i_i64,
        v12,
        v13,
        a11);
      if ( v15 > 640 )
      {
        v21 = v14 + 40;
        sub_3A41F0(v14, v14 + 40, (__m128i)0LL, a6, a7, a8, v19, v20, a11);
        do
        {
          v24 = (__int64 *)v21;
          v21 = (__m128 *)((char *)v21 + 40);
          sub_3A4100(v24, 0.0, *(double *)a6.m128_u64, *(double *)a7.m128i_i64, *(double *)a8.m128i_i64, v22, v23, a11);
        }
        while ( v16 != v21 );
        v16 = v36;
        goto LABEL_7;
      }
    }
    else
    {
      sub_3B2700(
        (__int64)v36,
        (unsigned __int64)v36 + 40 * v37,
        -2,
        0.0,
        *(double *)a6.m128_u64,
        *(double *)a7.m128i_i64,
        *(double *)a8.m128i_i64,
        v12,
        v13,
        a11);
    }
    sub_3A41F0(v14, v16, (__m128i)0LL, a6, a7, a8, v19, v20, a11);
    v16 = v36;
  }
LABEL_7:
  v25 = v32;
  *(_QWORD *)a1 = v16;
  v26 = _mm_loadh_ps((const double *)&v37 + 1);
  v28 = off_4AF6D8;
  *(__m128 *)(a1 + 8) = v26;
  if ( v25 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return a1;
}

