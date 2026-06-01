__int64 __fastcall sub_79C70(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  int v3; // eax
  __int64 v4; // rbx
  int v5; // r12d
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // r12
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int i; // [rsp+4h] [rbp-44h]
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v2 = a1;
  v3 = sub_79AB0((_QWORD *)a1);
  if ( v3 < 0 )
    return 0;
  v4 = a2[2];
  v5 = v3;
  while ( v4 )
  {
    sub_786C0(*(_QWORD **)(v4 + 24));
    a1 = v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete((void *)a1, 0x28u);
  }
  v6 = a2 + 1;
  a2[2] = 0;
  a2[3] = a2 + 1;
  v7 = a2 + 1;
  a2[4] = a2 + 1;
  a2[5] = 0;
  for ( i = v5; i; --i )
  {
    if ( *(_DWORD *)(v2 + 48) > 3u )
    {
      v15 = *(_QWORD *)(v2 + 32);
      v8 = sub_794C0((_QWORD *)v2) + v15;
    }
    else if ( (unsigned __int8)is_cvt64() )
    {
      if ( *(_QWORD *)v2 >= *(_QWORD *)(v2 + 8) )
        sub_76AD0(a1);
      v8 = (int)unpack_dd();
    }
    else
    {
      v8 = sub_79300(v2);
    }
    a1 = 40;
    v9 = operator new(0x28u);
    *(_QWORD *)(v9 + 32) = v8;
    v10 = (void *)v9;
    if ( v6 == v7 )
    {
      if ( !a2[5] )
        goto LABEL_28;
      v12 = (_QWORD *)a2[4];
      v7 = nullptr;
      if ( v12[4] >= v8 )
        goto LABEL_28;
    }
    else
    {
      v11 = v7[4];
      if ( v8 < v11 )
      {
        v12 = (_QWORD *)a2[3];
        if ( v7 == v12 )
          goto LABEL_15;
        a1 = (__int64)v7;
        v13 = std::_Rb_tree_decrement();
        v12 = (_QWORD *)v13;
        if ( *(_QWORD *)(v13 + 32) >= v8 )
        {
LABEL_28:
          a1 = (__int64)a2;
          v7 = sub_76B40((__int64)a2, v8);
          goto LABEL_15;
        }
        if ( *(_QWORD *)(v13 + 24) )
        {
          v12 = v7;
          goto LABEL_15;
        }
LABEL_35:
        v7 = nullptr;
        goto LABEL_15;
      }
      v19 = v7[4];
      if ( v11 >= v8 )
      {
LABEL_24:
        if ( v10 )
        {
          a1 = (__int64)v10;
          operator delete(v10, 0x28u);
        }
        continue;
      }
      v12 = (_QWORD *)a2[4];
      if ( v7 == v12 )
        goto LABEL_35;
      a1 = (__int64)v7;
      v16 = std::_Rb_tree_increment();
      v12 = (_QWORD *)v16;
      if ( v8 >= *(_QWORD *)(v16 + 32) )
        goto LABEL_28;
      v17 = v19;
      if ( !v7[3] )
      {
        if ( !v7 )
          goto LABEL_24;
        goto LABEL_37;
      }
      v7 = (_QWORD *)v16;
    }
LABEL_15:
    if ( !v12 )
      goto LABEL_24;
    if ( !v7 && v12 != v6 )
    {
      v17 = v12[4];
LABEL_37:
      a1 = v8 < v17;
      goto LABEL_19;
    }
    a1 = 1;
LABEL_19:
    v7 = v10;
    std::_Rb_tree_insert_and_rebalance();
    ++a2[5];
  }
  return 1;
}

