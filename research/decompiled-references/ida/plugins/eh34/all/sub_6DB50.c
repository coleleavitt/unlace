__int64 __fastcall sub_6DB50(__int64 a1, const char *a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64, const char *); // rax
  void (__fastcall *v5)(__int64, __int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v3 = hexdsp(129, 80);
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 72) = 0;
  v4 = (void (__fastcall *)(__int64, __int64, const char *))get_hexdsp(129, (const char *)&qword_50);
  v4(333, v3, a2);
  *(_DWORD *)v3 = 55;
  v5 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, (const char *)v3);
  v5(287, v3 + 32, a1);
  return v3;
}

