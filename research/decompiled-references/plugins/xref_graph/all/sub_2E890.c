__int64 __fastcall sub_2E890(QT::QAbstractScrollArea *this)
{
  QT::QWidget *v1; // rax

  QT::QGraphicsView::showEvent();
  v1 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
  return QT::QWidget::update(v1);
}
