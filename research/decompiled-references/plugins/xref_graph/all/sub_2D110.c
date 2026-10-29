void __fastcall sub_2D110(QT::QPushButton *a1)
{
  *(_QWORD *)a1 = &off_4DB80;
  *((_QWORD *)a1 + 2) = run_layout_button_t___vtable_at__16;
  QT::QPushButton::~QPushButton(a1);
}
