_QWORD *__fastcall sub_2B87B0(__int64 a1, unsigned __int64 *a2)
{
  __int64 func_qty; // r12
  __int64 i; // rbp
  unsigned __int64 v4; // rax

  if ( *(_QWORD *)(a1 + 104) != -1 )
    netnode_check();
  func_qty = get_func_qty();
  if ( func_qty )
  {
    for ( i = 0; i != func_qty; ++i )
    {
      getn_func();
      ea2node();
      if ( netnode_altval() )
      {
        v4 = node2ea();
        if ( v4 >= *a2 && v4 < a2[1] )
          netnode_supset();
      }
    }
  }
  *(_QWORD *)(a1 + 1112) = -1;
  return sub_261850(a1);
}

