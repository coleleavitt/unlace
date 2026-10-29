unsigned __int64 __fastcall sub_2A4430(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+8h] [rbp-70h]
  _QWORD v13[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13[1] = a2;
  v11 = 7;
  v13[0] = 6;
  v6 = *a1;
  v12 = a1[1];
  sub_29B7E0((__int64)v13, v6, v12, a4, a5, a6);
  v14[0] = 0;
  sub_29AEF0((__int64)v14, (unsigned int *)&v11);
  v15[0] = 0;
  sub_29AEF0((__int64)v15, (unsigned int *)v13);
  v16 = 1;
  sub_2A3A90((__int64)a1, (__int64)v14, 0, v7, v8, v9);
  v16 = -1;
  sub_29A3B0((__int64)v15);
  sub_29A3B0((__int64)v14);
  sub_29A3B0((__int64)v13);
  sub_29A3B0((__int64)&v11);
  return v17 - __readfsqword(0x28u);
}

