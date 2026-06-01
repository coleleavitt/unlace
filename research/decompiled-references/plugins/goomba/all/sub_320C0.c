__int64 __fastcall sub_320C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, a3);
  return hexdsp(130, a1);
}
