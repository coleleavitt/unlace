__int64 sub_135E0()
{
  __int64 v0; // rdi
  __int64 module_data; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax

  v0 = (unsigned int)dword_7FA84;
  module_data = get_module_data();
  if ( module_data )
  {
    v2 = module_data;
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v3 == sub_F0E0 )
      return v2 + 224;
    else
      return v3(v2);
  }
  else
  {
    sub_F380(v0);
    return sub_13630();
  }
}

