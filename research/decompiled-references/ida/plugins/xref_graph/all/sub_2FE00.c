unsigned __int64 __fastcall sub_2FE00(QT::QWidget *a1, __int64 a2, double *a3, __int64 a4, double a5, double a6)
{
  QT::QVBoxLayout *v8; // r13
  QT::QHBoxLayout *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r12
  QT::QSlider *v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm2
  __int64 v15; // rax
  void *v17[4]; // [rsp+30h] [rbp-70h] BYREF
  void *ptr[3]; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, 0, 0);
  *(_QWORD *)a1 = &layout_slider_t___vtable;
  *((_QWORD *)a1 + 2) = layout_slider_t___vtable_at__16;
  v8 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v8, a1);
  QT::QLayout::setContentsMargins(v8, 0, 0, 0, 0);
  v9 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v9);
  v10 = operator new(0x28u);
  QT::QLabel::QLabel(v10, a4, 0, 0);
  QT::QBoxLayout::addWidget(v9, v10, 0, 0);
  v11 = operator new(0x28u);
  QT::QLabel::QLabel(v11, 0, 0);
  QT::QBoxLayout::addWidget(v9, v11, 0, 2);
  QT::QBoxLayout::addLayout(v8, v9, 0);
  v12 = (QT::QSlider *)operator new(0x28u);
  QT::QSlider::QSlider(v12, nullptr);
  QT::QAbstractSlider::setMinimum(v12, 0);
  QT::QAbstractSlider::setMaximum(v12, 100);
  QT::QAbstractSlider::setOrientation(v12, 1);
  QT::QWidget::setMinimumWidth(v12, 50);
  QT::QBoxLayout::addWidget(v8, v12, 2, 0);
  QT::QAbstractSlider::setSliderPosition(v12, (int)((*a3 - a5) / (a6 - a5) * 100.0));
  QT::QString::fromUtf8(ptr, 2, "%1");
  QT::QString::arg(v17, ptr, 0, 103, 0xFFFFFFFFLL, 32, *a3);
  QT::QLabel::setText(v11, v17);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v17[1] = nullptr;
  v17[0] = &QT::QAbstractButton::pressed;
  v13 = operator new(0x38u);
  *(_DWORD *)v13 = 1;
  *(double *)&v14 = a5;
  *(_QWORD *)(v13 + 32) = a3;
  *(_QWORD *)(v13 + 40) = v12;
  *((double *)&v14 + 1) = a6;
  *(_QWORD *)(v13 + 8) = &sub_30190;
  *(_QWORD *)(v13 + 48) = v11;
  *(_OWORD *)(v13 + 16) = v14;
  QT::QObject::connectImpl(ptr, a2, v17, a1, 0, v13, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  ptr[1] = nullptr;
  ptr[0] = &QT::QAbstractSlider::valueChanged;
  v15 = operator new(0x30u);
  *(_DWORD *)v15 = 1;
  *(_QWORD *)(v15 + 8) = &sub_302F0;
  *(_QWORD *)(v15 + 32) = a3;
  *(_QWORD *)(v15 + 40) = v11;
  *(_OWORD *)(v15 + 16) = v14;
  QT::QObject::connectImpl(v17, v12, ptr, a1, 0, v15, 0, 0, &QT::QAbstractSlider::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v17);
  return v19 - __readfsqword(0x28u);
}

