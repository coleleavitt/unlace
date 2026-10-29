__int64 __fastcall sub_36FB10(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(char *)(a1 + 16) < 0 )
  {
    calc_thunk_func_target();
    result = is_spec_ea();
    if ( !(_BYTE)result )
      return is_spec_ea();
  }
  return result;
}

