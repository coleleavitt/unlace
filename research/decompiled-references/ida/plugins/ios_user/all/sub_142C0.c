__int64 __fastcall sub_142C0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 module_data; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rdi

  v4 = (unsigned int)dword_8F9A4;
  module_data = get_module_data();
  if ( module_data )
  {
    v8 = module_data;
    v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v9 == sub_11DE0 )
      v10 = v8 + 272;
    else
      v10 = v9(v8);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v10 + 304LL))(v10, a2, a3, a4);
  }
  else
  {
    sub_11FC0();
    return sub_14330(v4);
  }
}

