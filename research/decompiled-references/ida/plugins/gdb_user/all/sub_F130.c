__int64 sub_F130()
{
  __int64 v0; // rdi
  __int64 module_data; // rax

  v0 = (unsigned int)dword_6AA64;
  module_data = get_module_data();
  if ( module_data )
    return module_data + 2192;
  sub_CC60();
  return sub_F160(v0);
}

