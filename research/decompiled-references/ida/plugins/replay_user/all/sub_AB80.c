__int64 sub_AB80()
{
  __int64 module_data; // rax
  unsigned int v1; // edx

  module_data = get_module_data();
  v1 = 0;
  if ( module_data )
    return *(unsigned int *)(module_data + 216);
  return v1;
}

