void __fastcall run_layout_button_t__::vfunc_1(_QWORD *a1)
{
  *(a1 - 2) = &off_4DB80;
  *a1 = run_layout_button_t___vtable_at__16;
  QT::QPushButton::~QPushButton((QT::QPushButton *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}

