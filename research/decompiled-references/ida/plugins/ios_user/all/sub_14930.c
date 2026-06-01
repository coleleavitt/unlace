__int64 sub_14930()
{
  __int64 v0; // rdi
  __int64 module_data; // rax

  v0 = (unsigned int)dword_8F9A4;
  module_data = get_module_data();
  if ( module_data )
    return module_data + 2576;
  sub_11FC0();
  return sub_14980(v0);
}

