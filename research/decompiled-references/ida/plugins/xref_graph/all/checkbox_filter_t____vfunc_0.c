void __fastcall checkbox_filter_t__::vfunc_0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &off_4DDA0;
  *((_QWORD *)v1 + 2) = checkbox_filter_t___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}

