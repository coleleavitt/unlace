unsigned __int64 __fastcall sub_3E3E0(_BYTE *a1, QT::QPainter *a2, const __m128i *a3)
{
  bool v3; // zf
  double v4; // xmm0_8
  _BYTE v6[8]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v7[8]; // [rsp+18h] [rbp-70h] BYREF
  __m128i v8; // [rsp+20h] [rbp-68h] BYREF
  __m128i v9; // [rsp+30h] [rbp-58h]
  __m128i v10; // [rsp+40h] [rbp-48h]
  unsigned __int64 v11; // [rsp+58h] [rbp-30h]

  v3 = *a1 == 0;
  v11 = __readfsqword(0x28u);
  if ( v3 )
  {
    v10 = _mm_loadu_si128(a3 + 22);
    v9 = v10;
    v8 = v10;
    v4 = 1.5;
  }
  else
  {
    v9 = _mm_loadu_si128(a3 + 23);
    v10 = v9;
    v8 = v9;
    v4 = 3.0;
  }
  QT::QBrush::QBrush(v6, &v8, 1);
  QT::QPen::QPen(v7, v6, 1, 32, 128, v4);
  QT::QPainter::setPen(a2, (const QT::QPen *)v7);
  QT::QPen::~QPen((QT::QPen *)v7);
  QT::QBrush::~QBrush((QT::QBrush *)v6);
  QT::QBrush::QBrush(v7, &v8, 1);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)v7);
  QT::QBrush::~QBrush((QT::QBrush *)v7);
  QT::QPainter::drawPath(a2, (const QT::QPainterPath *)(a1 + 8));
  return v11 - __readfsqword(0x28u);
}
