__int64 __fastcall sub_1FB50(QT::QGraphicsItem *a1)
{
  const QT::QObject *v1; // rax

  if ( !a1 )
    return 0;
  v1 = (const QT::QObject *)QT::QGraphicsItem::scene(a1);
  return QT::QMetaObject::cast((QT::QMetaObject *)&off_4EB40, v1);
}
