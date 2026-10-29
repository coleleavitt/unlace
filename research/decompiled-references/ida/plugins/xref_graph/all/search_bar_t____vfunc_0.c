void __fastcall search_bar_t__::vfunc_0(__int64 a1)
{
  QT::QLineEdit *v1; // rdi

  v1 = (QT::QLineEdit *)(a1 - 16);
  *(_QWORD *)v1 = &off_4D578;
  *((_QWORD *)v1 + 2) = search_bar_t___vtable_at__16;
  QT::QLineEdit::~QLineEdit(v1);
}

