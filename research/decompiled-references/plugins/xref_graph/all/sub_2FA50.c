__int64 __fastcall viewer_t__::vfunc_5(QT::QGraphicsView *this, __int64 a2, double a3, __m128 a4)
{
  const QT::QObject *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  QT::QGraphicsScene *v11; // rbx
  __int64 v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v5 = (const QT::QObject *)QT::QGraphicsView::scene(this);
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v5);
  if ( v6 && (v11 = (QT::QGraphicsScene *)v6, *(_BYTE *)(v6 + 17)) )
  {
    sub_22680(v6, a3, (__m128d)a4, (__int64)v5, v7, v8, v9, v10);
    sub_270C0(v11, a3, a4, (__int64)v5, v14, v15, v16, v17);
    v12 = a2;
    if ( *(_WORD *)(a2 + 8) != 198 )
      return QT::QGraphicsView::event(this, v12);
  }
  else
  {
    v12 = a2;
    if ( *(_WORD *)(a2 + 8) != 198 )
      return QT::QGraphicsView::event(this, v12);
  }
  return sub_2F9D0((QT::QAbstractScrollArea **)this, v12, a3);
}
