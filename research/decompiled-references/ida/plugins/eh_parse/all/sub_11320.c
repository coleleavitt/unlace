__int64 __fastcall sub_11320(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 flags; // rax
  __int64 result; // rax

  create_data(a2, 536872960, 4, -1);
  flags = get_flags_ex(a2, 4, v2);
  result = is_off(flags, 0);
  if ( !(_BYTE)result )
    return op_offset_ex(a2, 0, a1 + 296);
  return result;
}

