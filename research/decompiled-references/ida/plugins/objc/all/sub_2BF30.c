__int64 __fastcall sub_2BF30(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rbp
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v8; // [rsp+8h] [rbp-20h]

  if ( a3 == 105
    && (v5 = *(_QWORD **)(a2 + 32), v5[1] == 1)
    && (v6 = *v5, *(_DWORD *)(*v5 + 8LL) == 48)
    && (unsigned __int8)compare_tinfo()
    && (v3 = compare_tinfo(), (_BYTE)v3) )
  {
    v8 = *(_QWORD *)(v6 + 24);
    hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
    hexdsp(466, v6, v8);
  }
  else
  {
    return 0;
  }
  return v3;
}
