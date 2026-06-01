void __fastcall node_hover_info_t__::vfunc_0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &off_4E3A8;
  *((_QWORD *)v1 + 2) = node_hover_info_t___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}

