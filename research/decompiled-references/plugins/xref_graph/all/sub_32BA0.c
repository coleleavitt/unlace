unsigned __int64 __fastcall sub_32BA0(QT::QAbstractButton **a1, QT::QAbstractButton *a2, QT::QAbstractButton *a3)
{
  QT::QHBoxLayout *v4; // r13
  __int64 v5; // r14
  QT::QAbstractButton *v6; // r14
  QT::QHBoxLayout *v7; // r14
  QT::QLineEdit *v8; // r13
  QT::QAbstractButton *v9; // r13
  QT::QAbstractButton *v10; // r13
  __int64 v11; // r13
  QT::QHBoxLayout *v12; // r13
  QT::QAbstractButton *v13; // r15
  QT::QAbstractButton *v14; // r15
  QT::QAbstractButton *v15; // r15
  QT::QAbstractButton *v16; // r15
  __int64 v17; // r13
  QT::QHBoxLayout *v18; // r13
  QT::QAbstractButton *v19; // r15
  QT::QAbstractButton *v20; // r14
  QT::QAbstractButton *v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  int *v24; // rax
  char *v25; // rdx
  QT::QBoxLayout *v26; // r15
  __int64 v27; // r15
  __m128i *v28; // rax
  __m128i v29; // xmm0
  QT::QAbstractButton *v30; // r13
  __m128i *v31; // rax
  __m128i v32; // xmm0
  QT::QBoxLayout *v34; // [rsp+0h] [rbp-90h]
  QT::QVBoxLayout *v35; // [rsp+8h] [rbp-88h]
  QT::QBoxLayout *v36; // [rsp+8h] [rbp-88h]
  _BYTE v37[8]; // [rsp+18h] [rbp-78h] BYREF
  __m128i v38; // [rsp+20h] [rbp-70h] BYREF
  __m128i v39; // [rsp+30h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v41; // [rsp+50h] [rbp-40h]
  unsigned __int64 v42; // [rsp+58h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, 0, 0);
  a1[5] = a2;
  *a1 = (QT::QAbstractButton *)&off_4DDA0;
  a1[2] = (QT::QAbstractButton *)checkbox_filter_t___vtable_at__16;
  *(_OWORD *)(a1 + 7) = 0;
  *(_OWORD *)(a1 + 9) = 0;
  a1[6] = a3;
  *(_OWORD *)(a1 + 11) = 0;
  *(_OWORD *)(a1 + 13) = 0;
  *(_OWORD *)(a1 + 15) = 0;
  v35 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v35, (QT::QWidget *)a1);
  v4 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v4);
  v5 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 17, "<h3><u><b>Filters");
  QT::QLabel::QLabel(v5, ptr, 0, 0);
  QT::QBoxLayout::addWidget(v4, v5, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QLabel::QLabel(v6, 0, 0);
  a1[16] = v6;
  QT::QBoxLayout::addWidget(v4, v6, 0, 2);
  QT::QBoxLayout::addLayout(v35, v4, 0);
  v7 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v7);
  v8 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v8, nullptr);
  a1[14] = v8;
  QT::QBoxLayout::addWidget(v7, v8, 0, 0);
  v9 = a1[14];
  QT::QString::fromUtf8(ptr, 19, "Filter by node name");
  QT::QLineEdit::setPlaceholderText(v9, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QLineEdit::setText(a1[14], (char *)a1[5] + 80);
  QT::QBoxLayout::addLayout(v35, v7, 0);
  QT::QWidget::setFocusProxy((QT::QWidget *)a1, a1[14]);
  v10 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 19, "Filter orphan nodes");
  QT::QCheckBox::QCheckBox(v10, ptr, 0);
  a1[15] = v10;
  QT::QBoxLayout::addWidget(v35, v10, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAbstractButton::setChecked(a1[15], *((_BYTE *)a1[5] + 116));
  v11 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 8, "<b>Edges");
  QT::QLabel::QLabel(v11, ptr, 0, 0);
  QT::QBoxLayout::addWidget(v35, v11, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v12);
  v13 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 4, "Code");
  QT::QCheckBox::QCheckBox(v13, ptr, 0);
  a1[10] = v13;
  QT::QBoxLayout::addWidget(v12, v13, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v14 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 6, "Offset");
  QT::QCheckBox::QCheckBox(v14, ptr, 0);
  a1[9] = v14;
  QT::QBoxLayout::addWidget(v12, v14, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v15 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 4, "Read");
  QT::QCheckBox::QCheckBox(v15, ptr, 0);
  a1[7] = v15;
  QT::QBoxLayout::addWidget(v12, v15, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v16 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 5, "Write");
  QT::QCheckBox::QCheckBox(v16, ptr, 0);
  a1[8] = v16;
  QT::QBoxLayout::addWidget(v12, v16, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAbstractButton::setChecked(a1[10], (*((_BYTE *)a1[5] + 112) & 8) != 0);
  QT::QAbstractButton::setChecked(a1[9], (*((_BYTE *)a1[5] + 112) & 4) != 0);
  QT::QAbstractButton::setChecked(a1[7], *((_BYTE *)a1[5] + 112) & 1);
  QT::QAbstractButton::setChecked(a1[8], (*((_BYTE *)a1[5] + 112) & 2) != 0);
  QT::QBoxLayout::addLayout(v35, v12, 0);
  v17 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 8, "<b>Nodes");
  QT::QLabel::QLabel(v17, ptr, 0, 0);
  QT::QBoxLayout::addWidget(v35, v17, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v18 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v18);
  v19 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 4, "Code");
  QT::QCheckBox::QCheckBox(v19, ptr, 0);
  a1[11] = v19;
  QT::QBoxLayout::addWidget(v18, v19, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v20 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 4, "Data");
  QT::QCheckBox::QCheckBox(v20, ptr, 0);
  a1[12] = v20;
  QT::QBoxLayout::addWidget(v18, v20, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v21 = (QT::QAbstractButton *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 6, "Import");
  QT::QCheckBox::QCheckBox(v21, ptr, 0);
  a1[13] = v21;
  QT::QBoxLayout::addWidget(v18, v21, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAbstractButton::setChecked(a1[11], *((_BYTE *)a1[5] + 108) & 1);
  QT::QAbstractButton::setChecked(a1[12], (*((_BYTE *)a1[5] + 108) & 2) != 0);
  QT::QAbstractButton::setChecked(a1[13], (*((_BYTE *)a1[5] + 108) & 4) != 0);
  QT::QBoxLayout::addLayout(v35, v18, 0);
  *(_OWORD *)ptr = 0;
  v41 = 0;
  QT::qt_qFindChildren_helper(a1, 0, 0, &QT::QCheckBox::staticMetaObject, ptr, 1);
  v24 = (int *)ptr[0];
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_327C0((__int64)ptr, 0, 0, 0, v22, v23);
    v24 = (int *)ptr[0];
  }
  v25 = (char *)ptr[1];
  v26 = (QT::QBoxLayout *)ptr[1];
  if ( !v24 || *v24 > 1 )
  {
    sub_327C0((__int64)ptr, 0, 0, 0, v22, v23);
    v25 = (char *)ptr[1];
  }
  v34 = (QT::QBoxLayout *)&v25[8 * v41];
  if ( v26 != v34 )
  {
    v36 = v26;
    do
    {
      v27 = *(_QWORD *)v36;
      v38 = (__m128i)(unsigned __int64)sub_31ED0;
      v39.m128i_i64[0] = (__int64)&QT::QAbstractButton::toggled;
      v39.m128i_i64[1] = 0;
      v28 = (__m128i *)operator new(0x20u);
      v29 = _mm_load_si128(&v38);
      v28->m128i_i32[0] = 1;
      v28[1] = v29;
      v28->m128i_i64[1] = (__int64)sub_2D5E0;
      QT::QObject::connectImpl(v37, v27, &v39, a1, &v38, v28, 0, 0, &QT::QAbstractButton::staticMetaObject);
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v37);
      v36 = (QT::QBoxLayout *)((char *)v36 + 8);
    }
    while ( v34 != v36 );
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v39 = (__m128i)(unsigned __int64)sub_31ED0;
  v30 = a1[14];
  ptr[0] = &QT::QLineEdit::textChanged;
  ptr[1] = nullptr;
  v31 = (__m128i *)operator new(0x20u);
  v32 = _mm_load_si128(&v39);
  v31->m128i_i32[0] = 1;
  v31[1] = v32;
  v31->m128i_i64[1] = (__int64)sub_2D5E0;
  QT::QObject::connectImpl(&v38, v30, ptr, a1, &v39, v31, 0, 0, &QT::QLineEdit::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v38);
  QT::QWidget::setAttribute(a1, 2, 1);
  return v42 - __readfsqword(0x28u);
}
