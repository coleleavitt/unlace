__int64 __fastcall sub_FE90(_QWORD *a1, char a2)
{
  bool v2; // dl
  __int64 result; // rax
  __int64 module_data; // rax

  v2 = sub_FD50(a1, 1);
  result = 1;
  if ( v2 )
  {
    module_data = get_module_data((unsigned int)dword_2D4F4);
    ++*(_QWORD *)(module_data + 176);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)a2);
    return 0;
  }
  return result;
}
