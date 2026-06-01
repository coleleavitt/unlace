__int64 __fastcall sub_33610(QT::QScrollArea *this, QT::QAbstractButton *a2, QT::QAbstractButton *a3)
{
  QT::QWidget *v4; // r12
  QT::QVBoxLayout *v5; // rbp
  QT::QWidget *v6; // r14
  QT::QAbstractButton **v7; // r14
  QT::QWidget *v8; // r14

  QT::QScrollArea::QScrollArea(this, nullptr);
  *(_QWORD *)this = &off_4E7A8;
  *((_QWORD *)this + 2) = drawer_t___vtable_at__16;
  v4 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v4, 0, 0);
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5, v4);
  QT::QLayout::setContentsMargins(v5, 5, 5, 10, 5);
  v6 = (QT::QWidget *)operator new(0x28u);
  sub_30C60(v6, (__int64)a2);
  QT::QBoxLayout::addWidget(v5, v6, 0, 0);
  v7 = (QT::QAbstractButton **)operator new(0x88u);
  sub_32BA0(v7, a2, a3);
  QT::QBoxLayout::addWidget(v5, v7, 0, 0);
  v8 = (QT::QWidget *)operator new(0x28u);
  sub_30450(v8, (double *)a2);
  QT::QBoxLayout::addWidget(v5, v8, 0, 0);
  QT::QBoxLayout::addStretch(v5, 0);
  QT::QObject::setObjectName(this, "ViewerOverlayWidget", 19);
  QT::QAbstractScrollArea::setHorizontalScrollBarPolicy(this, 1);
  QT::QAbstractScrollArea::setVerticalScrollBarPolicy(this, 2);
  QT::QScrollArea::setWidgetResizable(this, 1);
  QT::QScrollArea::setWidget(this, v4);
  return QT::QWidget::setVisible(this, 0);
}
