unsigned __int64 __fastcall sub_2E260(QT::QObject **a1, __int64 a2)
{
  QT::QGraphicsOpacityEffect *v2; // r14
  QT::QPropertyAnimation *v3; // r12
  __m128i *v4; // rax
  __m128i v5; // xmm0
  _BYTE v7[8]; // [rsp+8h] [rbp-88h] BYREF
  __m128i v8; // [rsp+10h] [rbp-80h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-70h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  QT::QLabel::QLabel(a1, a2, 0, 0);
  a1[5] = nullptr;
  *a1 = (QT::QObject *)&off_4DFA0;
  a1[2] = (QT::QObject *)notification_t___vtable_at__16;
  v2 = (QT::QGraphicsOpacityEffect *)operator new(0x10u);
  QT::QGraphicsOpacityEffect::QGraphicsOpacityEffect(v2, (QT::QObject *)a1);
  a1[5] = v2;
  QT::QWidget::setGraphicsEffect(a1, v2);
  v3 = (QT::QPropertyAnimation *)operator new(0x10u);
  QT::QByteArray::QByteArray((QT::QByteArray *)ptr, "opacity", -1);
  QT::QPropertyAnimation::QPropertyAnimation(v3, a1[5], (const QT::QByteArray *)ptr, (QT::QObject *)a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QVariantAnimation::setDuration(v3, 8000);
  QT::QVariant::QVariant((QT::QVariant *)v10, 1.0);
  QT::QVariantAnimation::setStartValue(v3, (const QT::QVariant *)v10);
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  QT::QVariant::QVariant((QT::QVariant *)v10, 1.0);
  QT::QVariantAnimation::setKeyValueAt(v3, 0.9, (const QT::QVariant *)v10);
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  QT::QVariant::QVariant((QT::QVariant *)v10, 0.0);
  QT::QVariantAnimation::setEndValue(v3, (const QT::QVariant *)v10);
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  QT::QAbstractAnimation::start(v3, 0);
  QT::QWidget::setAttribute(a1, 55, 1);
  v8.m128i_i64[1] = 0;
  ptr[1] = nullptr;
  v8.m128i_i64[0] = (__int64)&QT::QWidget::close;
  ptr[0] = &QT::QAbstractAnimation::finished;
  v4 = (__m128i *)operator new(0x20u);
  v5 = _mm_load_si128(&v8);
  v4->m128i_i32[0] = 1;
  v4[1] = v5;
  v4->m128i_i64[1] = (__int64)sub_2D370;
  QT::QObject::connectImpl(v7, v3, ptr, a1, &v8, v4, 0, 0, &QT::QAbstractAnimation::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v7);
  QT::QObject::setObjectName(a1, "ViewerOverlayWidget", 19);
  return v11 - __readfsqword(0x28u);
}
