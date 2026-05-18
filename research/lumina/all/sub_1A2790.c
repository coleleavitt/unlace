__int64 __fastcall sub_1A2790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  void (__fastcall *v7)(__int64, __int64, __int64); // r15
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, __int64, __int64); // r14
  __int64 v12; // r13
  __int64 v13; // rax
  void (__fastcall *v14)(__int64, __int64, __int64); // r13
  __int64 v15; // r12
  __int64 v16; // rax

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 136))(
         *(_QWORD *)(a1 + 160),
         *(_QWORD *)(a1 + 168),
         *(_QWORD *)(a1 + 176),
         *(_QWORD *)(a1 + 176));
  v7 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 144);
  v8 = v6;
  v9 = (*(__int64 (__fastcall **)(__int64))(a1 + 184))(a2);
  v10 = (*(__int64 (__fastcall **)(char *))(a1 + 184))("user");
  v7(v8, v10, v9);
  v11 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 144);
  v12 = (*(__int64 (__fastcall **)(__int64))(a1 + 184))(a3);
  v13 = (*(__int64 (__fastcall **)(const char *))(a1 + 184))("server");
  v11(v8, v13, v12);
  v14 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 144);
  v15 = (*(__int64 (__fastcall **)(__int64))(a1 + 184))(a4);
  v16 = (*(__int64 (__fastcall **)(const char *))(a1 + 184))("application");
  v14(v8, v16, v15);
  return v8;
}
