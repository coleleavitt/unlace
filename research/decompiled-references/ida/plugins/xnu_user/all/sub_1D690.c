__int64 __fastcall sub_1D690(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp

  v6 = *(_QWORD *)(a1 + 2008);
  while ( a1 + 1992 != v6 )
  {
    v7 = *(_QWORD *)(v6 + 32);
    v6 = std::_Rb_tree_increment();
    a2 = v7;
    sub_1D580((_QWORD *)a1, v7);
  }
  if ( *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) != 13 )
    return sub_589F0(a1);
  if ( !(unsigned __int8)sub_65DF0(*(_QWORD *)(a1 + 864), a2, (unsigned int)&qword_9AD30, a4, a5, a6) )
    return 0xFFFFFFFFLL;
  sub_58900(a1);
  return 1;
}

