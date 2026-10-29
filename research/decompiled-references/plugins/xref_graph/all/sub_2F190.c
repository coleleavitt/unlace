__int64 __fastcall sub_2F190(QT::QAbstractScrollArea *this, double a2, double a3)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  _BYTE v11[8]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v12[2]; // [rsp+8h] [rbp-78h] BYREF
  _BYTE v13[40]; // [rsp+18h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  QT::QAbstractAnimation::stop((QT::QAbstractScrollArea *)((char *)this + 208));
  v4 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(this) + 32LL);
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 24);
  v7 = QT::QAbstractScrollArea::viewport(this);
  v8 = _mm_sub_epi32(
         _mm_add_epi32(
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v7 + 32) + 28LL)), _mm_cvtsi32_si128(v5)),
           _mm_loadl_epi64((const __m128i *)&qword_40D18)),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v7 + 32) + 20LL)), _mm_cvtsi32_si128(v6)));
  v12[0] = _mm_srai_epi32(_mm_sub_epi32(v8, _mm_cmpgt_epi32((__m128i)0LL, v8)), 1u).m128i_u64[0];
  *(double *)v8.m128i_i64 = QT::QGraphicsView::mapToScene(this, v12);
  QT::QVariant::QVariant(v13, *(double *)v8.m128i_i64);
  QT::QVariantAnimation::setStartValue((QT::QAbstractScrollArea *)((char *)this + 208), (const QT::QVariant *)v13);
  QT::QVariant::~QVariant((QT::QVariant *)v13);
  QT::QVariant::QVariant(v13, a2);
  QT::QVariantAnimation::setEndValue((QT::QAbstractScrollArea *)((char *)this + 208), (const QT::QVariant *)v13);
  QT::QVariant::~QVariant((QT::QVariant *)v13);
  QT::QVariantAnimation::setDuration((QT::QAbstractScrollArea *)((char *)this + 208), 150);
  QT::QEasingCurve::QEasingCurve(v12, 3, a2, a3);
  QT::QVariantAnimation::setEasingCurve((QT::QAbstractScrollArea *)((char *)this + 208), (const QT::QEasingCurve *)v12);
  QT::QEasingCurve::~QEasingCurve((QT::QEasingCurve *)v12);
  v12[1] = 0;
  v12[0] = &QT::QVariantAnimation::valueChanged;
  v9 = operator new(0x18u);
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 16) = this;
  *(_QWORD *)(v9 + 8) = sub_2D660;
  QT::QObject::connectImpl(v11, (char *)this + 208, v12, this, 0, v9, 0, 0, &QT::QVariantAnimation::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  return QT::QAbstractAnimation::start((char *)this + 208, 0);
}
