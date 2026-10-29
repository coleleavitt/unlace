__int64 __fastcall sub_7F590(__int64 a1)
{
  __int64 result; // rax

  if ( !(unsigned __int8)is_off() || !(unsigned __int8)get_refinfo() )
    return 0;
  **(_DWORD **)(a1 + 632) &= ~1u;
  result = get_offset_expr();
  **(_DWORD **)(a1 + 632) |= 1u;
  return result;
}
