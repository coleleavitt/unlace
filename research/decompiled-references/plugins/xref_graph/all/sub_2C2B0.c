void __fastcall sub_2C2B0(__int64 a1)
{
  QT::QGraphicsView *v1; // rdi

  v1 = (QT::QGraphicsView *)(a1 - 16);
  *(_QWORD *)v1 = &minimap_t___vtable;
  *((_QWORD *)v1 + 2) = minimap_t___vtable_at__16;
  QT::QGraphicsView::~QGraphicsView(v1);
}
