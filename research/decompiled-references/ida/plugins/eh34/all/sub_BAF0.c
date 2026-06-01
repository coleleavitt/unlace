__int64 __fastcall sub_BAF0(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp();
  return hexdsp(265, a1, a2);
}

