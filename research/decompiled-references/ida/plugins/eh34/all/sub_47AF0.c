__int64 __fastcall sub_47AF0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ebp
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD); // rax
  unsigned int v8; // ebp
  void (__fastcall *v9)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD); // rax

  v2 = **(unsigned int ***)(a2 + 16);
  result = *v2;
  if ( (_DWORD)result == 6 )
  {
    v4 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 8LL);
LABEL_5:
    hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
    hexdsp(205, a1 + 432, v4);
    v6 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(205, a1 + 432);
    result = v6(213, a1 + 304, v4);
    if ( !(_BYTE)result )
    {
      v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(213, a1 + 304);
      return v7(205, a1 + 400, v4);
    }
    return result;
  }
  if ( (_DWORD)result != 10 )
  {
    if ( (_DWORD)result != 2 )
      return result;
    v4 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 64LL);
    goto LABEL_5;
  }
  v8 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 8LL);
  v9 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v9(205, a1 + 448, v8);
  v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(205, a1 + 448);
  result = v10(213, a1 + 320, v8);
  if ( !(_BYTE)result )
  {
    v11 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(213, a1 + 320);
    return v11(205, a1 + 416, v8);
  }
  return result;
}

