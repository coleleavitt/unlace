QT::QGraphicsScene *__fastcall graph_t__::vfunc_1(QT::QGraphicsScene *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "graph_t") )
    return this;
  return (QT::QGraphicsScene *)QT::QGraphicsScene::qt_metacast(this, a2);
}
