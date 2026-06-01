__int64 __fastcall sub_6DCB0(__int64 a1, const char *a2, __int64 a3)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 result; // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  result = hexdsp(405, a1, (unsigned int)a2);
  *(_DWORD *)(result + 76) = 0;
  *(_QWORD *)(result + 32) = a3;
  *(_QWORD *)(result + 40) = -1;
  *(_DWORD *)(result + 24) = 130;
  return result;
}

