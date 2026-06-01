__int64 __fastcall sub_2FAD0(QT::QGraphicsView *this, __int64 a2)
{
  double v2; // xmm0_8
  QT::QWidget *v3; // rax

  *((_BYTE *)this + 105) = 0;
  if ( (*(_BYTE *)(a2 + 35) & 4) != 0 )
  {
    v2 = pow(2.0, (double)*(int *)(a2 + 92) / 240.0);
    sub_2F8E0(this, v2);
  }
  else
  {
    QT::QGraphicsView::wheelEvent();
  }
  v3 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*((QT::QAbstractScrollArea **)this + 11));
  return QT::QWidget::update(v3);
}

