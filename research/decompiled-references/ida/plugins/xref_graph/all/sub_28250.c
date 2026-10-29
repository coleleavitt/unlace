unsigned __int64 __fastcall sub_28250(QT::QGraphicsItem ***this, double a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  QT::QGraphicsItem **v6; // rbx
  __int64 v7; // rax
  QT::QGraphicsItem **i; // r13
  int v9; // eax
  QT::QGraphicsItem *v10; // rbp
  QT::QGraphicsItem *v11; // rdi
  __int128 v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v4 = sub_1FB50((QT::QGraphicsItem *)this);
  v5 = sub_345D0(v4);
  if ( v5 )
    sub_36020(*(_QWORD **)(v5 + 64), (__int64)this, a2, a3);
  v6 = *(this + 12);
  v7 = (__int64)*(this + 13);
  *((_DWORD *)this + 32) = 1;
  for ( i = &v6[v7]; i != v6; ++v6 )
  {
    v10 = *v6;
    if ( (unsigned __int8)QT::QGraphicsItem::isVisible(*v6) )
    {
      v11 = *((QT::QGraphicsItem **)v10 + 2);
      if ( v11 == (QT::QGraphicsItem *)this )
        v11 = *((QT::QGraphicsItem **)v10 + 3);
      v9 = *((_DWORD *)v11 + 32);
      *((_DWORD *)v11 + 32) = 2;
      if ( v9 != 2 )
      {
        v13 = 0;
        v14 = 0;
        QT::QGraphicsItem::update(v11, (const QT::QRectF *)&v13);
      }
      sub_29640(v10, 1);
    }
  }
  *((_BYTE *)this + 132) = 1;
  v13 = 0;
  v14 = 0;
  QT::QGraphicsItem::update((QT::QGraphicsItem *)this, (const QT::QRectF *)&v13);
  return v15 - __readfsqword(0x28u);
}

