__int64 __fastcall sub_4A560(__int64 a1, __int64 a2)
{
  int *v3; // rsi
  __int64 v4; // r13
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // r12
  void (__fastcall *v11)(__int64, __int64, __int64); // rax

  v3 = *(int **)a2;
  v4 = sub_49E20(a1, v3);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, v3);
  v6 = hexdsp(129, 80);
  *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v6 + 72) = 0;
  v7 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v7(333, v6, a1);
  *(_DWORD *)v6 = 42;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    v9 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(333, v6);
    v10 = v9(129, 80);
    *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v10 + 72) = 0;
    v11 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
    v11(333, v10, a1);
    *(_QWORD *)(v10 + 40) = v4;
    v4 = v10;
    *(_DWORD *)v10 = 6;
    *(_BYTE *)(v10 + 32) = 4;
    *(_DWORD *)(v10 + 36) = 1;
    *(_DWORD *)(v10 + 68) = 1;
  }
  *(_BYTE *)(v6 + 32) = 4;
  *(_QWORD *)(v6 + 40) = v4;
  *(_DWORD *)(v6 + 36) = 1;
  return v6;
}

