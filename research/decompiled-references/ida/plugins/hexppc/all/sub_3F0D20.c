unsigned __int64 __fastcall sub_3F0D20(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-98h] BYREF
  int v6; // [rsp+8h] [rbp-90h]
  int v7; // [rsp+10h] [rbp-88h] BYREF
  int v8; // [rsp+14h] [rbp-84h]
  _QWORD v9[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v5 = 0x800000001LL;
  v6 = a3;
  v9[0] = 0xFFFFFFFF00000000LL;
  v9[1] = 0;
  v10[0] = 0xFFFFFFFF00000000LL;
  v10[1] = 0;
  v11[0] = 0xFFFFFFFF00000000LL;
  v11[1] = 0;
  sub_32C520((__int64)&v7, a4);
  v8 |= 0x10u;
  v7 = 67;
  sub_118FD0((char *)v9, (char *)&v5);
  HIDWORD(v11[0]) = 4;
  sub_1228A0(a2, (unsigned __int8 *)&v7);
  sub_119360((__int64)v11);
  sub_119360((__int64)v10);
  sub_119360((__int64)v9);
  sub_119360((__int64)&v5);
  return v12 - __readfsqword(0x28u);
}

