void __fastcall notification_t__::vfunc_0(__int64 a1)
{
  QT::QLabel *v1; // rdi

  v1 = (QT::QLabel *)(a1 - 16);
  *(_QWORD *)v1 = &off_4DFA0;
  *((_QWORD *)v1 + 2) = notification_t___vtable_at__16;
  QT::QLabel::~QLabel(v1);
}
