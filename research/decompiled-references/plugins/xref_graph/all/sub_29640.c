unsigned __int64 __fastcall sub_29640(QT::QGraphicsItem *a1, char a2)
{
  char v2; // al
  _OWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = *((_BYTE *)a1 + 48);
  *((_BYTE *)a1 + 48) = a2;
  if ( v2 != a2 )
  {
    memset(v4, 0, sizeof(v4));
    QT::QGraphicsItem::update(a1, (const QT::QRectF *)v4);
  }
  return v5 - __readfsqword(0x28u);
}
