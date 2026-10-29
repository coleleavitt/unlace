void __fastcall sub_6FB0(char *a1)
{
  QT::QPixmap *v2; // rdi

  v2 = (QT::QPixmap *)(a1 + 8);
  *((_QWORD *)v2 - 1) = qword_ACD8;
  QT::QPixmap::~QPixmap(v2);
  operator delete(a1, 0x48u);
}

