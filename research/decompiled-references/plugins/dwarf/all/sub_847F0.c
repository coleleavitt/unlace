bool __fastcall sub_847F0(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  result = 0;
  if ( *(_QWORD *)(a1 + 32) == 1 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD *))(a2 + 128))(
             *(_QWORD *)(a1 + 40),
             0,
             a3 + 32,
             a3,
             a3 + 8,
             a3 + 16,
             a3 + 24,
             v4) == 0;
  return result;
}
