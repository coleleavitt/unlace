__int64 __fastcall sub_1DEC0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // r12

  v1 = *(_QWORD *)(a1 + 1424);
  while ( v1 != a1 + 1408 )
  {
    v2 = v1 + 40;
    v1 = std::_Rb_tree_increment();
    sub_598E0(a1, v2);
  }
  v3 = *(_QWORD *)(a1 + 2008);
  while ( v3 != a1 + 1992 )
  {
    v4 = *(_QWORD *)(v3 + 32);
    v3 = std::_Rb_tree_increment();
    sub_1D580((_QWORD *)a1, v4);
  }
  *(_QWORD *)(a1 + 2072) = -1;
  *(_OWORD *)(a1 + 2040) = -1;
  *(_OWORD *)(a1 + 2056) = -1;
  return del_til();
}

