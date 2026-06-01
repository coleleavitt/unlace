__int64 sub_15030()
{
  __int64 v0; // rdi
  __int64 module_data; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  v0 = (unsigned int)dword_8F9A4;
  module_data = get_module_data();
  if ( module_data
    && ((v2 = module_data, v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL), v3 != sub_11DE0)
      ? (v4 = v3(v2))
      : (v4 = v2 + 272),
        v0 = (unsigned int)dword_8F9A4,
        (v5 = get_module_data()) != 0) )
  {
    result = v5 + 2312;
    *(_QWORD *)(v4 + 864) = result;
  }
  else
  {
    sub_11FC0();
    return sub_15090(v0);
  }
  return result;
}

