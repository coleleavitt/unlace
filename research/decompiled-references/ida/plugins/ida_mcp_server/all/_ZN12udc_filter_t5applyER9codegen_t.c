__int64 __fastcall udc_filter_t::apply(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
  return hexdsp(202, a1, a2);
}

