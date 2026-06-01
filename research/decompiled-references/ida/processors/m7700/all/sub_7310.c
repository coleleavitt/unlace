unsigned __int64 __fastcall sub_7310(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v7; // r8
  __int64 v8; // [rsp+10h] [rbp-68h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16);
  v10 = __readfsqword(0x28u);
  v3 = (__int64 *)getseg();
  if ( (getinf() & 0x200) == 0 || !v3 )
    return v10 - __readfsqword(0x28u);
  v4 = *v3;
  if ( (unsigned __int8)get_sreg_range()
    && (v4 == v2 && v8 != -1 || !v2 && (unsigned __int8)get_prev_sreg_range() && v8 != v9) )
  {
    sub_64E0(a2, 0xFFFFFFFFLL, (__int64)byte_C299, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL));
  }
  if ( (unsigned __int8)get_sreg_range() )
  {
    v5 = v8;
    if ( v4 != v2 )
    {
      if ( v2 || !(unsigned __int8)get_prev_sreg_range() || (v5 = v8, v8 == v9) )
      {
        if ( !(unsigned __int8)get_sreg_range() )
          return v10 - __readfsqword(0x28u);
        goto LABEL_10;
      }
    }
    sub_64E0(
      a2,
      0xFFFFFFFFLL,
      (__int64)byte_C2A9,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v5);
  }
  if ( !(unsigned __int8)get_sreg_range() )
    return v10 - __readfsqword(0x28u);
  v7 = v8;
  if ( v4 == v2 )
  {
LABEL_17:
    sub_64E0(
      a2,
      0xFFFFFFFFLL,
      (__int64)&byte_C2B7,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v7);
    return v10 - __readfsqword(0x28u);
  }
LABEL_10:
  if ( !v2 )
  {
    if ( (unsigned __int8)get_prev_sreg_range() )
    {
      v7 = v8;
      if ( v8 != v9 )
        goto LABEL_17;
    }
  }
  return v10 - __readfsqword(0x28u);
}

