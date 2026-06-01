__int64 __fastcall sub_40830(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  void (__fastcall *v10)(__int64, __int64, __int64); // rax
  int (__fastcall *v11)(__int64, __int64, _QWORD *); // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  void (__fastcall *v14)(__int64, __int64, __int64); // rax
  void (__fastcall *v15)(__int64, _QWORD *, __int64); // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rbp
  void (__fastcall *v18)(__int64, __int64, __int64); // rax
  int v19; // eax
  void (__fastcall *v20)(__int64, __int64, _QWORD *); // rax
  void (__fastcall *v21)(__int64, _QWORD *); // rax
  void (__fastcall *v22)(__int64, __int64); // rax
  void (__fastcall *v23)(__int64, __int64); // rax
  void (__fastcall *v24)(__int64, __int64); // rax
  void (__fastcall *v25)(__int64, __int64); // rax
  __int64 v27; // [rsp+8h] [rbp-B0h]
  __int64 v28; // [rsp+10h] [rbp-A8h]
  _QWORD v29[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v30[5]; // [rsp+30h] [rbp-88h] BYREF
  char v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v8 = hexdsp(129, 80);
  v27 = v8 + 32;
  v9 = v8 + 64;
  v28 = v8 + 48;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  v10 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v10(334, v8, a2);
  v31 = 0;
  memset(&v30[1], 0, 32);
  v30[0] = off_4DC18;
  v32 = a3;
  v33 = a1;
  v11 = (int (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(334, v8);
  v12 = (_QWORD *)v8;
  v13 = 341;
  if ( v11(341, v8, v30) < 0 )
  {
    v17 = 0;
  }
  else
  {
    v14 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(341, v8);
    v14(339, v8, a1);
    v29[1] = 0;
    v29[0] = 0xFFFFFFFF00000000LL;
    v15 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(339, v8);
    v15(283, v29, v8);
    v16 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(283, v29);
    v17 = v16(129, 80);
    *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 56) = 0;
    *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 72) = 0;
    v18 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
    v18(333, v17, a1);
    v19 = 4;
    if ( a4 != HIDWORD(v29[0]) )
      v19 = (a4 < SHIDWORD(v29[0])) + 9;
    *(_DWORD *)v17 = v19;
    v20 = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(333, v17);
    v20(274, v17 + 32, v29);
    *(_DWORD *)(v17 + 68) = a4;
    v21 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(274, v17 + 32);
    v12 = v29;
    v13 = 276;
    v21(276, v29);
  }
  if ( v8 )
  {
    v22 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v13, v12);
    v22(276, v9);
    v23 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v9);
    v23(276, v28);
    v24 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v28);
    v24(276, v27);
    v25 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v27);
    v25(130, v8);
  }
  return v17;
}

