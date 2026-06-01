__int64 __fastcall sub_24490(__int64 (__fastcall **a1)(_QWORD, unsigned __int64 *, _QWORD), __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD), __int64 (__fastcall ***)()); // rax
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 (__fastcall **v9[5])(_QWORD, unsigned __int64 *, _QWORD); // [rsp+20h] [rbp-28h] BYREF

  v9[3] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))__readfsqword(0x28u);
  v7 = 2;
  v6 = off_3C828;
  v3 = *a1;
  v8 = a2;
  v4 = (__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD), __int64 (__fastcall ***)()))v3[66];
  if ( (char *)v4 != (char *)sub_23F60 )
    return v4(a1, &v6);
  v9[1] = a1;
  v9[0] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&off_3C7F0;
  v9[2] = (__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))&v6;
  return sub_12B20((__int64)a1, v9, a3);
}
