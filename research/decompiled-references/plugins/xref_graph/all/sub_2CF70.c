void __fastcall sub_2CF70(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &off_4D780;
  *((_QWORD *)a1 + 2) = options_t___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x28u);
}
