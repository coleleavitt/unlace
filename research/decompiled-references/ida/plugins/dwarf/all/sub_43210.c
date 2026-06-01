__int64 __fastcall sub_43210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  int v7; // eax
  int v8; // eax

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    while ( 1 )
    {
      a2 = v6 + 32;
      v7 = sub_849A0(v5, v6 + 32);
      a3 = *(_QWORD *)(v6 + 24);
      if ( v7 < 0 )
        a3 = *(_QWORD *)(v6 + 16);
      v8 = (v7 >> 31) & 1;
      if ( !a3 )
        break;
      v6 = a3;
    }
    if ( !(_BYTE)v8 )
    {
      if ( (int)sub_849A0(v6 + 32, v5) >= 0 )
        return v6;
      return 0;
    }
  }
  else
  {
    v6 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 24) == v6 )
    return 0;
  v6 = std::_Rb_tree_decrement(v6, a2, a3, a4, a5);
  if ( (int)sub_849A0(v6 + 32, v5) < 0 )
    return 0;
  return v6;
}

