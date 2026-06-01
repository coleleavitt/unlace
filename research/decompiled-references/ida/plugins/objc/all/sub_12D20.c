__int64 __fastcall sub_12D20(
        __int64 (__fastcall **a1)(_QWORD, unsigned __int64 *, _QWORD),
        __int64 (__fastcall **a2)(_QWORD, unsigned __int64 *, _QWORD),
        __int64 a3)
{
  __int64 (__fastcall **v4[5])(_QWORD, unsigned __int64 *, _QWORD); // [rsp+0h] [rbp-28h] BYREF

  v4[3] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))__readfsqword(0x28u);
  v4[2] = a2;
  v4[1] = a1;
  v4[0] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&off_3C318;
  return sub_12B20((__int64)a1, v4, a3);
}
