void __fastcall edge_t__::vfunc_0(QT::QGraphicsItem *this)
{
  QT::QPainterPath *v2; // rdi

  v2 = (QT::QGraphicsItem *)((char *)this + 96);
  *((_QWORD *)v2 - 12) = edge_t___vtable;
  QT::QPainterPath::~QPainterPath(v2);
  QT::QPainterPath::~QPainterPath((QT::QGraphicsItem *)((char *)this + 88));
  QT::QGraphicsItem::~QGraphicsItem(this);
}
