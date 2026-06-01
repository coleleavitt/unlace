__int64 __fastcall sub_2E7D0(QT::QAbstractScrollArea *this, __int64 a2, __m128i a3, __m128i a4)
{
  QT::QWidget *v4; // rdi
  __int64 v6; // rbp
  __m128d v7; // xmm2
  __m128d v8; // xmm1
  unsigned __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
  {
    v6 = *((_QWORD *)this + 5);
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v7 = (__m128d)_mm_unpacklo_epi64(a3, a4);
    v8 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v7);
    v9 = _mm_cvttpd_epi32(
           _mm_add_pd(
             _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v8),
             v7)).m128i_u64[0];
    v10[0] = QT::QGraphicsView::mapToScene(this, &v9);
    v10[1] = *(_QWORD *)&v8.m128d_f64[0];
    QT::QGraphicsView::centerOn(v6, v10);
  }
  v4 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
  return QT::QWidget::update(v4);
}

