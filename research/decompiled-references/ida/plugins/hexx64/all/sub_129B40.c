__int64 __fastcall sub_129B40(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v12; // rdi
  __int64 v13; // r15
  __m128 si128; // xmm1
  __int64 v15; // rdi
  __m128 v17; // [rsp+0h] [rbp-78h] BYREF
  const void *v18[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-58h]
  __m128i v20; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_127A20((__int64)v18, a1, a4, 1, a5, a6, a7, a8);
  sub_648D0(a3, v18, a7);
  v12 = a3[2];
  v13 = v19;
  v19 = 0;
  si128 = (__m128)_mm_loadu_si128(&v20);
  v20 = 0;
  if ( v12 )
  {
    a3[3] = 0;
    v17 = si128;
    qfree(v12);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v17);
    v15 = v19;
    a3[2] = v13;
    *(__m128 *)(a3 + 3) = si128;
    if ( v15 )
    {
      v20.m128i_i64[0] = 0;
      qfree(v15);
    }
  }
  else
  {
    a3[2] = v13;
    *(__m128 *)(a3 + 3) = si128;
  }
  qfree((__int64)v18[0]);
  return sub_124CC0(a1, a3, a4, a5, a2, 1u, 0.0, si128);
}

