void *__fastcall sub_32EE0(__int64 a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, _QWORD, __int64); // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  const char *v6; // r12
  const char *v7; // rax
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, __int64); // rax
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __int64))(a1 + 80);
  v3 = (**v2)(v2, 0, *(unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL), a1 + 8);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v2, 0, v4);
  v6 = (const char *)hexdsp(338, v3);
  v7 = (const char *)sub_31D60(a1);
  qsnprintf(&unk_4EE00, 1024, "%s + %s", v7, v6);
  if ( v3 )
  {
    v9 = (void (__fastcall *)(__int64, __int64))get_hexdsp(&unk_4EE00, 1024, v8);
    v9(276, v3 + 64);
    v11 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v3 + 64, v10);
    v11(276, v3 + 48);
    v13 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v3 + 48, v12);
    v13(276, v3 + 32);
    v15 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v3 + 32, v14);
    v15(130, v3);
  }
  return &unk_4EE00;
}

