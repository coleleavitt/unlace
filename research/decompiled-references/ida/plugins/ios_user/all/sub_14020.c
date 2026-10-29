__int64 __fastcall sub_14020(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r13
  char v6; // r13
  __int64 v7; // rax

  if ( a2 == 3 )
  {
LABEL_11:
    if ( !(unsigned __int8)getinf_flag() )
      return 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL) |= 0x8000000000uLL;
    *(_WORD *)(*(_QWORD *)(a1 + 16) + 202LL) |= 1u;
    return 0;
  }
  if ( a2 != 11 )
  {
    if ( a2 != 1 )
      return 0;
    goto LABEL_11;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v3 + 264) )
    return 0;
  v4 = *(_QWORD *)(v3 + 248);
  v5 = v3 + 232;
  if ( v4 != v3 + 232 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 32);
      if ( (v6 & 1) != (sub_13F60() == 1) )
        sub_13F60();
      v7 = std::_Rb_tree_increment();
      v3 = *(_QWORD *)(a1 + 16);
      v4 = v7;
      v5 = v3 + 232;
    }
    while ( v7 != v3 + 232 );
  }
  sub_12C60(*(_QWORD **)(v3 + 240));
  *(_QWORD *)(v3 + 248) = v5;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 256) = v5;
  *(_QWORD *)(v3 + 264) = 0;
  return 0;
}

