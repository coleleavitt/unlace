__int64 __fastcall sub_C620(__int64 a1)
{
  __int64 v2; // rdi
  __int64 module_data; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi

  v2 = (unsigned int)dword_48824;
  module_data = get_module_data();
  if ( module_data )
  {
    v4 = module_data;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v5 == sub_BCB0 )
      v6 = v4 + 272;
    else
      v6 = v5(v4);
    return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 568LL))(v6, *(_QWORD *)(a1 + 24)) ^ 1u;
  }
  else
  {
    sub_BE10(v2);
    return sub_C680();
  }
}

