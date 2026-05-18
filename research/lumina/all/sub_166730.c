__int64 __fastcall sub_166730(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // rbp
  pthread_t v6; // rdi
  void *v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v3 = *(_QWORD **)(a1 + 88);
  v4 = v3[4];
  v5 = v3 + 2;
  if ( (_QWORD *)v4 != v3 + 2 )
  {
    while ( *(_QWORD *)(v4 + 32) != a2 )
    {
      v4 = std::_Rb_tree_increment(v4);
      if ( (_QWORD *)v4 == v5 )
        goto LABEL_8;
    }
    v6 = *(_QWORD *)(v4 + 40);
    if ( v6 )
    {
      v9 = v4;
      j__pthread_detach(v6);
      v3 = *(_QWORD **)(a1 + 88);
      v4 = v9;
      v5 = v3 + 2;
    }
    v7 = (void *)std::_Rb_tree_rebalance_for_erase(v4, v5);
    operator delete(v7, 0x30u);
    --v3[6];
    v3 = *(_QWORD **)(a1 + 88);
  }
LABEL_8:
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
