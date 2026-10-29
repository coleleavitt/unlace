__int64 __fastcall sub_10EE0(__int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax

  *(_QWORD *)(a1 + 32) = 0;
  module_data = get_module_data((unsigned int)dword_2D4F4);
  v2 = (unsigned int)dword_2D4F4;
  *(_BYTE *)(module_data + 154) = 0;
  v3 = get_module_data(v2);
  v4 = (unsigned int)dword_2D4F4;
  *(_DWORD *)(v3 + 156) = 0;
  v5 = get_module_data(v4);
  v6 = (unsigned int)dword_2D4F4;
  *(_DWORD *)(v5 + 160) = 0;
  result = get_module_data(v6);
  *(_DWORD *)(result + 164) = -1;
  return result;
}
