unsigned __int64 __fastcall sub_6160(__int64 a1)
{
  __int64 v1; // rcx
  __int16 *v2; // rsi
  QT::QObject *v3; // r12
  QT::QLabel *v4; // rbx
  __int16 *v6; // [rsp+0h] [rbp-78h] BYREF
  __int128 v7; // [rsp+8h] [rbp-70h]
  _BYTE v8[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  sub_60A0((__int64 *)&v6);
  v2 = word_88EA;
  if ( (_QWORD)v7 )
    v2 = v6;
  v3 = (QT::QObject *)callui(161, v2, 0xFFFFFFFFLL, v1);
  QT::QVariant::QVariant((QT::QVariant *)v8, *(_QWORD *)(a1 + 32));
  QT::QObject::doSetProperty(v3, "picture_start", (const QT::QVariant *)v8, (QT::QVariant *)v8);
  QT::QVariant::~QVariant((QT::QVariant *)v8);
  QT::QVariant::QVariant((QT::QVariant *)v8, *(_QWORD *)(a1 + 40));
  QT::QObject::doSetProperty(v3, "picture_end", (const QT::QVariant *)v8, (QT::QVariant *)v8);
  QT::QVariant::~QVariant((QT::QVariant *)v8);
  QT::QVariant::QVariant((QT::QVariant *)v8, *(unsigned __int8 *)(a1 + 56));
  QT::QObject::doSetProperty(v3, "format_kind", (const QT::QVariant *)v8, (QT::QVariant *)v8);
  QT::QVariant::~QVariant((QT::QVariant *)v8);
  v4 = (QT::QLabel *)operator new(0x28u);
  QT::QLabel::QLabel();
  QT::QLabel::setPixmap(v4, (const QT::QPixmap *)(a1 + 8));
  QT::QWidget::show(v4);
  callui(174, v3, 4194308, 0);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

