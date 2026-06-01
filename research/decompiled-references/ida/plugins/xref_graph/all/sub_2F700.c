unsigned __int64 __fastcall sub_2F700(__m128i *this, QT::QPainter *a2, QT::QRectF *a3)
{
  unsigned __int64 v3; // r12
  __m128i v5; // xmm0
  const QT::QObject *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  QT::QPainterPath *v10; // r13
  const QT::QObject **v11; // rbx
  const QT::QObject **v12; // r13
  const QT::QObject **i; // rbx
  const QT::QObject **v14; // rax
  __int64 v15; // r12
  __int64 j; // rbx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 k; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  _OWORD v23[3]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v3 = 0;
  v5 = _mm_loadu_si128(this + 24);
  v24 = __readfsqword(0x28u);
  v23[2] = v5;
  v23[1] = v5;
  v23[0] = v5;
  QT::QPainter::fillRect(a2, a3, (const QT::QColor *)v23);
  v6 = (const QT::QObject *)QT::QGraphicsView::scene((QT::QGraphicsView *)this);
  v7 = *(_QWORD *)(QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v6) + 64LL);
  if ( v7 )
    v3 = *(_QWORD *)(v7 + 48);
  v8 = *((_QWORD *)this + 14);
  v9 = v8 + 16LL * *((_QWORD *)this + 15);
  while ( v9 != v8 )
  {
    v10 = (QT::QPainterPath *)(v8 + 8);
    v8 += 16;
    QT::QPainterPath::clear(v10);
    v6 = (const QT::QObject *)(&dword_0 + 1);
    QT::QPainterPath::setFillRule(v10, 1);
  }
  v11 = *((const QT::QObject ***)this + 20);
  v12 = &v11[5 * *((_QWORD *)this + 21)];
  if ( v12 != v11 )
  {
    for ( i = v11 + 2; ; i = v14 )
    {
      i[1] = nullptr;
      if ( (unsigned __int64)i[2] >= v3 )
      {
        v14 = i + 5;
        if ( v12 == i + 3 )
          break;
      }
      else
      {
        v6 = *i;
        *i = (const QT::QObject *)qvector_reserve(i, *i, v3, 8);
        v14 = i + 5;
        if ( v12 == i + 3 )
          break;
      }
    }
  }
  v15 = *((_QWORD *)this + 18);
  if ( v15 )
  {
    for ( j = 0; j != v15; ++j )
    {
      v17 = j;
      QT::QPainterPath::~QPainterPath((QT::QPainterPath *)(*((_QWORD *)this + 17) + 16 * v17 + 8));
    }
  }
  v18 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 18) = 0;
  if ( v18 )
  {
    for ( k = 0; k != v18; ++k )
    {
      v20 = *((_QWORD *)this + 23) + 40 * k;
      v21 = *(_QWORD *)(v20 + 16);
      if ( v21 )
      {
        *(_QWORD *)(v20 + 24) = 0;
        qfree(v21, (const char *)v6);
      }
    }
  }
  *((_QWORD *)this + 24) = 0;
  return v24 - __readfsqword(0x28u);
}

