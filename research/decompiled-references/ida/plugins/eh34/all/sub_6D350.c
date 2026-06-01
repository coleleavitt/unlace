__int64 __fastcall sub_6D350(__int64 a1, const char *a2)
{
  __int64 (__fastcall *hexdsp)(__int64, _QWORD); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD))get_hexdsp(a1, a2);
  return hexdsp(252, (unsigned int)a2);
}

