__m128d *__fastcall sub_2EF00(__m128d *a1, QT::QAbstractScrollArea *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  __int64 v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __m128d v8; // xmm0
  __m128d v9; // xmm2
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(a2) + 32LL);
  v3 = *(_DWORD *)(v2 + 24);
  v4 = *(_DWORD *)(v2 + 32);
  v5 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(a2) + 32LL);
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v5 + 20)), _mm_cvtsi32_si128(v3));
  v7 = _mm_sub_epi32(
         _mm_add_epi32(
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v5 + 28)), _mm_cvtsi32_si128(v4)),
           _mm_loadl_epi64((const __m128i *)&qword_40D08)),
         v6);
  v12[0] = v7.m128i_i64[0];
  *(double *)v7.m128i_i64 = QT::QGraphicsView::mapToScene(a2, v12);
  v12[0] = 0x200000002LL;
  v11 = _mm_unpacklo_epi64(v7, v6);
  *(double *)v7.m128i_i64 = QT::QGraphicsView::mapToScene(a2, v12);
  v8 = (__m128d)_mm_unpacklo_epi64(v7, v6);
  v9 = _mm_sub_pd((__m128d)_mm_load_si128(&v11), v8);
  *a1 = v8;
  a1[1] = v9;
  return a1;
}

