void __fastcall sub_2CCF0(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &off_4E1A8;
  *((_QWORD *)a1 + 2) = notification_box_t___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x30u);
}

