unsigned __int64 __fastcall sub_28DB0(QT::QGraphicsItem *this, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax

  QT::QGraphicsItem::QGraphicsItem(this, nullptr);
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)((char *)this + 24) = 0;
  *(_QWORD *)this = &node_t___vtable;
  *(_OWORD *)((char *)this + 40) = 0;
  QT::QTextLayout::QTextLayout((QT::QGraphicsItem *)((char *)this + 56));
  *((_QWORD *)this + 10) = 0;
  *((_OWORD *)this + 4) = 0;
  v2 = getseg(a2);
  if ( v2 && *(_BYTE *)(v2 + 184) == 1 )
    v3 = 2;
  else
    v3 = (~((unsigned __int16)get_flags_ex(a2, 0) >> 8) & 6) != 0;
  *((_DWORD *)this + 22) = v3;
  *((_WORD *)this + 66) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0;
  *(_OWORD *)((char *)this + 104) = 0;
  *((_QWORD *)this + 12) = qvector_reserve((char *)this + 96, 0, 8, 8);
  QT::QGraphicsItem::setFlag(this, 1, 1);
  QT::QGraphicsItem::setFlag(this, 2, 1);
  QT::QGraphicsItem::setAcceptedMouseButtons(this, 3);
  QT::QGraphicsItem::setAcceptHoverEvents(this, 1);
  QT::QGraphicsItem::setFlag(this, 2048, 1);
  return sub_28A20(this, 30);
}

