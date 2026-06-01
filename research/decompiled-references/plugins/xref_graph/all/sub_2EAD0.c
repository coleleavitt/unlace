void __fastcall sub_2EAD0(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbp
  QT::QVariant *v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128d v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdi
  unsigned __int64 v16; // rax
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  QT::QVariant *v21; // r14
  __int64 v22; // rax
  QT::QWidget *v23; // rdi
  __m128i si128; // [rsp+10h] [rbp-E8h]
  __m128d v25; // [rsp+20h] [rbp-D8h]
  __m128d v26; // [rsp+30h] [rbp-C8h]
  __m128i v27; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v28; // [rsp+50h] [rbp-A8h]
  __m128d v29; // [rsp+60h] [rbp-98h]
  __m128d v30; // [rsp+70h] [rbp-88h] BYREF
  __m128i v31; // [rsp+80h] [rbp-78h] BYREF
  __m128i v32; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v33[40]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+C8h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = (_OWORD *)a2[2];
      v5 = *(QT::QVariant **)(a4 + 8);
      v26 = (__m128d)v4[14];
      v25 = (__m128d)v4[15];
      v6 = sub_2EA20((__int64)v4);
      v7 = 2 * v6;
      v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v7));
      v9 = _mm_cvtepi32_pd(_mm_sub_epi32((__m128i)0LL, v8));
      v29 = _mm_add_pd(v26, v9);
      v30 = _mm_sub_pd(_mm_add_pd(_mm_cvtepi32_pd(v8), v25), v9);
      si128 = _mm_load_si128((const __m128i *)&v30);
      QT::QVariant::QVariant(
        v33,
        a2,
        v7,
        v10,
        v11,
        v12,
        *(_QWORD *)&v29.m128d_f64[0],
        *(_QWORD *)&v29.m128d_f64[1],
        si128.m128i_i64[0],
        si128.m128i_i64[1]);
      QT::QVariantAnimation::setEndValue((QT::QVariantAnimation *)(v4 + 13), (const QT::QVariant *)v33);
      QT::QVariant::~QVariant((QT::QVariant *)v33);
      v13 = a2[2];
      v14 = *((_QWORD *)v5 + 3);
      v15 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = v14 >> 2;
      if ( v15 == QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QRectF>::metaType )
        goto LABEL_11;
      if ( !v15 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QRectF>::metaType )
        goto LABEL_15;
      v17 = *(_DWORD *)&byte_9[4 * v16 + 3];
      if ( !v17 )
        v17 = QT::QMetaType::registerHelper(v15);
      v18 = QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QRectF>::metaType[3];
      if ( !v18 )
        v18 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QRectF>::metaType);
      if ( v18 == v17 )
      {
LABEL_11:
        v19 = *(_QWORD *)v5;
        v20 = *(int *)(*(_QWORD *)v5 + 4LL);
        v27 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)v5 + v20));
        v28 = _mm_loadu_si128((const __m128i *)(v19 + v20 + 16));
      }
      else
      {
LABEL_15:
        v21 = v5;
        v31 = 0;
        v32 = 0;
        if ( (*((_BYTE *)v5 + 24) & 1) != 0 )
          v21 = (QT::QVariant *)(*(int *)(*(_QWORD *)v5 + 4LL) + *(_QWORD *)v5);
        v22 = QT::QVariant::metaType(v5);
        QT::QMetaType::convert(v22, v21, QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QRectF>::metaType, &v31);
        v27 = _mm_load_si128(&v31);
        v28 = _mm_load_si128(&v32);
      }
      QT::QGraphicsView::fitInView(v13, &v27, 1);
      v23 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a2[2] + 88LL));
      QT::QWidget::update(v23);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
