__int64 sub_AB30()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // rdx

  result = get_module_data();
  if ( result )
  {
    v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 32LL);
    if ( v1 == sub_9510 )
      result += 224;
    else
      return v1(result);
  }
  return result;
}

