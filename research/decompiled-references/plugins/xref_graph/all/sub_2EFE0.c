unsigned __int64 __fastcall sub_2EFE0(__int64 a1, QT::QPainter *a2, double a3)
{
  QT::QStyleOptionGraphicsItem *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rbp
  __int64 i; // r13
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 j; // r13
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 k; // r13
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rdi
  __m128d v19[2]; // [rsp+0h] [rbp-68h] BYREF
  int v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+24h] [rbp-44h]
  __int16 v22; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v4 = (QT::QStyleOptionGraphicsItem *)QT::QPainter::worldTransform(a2);
  QT::QStyleOptionGraphicsItem::levelOfDetailFromTransform(v4, a2);
  QT::QPainter::save(a2);
  v5 = *(_QWORD **)(a1 + 40);
  v6 = v5[14];
  for ( i = v6 + 16LL * v5[15]; i != v6; v5 = *(_QWORD **)(a1 + 40) )
  {
    v8 = v6;
    v6 += 16;
    sub_3E3E0(v8, a2, a3);
  }
  v9 = v5[17];
  for ( j = v9 + 16LL * v5[18]; j != v9; v5 = *(_QWORD **)(a1 + 40) )
  {
    v11 = v9;
    v9 += 16;
    sub_3E3E0(v11, a2, a3);
  }
  v12 = v5[20];
  for ( k = v12 + 40LL * v5[21]; k != v12; v5 = *(_QWORD **)(a1 + 40) )
  {
    v14 = v12;
    v12 += 40;
    sub_3EE40(v14, a2, a3);
  }
  v15 = v5[23];
  v16 = v15 + 40LL * v5[24];
  while ( v16 != v15 )
  {
    v17 = v15;
    v15 += 40;
    sub_3EE40(v17, a2, a3);
  }
  QT::QPainter::restore(a2);
  sub_2EF00(v19, *(QT::QAbstractScrollArea **)(a1 + 40));
  QT::QPainter::drawRects(a2, (const QT::QRectF *)v19, 1);
  v22 = 0;
  v20 = 1;
  v21 = 32896;
  QT::QPainter::fillRect(a2, (const QT::QRectF *)v19, (const QT::QColor *)&v20);
  return v23 - __readfsqword(0x28u);
}
