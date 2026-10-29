unsigned __int64 __fastcall sub_2A8CB0(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+8h] [rbp-70h]
  _QWORD v14[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v15[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v14[1] = a2;
  v12 = 7;
  v14[0] = 6;
  v7 = *a1;
  v13 = a1[1];
  sub_2A0060((__int64)v14, v7, v13, a4, a5, a6, *(double *)a7.m128_u64);
  v15[0] = 0;
  sub_29F770((__int64)v15, (unsigned int *)&v12, *(double *)a7.m128_u64);
  v16[0] = 0;
  sub_29F770((__int64)v16, (unsigned int *)v14, *(double *)a7.m128_u64);
  v17 = 1;
  sub_2A8310((__int64)a1, (__int64)v15, 0, v8, v9, v10, a7);
  v17 = -1;
  sub_29EC30((__int64)v16, *(double *)a7.m128_u64);
  sub_29EC30((__int64)v15, *(double *)a7.m128_u64);
  sub_29EC30((__int64)v14, *(double *)a7.m128_u64);
  sub_29EC30((__int64)&v12, *(double *)a7.m128_u64);
  return v18 - __readfsqword(0x28u);
}

