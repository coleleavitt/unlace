QT::QGraphicsView *__fastcall viewer_t__::vfunc_1(QT::QGraphicsView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "viewer_t") )
    return this;
  return (QT::QGraphicsView *)QT::QGraphicsView::qt_metacast(this, a2);
}
