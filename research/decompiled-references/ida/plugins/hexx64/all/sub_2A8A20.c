unsigned __int64 __fastcall sub_2A8A20(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __m128 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v15[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+8h] [rbp-70h]
  _QWORD v17[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v18[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v19[4]; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+40h] [rbp-38h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v15[1] = a4;
  v15[0] = 1;
  v16 = 0;
  copy_tinfo_t();
  v6 = *a1;
  v17[1] = a2;
  v17[0] = 6;
  sub_2A0060((__int64)v17, v6, v7, v8, v9, v10, *(double *)a5.m128_u64);
  v18[0] = 0;
  sub_29F770((__int64)v18, (unsigned int *)v17, *(double *)a5.m128_u64);
  v19[0] = 0;
  sub_29F770((__int64)v19, v15, *(double *)a5.m128_u64);
  v20 = 2;
  sub_2A8310((__int64)a1, (__int64)v18, 0, v11, v12, v13, a5);
  v20 = -1;
  sub_29EC30((__int64)v19, *(double *)a5.m128_u64);
  sub_29EC30((__int64)v18, *(double *)a5.m128_u64);
  sub_29EC30((__int64)v17, *(double *)a5.m128_u64);
  sub_29EC30((__int64)v15, *(double *)a5.m128_u64);
  return v21 - __readfsqword(0x28u);
}

