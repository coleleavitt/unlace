__int64 __fastcall invert_selection_ah_t__::vfunc_4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  QT::QGraphicsItem *v7; // rbp
  __int64 isVisible; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rax
  _QWORD **v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // r13
  volatile signed __int32 *v17; // rax
  _QWORD **v18; // r14

  if ( *(_QWORD *)(a3 + 64) )
  {
    sub_319F0((_QWORD *)(a3 + 64));
    v4 = *(_QWORD *)(a3 + 64);
    v5 = *(_QWORD *)(v4 + 32);
    if ( v4 )
    {
LABEL_3:
      sub_319F0((_QWORD *)(a3 + 64));
      v6 = *(_QWORD *)(a3 + 64) + 16LL;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = operator new(0x38u);
    *(_DWORD *)v10 = 0;
    v11 = v10;
    v10 += 16;
    *(_DWORD *)v10 = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v11 + 32) = v10;
    *(_QWORD *)(v11 + 40) = v10;
    v12 = *(volatile signed __int32 **)(a3 + 64);
    *(_QWORD *)(v11 + 48) = 0;
    if ( v12 )
    {
      if ( !_InterlockedSub(v12, 1u) )
      {
        v13 = *(_QWORD ***)(a3 + 64);
        if ( v13 )
        {
          sub_2DFA0(v13[3]);
          operator delete(v13, 0x38u);
        }
      }
    }
    *(_QWORD *)(a3 + 64) = v11;
    if ( v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)v11, 1u);
      v14 = *(_QWORD *)(a3 + 64);
      v5 = *(_QWORD *)(v14 + 32);
      if ( v14 )
        goto LABEL_3;
    }
    else
    {
      v5 = 64;
    }
  }
  v15 = operator new(0x38u);
  v6 = v15 + 16;
  *(_DWORD *)v15 = 0;
  v16 = (volatile signed __int32 *)v15;
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = v15 + 16;
  *(_QWORD *)(v15 + 40) = v15 + 16;
  *(_QWORD *)(v15 + 48) = 0;
  v17 = *(volatile signed __int32 **)(a3 + 64);
  if ( v17 )
  {
    if ( !_InterlockedSub(v17, 1u) )
    {
      v18 = *(_QWORD ***)(a3 + 64);
      if ( v18 )
      {
        sub_2DFA0(v18[3]);
        operator delete(v18, 0x38u);
      }
    }
  }
  *(_QWORD *)(a3 + 64) = v16;
  if ( v16 )
  {
    _InterlockedAdd(v16, 1u);
    v6 = *(_QWORD *)(a3 + 64) + 16LL;
  }
LABEL_4:
  while ( v6 != v5 )
  {
    v7 = *(QT::QGraphicsItem **)(v5 + 40);
    isVisible = 0;
    if ( !(unsigned __int8)QT::QGraphicsItem::isSelected(v7) )
      isVisible = (unsigned __int8)QT::QGraphicsItem::isVisible(v7);
    QT::QGraphicsItem::setSelected(v7, isVisible);
    v5 = std::_Rb_tree_increment(v5, isVisible);
  }
  return 1;
}

