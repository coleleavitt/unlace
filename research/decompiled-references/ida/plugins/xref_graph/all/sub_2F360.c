__int64 __fastcall sub_2F360(
        __m128i *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128d v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __m128i si128; // [rsp+0h] [rbp-118h]
  __m128d v24; // [rsp+0h] [rbp-118h]
  __m128i v25; // [rsp+10h] [rbp-108h]
  __m128d v26; // [rsp+20h] [rbp-F8h]
  __m128d v27; // [rsp+30h] [rbp-E8h]
  __m128i v28; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v29; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v30[8]; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-A8h] BYREF
  __m128d v32; // [rsp+80h] [rbp-98h] BYREF
  __m128i v33[2]; // [rsp+90h] [rbp-88h] BYREF
  __m128d v34; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v35[40]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+E8h] [rbp-30h]

  v8 = _mm_loadu_si128(&a7);
  v36 = __readfsqword(0x28u);
  *((_BYTE *)this + 105) = 0;
  *(this + 14) = v8;
  *(this + 15) = _mm_loadu_si128(&a8);
  if ( *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 )
  {
    QT::QGraphicsView::scene((QT::QGraphicsView *)this);
    QT::QGraphicsScene::itemsBoundingRect((QT::QGraphicsScene *)&v28);
    *(this + 14) = _mm_loadu_si128(&v28);
    *(this + 15) = _mm_loadu_si128(&v29);
  }
  QT::QAbstractAnimation::stop((QT::QAbstractAnimation *)(this + 13));
  sub_2EF00(&v32, (QT::QAbstractScrollArea *)this);
  si128 = _mm_load_si128((const __m128i *)&v32);
  v25 = _mm_load_si128(v33);
  QT::QVariant::QVariant(
    v35,
    this,
    v9,
    v10,
    v11,
    v12,
    si128.m128i_i64[0],
    si128.m128i_i64[1],
    v25.m128i_i64[0],
    v25.m128i_i64[1]);
  QT::QVariantAnimation::setStartValue((QT::QVariantAnimation *)(this + 13), (const QT::QVariant *)v35);
  QT::QVariant::~QVariant((QT::QVariant *)v35);
  v27 = *((__m128d *)this + 14);
  v26 = *((__m128d *)this + 15);
  v13 = sub_2EA20((__int64)this);
  v14 = 2 * v13;
  v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v14));
  v16 = _mm_cvtepi32_pd(_mm_sub_epi32((__m128i)0LL, v15));
  v34 = _mm_sub_pd(_mm_add_pd(_mm_cvtepi32_pd(v15), v26), v16);
  v17 = _mm_load_si128((const __m128i *)&v34);
  v24 = _mm_add_pd(v27, v16);
  QT::QVariant::QVariant(
    v35,
    v35,
    v14,
    v18,
    v19,
    v20,
    *(_QWORD *)&v24.m128d_f64[0],
    *(_QWORD *)&v24.m128d_f64[1],
    v17.m128i_i64[0],
    v17.m128i_i64[1]);
  QT::QVariantAnimation::setEndValue((QT::QVariantAnimation *)(this + 13), (const QT::QVariant *)v35);
  QT::QVariant::~QVariant((QT::QVariant *)v35);
  QT::QVariantAnimation::setDuration((QT::QVariantAnimation *)(this + 13), 150);
  QT::QEasingCurve::QEasingCurve(v31, 3, *(double *)v17.m128i_i64, v16.m128d_f64[0]);
  QT::QVariantAnimation::setEasingCurve((QT::QVariantAnimation *)(this + 13), (const QT::QEasingCurve *)v31);
  QT::QEasingCurve::~QEasingCurve((QT::QEasingCurve *)v31);
  v31[1] = 0;
  v31[0] = &QT::QVariantAnimation::valueChanged;
  v21 = operator new(0x18u);
  *(_DWORD *)v21 = 1;
  *(_QWORD *)(v21 + 16) = this;
  *(_QWORD *)(v21 + 8) = sub_2EAD0;
  QT::QObject::connectImpl(v30, this + 13, v31, this, 0, v21, 0, 0, &QT::QVariantAnimation::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v30);
  return QT::QAbstractAnimation::start(this + 13, 0);
}

