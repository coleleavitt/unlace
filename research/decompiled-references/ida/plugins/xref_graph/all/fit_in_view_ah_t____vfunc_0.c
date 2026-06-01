__int64 __fastcall fit_in_view_ah_t__::vfunc_0(__int64 a1, __int64 a2)
{
  const QT::QObject *v2; // rsi
  QT::QGraphicsView *v3; // rax
  QT::QGraphicsView *v4; // rbx
  const QT::QObject *v5; // rax
  __int64 v6; // rax

  v2 = *(const QT::QObject **)(a2 + 168);
  if ( !v2 )
    return 0;
  v3 = (QT::QGraphicsView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_4D1E0, v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = (const QT::QObject *)QT::QGraphicsView::scene(v3);
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v5);
  return (*(__int64 (__fastcall **)(__int64, QT::QGraphicsView *, __int64))(*(_QWORD *)a1 + 32LL))(a1, v4, v6);
}

