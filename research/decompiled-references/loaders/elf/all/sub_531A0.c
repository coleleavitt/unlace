_QWORD *__fastcall sub_531A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  _BOOL4 v8; // [rsp+Ch] [rbp-3Ch]

  v2 = *a2;
  v3 = sub_30DC0(a1, *a2);
  if ( !v4 )
    return v3;
  v8 = 1;
  v5 = v4;
  if ( !v3 && v4 != a1 + 8 )
    v8 = v2 < *(_QWORD *)(v4 + 32);
  v6 = operator new(0x28u);
  *(_QWORD *)(v6 + 32) = *a2;
  std::_Rb_tree_insert_and_rebalance(v8, v6, v5, a1 + 8);
  ++*(_QWORD *)(a1 + 40);
  return (_QWORD *)v6;
}
