void __fastcall sub_2C200(_QWORD *a1)
{
  *(a1 - 2) = &layout_slider_t___vtable;
  *a1 = layout_slider_t___vtable_at__16;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}

