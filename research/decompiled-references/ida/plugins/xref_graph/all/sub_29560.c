unsigned __int64 __fastcall sub_29560(QT::QGraphicsItem **this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  char v3; // al
  _OWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = sub_1FB50((QT::QGraphicsItem *)this);
  v2 = sub_345D0(v1);
  if ( v2 )
    sub_2FC90(*(_QWORD *)(v2 + 72), this);
  v3 = *((_BYTE *)this + 48);
  *((_BYTE *)this + 48) = 1;
  if ( !v3 )
  {
    memset(v5, 0, sizeof(v5));
    QT::QGraphicsItem::update((QT::QGraphicsItem *)this, (const QT::QRectF *)v5);
  }
  sub_289A0(*(this + 2), 1);
  sub_289A0(*(this + 3), 1);
  *((_BYTE *)*(this + 2) + 132) = 1;
  *((_BYTE *)*(this + 3) + 132) = 1;
  return v6 - __readfsqword(0x28u);
}

