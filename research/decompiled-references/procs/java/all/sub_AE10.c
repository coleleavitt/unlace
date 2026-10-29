__int64 __fastcall sub_AE10(__int64 a1)
{
  char v1; // bp
  __int64 module_data; // rax

  v1 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33273);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  return sub_10790(a1, *(unsigned __int16 *)(module_data + 33267), 3, 32, v1 & 2);
}
