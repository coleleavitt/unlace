__int64 __fastcall sub_6B820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a3 != -1 || (result = calc_offset_base(), result != -1) )
  {
    get_default_reftype();
    return op_offset();
  }
  return result;
}

