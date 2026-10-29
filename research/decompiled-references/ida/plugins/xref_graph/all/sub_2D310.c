void __fastcall sub_2D310(int a1, QT::QGraphicsView **a2, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      QT::QGraphicsView::fitInView(a2[2], *(_QWORD *)(a4 + 8), 1);
      QT::QGraphicsView::scale(a2[2], 0.8, 0.8);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}

