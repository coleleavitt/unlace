__int64 __fastcall sub_291D0(QT::QGraphicsItem *this, QT::QGraphicsSceneMouseEvent *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12

  v2 = sub_1FB50(this);
  if ( v2 )
  {
    v3 = v2;
    if ( (QT::QGraphicsSceneMouseEvent::buttons(a2) & 1) != 0 && (QT::QGraphicsItem::flags(this) & 1) != 0 )
      *(_BYTE *)(v3 + 16) = 1;
  }
  return QT::QGraphicsItem::mouseMoveEvent(this, a2);
}

