__int64 __fastcall sub_F290(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 module_data; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax

  v2 = (unsigned int)dword_75344;
  module_data = get_module_data();
  if ( module_data )
  {
    v4 = module_data;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v5 == sub_DFD0 )
      return v4 + 224;
    else
      return v5(v4);
  }
  else
  {
    sub_E290(v2, a2);
    return sub_F2E0();
  }
}

