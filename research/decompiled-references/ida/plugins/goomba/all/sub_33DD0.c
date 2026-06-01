__int64 __fastcall sub_33DD0(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *, __int64); // rax

  a1[4] = 0xFFFFFFFF00000000LL;
  a1[5] = 0;
  a1[6] = 0xFFFFFFFF00000000LL;
  a1[7] = 0;
  a1[8] = 0xFFFFFFFF00000000LL;
  a1[9] = 0;
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(a1, a2);
  return hexdsp(333, a1, a2);
}

