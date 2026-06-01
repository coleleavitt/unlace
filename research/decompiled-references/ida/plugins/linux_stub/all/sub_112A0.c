__int64 __fastcall sub_112A0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 32);
    v4 = *(_QWORD *)(v2 + 24);
    if ( a2 < v3 )
      v4 = *(_QWORD *)(v2 + 16);
    if ( !v4 )
      break;
    v2 = v4;
  }
  if ( a2 < v3 )
  {
LABEL_10:
    if ( v2 != *(_QWORD *)(a1 + 24) )
    {
      v2 = std::_Rb_tree_decrement();
      if ( a2 <= *(_DWORD *)(v2 + 32) )
        return v2;
    }
    return 0;
  }
  if ( a2 > v3 )
    return 0;
  return v2;
}

