void __fastcall run_layout_button_t__::vfunc_0(__int64 a1)
{
  QT::QPushButton *v1; // rdi

  v1 = (QT::QPushButton *)(a1 - 16);
  *(_QWORD *)v1 = &off_4DB80;
  *((_QWORD *)v1 + 2) = run_layout_button_t___vtable_at__16;
  QT::QPushButton::~QPushButton(v1);
}

