bool __fastcall sub_91540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbx
  _QWORD v9[4]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+38h] [rbp-60h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  char v18; // [rsp+70h] [rbp-28h]
  unsigned __int64 v19; // [rsp+78h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v9[1] = a1;
  v14 = a3;
  v10[0] = 0xFFFFFFFF00000000LL;
  v11 = 0xFFFFFFFF00000000LL;
  v9[2] = 0;
  v13 = 0x5FFFFFFFFLL;
  v9[3] = 0;
  v10[1] = 0;
  v9[0] = &off_4AE888;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  v18 = a7;
  v12 = 0;
  v7 = sub_91030((__int64)v9, a2, 0);
  v9[0] = &off_4AE870;
  sub_1188E0(&v11);
  sub_1188E0(v10);
  return v7 != 0;
}

