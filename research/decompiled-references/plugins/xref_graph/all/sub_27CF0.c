__int64 __fastcall graph_t__::vfunc_5(
        QT::QGraphicsScene *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  if ( *(_WORD *)(a2 + 8) != 1001 )
    return QT::QGraphicsScene::event();
  sub_270C0(a1, a7, a8, a2, a3, a4, a5, a6);
  return 1;
}
