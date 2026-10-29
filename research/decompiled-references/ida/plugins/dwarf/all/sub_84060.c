__int64 __fastcall sub_84060(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, _QWORD, __int64, _QWORD *),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  return (*a1)(a2 + 288, a3, a4, 0, a5, v6);
}

