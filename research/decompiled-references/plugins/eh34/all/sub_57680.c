__int64 __fastcall sub_57680(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  return hexdsp(310, a1);
}
