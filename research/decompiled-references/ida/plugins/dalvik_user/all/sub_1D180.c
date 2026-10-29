__int64 __fastcall sub_1D180(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  void *v12; // rbx

  qmutex_lock();
  v5 = sub_4F060(a1[2], a2, a3);
  if ( (_BYTE)v5 )
  {
    v6 = (_QWORD *)a1[55];
    if ( v6 )
    {
      v7 = a1 + 54;
      do
      {
        while ( 1 )
        {
          v8 = v6[2];
          v9 = v6[3];
          if ( v6[4] >= a2 )
            break;
          v6 = (_QWORD *)v6[3];
          if ( !v9 )
            goto LABEL_7;
        }
        v7 = v6;
        v6 = (_QWORD *)v6[2];
      }
      while ( v8 );
LABEL_7:
      if ( a1 + 54 != v7 && a2 >= v7[4] )
      {
        v11 = std::_Rb_tree_rebalance_for_erase();
        v12 = (void *)v11;
        if ( *(_QWORD *)(v11 + 48) )
        {
          *(_QWORD *)(v11 + 56) = 0;
          qfree();
        }
        operator delete(v12, 0x48u);
        --a1[58];
      }
    }
  }
  qmutex_unlock();
  return v5;
}

