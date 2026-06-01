__int64 __fastcall sub_E160(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  sub_DF30(a1);
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
  return hexdsp(130, a1);
}
