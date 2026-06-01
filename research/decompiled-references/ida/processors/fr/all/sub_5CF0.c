__int64 sub_5CF0()
{
  __int64 ea_name; // rdx
  __int64 result; // rax

  getinf();
  ea_name = get_ea_name();
  result = 0;
  if ( ea_name > 0 )
  {
    tag_addr();
    return 1;
  }
  return result;
}

