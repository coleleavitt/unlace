__int64 __fastcall sub_4A6B0(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64, __int64); // rax
  __int64 v5; // rbp
  void (__fastcall *v6)(__int64, __int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v3 = hexdsp(129, 80);
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 72) = 0;
  v4 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v4(333, v3, a1);
  *(_DWORD *)v3 = *((unsigned __int8 *)a2 + 32) + 55;
  v5 = *a2;
  v6 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, v3);
  v6(287, v3 + 32, v5);
  return v3;
}

