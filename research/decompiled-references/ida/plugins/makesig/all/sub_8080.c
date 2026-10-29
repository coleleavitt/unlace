__int64 __fastcall sub_8080(__int64 a1, __int64 a2)
{
  __int16 v2; // bp
  __int64 v3; // rbx
  __int16 v4; // cx
  __int64 v5; // rdx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
    v3 = a1 + 8;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v4 = *(_WORD *)(v3 + 32);
    v5 = *(_QWORD *)(v3 + 24);
    if ( v2 < v4 )
      v5 = *(_QWORD *)(v3 + 16);
    LOBYTE(a2) = v2 < v4;
    if ( !v5 )
      break;
    v3 = v5;
  }
  if ( v2 < v4 )
  {
LABEL_10:
    if ( v3 != *(_QWORD *)(a1 + 24) )
    {
      v3 = std::_Rb_tree_decrement(v3, a2);
      if ( v2 <= *(__int16 *)(v3 + 32) )
        return v3;
    }
    return 0;
  }
  if ( v2 > v4 )
    return 0;
  return v3;
}

