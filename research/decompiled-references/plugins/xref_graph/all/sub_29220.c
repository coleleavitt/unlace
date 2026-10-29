__int64 __fastcall sub_29220(QT::QGraphicsItem *this, QT::QGraphicsSceneMouseEvent *a2)
{
  __int64 v2; // rax

  v2 = sub_1FB50(this);
  if ( v2 )
    *(_BYTE *)(v2 + 16) = 0;
  return QT::QGraphicsItem::mouseReleaseEvent(this, a2);
}
