__int64 __fastcall sub_7450(__int64 a1, __int64 a2, double a3)
{
  const char *v3; // r13
  int v4; // r12d
  int v5; // eax
  __int64 v6; // r12
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rbp
  int v10; // r14d
  int v11; // eax
  _QWORD *v13; // r12
  _QWORD *v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64); // rdx
  __int64 *v19; // rax
  __int64 v20; // r14
  _QWORD *v21; // [rsp+8h] [rbp-80h]
  _QWORD v22[3]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 35 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 144LL);
    if ( v13 == *(_QWORD **)(a2 + 40) )
    {
      v14 = *(_QWORD **)(a2 + 48);
      v21 = &v14[*(_QWORD *)(a2 + 56)];
      while ( v21 != v14 )
      {
        v17 = operator new(0x48u);
        v18 = *(__int64 (__fastcall **)(__int64, __int64))(*v13 + 56LL);
        v19 = (__int64 *)(v13[23] + 16LL * *v14);
        v20 = v19[1];
        if ( v18 == sub_3A70 )
          v15 = *v19;
        else
          v15 = ((__int64 (__fastcall *)(_QWORD *))v18)(v13);
        *(_QWORD *)v17 = qword_ACD8;
        QT::QPixmap::QPixmap((QT::QPixmap *)(v17 + 8));
        *(_QWORD *)(v17 + 32) = v15;
        *(_QWORD *)(v17 + 40) = -1;
        *(_QWORD *)(v17 + 48) = -1;
        *(_QWORD *)(v17 + 56) = v20;
        *(_DWORD *)(v17 + 64) = 2;
        v16 = getseg();
        if ( v16 )
          *(_QWORD *)(v17 + 48) = *(_QWORD *)(v16 + 8);
        else
          sub_5470((__int64)"failed to find segment for picture at: 0x%a\n", a3);
        ++v14;
        *(_QWORD *)v17 = &off_A7E8;
        sub_5D80(v17, a3);
      }
      return 1;
    }
  }
  v3 = *(const char **)a2;
  QT::QObject::property((QT::QObject *)v22, *(const char **)a2);
  if ( (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
    goto LABEL_10;
  if ( !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType || (v23 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_11;
  v4 = *(_DWORD *)&byte_9[4 * (v23 >> 2) + 3];
  if ( !v4 )
    v4 = QT::QMetaType::registerHelper();
  v5 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
  if ( !v5 )
    v5 = QT::QMetaType::registerHelper();
  if ( v4 == v5 )
  {
LABEL_10:
    v6 = v22[0];
  }
  else
  {
LABEL_11:
    QT::QVariant::metaType((QT::QVariant *)v22);
    QT::QMetaType::convert();
    v6 = 0;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v22);
  QT::QObject::property((QT::QObject *)v22, v3);
  if ( (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
    goto LABEL_20;
  if ( !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType || (v23 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_35;
  v7 = *(_DWORD *)&byte_9[4 * (v23 >> 2) + 3];
  if ( !v7 )
    v7 = QT::QMetaType::registerHelper();
  v8 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
  if ( !v8 )
    v8 = QT::QMetaType::registerHelper();
  if ( v7 == v8 )
  {
LABEL_20:
    v9 = v22[0];
  }
  else
  {
LABEL_35:
    QT::QVariant::metaType((QT::QVariant *)v22);
    QT::QMetaType::convert();
    v9 = 0;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v22);
  QT::QObject::property((QT::QObject *)v22, v3);
  if ( (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL) != QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned char>::metaType )
  {
    if ( (v23 & 0xFFFFFFFFFFFFFFFCLL) == 0 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned char>::metaType )
      goto LABEL_34;
    v10 = *(_DWORD *)&byte_9[4 * (v23 >> 2) + 3];
    if ( !v10 )
      v10 = QT::QMetaType::registerHelper();
    v11 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned char>::metaType[3];
    if ( !v11 )
      v11 = QT::QMetaType::registerHelper();
    if ( v10 != v11 )
    {
LABEL_34:
      QT::QVariant::metaType((QT::QVariant *)v22);
      QT::QMetaType::convert();
    }
  }
  QT::QVariant::~QVariant((QT::QVariant *)v22);
  if ( v6 && v9 )
  {
    sub_5E00(v6, v9);
    return 1;
  }
  return 0;
}

