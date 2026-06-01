void __fastcall notification_box_t__::vfunc_0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &off_4E1A8;
  *((_QWORD *)v1 + 2) = notification_box_t___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}

