_QWORD *__fastcall sub_32DF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  void (__fastcall *hexdsp)(__int64, _DWORD *); // rax
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64, _DWORD *); // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, _DWORD *); // rax
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64, _DWORD *); // rax

  v4 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, 0);
  sub_15410(a1, a3, v4);
  if ( v4 )
  {
    hexdsp = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(a1, a3, v5);
    hexdsp(276, v4 + 16);
    v8 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, v4 + 16, v7);
    v8(276, v4 + 12);
    v10 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, v4 + 12, v9);
    v10(276, v4 + 8);
    v12 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, v4 + 8, v11);
    v12(130, v4);
  }
  return a1;
}

