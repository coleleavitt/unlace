__int64 __fastcall fit_in_view_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  const QT::QObject *v3; // rsi
  QT::QGraphicsView *v4; // rax
  QT::QGraphicsView *v5; // rbp
  const QT::QObject *v6; // rax
  __int64 v7; // rax

  v3 = *(const QT::QObject **)(a2 + 168);
  if ( !v3 )
    return 6;
  v4 = (QT::QGraphicsView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_4D1E0, v3);
  v5 = v4;
  if ( !v4 )
    return 6;
  v6 = (const QT::QObject *)QT::QGraphicsView::scene(v4);
  v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v6);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, QT::QGraphicsView *, __int64))(*(_QWORD *)a1 + 40LL))(
           a1,
           *(_QWORD *)(a2 + 72),
           v5,
           v7);
}

