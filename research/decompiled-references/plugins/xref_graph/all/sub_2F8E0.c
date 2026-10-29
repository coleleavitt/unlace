unsigned __int64 __fastcall sub_2F8E0(QT::QGraphicsView *this, double a2)
{
  const QT::QRectF *v2; // rax
  _BYTE v4[16]; // [rsp+30h] [rbp-98h] BYREF
  double v5; // [rsp+40h] [rbp-88h]
  _BYTE v6[88]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v7; // [rsp+A8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  QT::QGraphicsView::transform((QT::QGraphicsView *)v6);
  v2 = (const QT::QRectF *)QT::QTransform::scale((QT::QTransform *)v6, a2, a2);
  QT::QTransform::mapRect((QT::QTransform *)v4, v2);
  if ( v5 >= 0.07000000000000001 && v5 <= 100.0 )
    return QT::QGraphicsView::scale(this, a2, a2);
  else
    return v7 - __readfsqword(0x28u);
}
