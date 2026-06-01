__int64 __fastcall sub_9940(__int64 a1)
{
  __int64 v2; // rdi
  __int64 module_data; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi
  __int64 (*v7)(); // rdx
  __int64 result; // rax

  v2 = (unsigned int)dword_396E4;
  module_data = get_module_data();
  if ( module_data )
  {
    v4 = module_data;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v5 == sub_9300 )
      v6 = v4 + 272;
    else
      v6 = v5(v4);
    v7 = *(__int64 (**)())(*(_QWORD *)v6 + 568LL);
    result = 1;
    if ( v7 != sub_92F0 )
      return ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v7)(v6, *(_QWORD *)(a1 + 24)) ^ 1u;
  }
  else
  {
    sub_9450(v2);
    return sub_99B0();
  }
  return result;
}

