_QWORD *__fastcall std::_Rb_tree<long,std::pair<long const,long>,std::_Select1st<std::pair<long const,long>>,std::less<long>,std::allocator<std::pair<long const,long>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long const&>,std::tuple<>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rsi
  _QWORD *v12; // r12
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  _QWORD *v19; // r12
  __int64 v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax

  v6 = operator new(0x30u);
  v7 = a2;
  v8 = (_QWORD *)v6;
  v9 = *a3;
  v10 = a1 + 1;
  v8[5] = 0;
  v11 = *v9;
  v8[4] = *v9;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] && v11 > *(_QWORD *)(a1[4] + 32LL) )
      goto LABEL_13;
    v13 = (_QWORD *)a1[2];
    if ( !v13 )
    {
      if ( a2 == (_QWORD *)a1[3] )
        goto LABEL_13;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v14 = v13[4];
      v18 = (_QWORD *)v13[3];
      if ( v11 < v14 )
        v18 = (_QWORD *)v13[2];
      if ( !v18 )
        break;
      v13 = v18;
    }
    if ( v11 < v14 )
    {
      if ( (_QWORD *)a1[3] == v13 )
        goto LABEL_13;
      goto LABEL_29;
    }
    goto LABEL_12;
  }
  if ( v11 < a2[4] )
  {
    v12 = (_QWORD *)a1[3];
    if ( v7 == v12 || v11 > *(_QWORD *)(std::_Rb_tree_decrement() + 32) )
      goto LABEL_13;
    v13 = (_QWORD *)a1[2];
    if ( !v13 )
    {
      if ( v10 == v12 )
        goto LABEL_13;
LABEL_29:
      v13 = (_QWORD *)std::_Rb_tree_decrement();
      if ( v11 <= v13[4] )
        goto LABEL_18;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v14 = v13[4];
      v15 = (_QWORD *)v13[3];
      if ( v11 < v14 )
        v15 = (_QWORD *)v13[2];
      if ( !v15 )
        break;
      v13 = v15;
    }
    if ( v11 < v14 )
    {
      if ( v13 == v12 )
        goto LABEL_13;
      goto LABEL_29;
    }
LABEL_12:
    if ( v11 <= v14 )
    {
LABEL_18:
      v7 = v13;
      goto LABEL_19;
    }
LABEL_13:
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v8;
  }
  if ( v11 > a2[4] )
  {
    if ( (_QWORD *)a1[4] == a2 || v11 < *(_QWORD *)(std::_Rb_tree_increment() + 32) )
      goto LABEL_13;
    v19 = (_QWORD *)a1[2];
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = v19[4];
        v21 = (_QWORD *)v19[3];
        if ( v11 < v20 )
          v21 = (_QWORD *)v19[2];
        if ( !v21 )
          break;
        v19 = v21;
      }
      if ( v11 >= v20 )
      {
LABEL_44:
        if ( v11 <= v20 )
        {
          v7 = v19;
          goto LABEL_19;
        }
        goto LABEL_13;
      }
      if ( (_QWORD *)a1[3] == v19 )
        goto LABEL_13;
    }
    else if ( v10 == (_QWORD *)a1[3] )
    {
      goto LABEL_13;
    }
    v22 = std::_Rb_tree_decrement();
    v20 = *(_QWORD *)(v22 + 32);
    v19 = (_QWORD *)v22;
    goto LABEL_44;
  }
LABEL_19:
  v17 = v7;
  operator delete(v8, 0x30u);
  return v17;
}

