void __fastcall sub_2CD90(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &off_4E5A8;
  *((_QWORD *)a1 + 2) = edge_hover_info_t___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x40u);
}

