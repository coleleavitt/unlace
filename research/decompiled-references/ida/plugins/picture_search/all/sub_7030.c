__int64 __fastcall sub_7030(__int64 a1, __int64 a2, double a3)
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
  unsigned __int8 v12; // r13
  _QWORD *v14; // r12
  _QWORD *v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64); // rdx
  __int64 *v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // [rsp+8h] [rbp-80h]
  _QWORD v23[3]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 35 )
  {
    v14 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 144LL);
    if ( v14 == *(_QWORD **)(a2 + 40) )
    {
      v15 = *(_QWORD **)(a2 + 48);
      v22 = &v15[*(_QWORD *)(a2 + 56)];
      while ( v22 != v15 )
      {
        v18 = operator new(0x48u);
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(*v14 + 56LL);
        v20 = (__int64 *)(v14[23] + 16LL * *v15);
        v21 = v20[1];
        if ( v19 == sub_3A70 )
          v16 = *v20;
        else
          v16 = ((__int64 (__fastcall *)(_QWORD *))v19)(v14);
        *(_QWORD *)v18 = qword_ACD8;
        QT::QPixmap::QPixmap((QT::QPixmap *)(v18 + 8));
        *(_QWORD *)(v18 + 32) = v16;
        *(_QWORD *)(v18 + 40) = -1;
        *(_QWORD *)(v18 + 48) = -1;
        *(_QWORD *)(v18 + 56) = v21;
        *(_DWORD *)(v18 + 64) = 0;
        v17 = getseg();
        if ( v17 )
          *(_QWORD *)(v18 + 48) = *(_QWORD *)(v17 + 8);
        else
          sub_5470((__int64)"failed to find segment for picture at: 0x%a\n", a3);
        ++v15;
        *(_QWORD *)v18 = &off_A790;
        sub_5D80(v18, a3);
      }
      return 1;
    }
  }
  v3 = *(const char **)a2;
  QT::QObject::property((QT::QObject *)v23, *(const char **)a2);
  if ( (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
    goto LABEL_10;
  if ( !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType || (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_11;
  v4 = *(_DWORD *)&byte_9[4 * (v24 >> 2) + 3];
  if ( !v4 )
    v4 = QT::QMetaType::registerHelper();
  v5 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
  if ( !v5 )
    v5 = QT::QMetaType::registerHelper();
  if ( v4 == v5 )
  {
LABEL_10:
    v6 = v23[0];
  }
  else
  {
LABEL_11:
    QT::QVariant::metaType((QT::QVariant *)v23);
    QT::QMetaType::convert();
    v6 = 0;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v23);
  QT::QObject::property((QT::QObject *)v23, v3);
  if ( (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
    goto LABEL_20;
  if ( !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType || (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_36;
  v7 = *(_DWORD *)&byte_9[4 * (v24 >> 2) + 3];
  if ( !v7 )
    v7 = QT::QMetaType::registerHelper();
  v8 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
  if ( !v8 )
    v8 = QT::QMetaType::registerHelper();
  if ( v7 == v8 )
  {
LABEL_20:
    v9 = v23[0];
  }
  else
  {
LABEL_36:
    QT::QVariant::metaType((QT::QVariant *)v23);
    QT::QMetaType::convert();
    v9 = 0;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v23);
  QT::QObject::property((QT::QObject *)v23, v3);
  if ( (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned char>::metaType )
    goto LABEL_29;
  if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned char>::metaType )
    goto LABEL_35;
  v10 = *(_DWORD *)&byte_9[4 * (v24 >> 2) + 3];
  if ( !v10 )
    v10 = QT::QMetaType::registerHelper();
  v11 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned char>::metaType[3];
  if ( !v11 )
    v11 = QT::QMetaType::registerHelper();
  if ( v10 == v11 )
  {
LABEL_29:
    v12 = v23[0];
  }
  else
  {
LABEL_35:
    QT::QVariant::metaType((QT::QVariant *)v23);
    QT::QMetaType::convert();
    v12 = 0;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v23);
  if ( v6 && v9 )
  {
    sub_62F0(v6, v9, v12);
    return 1;
  }
  return 0;
}

