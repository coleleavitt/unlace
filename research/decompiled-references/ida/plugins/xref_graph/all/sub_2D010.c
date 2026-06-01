void __fastcall sub_2D010(QT::QLabel *a1)
{
  *(_QWORD *)a1 = &off_4DFA0;
  *((_QWORD *)a1 + 2) = notification_t___vtable_at__16;
  QT::QLabel::~QLabel(a1);
  operator delete(a1, 0x30u);
}

