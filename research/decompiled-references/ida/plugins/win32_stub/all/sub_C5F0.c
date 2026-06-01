__int64 sub_C5F0()
{
  __int64 module_data; // rax

  module_data = get_module_data();
  if ( module_data )
    return module_data + 120;
  if ( under_debugger )
    BUG();
  interr();
  return sub_C630(3340);
}

