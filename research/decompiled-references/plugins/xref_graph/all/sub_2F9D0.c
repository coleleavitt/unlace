__int64 __fastcall sub_2F9D0(QT::QAbstractScrollArea **this, __int64 a2, double a3)
{
  QT::QPinchGesture *v3; // rbx
  __int64 result; // rax
  QT::QWidget *v5; // rax

  v3 = (QT::QPinchGesture *)QT::QGestureEvent::gesture(a2, 4);
  result = 0;
  if ( v3 )
  {
    if ( (QT::QPinchGesture::changeFlags(v3) & 1) != 0 )
    {
      QT::QPinchGesture::scaleFactor(v3);
      sub_2F8E0((QT::QGraphicsView *)this, a3);
      v5 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(this + 11));
      QT::QWidget::update(v5);
    }
    return 1;
  }
  return result;
}
