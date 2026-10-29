__int64 __fastcall sub_43BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // bl
  __int64 v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v6 = *(_BYTE *)(a1 + 12);
  v8[1] = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, v8, &callui, a4, a5, a6);
  return (unsigned __int8)sub_439C0(v8[0], v6 ^ 1u, 0);
}
