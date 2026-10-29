__int64 sub_36DE00()
{
  __int64 result; // rax

  result = (unsigned int)netnode_charval() - 1;
  if ( (unsigned __int8)result <= 1u )
  {
    netnode_supdel();
    return set_item_color();
  }
  return result;
}

