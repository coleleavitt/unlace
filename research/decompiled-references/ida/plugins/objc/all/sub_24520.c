__int64 __fastcall sub_24520(__int64 (__fastcall **a1)(_QWORD, unsigned __int64 *, _QWORD), __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD), __int64 (__fastcall ***)()); // rax
  __int64 (__fastcall **v6[4])(_QWORD, unsigned __int64 *, _QWORD); // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall **v7)(); // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v9)(_QWORD, unsigned __int64 *, _QWORD); // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  unsigned __int64 v11; // [rsp+48h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v8 = 1;
  v7 = off_3C808;
  v3 = *a1;
  v9 = a1;
  v4 = (__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD), __int64 (__fastcall ***)()))v3[66];
  v10 = a2;
  if ( (char *)v4 != (char *)sub_23F60 )
    return v4(a1, &v7);
  v6[1] = a1;
  v6[0] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&off_3C7F0;
  v6[2] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&v7;
  return sub_12B20((__int64)a1, v6, a3);
}
