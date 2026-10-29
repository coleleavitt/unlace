__int64 __fastcall sub_15090(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 module_data; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdi

  v5 = (unsigned int)dword_8F9A4;
  module_data = get_module_data();
  if ( module_data )
  {
    v7 = module_data;
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v8 == sub_11DE0 )
      v9 = v7 + 272;
    else
      v9 = v8(v7);
    return sub_5D080(*(_QWORD *)(v9 + 864), a1, a2, a3);
  }
  else
  {
    sub_11FC0();
    return sub_15100(v5);
  }
}

