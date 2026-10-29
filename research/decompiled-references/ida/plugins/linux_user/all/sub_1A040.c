__int64 __fastcall sub_1A040(_QWORD *a1, int a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // r12
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rax

  v2 = a1 + 152;
  v3 = (__int64)(a1 + 152);
  v4 = a1[153];
  if ( !v4 )
    goto LABEL_8;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      v6 = *(_QWORD *)(v4 + 24);
      if ( a2 > *(_DWORD *)(v4 + 32) )
        break;
      v3 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v6 );
LABEL_6:
  if ( v2 == (_QWORD *)v3 || a2 < *(_DWORD *)(v3 + 32) )
  {
LABEL_8:
    v7 = operator new(0x60u);
    *(_DWORD *)(v7 + 32) = a2;
    v8 = (void *)v7;
    *(_DWORD *)(v7 + 40) = a2;
    *(_DWORD *)(v7 + 44) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_BYTE *)(v7 + 56) = 0;
    *(_DWORD *)(v7 + 60) = 1;
    *(_WORD *)(v7 + 64) = 0;
    *(_DWORD *)(v7 + 68) = 0;
    *(_QWORD *)(v7 + 72) = 0;
    *(_OWORD *)(v7 + 80) = 0;
    if ( v2 == (_QWORD *)v3 )
    {
      if ( a1[156] )
      {
        v10 = a1[155];
        v3 = 0;
        if ( a2 > *(_DWORD *)(v10 + 32) )
        {
LABEL_14:
          if ( v10 )
          {
LABEL_15:
            v3 = (__int64)v8;
            std::_Rb_tree_insert_and_rebalance();
            ++a1[156];
            goto LABEL_16;
          }
          goto LABEL_18;
        }
      }
    }
    else
    {
      v9 = *(_DWORD *)(v3 + 32);
      if ( a2 >= v9 )
      {
        if ( a2 > v9 )
        {
          if ( a1[155] != v3 )
          {
            v13 = std::_Rb_tree_increment();
            v10 = v13;
            if ( a2 >= *(_DWORD *)(v13 + 32) )
              goto LABEL_22;
            if ( *(_QWORD *)(v3 + 24) )
            {
              v3 = v13;
              goto LABEL_14;
            }
          }
          if ( v3 )
            goto LABEL_15;
        }
LABEL_18:
        if ( v8 )
          operator delete(v8, 0x60u);
        goto LABEL_16;
      }
      v10 = v3;
      if ( a1[154] == v3 )
        goto LABEL_14;
      v11 = std::_Rb_tree_decrement();
      v10 = v11;
      if ( a2 > *(_DWORD *)(v11 + 32) )
      {
        if ( *(_QWORD *)(v11 + 24) )
          v10 = v3;
        else
          v3 = 0;
        goto LABEL_14;
      }
    }
LABEL_22:
    v3 = sub_10540((__int64)(a1 + 151), a2);
    goto LABEL_14;
  }
LABEL_16:
  sub_19A60((__int64)a1);
  return v3 + 40;
}

