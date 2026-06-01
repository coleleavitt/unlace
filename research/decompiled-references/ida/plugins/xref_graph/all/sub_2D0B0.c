void __fastcall sub_2D0B0(QT::QScrollArea *a1)
{
  *(_QWORD *)a1 = &off_4E7A8;
  *((_QWORD *)a1 + 2) = drawer_t___vtable_at__16;
  QT::QScrollArea::~QScrollArea(a1);
  operator delete(a1, 0x28u);
}

