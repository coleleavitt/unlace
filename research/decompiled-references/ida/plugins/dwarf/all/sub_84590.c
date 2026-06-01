bool __fastcall sub_84590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v6[1] = __readfsqword(0x28u);
  return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD *))(a2 + 128))(
           v4,
           a4,
           a3 + 32,
           a3,
           a3 + 8,
           a3 + 16,
           a3 + 24,
           v6) == 0;
}

