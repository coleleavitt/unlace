void __fastcall drawer_t__::vfunc_0(__int64 a1)
{
  QT::QScrollArea *v1; // rdi

  v1 = (QT::QScrollArea *)(a1 - 16);
  *(_QWORD *)v1 = &off_4E7A8;
  *((_QWORD *)v1 + 2) = drawer_t___vtable_at__16;
  QT::QScrollArea::~QScrollArea(v1);
}

