__int64 sub_68E80()
{
  __int64 result; // rax

  result = get_aflags();
  if ( (result & 0x800000) == 0 )
    return add_auto_stkpnt();
  return result;
}
