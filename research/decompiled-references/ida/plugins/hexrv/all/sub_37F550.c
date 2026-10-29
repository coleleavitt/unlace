unsigned __int64 __fastcall sub_37F550(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall **a4)(_QWORD),
        __int64 (__fastcall **a5)(_QWORD))
{
  __int64 (__fastcall **v5)(_QWORD); // rax
  __int64 (__fastcall **v7[5])(_QWORD); // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v5 = *(__int64 (__fastcall ***)(_QWORD))(a3 + 40);
  v7[0] = (__int64 (__fastcall **)(_QWORD))off_4BE2C8;
  v7[2] = a4;
  v7[3] = a5;
  v7[1] = v5;
  sub_338F80(v7);
  return v8 - __readfsqword(0x28u);
}

