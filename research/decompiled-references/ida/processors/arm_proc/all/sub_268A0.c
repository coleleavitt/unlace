__int64 __fastcall sub_268A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // [rsp+8h] [rbp-50h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) == a4 )
    return v9 - __readfsqword(0x28u);
  if ( a4 == -1 )
    return v9 - __readfsqword(0x28u);
  get_flags_ex();
  if ( (unsigned __int8)is_off() )
  {
    if ( sub_221D0() || (unsigned __int8)get_refinfo() && a4 == v8 )
      return v9 - __readfsqword(0x28u);
  }
  if ( a5 == -1 )
    sub_55C30(a2);
  return op_offset();
}

