void __fastcall sub_2C1B0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &layout_slider_t___vtable;
  *((_QWORD *)v1 + 2) = layout_slider_t___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}

