__int64 __fastcall sub_28FA0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  QT::QGraphicsItem **v8; // rbx
  QT::QGraphicsItem **v9; // r15
  QT::QGraphicsItem *v10; // rdi

  if ( a3 == 9 )
  {
    v8 = *(QT::QGraphicsItem ***)(a2 + 96);
    v9 = &v8[*(_QWORD *)(a2 + 104)];
    while ( v9 != v8 )
    {
      v10 = *v8++;
      sub_2AD20(v10);
    }
  }
  QT::QGraphicsItem::itemChange(a1, a2, a3, a4);
  return a1;
}
