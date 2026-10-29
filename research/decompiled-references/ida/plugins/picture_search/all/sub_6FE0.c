void __fastcall sub_6FE0(__int64 a1)
{
  QT::QPixmap *v1; // rdi

  v1 = (QT::QPixmap *)(a1 + 8);
  *((_QWORD *)v1 - 1) = qword_ACD8;
  QT::QPixmap::~QPixmap(v1);
}

