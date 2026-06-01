unsigned __int64 __fastcall sub_29690(QT::QGraphicsItem *a1, int a2)
{
  int v2; // eax
  _OWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = *((_DWORD *)a1 + 13);
  *((_DWORD *)a1 + 13) = a2;
  if ( v2 != a2 )
  {
    memset(v4, 0, sizeof(v4));
    QT::QGraphicsItem::update(a1, (const QT::QRectF *)v4);
  }
  return v5 - __readfsqword(0x28u);
}

