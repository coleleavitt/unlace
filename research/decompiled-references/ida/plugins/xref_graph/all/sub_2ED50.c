void __fastcall sub_2ED50(int a1, _QWORD *a2)
{
  QT::QGraphicsView *v2; // rdi
  __m128d v3; // xmm3
  signed int v4; // eax
  __m128d v5; // xmm2
  __int64 v6; // rdi
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128d v9; // xmm1
  QT::QWidget *v10; // rax
  double v11; // [rsp+0h] [rbp-68h]
  double v12; // [rsp+8h] [rbp-60h]
  __m128d v13; // [rsp+20h] [rbp-48h] BYREF
  __m128d v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      sub_39880(a2[2] + 128LL);
      v2 = (QT::QGraphicsView *)a2[3];
      if ( *((_BYTE *)v2 + 105) )
      {
        QT::QGraphicsView::scene(v2);
        QT::QGraphicsScene::itemsBoundingRect((QT::QGraphicsScene *)&v13);
        v3.m128d_f64[0] = v13.m128d_f64[0];
        v12 = v14.m128d_f64[0];
        v3.m128d_f64[1] = v13.m128d_f64[1];
        v11 = v14.m128d_f64[1];
        v4 = sub_2EA20(a2[3]);
        v5 = 0;
        v6 = a2[3];
        v5.m128d_f64[0] = (double)(2 * v4) + v11;
        v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(2 * v4));
        v8 = _mm_sub_epi32((__m128i)0LL, _mm_unpacklo_epi64(v7, v7));
        v13 = _mm_add_pd(_mm_cvtepi32_pd(v8), v3);
        v9 = 0;
        v9.m128d_f64[0] = (double)v4 + v12;
        v14 = _mm_sub_pd(_mm_unpacklo_pd(v9, v5), _mm_cvtepi32_pd(_mm_shuffle_epi32(v8, 238)));
        QT::QGraphicsView::fitInView(v6, &v13, 1);
        v10 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a2[3] + 88LL));
        QT::QWidget::update(v10);
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x20u);
  }
}

