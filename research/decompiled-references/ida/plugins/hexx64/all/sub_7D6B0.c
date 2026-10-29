__int64 __fastcall sub_7D6B0(__int64 a1, _QWORD *a2, double a3)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // r12d
  void *v7; // rdi
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // r12
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // [rsp+4h] [rbp-44h]

  v4 = sub_7D4F0((_QWORD *)a1, a3);
  if ( v4 < 0 )
    return 0;
  v5 = a2[2];
  v6 = v4;
  while ( v5 )
  {
    sub_7C100(*(_QWORD **)(v5 + 24));
    v7 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v7, 0x28u);
  }
  a2[2] = 0;
  a2[3] = a2 + 1;
  v8 = a2 + 1;
  a2[4] = a2 + 1;
  a2[5] = 0;
  v18 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 48) > 3u )
      {
        v16 = *(_QWORD *)(a1 + 32);
        v9 = sub_7CF00((_QWORD *)a1, a3) + v16;
      }
      else if ( (unsigned __int8)is_cvt64() )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
          sub_7A510(a3);
        v9 = (int)unpack_dd();
      }
      else
      {
        v9 = sub_7CD40(a1, a3);
      }
      v10 = operator new(0x28u);
      *(_QWORD *)(v10 + 32) = v9;
      v11 = (void *)v10;
      if ( a2 + 1 == v8 )
        break;
      v12 = v8[4];
      if ( v9 < v12 )
      {
        v13 = (_QWORD *)a2[3];
        if ( v8 == v13 )
          goto LABEL_15;
        v14 = std::_Rb_tree_decrement();
        v13 = (_QWORD *)v14;
        if ( *(_QWORD *)(v14 + 32) < v9 )
        {
          if ( *(_QWORD *)(v14 + 24) )
            v13 = v8;
          else
LABEL_32:
            v8 = nullptr;
LABEL_15:
          if ( !v13 )
            goto LABEL_21;
          goto LABEL_16;
        }
LABEL_25:
        v8 = sub_7A580((__int64)a2, v9);
        goto LABEL_15;
      }
      if ( v12 >= v9 )
      {
LABEL_21:
        if ( v11 )
          operator delete(v11, 0x28u);
        goto LABEL_17;
      }
      v13 = (_QWORD *)a2[4];
      if ( v8 == v13 )
        goto LABEL_32;
      v17 = std::_Rb_tree_increment();
      v13 = (_QWORD *)v17;
      if ( v9 >= *(_QWORD *)(v17 + 32) )
        goto LABEL_25;
      if ( v8[3] )
      {
        v8 = (_QWORD *)v17;
        goto LABEL_15;
      }
      if ( !v8 )
        goto LABEL_21;
LABEL_16:
      v8 = v11;
      std::_Rb_tree_insert_and_rebalance();
      ++a2[5];
LABEL_17:
      if ( !--v18 )
        return 1;
    }
    if ( a2[5] )
    {
      v13 = (_QWORD *)a2[4];
      v8 = nullptr;
      if ( v13[4] < v9 )
        goto LABEL_15;
    }
    goto LABEL_25;
  }
  return 1;
}

