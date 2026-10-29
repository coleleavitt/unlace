__int64 __fastcall sub_10C10(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v3)(_QWORD *, _QWORD *, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+4h] [rbp-44h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))*a1;
  v9[3] = __readfsqword(0x28u);
  v8 = 0;
  v6 = 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *, unsigned int *, unsigned int *, __int64, __int64))v3[2])(
          a1,
          &v8,
          &v6,
          &v7,
          a3,
          3) )
    return 0xFFFFFFFFLL;
  v9[1] = a1;
  v9[2] = a2;
  v9[0] = &off_3C648;
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))*a1)(
           a1,
           v9,
           v8,
           3,
           a3,
           0,
           v6,
           v7);
}
