__int64 __fastcall sub_21DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
         1110,
         a2,
         (char *)v8 + 4,
         4,
         &callui,
         a6,
         v8[0]);
  result = 0xFFFFFFFFLL;
  if ( v6 == 4 )
    return HIDWORD(v8[0]);
  return result;
}
