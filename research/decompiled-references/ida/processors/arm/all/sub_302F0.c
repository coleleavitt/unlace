__int64 __fastcall sub_302F0(__int64 a1)
{
  __int64 not_tail; // rbx
  bool v2; // zf
  __int64 result; // rax

  not_tail = a1;
  if ( (get_flags_ex(a1, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  v2 = (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) == 0;
  result = -1;
  if ( v2 )
    return not_tail;
  return result;
}
