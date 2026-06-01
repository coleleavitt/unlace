__int64 __fastcall sub_12E50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 eah; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 next_fixup_ea; // r13
  __int64 i; // rax

  netnode_check();
  eah = get_eah();
  if ( a1 == -1 && !a3 )
  {
    getinf();
    getinf();
    netnode_altval();
    netnode_supset();
    for ( i = netnode_qhashfirst(); i >= 0; i = netnode_qhashnext() )
    {
      if ( netnode_hashval() != -1 )
        netnode_hashset();
    }
    ea2node();
    ea2node();
    netnode_charshift();
    v5 = -1;
    netnode_charshift();
  }
  else
  {
    v5 = *(_QWORD *)(eah + 16) & (a3 + a2);
    netnode_altshift();
    ea2node();
    ea2node();
    netnode_charshift();
    netnode_charshift();
    if ( a2 )
    {
      next_fixup_ea = get_next_fixup_ea();
      goto LABEL_5;
    }
  }
  next_fixup_ea = get_first_fixup_ea();
LABEL_5:
  if ( next_fixup_ea < v5 )
  {
    do
    {
      if ( (unsigned __int8)get_fixup() )
        set_fixup();
    }
    while ( get_next_fixup_ea() < v5 );
  }
  return 1;
}

