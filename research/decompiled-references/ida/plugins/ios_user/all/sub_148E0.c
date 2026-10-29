__int64 sub_148E0()
{
  __int64 v0; // rdi
  __int64 module_data; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax

  v0 = (unsigned int)dword_8F9A4;
  module_data = get_module_data();
  if ( module_data )
  {
    v2 = module_data;
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v3 == sub_11DE0 )
      return v2 + 272;
    else
      return v3(v2);
  }
  else
  {
    sub_11FC0();
    return sub_14930(v0);
  }
}

