__int64 __fastcall sub_2E530(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  QT::QObject **v3; // rbx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (QT::QObject **)operator new(0x30u);
  sub_2E260(v3, a2);
  return QT::QBoxLayout::addWidget(v2, v3, 0, 2);
}

