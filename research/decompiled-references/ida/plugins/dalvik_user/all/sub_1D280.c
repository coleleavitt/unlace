__int64 __fastcall sub_1D280(_QWORD *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r12d
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  void *v14; // rbx

  qmutex_lock();
  v7 = sub_50A60(a1[2], a2, a3, a4);
  if ( (_BYTE)v7 )
  {
    v8 = (_QWORD *)a1[67];
    if ( v8 )
    {
      v9 = a1 + 66;
      do
      {
        while ( 1 )
        {
          v10 = v8[2];
          v11 = v8[3];
          if ( v8[4] >= a2 )
            break;
          v8 = (_QWORD *)v8[3];
          if ( !v11 )
            goto LABEL_7;
        }
        v9 = v8;
        v8 = (_QWORD *)v8[2];
      }
      while ( v10 );
LABEL_7:
      if ( a1 + 66 != v9 && a2 >= v9[4] )
      {
        v13 = std::_Rb_tree_rebalance_for_erase();
        v14 = (void *)v13;
        if ( *(_QWORD *)(v13 + 48) )
        {
          *(_QWORD *)(v13 + 56) = 0;
          qfree();
        }
        operator delete(v14, 0x48u);
        --a1[70];
      }
    }
  }
  qmutex_unlock();
  return v7;
}

