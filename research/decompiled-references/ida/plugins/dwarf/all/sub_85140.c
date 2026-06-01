bool __fastcall sub_85140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = 0;
  return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD *))(a1 + 392))(
           a3,
           a4,
           a2 + 65,
           a2,
           a2 + 8,
           a2 + 68,
           a2 + 16,
           a2 + 24,
           a2 + 32,
           a2 + 40,
           a2 + 64,
           a2 + 48,
           a2 + 56,
           v5) == 0;
}

