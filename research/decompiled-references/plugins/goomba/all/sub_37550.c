__int64 __fastcall sub_37550(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, _QWORD, __int64); // rax
  _DWORD *v4; // rsi
  char v5; // r12
  unsigned int v6; // ebp
  int *v7; // r12
  int v8; // eax
  unsigned __int8 (__fastcall *v9)(__int64, int *, _QWORD, __int64); // rax
  _DWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  _DWORD *v13; // r12
  unsigned __int8 (__fastcall *v14)(__int64, _DWORD *, _QWORD, __int64); // rax
  _DWORD *v16; // r12
  unsigned __int8 (__fastcall *v17)(__int64, _DWORD *, _QWORD, __int64); // rax

  v2 = a1;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD, __int64))get_hexdsp(a1, a2);
  v4 = (_DWORD *)a1;
  if ( hexdsp(299, a1, 0, 1) )
    return 1;
  v5 = *(_BYTE *)a1;
  if ( (*(_BYTE *)a1 & 0xFB) == 1 )
    return 1;
  v6 = sub_373C0((_DWORD *)a1, a1);
  if ( (_BYTE)v6 )
    return 1;
  if ( v5 != 4 )
    return v6;
  v7 = *(int **)(a1 + 8);
  v8 = *v7;
  if ( *v7 == 5 )
  {
    v16 = v7 + 8;
    if ( (unsigned __int8)sub_373C0(v16, a1) )
      return 1;
    v17 = (unsigned __int8 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64))get_hexdsp(v16, a1);
    v4 = v16;
    a1 = 299;
    if ( v17(299, v16, 0, 1) )
      return 1;
    if ( *(_BYTE *)v2 != 4 )
      return v6;
    v7 = *(int **)(v2 + 8);
    v8 = *v7;
  }
  if ( v8 != 14 )
    return v6;
  v9 = (unsigned __int8 (__fastcall *)(__int64, int *, _QWORD, __int64))get_hexdsp(a1, v4);
  v10 = v7 + 8;
  v11 = (__int64)(v7 + 8);
  v12 = 299;
  if ( !v9(299, v7 + 8, 0, 1) )
  {
    v13 = v7 + 12;
    goto LABEL_9;
  }
  v13 = v7 + 12;
  v12 = (__int64)v13;
  if ( (unsigned __int8)sub_373C0(v13, v11) )
    return 1;
LABEL_9:
  v14 = (unsigned __int8 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64))get_hexdsp(v12, v11);
  if ( v14(299, v13, 0, 1) )
    return sub_373C0(v10, (__int64)v13);
  return v6;
}
