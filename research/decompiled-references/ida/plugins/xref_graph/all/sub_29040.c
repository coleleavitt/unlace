unsigned __int64 __fastcall sub_29040(QT::QGraphicsItem *this, QT::QGraphicsSceneMouseEvent *a2)
{
  QT::QGraphicsScene *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( (QT::QGraphicsSceneMouseEvent::buttons(a2) & 2) != 0 )
  {
    if ( (QT::QGraphicsSceneMouseEvent::modifiers(a2) & 0x2000000) == 0
      && (QT::QGraphicsSceneMouseEvent::modifiers(a2) & 0x4000000) == 0 )
    {
      v3 = (QT::QGraphicsScene *)sub_1FB50(this);
      QT::QGraphicsScene::selectedItems((QT::QGraphicsScene *)&ptr);
      if ( v9 <= 0 )
      {
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      else
      {
        v4 = v8;
        do
        {
          v5 = v4;
          if ( v8 + 8 * v9 == v4 )
          {
            v6 = -1;
            goto LABEL_14;
          }
          v4 += 8;
        }
        while ( this != *(QT::QGraphicsItem **)(v4 - 8) );
        v6 = (v5 - v8) >> 3;
LABEL_14:
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v6 != -1 )
          goto LABEL_7;
      }
      QT::QGraphicsScene::clearSelection(v3);
    }
LABEL_7:
    QT::QGraphicsItem::setSelected(this, 1);
  }
  if ( (QT::QGraphicsSceneMouseEvent::buttons(a2) & 1) == 0
    || (QT::QGraphicsSceneMouseEvent::modifiers(a2) & 0x2000000) == 0 )
  {
    return QT::QGraphicsItem::mousePressEvent(this, a2);
  }
  *((_BYTE *)a2 + 12) = 0;
  return v10 - __readfsqword(0x28u);
}

