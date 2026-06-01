void __fastcall sub_2CE30(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &off_4E3A8;
  *((_QWORD *)a1 + 2) = node_hover_info_t___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x50u);
}
