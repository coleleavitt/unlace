__int64 __fastcall sub_129320(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, double a6, __m128 a7)
{
  __int64 v11; // rdi
  __int64 v12; // r15
  __m128 si128; // xmm1
  __int64 v14; // rdi
  __m128 v16; // [rsp+0h] [rbp-78h] BYREF
  const void *v17[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h]
  __m128i v19; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  sub_124680((__int64)v17, a1, a4, 1, a6, a7);
  sub_648D0(a2, v17, a6);
  v11 = a2[2];
  v12 = v18;
  v18 = 0;
  si128 = (__m128)_mm_loadu_si128(&v19);
  v19 = 0;
  if ( v11 )
  {
    a2[3] = 0;
    v16 = si128;
    qfree(v11);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v16);
    v14 = v18;
    a2[2] = v12;
    *(__m128 *)(a2 + 3) = si128;
    if ( v14 )
    {
      v19.m128i_i64[0] = 0;
      qfree(v14);
    }
  }
  else
  {
    a2[2] = v12;
    *(__m128 *)(a2 + 3) = si128;
  }
  qfree((__int64)v17[0]);
  return sub_129150(a1, a2, *(_QWORD *)(a4 + 16), a5, a3, 0, 0.0, si128, 0x101u);
}

