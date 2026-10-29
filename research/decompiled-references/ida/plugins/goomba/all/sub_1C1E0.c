__int64 __fastcall sub_1C1E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 v8; // r13
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax

  v3 = a3;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, a3);
  v5 = hexdsp(129, 80);
  *(_QWORD *)(v5 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 72) = 0;
  v7 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80, v6);
  v7(333, v5, a2);
  *(_DWORD *)v5 = 4;
  v8 = *(_QWORD *)(a1 + 8);
  v10 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))get_hexdsp(333, v5, v9);
  v10(284, v5 + 32, v8, v3, a2, 0);
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v5 + 68) = v3;
  return v5;
}

