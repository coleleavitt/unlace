__int64 __fastcall sub_1BFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, __int64, __int64); // rax
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD, __int64); // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  __int64 v16; // rdx
  void (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // rdx
  void (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rdx
  void (__fastcall *v23)(__int64, __int64); // rax
  __int64 (__fastcall ***v24)(_QWORD, __int64, _QWORD, __int64); // rdi
  __int64 v25; // r12
  __int64 v26; // rdx
  void (__fastcall *v27)(__int64, __int64, __int64); // rax
  __int64 v28; // rdx
  void (__fastcall *v29)(__int64, __int64); // rax
  __int64 v30; // rdx
  void (__fastcall *v31)(__int64, __int64); // rax
  __int64 v32; // rdx
  void (__fastcall *v33)(__int64, __int64); // rax
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, __int64); // rax

  v6 = a3;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, a3);
  v8 = hexdsp(129, 80);
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  v10 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80, v9);
  v10(333, v8, a2);
  v11 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_DWORD *)v8 = v11;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v12 = **(__int64 (__fastcall *****)(_QWORD, __int64, _QWORD, __int64))(a1 + 16);
    v13 = (**v12)(v12, a2, v6, a4);
    v15 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v12, a2, v14);
    v15(283, v8 + 32, v13);
    if ( v13 )
    {
      v17 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v8 + 32, v16);
      v17(276, v13 + 64);
      v19 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v13 + 64, v18);
      v19(276, v13 + 48);
      v21 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v13 + 48, v20);
      v21(276, v13 + 32);
      v23 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v13 + 32, v22);
      v23(130, v13);
    }
    if ( *(_QWORD *)(a1 + 24) > 1u )
    {
      v24 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(a1 + 16) + 16LL);
      v25 = (**v24)(v24, a2, v6, a4);
      v27 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v24, a2, v26);
      v27(283, v8 + 48, v25);
      if ( v25 )
      {
        v29 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v8 + 48, v28);
        v29(276, v25 + 64);
        v31 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v25 + 64, v30);
        v31(276, v25 + 48);
        v33 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v25 + 48, v32);
        v33(276, v25 + 32);
        v35 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v25 + 32, v34);
        v35(130, v25);
      }
    }
  }
  *(_DWORD *)(v8 + 68) = v6;
  return v8;
}

