bool __fastcall sub_FD50(_QWORD *a1, __int64 a2)
{
  int v3; // r13d
  unsigned int v4; // r13d
  __int64 module_data; // rax

  if ( !*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 154) )
    return 1;
  v3 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 160);
  v4 = v3 - *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164);
  if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) + a2 < (unsigned __int64)v4 )
    return 1;
  module_data = get_module_data((unsigned int)dword_2D4F4);
  return sub_FC10(a1, module_data) != 0;
}
