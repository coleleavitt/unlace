__int64 __fastcall sub_11760(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 module_data; // rax

  v3 = a3;
  module_data = get_module_data((unsigned int)dword_2D4F4);
  *(_QWORD *)(module_data + 176) += v3;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a2, 0);
}
