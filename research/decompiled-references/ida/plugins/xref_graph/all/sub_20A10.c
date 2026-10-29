void __fastcall sub_20A10(__int64 a1)
{
  volatile signed __int32 **v1; // r12
  __int64 v2; // rbx
  __int64 i; // r13
  __int64 v4; // rsi
  QT::QGraphicsItem *v5; // r14
  char v6; // dl
  char v7; // r15
  __int64 v8; // rbx
  __int64 j; // r14
  __int64 v10; // r13
  __int64 isVisible; // rsi
  __int64 v12; // r13
  __int64 k; // r14
  QT::QGraphicsItem *v14; // r12
  QT::QGraphicsItem **v15; // rbx
  QT::QGraphicsItem **v16; // rbp
  _BOOL8 v17; // rsi

  v1 = (volatile signed __int32 **)(a1 + 64);
  sub_1B620((volatile signed __int32 **)(a1 + 64));
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL);
  sub_1B620((volatile signed __int32 **)(a1 + 64));
  for ( i = *(_QWORD *)(a1 + 64) + 16LL; i != v2; v2 = std::_Rb_tree_increment(v2, v4) )
  {
    v5 = *(QT::QGraphicsItem **)(v2 + 40);
    v6 = 1;
    if ( *(_QWORD *)(a1 + 96) )
    {
      v7 = *(_BYTE *)(a1 + 104);
      v6 = v7 ^ (QT::QString::indexOf((char *)v5 + 64, a1 + 80, 0, 1) != -1);
    }
    v4 = (unsigned __int8)v6 & ((*(_DWORD *)(a1 + 108) & (1 << *((_DWORD *)v5 + 22))) != 0);
    QT::QGraphicsItem::setVisible(v5, v6 & ((*(_DWORD *)(a1 + 108) & (1 << *((_DWORD *)v5 + 22))) != 0));
  }
  sub_20860((volatile signed __int32 **)(a1 + 72));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL);
  sub_20860((volatile signed __int32 **)(a1 + 72));
  for ( j = *(_QWORD *)(a1 + 72) + 16LL; j != v8; v8 = std::_Rb_tree_increment(v8, isVisible) )
  {
    v10 = *(_QWORD *)(v8 + 48);
    sub_29690(v10, (unsigned int)(*(_DWORD *)(a1 + 112) & *(_DWORD *)(v10 + 32)));
    if ( (*(_DWORD *)(a1 + 112) & *(_DWORD *)(v10 + 32)) != 0
      && (unsigned __int8)QT::QGraphicsItem::isVisible(*(QT::QGraphicsItem **)(v10 + 16)) )
    {
      isVisible = (unsigned __int8)QT::QGraphicsItem::isVisible(*(QT::QGraphicsItem **)(v10 + 24));
    }
    else
    {
      isVisible = 0;
    }
    QT::QGraphicsItem::setVisible((QT::QGraphicsItem *)v10, isVisible);
  }
  if ( *(_BYTE *)(a1 + 116) )
  {
    sub_1B620(v1);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL);
    sub_1B620(v1);
    for ( k = *(_QWORD *)(a1 + 64) + 16LL; k != v12; v12 = std::_Rb_tree_increment(v12, v17) )
    {
      v14 = *(QT::QGraphicsItem **)(v12 + 40);
      v15 = *((QT::QGraphicsItem ***)v14 + 12);
      v16 = &v15[*((_QWORD *)v14 + 13)];
      if ( v16 == v15 )
      {
LABEL_22:
        v17 = 0;
      }
      else
      {
        while ( !(unsigned __int8)QT::QGraphicsItem::isVisible(*v15) )
        {
          if ( v16 == ++v15 )
            goto LABEL_22;
        }
        v17 = 1;
      }
      QT::QGraphicsItem::setVisible(v14, v17);
    }
  }
}

