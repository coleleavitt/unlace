void __fastcall sub_36E940(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 1144);
  if ( v2 )
  {
    sub_363E80(*(_QWORD *)(a1 + 1144), a2);
    if ( v3 )
    {
      *(_QWORD *)(operator new(0x28u) + 32) = a2;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v2 + 40);
    }
  }
}

