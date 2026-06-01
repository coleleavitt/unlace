__int64 __fastcall sub_38420(__int64 a1, double *a2)
{
  __m128d v2; // xmm0
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  *(double *)&v4 = (double)(int)(QT::QRandomGenerator::_fillRange((QT::QRandomGenerator *)(a1 + 104), nullptr, 2) >> 11);
  v2 = 0;
  result = QT::QRandomGenerator::_fillRange((QT::QRandomGenerator *)(a1 + 104), nullptr, 2) >> 11;
  v2.m128d_f64[0] = (double)(int)result;
  _mm_storel_ps(
    a2,
    _mm_add_ps(
      (__m128)_mm_move_epi64((__m128i)_mm_div_ps(
                                        _mm_cvtpd_ps(
                                          _mm_add_pd(
                                            _mm_mul_pd(
                                              _mm_unpacklo_pd(v2, (__m128d)v4),
                                              _mm_unpacklo_pd(
                                                (__m128d)0x3CA0000000000000uLL,
                                                (__m128d)0x3CA0000000000000uLL)),
                                            _mm_unpacklo_pd(
                                              (__m128d)0xBFE0000000000000LL,
                                              (__m128d)0xBFE0000000000000LL))),
                                        (__m128)xmmword_41020)),
      (__m128)_mm_loadl_epi64((const __m128i *)a2)));
  return result;
}
