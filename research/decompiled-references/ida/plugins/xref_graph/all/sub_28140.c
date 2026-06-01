unsigned __int64 __fastcall sub_28140(__int64 **this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // r13
  int v8; // eax
  __int64 v9; // rbp
  QT::QGraphicsItem *v10; // rdi
  __int128 v12; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v2 = sub_1FB50((QT::QGraphicsItem *)this);
  v3 = sub_345D0(v2);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, 0);
  }
  v5 = *(this + 12);
  v6 = (__int64)*(this + 13);
  *((_DWORD *)this + 32) = 0;
  v7 = &v5[v6];
  while ( v7 != v5 )
  {
    v9 = *v5;
    v10 = *(QT::QGraphicsItem **)(*v5 + 16);
    if ( v10 == (QT::QGraphicsItem *)this )
      v10 = *(QT::QGraphicsItem **)(v9 + 24);
    v8 = *((_DWORD *)v10 + 32);
    *((_DWORD *)v10 + 32) = 0;
    if ( v8 )
    {
      v12 = 0;
      v13 = 0;
      QT::QGraphicsItem::update(v10, (const QT::QRectF *)&v12);
    }
    ++v5;
    sub_29640(v9, 0);
  }
  *((_BYTE *)this + 132) = 0;
  v12 = 0;
  v13 = 0;
  QT::QGraphicsItem::update((QT::QGraphicsItem *)this, (const QT::QRectF *)&v12);
  return v14 - __readfsqword(0x28u);
}

