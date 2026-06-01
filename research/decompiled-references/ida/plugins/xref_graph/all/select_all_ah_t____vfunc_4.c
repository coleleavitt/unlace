__int64 __fastcall select_all_ah_t__::vfunc_4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  QT::QGraphicsItem *v7; // rbp
  unsigned __int8 isVisible; // al
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rax
  _QWORD **v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // r13
  volatile signed __int32 *v18; // rax
  _QWORD **v19; // r14

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
    v11 = operator new(0x38u);
    *(_DWORD *)v11 = 0;
    v12 = v11;
    v11 += 16;
    *(_DWORD *)v11 = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v12 + 32) = v11;
    *(_QWORD *)(v12 + 40) = v11;
    v13 = *(volatile signed __int32 **)(a3 + 64);
    *(_QWORD *)(v12 + 48) = 0;
    if ( v13 )
    {
      if ( !_InterlockedSub(v13, 1u) )
      {
        v14 = *(_QWORD ***)(a3 + 64);
        if ( v14 )
        {
          sub_2DFA0(v14[3]);
          operator delete(v14, 0x38u);
        }
      }
    }
    *(_QWORD *)(a3 + 64) = v12;
    if ( v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)v12, 1u);
      v15 = *(_QWORD *)(a3 + 64);
      v5 = *(_QWORD *)(v15 + 32);
      if ( v15 )
        goto LABEL_3;
    }
    else
    {
      v5 = 64;
    }
  }
  v16 = operator new(0x38u);
  v6 = v16 + 16;
  *(_DWORD *)v16 = 0;
  v17 = (volatile signed __int32 *)v16;
  *(_DWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = v16 + 16;
  *(_QWORD *)(v16 + 40) = v16 + 16;
  *(_QWORD *)(v16 + 48) = 0;
  v18 = *(volatile signed __int32 **)(a3 + 64);
  if ( v18 )
  {
    if ( !_InterlockedSub(v18, 1u) )
    {
      v19 = *(_QWORD ***)(a3 + 64);
      if ( v19 )
      {
        sub_2DFA0(v19[3]);
        operator delete(v19, 0x38u);
      }
    }
  }
  *(_QWORD *)(a3 + 64) = v17;
  if ( v17 )
  {
    _InterlockedAdd(v17, 1u);
    v6 = *(_QWORD *)(a3 + 64) + 16LL;
  }
LABEL_4:
  while ( v6 != v5 )
  {
    v7 = *(QT::QGraphicsItem **)(v5 + 40);
    isVisible = QT::QGraphicsItem::isVisible(v7);
    v9 = isVisible;
    QT::QGraphicsItem::setSelected(v7, isVisible);
    v5 = std::_Rb_tree_increment(v5, v9);
  }
  return 1;
}

