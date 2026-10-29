__int64 __fastcall std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_insert_unique<unsigned long long const&>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v2 = (_QWORD *)a1[2];
  v3 = *a2;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[4];
      v5 = (_QWORD *)v2[3];
      if ( v3 < v4 )
        v5 = (_QWORD *)v2[2];
      if ( !v5 )
        break;
      v2 = v5;
    }
    result = (__int64)v2;
    if ( v3 < v4 )
    {
      if ( (_QWORD *)a1[3] == v2 )
        goto LABEL_9;
      result = std::_Rb_tree_decrement();
      v4 = *(_QWORD *)(result + 32);
    }
    if ( v4 >= v3 )
      return result;
LABEL_9:
    v7 = operator new(0x28u);
    *(_QWORD *)(v7 + 32) = v3;
    v8 = v7;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v8;
  }
  if ( a1 + 1 == (_QWORD *)a1[3] )
    goto LABEL_9;
  result = std::_Rb_tree_decrement();
  if ( *(_QWORD *)(result + 32) < v3 )
    goto LABEL_9;
  return result;
}

