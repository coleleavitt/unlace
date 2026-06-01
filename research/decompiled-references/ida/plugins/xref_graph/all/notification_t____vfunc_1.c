void __fastcall notification_t__::vfunc_1(_QWORD *a1)
{
  *(a1 - 2) = &off_4DFA0;
  *a1 = notification_t___vtable_at__16;
  QT::QLabel::~QLabel((QT::QLabel *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}

