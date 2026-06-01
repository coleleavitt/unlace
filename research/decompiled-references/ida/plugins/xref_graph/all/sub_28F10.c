unsigned __int64 __fastcall sub_28F10(__int64 a1, __int64 *a2, __m128i a3, __m128i a4)
{
  __m128d v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_28DB0((QT::QGraphicsItem *)a1, a2[2]);
  sub_28850((QT::QGraphicsItem *)a2);
  v5 = _mm_sub_pd(
         (__m128d)_mm_unpacklo_epi64(a3, a4),
         _mm_add_pd(
           _mm_mul_pd(
             _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
             *(__m128d *)(a1 + 40)),
           *(__m128d *)(a1 + 24)));
  QT::QGraphicsItem::setPos(a1, &v5);
  return v6 - __readfsqword(0x28u);
}

