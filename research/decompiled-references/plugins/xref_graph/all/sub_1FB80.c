QT::QGraphicsScene *__fastcall sub_1FB80(QT::QGraphicsScene *this, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 16) )
  {
    QT::QGraphicsScene::selectedItems(this);
  }
  else
  {
    *((_QWORD *)this + 2) = 0;
    *(_OWORD *)this = 0;
  }
  return this;
}
