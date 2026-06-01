unsigned __int64 __fastcall sub_3EE40(__int64 a1, QT::QPainter *a2, const __m128i *a3, double a4, __m128d a5)
{
  int v5; // eax
  __m128i v7; // xmm0
  double v8; // r14
  __int128 v9; // rax
  bool v10; // zf
  __m128i v11; // xmm0
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rbx
  __int64 *i; // r13
  __int64 v16; // r15
  __m128i *(__fastcall *v17)(__m128i *, __int64); // rdx
  char *v18; // rbx
  char *v19; // rbp
  QT::QTextFormat *v20; // rdi
  float v22; // xmm0_4
  unsigned __int128 v23; // rax
  char v25[8]; // [rsp+48h] [rbp-180h] BYREF
  char v26[8]; // [rsp+50h] [rbp-178h] BYREF
  char v27[8]; // [rsp+58h] [rbp-170h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-168h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v30; // [rsp+80h] [rbp-148h]
  __m128d v31[2]; // [rsp+90h] [rbp-138h] BYREF
  _OWORD v32[2]; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v33[14]; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+E0h] [rbp-E8h] BYREF
  _OWORD v35[7]; // [rsp+F0h] [rbp-D8h] BYREF
  _OWORD v36[2]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+188h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 4);
  v37 = __readfsqword(0x28u);
  if ( v5 == 1 )
  {
    v7 = _mm_loadu_si128(a3 + 18);
    v35[3] = v7;
  }
  else if ( v5 == 2 )
  {
    v7 = _mm_loadu_si128(a3 + 16);
    v35[1] = v7;
  }
  else if ( v5 )
  {
    v7 = _mm_loadu_si128(a3 + 19);
    v35[4] = v7;
  }
  else
  {
    v7 = _mm_loadu_si128(a3 + 17);
    v35[2] = v7;
  }
  v36[0] = v7;
  *(_QWORD *)v33 = v7.m128i_i64[0];
  *(_QWORD *)&v33[6] = *(__int64 *)((char *)v7.m128i_i64 + 6);
  if ( *(_DWORD *)a1 == 1 )
  {
    v22 = 1.0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
    {
      v8 = 1.0;
      goto LABEL_8;
    }
    v22 = 0.60000002;
  }
  *(_QWORD *)&v23 = sub_3E280((QT::QColor *)v33, v22);
  v8 = 2.0;
  *(_QWORD *)v33 = v23;
  v36[0] = v23;
  *(_QWORD *)&v33[6] = v23 >> 48;
LABEL_8:
  *(_QWORD *)&v9 = QT::QColor::darker((QT::QColor *)v33, 200);
  v10 = *(_BYTE *)(a1 + 8) == 0;
  v34 = v9;
  if ( !v10 )
  {
    v36[0] = _mm_loadu_si128(a3 + 20);
    *(_QWORD *)&v34 = *(_QWORD *)&v36[0];
    v8 = v8 + 2.0;
    *(_QWORD *)((char *)&v34 + 6) = v36[0] >> 48;
    v35[5] = v36[0];
  }
  QT::QBrush::QBrush(v32, &v34, 1);
  QT::QPen::QPen(v25, v32, 1, 32, 128, v8);
  QT::QBrush::~QBrush((QT::QBrush *)v32);
  QT::QBrush::QBrush(v26, v33, 1);
  QT::QPen::QPen((QT::QPen *)v27, (const QT::QPen *)v25);
  if ( a4 < 0.5 )
  {
    QT::QPen::widthF((QT::QPen *)v27);
    QT::QPen::setWidthF((QT::QPen *)v27, v8 + v8);
  }
  QT::QPainter::setPen(a2, (const QT::QPen *)v27);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)v26);
  v30 = 0;
  *(_OWORD *)ptr = 0;
  QT::QTextCharFormat::QTextCharFormat((QT::QTextCharFormat *)((char *)v32 + 8));
  v11 = _mm_loadu_si128(a3 + 21);
  *(_QWORD *)&v32[0] = 0x186A000000000LL;
  v35[6] = v11;
  v36[0] = v11;
  v35[0] = v11;
  QT::QBrush::QBrush(v31, v35, 1);
  QT::QBrush::operator QT::QVariant(v36, v31);
  QT::QTextFormat::setProperty((QT::QTextFormat *)((char *)v32 + 8), 2081, (const QT::QVariant *)v36);
  QT::QVariant::~QVariant((QT::QVariant *)v36);
  QT::QBrush::~QBrush((QT::QBrush *)v31);
  sub_3EA80((__m128i *)ptr, v30, (__int64 *)v32);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3E590((__m128i *)ptr, 0, 0, 0, v12, v13);
  QT::QTextFormat::~QTextFormat((QT::QTextFormat *)((char *)v32 + 8));
  v14 = *(__int64 **)(a1 + 16);
  for ( i = &v14[*(_QWORD *)(a1 + 24)]; i != v14; ++v14 )
  {
    while ( 1 )
    {
      v16 = *v14;
      v17 = *(__m128i *(__fastcall **)(__m128i *, __int64))(*(_QWORD *)*v14 + 24LL);
      if ( v17 == sub_27F40 )
      {
        v31[0] = (__m128d)_mm_loadu_si128((const __m128i *)(v16 + 24));
        v11 = _mm_loadu_si128((const __m128i *)(v16 + 40));
        v31[1] = (__m128d)v11;
      }
      else
      {
        v17((__m128i *)v31, *v14);
      }
      QT::QGraphicsItem::pos((QT::QGraphicsItem *)v16);
      a5 = _mm_add_pd((__m128d)_mm_unpacklo_epi64(v11, (__m128i)a5), v31[0]);
      v31[0] = a5;
      QT::QPainter::drawRects(a2, (const QT::QRectF *)v31, 1);
      if ( a4 >= 0.5 )
        break;
      if ( i == ++v14 )
        goto LABEL_22;
    }
    memset(v32, 0, sizeof(v32));
    QT::QGraphicsItem::pos((QT::QGraphicsItem *)v16);
    v28[0] = v11.m128i_i64[0];
    v28[1] = *(_QWORD *)&a5.m128d_f64[0];
    QT::QTextLayout::draw(v16 + 56, a2, v28, ptr, v32);
  }
LABEL_22:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v18 = (char *)ptr[1];
    v19 = (char *)ptr[1] + 24 * v30;
    if ( ptr[1] != v19 )
    {
      do
      {
        v20 = (QT::QTextFormat *)(v18 + 8);
        v18 += 24;
        QT::QTextFormat::~QTextFormat(v20);
      }
      while ( v19 != v18 );
    }
    free(ptr[0]);
  }
  QT::QPen::~QPen((QT::QPen *)v27);
  QT::QBrush::~QBrush((QT::QBrush *)v26);
  QT::QPen::~QPen((QT::QPen *)v25);
  return v37 - __readfsqword(0x28u);
}

