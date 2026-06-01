__int64 sub_158F0()
{
  __int64 v0; // rdi
  __int64 module_data; // rax

  v0 = (unsigned int)dword_9AB84;
  module_data = get_module_data();
  if ( module_data )
    return module_data + 2640;
  sub_12B90();
  return sub_15920(v0);
}

