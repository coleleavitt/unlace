__int64 __fastcall sub_486D0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // r13

  v3 = sub_47300(a1 + 160, (__int64)a2);
  if ( v3 != (_QWORD *)(a1 + 168) )
  {
    v4 = *((_DWORD *)v3 + 14);
    v5 = std::_Rb_tree_rebalance_for_erase(v3, a1 + 168);
    v6 = *(_QWORD *)(v5 + 32);
    v7 = (void *)v5;
    if ( v6 )
    {
      *(_QWORD *)(v5 + 40) = 0;
      qfree(v6);
    }
    operator delete(v7, 0x40u);
    --*(_QWORD *)(a1 + 200);
    if ( v4 )
      return v4;
  }
  if ( a2[1] )
  {
    v4 = sub_33710(a1, *a2);
    if ( v4 )
      return v4;
  }
  else
  {
    v4 = sub_33710(a1, (__int64)src);
    if ( v4 )
      return v4;
  }
  if ( under_debugger )
    BUG();
  interr(491);
  return sub_487A0();
}

