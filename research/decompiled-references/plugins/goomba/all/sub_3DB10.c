unsigned __int64 __fastcall sub_3DB10(__int64 a1, __int64 a2)
{
  void (__fastcall *hexdsp)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v3)(__int64, __int64, __int64); // rax
  void (__fastcall *v4)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v5)(__int64, _BYTE *); // rax
  _BYTE _0[24]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  hexdsp = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, a2);
  hexdsp(273, _0, a1);
  v3 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(273, _0);
  v3(274, a1, a2);
  v4 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(274, a1);
  v4(274, a2, _0);
  v5 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(274, a2);
  v5(276, _0);
  return vars18 - __readfsqword(0x28u);
}
