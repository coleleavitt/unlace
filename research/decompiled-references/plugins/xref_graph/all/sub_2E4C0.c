__int64 __fastcall sub_2E4C0(QT::QWidget *a1)
{
  QT::QVBoxLayout *v1; // rbp

  QT::QWidget::QWidget(a1, 0, 0);
  *((_QWORD *)a1 + 5) = 0;
  *(_QWORD *)a1 = &off_4E1A8;
  *((_QWORD *)a1 + 2) = notification_box_t___vtable_at__16;
  v1 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v1, a1);
  *((_QWORD *)a1 + 5) = v1;
  return QT::QLayout::setContentsMargins(v1, 0, 0, 0, 0);
}
