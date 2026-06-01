__int64 sub_F930()
{
  __int64 module_data; // rax

  module_data = get_module_data();
  if ( module_data )
    return module_data + 120;
  if ( under_debugger )
    BUG();
  interr();
  return sub_F970(3340);
}

