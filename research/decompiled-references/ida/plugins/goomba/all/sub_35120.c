__int64 __fastcall sub_35120(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64, __int64, __int64); // rax
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, _QWORD, __int64); // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  void (__fastcall *v11)(__int64, __int64, __int64); // rax
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  void (__fastcall *v15)(__int64, __int64); // rax
  void (__fastcall *v16)(__int64, __int64); // rax
  void (__fastcall *v17)(__int64, __int64); // rax
  void (__fastcall *v18)(__int64, __int64); // rax
  void (__fastcall *v19)(__int64, __int64); // rax
  void (__fastcall *v20)(__int64, __int64); // rax
  void (__fastcall *v21)(__int64, __int64); // rax
  void (__fastcall *v22)(__int64, __int64); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v4 = hexdsp(129, 80);
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 72) = 0;
  v5 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v5(333, v4, a2);
  v6 = sub_348D0(a1, a2);
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))a1[10];
  v8 = v6;
  v9 = (**v7)(v7, a2, *(unsigned int *)(a1[4] + 8LL), (__int64)(a1 + 1));
  *(_DWORD *)v4 = 12;
  v10 = v9;
  v11 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v7, a2);
  v11(283, v4 + 32, v8);
  v12 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(283, v4 + 32);
  v13 = v4 + 48;
  v14 = 283;
  v12(283, v4 + 48, v10);
  *(_DWORD *)(v4 + 68) = *(_DWORD *)(a1[4] + 8LL);
  if ( v8 )
  {
    v15 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v13);
    v15(276, v8 + 64);
    v16 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v8 + 64);
    v16(276, v8 + 48);
    v17 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v8 + 48);
    v17(276, v8 + 32);
    v18 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v8 + 32);
    v13 = v8;
    v14 = 130;
    v18(130, v8);
  }
  if ( v10 )
  {
    v19 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v14, v13);
    v19(276, v10 + 64);
    v20 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v10 + 64);
    v20(276, v10 + 48);
    v21 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v10 + 48);
    v21(276, v10 + 32);
    v22 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v10 + 32);
    v22(130, v10);
  }
  return v4;
}

