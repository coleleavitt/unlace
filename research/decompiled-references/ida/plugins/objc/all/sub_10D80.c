__int64 __fastcall sub_10D80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v3)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, _QWORD, _QWORD))*a1;
  v8[3] = __readfsqword(0x28u);
  v5 = a1[80] + a3;
  v7 = 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *, __int64))v3[17])(a1, &v7, v5) )
    return 0xFFFFFFFFLL;
  v8[1] = a1;
  v8[2] = a2;
  v8[0] = &off_3C630;
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, _QWORD, _QWORD))*a1)(
           a1,
           v8,
           v7,
           1,
           a3,
           2,
           0,
           0);
}
