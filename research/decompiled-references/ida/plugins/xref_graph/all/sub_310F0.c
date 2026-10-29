unsigned __int64 __fastcall sub_310F0(QT::QWidget *a1, __int64 a2)
{
  QT::QGridLayout *v2; // rbp
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r12
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  *((_QWORD *)a1 + 7) = 0;
  *(_QWORD *)a1 = &off_4E5A8;
  *((_QWORD *)a1 + 2) = edge_hover_info_t___vtable_at__16;
  *(_OWORD *)((char *)a1 + 40) = 0;
  v2 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v2, a1);
  v3 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 7, "Source:");
  QT::QLabel::QLabel(v3, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v3, 0, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = operator new(0x28u);
  QT::QLabel::QLabel(v4, 0, 0);
  *((_QWORD *)a1 + 5) = v4;
  QT::QGridLayout::addWidget(v2, v4, 0, 1, 2);
  v5 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 12, "Destination:");
  QT::QLabel::QLabel(v5, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v5, 1, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = operator new(0x28u);
  QT::QLabel::QLabel(v6, 0, 0);
  *((_QWORD *)a1 + 6) = v6;
  QT::QGridLayout::addWidget(v2, v6, 1, 1, 2);
  v7 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 5, "Type:");
  QT::QLabel::QLabel(v7, ptr, 0, 0);
  QT::QGridLayout::addWidget(v2, v7, 2, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = operator new(0x28u);
  QT::QLabel::QLabel(v8, 0, 0);
  *((_QWORD *)a1 + 7) = v8;
  QT::QGridLayout::addWidget(v2, v8, 2, 1, 2);
  QT::QWidget::setVisible(a1, 0);
  QT::QWidget::setAttribute(a1, 51, 1);
  QT::QObject::setObjectName(a1, "ViewerOverlayWidget", 19);
  return v11 - __readfsqword(0x28u);
}

