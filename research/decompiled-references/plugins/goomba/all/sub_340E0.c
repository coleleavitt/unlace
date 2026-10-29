unsigned __int64 __fastcall sub_340E0(__int64 a1, __int64 a2)
{
  void (__fastcall *hexdsp)(__int64, _BYTE *, __int64); // rax
  _BYTE *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64, __int64); // rax
  int (__fastcall *v9)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v10)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v11)(__int64, _BYTE *); // rax
  _BYTE v13[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  hexdsp = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, a2);
  v4 = v13;
  v5 = 273;
  v6 = a1;
  v7 = a1 - 16;
  hexdsp(273, v13, v6);
  while ( 1 )
  {
    v9 = (int (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(v5, v4);
    if ( v9(296, v13, v7) >= 0 )
      break;
    v8 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v13);
    v4 = (_BYTE *)(v7 + 16);
    v5 = 274;
    v8(274, v7 + 16, v7);
    v7 -= 16;
  }
  v10 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(296, v13);
  v10(274, v7 + 16, v13);
  v11 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(274, v7 + 16);
  v11(276, v13);
  return v14 - __readfsqword(0x28u);
}
