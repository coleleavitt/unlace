__int64 __fastcall sub_B0F0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 module_data; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi
  __int64 (*v7)(); // rdx
  __int64 result; // rax

  v2 = (unsigned int)dword_3BBE4;
  module_data = get_module_data();
  if ( module_data )
  {
    v4 = module_data;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v5 == sub_A830 )
      v6 = v4 + 224;
    else
      v6 = v5(v4);
    v7 = *(__int64 (**)())(*(_QWORD *)v6 + 568LL);
    result = 1;
    if ( v7 != sub_A810 )
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v7)(v6, *(_QWORD *)(a1 + 24)) ^ 1u;
  }
  else
  {
    sub_A930(v2);
    return sub_B160();
  }
  return result;
}

