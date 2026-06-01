__int64 sub_158A0()
{
  __int64 v0; // rdi
  __int64 module_data; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax

  v0 = (unsigned int)dword_9AB84;
  module_data = get_module_data();
  if ( module_data )
  {
    v2 = module_data;
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v3 == sub_12A40 )
      return v2 + 488;
    else
      return v3(v2);
  }
  else
  {
    sub_12B90();
    return sub_158F0(v0);
  }
}

