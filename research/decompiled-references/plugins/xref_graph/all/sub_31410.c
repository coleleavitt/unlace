unsigned __int64 __fastcall sub_31410(QT::QWidget *a1, __int64 a2)
{
  QT::QGridLayout *v2; // rbp
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r12
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  *((_QWORD *)a1 + 9) = 0;
  *(_QWORD *)a1 = &off_4E3A8;
  *((_QWORD *)a1 + 2) = node_hover_info_t___vtable_at__16;
  *(_OWORD *)((char *)a1 + 40) = 0;
  *(_OWORD *)((char *)a1 + 56) = 0;
  v2 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v2, a1);
  v3 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 5, "Name:");
  QT::QLabel::QLabel(v3, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v3, 0, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = operator new(0x28u);
  QT::QLabel::QLabel(v4, 0, 0);
  *((_QWORD *)a1 + 5) = v4;
  QT::QGridLayout::addWidget(v2, v4, 0, 1, 2);
  v5 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 5, "Type:");
  QT::QLabel::QLabel(v5, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v5, 1, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = operator new(0x28u);
  QT::QLabel::QLabel(v6, 0, 0);
  *((_QWORD *)a1 + 6) = v6;
  QT::QGridLayout::addWidget(v2, v6, 1, 1, 2);
  v7 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 8, "Address:");
  QT::QLabel::QLabel(v7, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v7, 2, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = operator new(0x28u);
  QT::QLabel::QLabel(v8, 0, 0);
  *((_QWORD *)a1 + 7) = v8;
  QT::QGridLayout::addWidget(v2, v8, 2, 1, 2);
  v9 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 20, "Cross referenced by:");
  QT::QLabel::QLabel(v9, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v9, 3, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = operator new(0x28u);
  QT::QLabel::QLabel(v10, 0, 0);
  *((_QWORD *)a1 + 8) = v10;
  QT::QGridLayout::addWidget(v2, v10, 3, 1, 2);
  v11 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 20, "Cross references to:");
  QT::QLabel::QLabel(v11, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v11, 4, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = operator new(0x28u);
  QT::QLabel::QLabel(v12, 0, 0);
  *((_QWORD *)a1 + 9) = v12;
  QT::QGridLayout::addWidget(v2, v12, 4, 1, 2);
  QT::QWidget::setVisible(a1, 0);
  QT::QWidget::setAttribute(a1, 51, 1);
  QT::QWidget::setAutoFillBackground(a1, 1);
  QT::QObject::setObjectName(a1, "ViewerOverlayWidget", 19);
  return v15 - __readfsqword(0x28u);
}
