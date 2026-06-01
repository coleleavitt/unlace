__int64 sub_69EB0()
{
  __int64 result; // rax

  result = get_aflags();
  if ( (result & 0x800000) == 0 )
    return add_auto_stkpnt();
  return result;
}

