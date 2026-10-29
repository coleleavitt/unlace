__int64 sub_F590()
{
  __int64 v0; // rdi
  __int64 module_data; // rax

  v0 = (unsigned int)dword_6AA64;
  module_data = get_module_data();
  if ( module_data )
    return module_data + 120;
  sub_CC40(v0);
  return sub_F5C0();
}

