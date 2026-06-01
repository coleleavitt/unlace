__int64 sub_15D50()
{
  __int64 v0; // rdi
  __int64 module_data; // rax

  v0 = (unsigned int)dword_9AB84;
  module_data = get_module_data();
  if ( module_data )
    return module_data + 120;
  sub_12B70(v0);
  return sub_15D80();
}

