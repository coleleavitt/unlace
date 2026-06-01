__int64 __fastcall sub_2F5D0(_QWORD *a1, QT::QPainter *a2, double a3)
{
  QT::QStyleOptionGraphicsItem *v3; // rax
  __int64 v4; // rbp
  __int64 i; // r13
  __int64 v6; // rbp
  __int64 j; // r13
  __int64 v8; // rbp
  __int64 k; // r13
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 m; // r13

  v3 = (QT::QStyleOptionGraphicsItem *)QT::QPainter::worldTransform(a2);
  QT::QStyleOptionGraphicsItem::levelOfDetailFromTransform(v3, a2);
  v4 = a1[14];
  for ( i = v4 + 16LL * a1[15]; i != v4; v4 += 16 )
    sub_3E3E0(v4, a2, a3);
  v6 = a1[17];
  for ( j = v6 + 16LL * a1[18]; j != v6; v6 += 16 )
    sub_3E3E0(v6, a2, a3);
  v8 = a1[20];
  for ( k = v8 + 40LL * a1[21]; k != v8; v8 += 40 )
    sub_3EE40(v8, a2, a3);
  v10 = a1[23];
  result = 5LL * a1[24];
  for ( m = v10 + 40LL * a1[24]; m != v10; v10 += 40 )
    result = sub_3EE40(v10, a2, a3);
  return result;
}

