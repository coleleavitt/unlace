__int64 __fastcall sub_C1A0(__int64 a1)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  return hexdsp(130, a1);
}

