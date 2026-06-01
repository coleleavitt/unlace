_DWORD *__fastcall sub_36230(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // eax
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  _QWORD *v10; // r15
  _QWORD *v11; // r14
  void (__fastcall *v12)(__int64, _DWORD *, __int64); // rax
  void (__fastcall *v13)(__int64, _QWORD *, int *); // rax
  void (__fastcall *v14)(__int64, _QWORD *, _DWORD *); // rax
  void (__fastcall *v15)(__int64, int *); // rax
  void (__fastcall *v16)(__int64, _DWORD *); // rax
  int v18; // [rsp+0h] [rbp-68h] BYREF
  int v19; // [rsp+4h] [rbp-64h]
  __int64 v20; // [rsp+8h] [rbp-60h]
  _DWORD v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v4 = *(_DWORD *)(a4 + 68);
  v23 = __readfsqword(0x28u);
  v22 = a4;
  v21[1] = v4;
  v5 = *(_DWORD *)(a3 + 68);
  v21[0] = 4;
  v18 = 4;
  v20 = a3;
  v19 = v5;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v7 = (_QWORD *)hexdsp(129, 80);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = v7;
  v10 = v7 + 4;
  v11 = v7 + 6;
  v7[5] = 0;
  v7[4] = 0xFFFFFFFF00000000LL;
  v7[6] = 0xFFFFFFFF00000000LL;
  v7[7] = 0;
  v7[8] = 0xFFFFFFFF00000000LL;
  v7[9] = 0;
  v12 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(129, 80);
  v12(333, v9, v8);
  *v9 = a2;
  v13 = (void (__fastcall *)(__int64, _QWORD *, int *))get_hexdsp(333, v9);
  v13(274, v10, &v18);
  v14 = (void (__fastcall *)(__int64, _QWORD *, _DWORD *))get_hexdsp(274, v10);
  v14(274, v11, v21);
  v9[17] = v19;
  v15 = (void (__fastcall *)(__int64, int *))get_hexdsp(274, v11);
  v15(276, &v18);
  v16 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, &v18);
  v16(276, v21);
  return v9;
}
