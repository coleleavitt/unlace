unsigned __int64 __fastcall sub_36690(QT::QAbstractButton *this, const char **a2, __int64 a3)
{
  __int64 v4; // rax
  QT::QTimer *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  size_t v8; // rax
  const char *v9; // rdx
  size_t v10; // rax
  char v11; // r12
  const char *v13; // [rsp+10h] [rbp-100h]
  _BYTE v14[16]; // [rsp+20h] [rbp-F0h] BYREF
  void *v15[4]; // [rsp+30h] [rbp-E0h] BYREF
  void *ptr[4]; // [rsp+50h] [rbp-C0h] BYREF
  void *v17[4]; // [rsp+70h] [rbp-A0h] BYREF
  _BYTE v18[32]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v19[40]; // [rsp+B0h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+D8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  QT::QString::fromUtf8(v17, 6, "Layout");
  QT::QPushButton::QPushButton(this, v17, 0);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  *(_QWORD *)this = &off_4DB80;
  *((_QWORD *)this + 2) = run_layout_button_t___vtable_at__16;
  v4 = QT::QWidget::style(this);
  (*(void (__fastcall **)(void **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 256LL))(v17, v4, 61, 0, 0);
  QT::QAbstractButton::setIcon(this, (const QT::QIcon *)v17);
  QT::QIcon::~QIcon((QT::QIcon *)v17);
  QT::QAbstractButton::setCheckable(this, 1);
  v5 = (QT::QTimer *)operator new(0x10u);
  QT::QTimer::QTimer(v5, (QT::QObject *)a2);
  ptr[1] = nullptr;
  ptr[0] = &QT::QAbstractButton::toggled;
  v6 = operator new(0x28u);
  *(_DWORD *)v6 = 1;
  *(_QWORD *)(v6 + 16) = this;
  *(_QWORD *)(v6 + 8) = &sub_36B20;
  *(_QWORD *)(v6 + 24) = v5;
  *(_QWORD *)(v6 + 32) = a2;
  QT::QObject::connectImpl(v17, this, ptr, this, 0, v6, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v17);
  v17[1] = nullptr;
  v17[0] = &QT::QTimer::timeout;
  v7 = operator new(0x20u);
  *(_DWORD *)v7 = 1;
  *(_QWORD *)(v7 + 24) = a3;
  *(_QWORD *)(v7 + 8) = sub_2ED50;
  *(_QWORD *)(v7 + 16) = a2;
  QT::QObject::connectImpl(ptr, v5, v17, this, 0, v7, 0, 0, &QT::QTimer::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QString::fromUtf8(v17, 10, "Xref Graph");
  QT::QString::fromUtf8(ptr, 8, "Hex-Rays");
  QT::QSettings::QSettings(v14, ptr, v17, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  QT::QVariant::QVariant((QT::QVariant *)v19, 1);
  QT::QString::fromUtf8(ptr, 13, "%1/layout/run");
  v8 = 0;
  v9 = s1;
  if ( a2[4] )
  {
    v9 = a2[3];
    if ( v9 )
    {
      if ( *v9 )
      {
        v13 = a2[3];
        v10 = strlen(v9 + 1);
        v9 = v13;
        v8 = v10 + 1;
      }
    }
  }
  QT::QString::fromUtf8(v17, v8, v9);
  QT::QString::arg(v15, ptr, v17, 0, 32);
  QT::QSettings::value(v18, v14, v15[1], (unsigned __int64)v15[2] | 0x8000000000000000LL, v19);
  v11 = QT::QVariant::toBool((QT::QVariant *)v18);
  QT::QVariant::~QVariant((QT::QVariant *)v18);
  if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
    free(v15[0]);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)v19);
  QT::QAbstractButton::setChecked(this, v11);
  QT::QSettings::~QSettings((QT::QSettings *)v14);
  return v20 - __readfsqword(0x28u);
}

