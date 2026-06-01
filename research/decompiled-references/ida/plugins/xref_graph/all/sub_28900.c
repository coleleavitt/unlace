unsigned __int64 __fastcall sub_28900(__int64 a1, __m128d *a2)
{
  __int64 v2; // rax
  __m128i *(__fastcall *v3)(__m128i *, __int64); // rax
  __m128d v4; // xmm2
  __m128d v5; // xmm0
  __m128d v7; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v8[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v9 = __readfsqword(0x28u);
  v3 = *(__m128i *(__fastcall **)(__m128i *, __int64))(v2 + 24);
  if ( v3 == sub_27F40 )
  {
    v4 = *(__m128d *)(a1 + 24);
    v5 = *(__m128d *)(a1 + 40);
  }
  else
  {
    v3((__m128i *)v8, a1);
    v4 = (__m128d)v8[0];
    v5 = (__m128d)v8[1];
  }
  v7 = _mm_sub_pd(
         *a2,
         _mm_add_pd(_mm_mul_pd(v5, _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL)), v4));
  QT::QGraphicsItem::setPos(a1, &v7);
  return v9 - __readfsqword(0x28u);
}

