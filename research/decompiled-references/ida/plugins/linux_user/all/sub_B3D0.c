__int64 __fastcall sub_B3D0(__int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 (__fastcall **v2)(_QWORD, __int64); // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(_QWORD, __int64); // rbp
  __int64 module_data; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v9; // rax

  v2 = *a1;
  v3 = (unsigned int)dword_48084;
  v4 = *v2;
  module_data = get_module_data();
  if ( module_data )
  {
    v6 = module_data;
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v7 == sub_ABD0 )
    {
      return v4(a1, v6 + 224);
    }
    else
    {
      v9 = v7(v6);
      return v4(a1, v9);
    }
  }
  else
  {
    sub_ACB0(v3);
    return sub_B440();
  }
}

