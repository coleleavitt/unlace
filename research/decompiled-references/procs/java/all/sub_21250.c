__int64 __fastcall sub_21250(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+10h] [rbp-48h]
  int v12; // [rsp+14h] [rbp-44h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+24h] [rbp-34h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+38h] [rbp-20h]
  unsigned __int64 v19; // [rsp+48h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  v10[0] = a1;
  v11 = a3;
  v16 = a8;
  v10[1] = a2;
  v17 = a9;
  v12 = 0;
  v13 = a6;
  v14 = a4;
  v15 = a5;
  v18 = a7;
  return sub_20CD0((__int64)v10);
}
