unsigned __int64 __fastcall sub_2A8440(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  char v22; // [rsp+Ch] [rbp-8Ch]
  __int64 v23; // [rsp+10h] [rbp-88h] BYREF
  __int64 v24; // [rsp+18h] [rbp-80h]
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h]
  _DWORD v27[4]; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-58h] BYREF
  int v29; // [rsp+50h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v8 = *a1;
  v22 = a3;
  v30 = __readfsqword(0x28u);
  LODWORD(v25) = 0;
  HIDWORD(v25) = a3;
  v26 = 0;
  v23 = 6;
  v24 = a2;
  sub_2A0060((__int64)&v23, v8, a3, a4, a5, a6, *(double *)a7.m128_u64);
  v27[0] = 0;
  sub_29F770((__int64)v27, (unsigned int *)&v23, *(double *)a7.m128_u64);
  v28[0] = 0;
  sub_29F770((__int64)v28, (unsigned int *)&v25, *(double *)a7.m128_u64);
  v29 = 2;
  sub_2A8310((__int64)a1, (__int64)v27, 0, v9, v10, v11, a7);
  v29 = -1;
  sub_29EC30((__int64)v28, *(double *)a7.m128_u64);
  sub_29EC30((__int64)v27, *(double *)a7.m128_u64);
  sub_29EC30((__int64)&v23, *(double *)a7.m128_u64);
  sub_29EC30((__int64)&v25, *(double *)a7.m128_u64);
  if ( *(_DWORD *)(a2 + 8) == 51 && (v22 & 8) != 0 )
  {
    v17 = *a1;
    v26 = 0;
    v25 = 0x1000000000LL;
    v18 = *(_QWORD *)(a2 + 24);
    v23 = 6;
    v24 = v18;
    sub_2A0060((__int64)&v23, v17, v12, v13, v14, v15, *(double *)a7.m128_u64);
    v27[0] = 0;
    sub_29F770((__int64)v27, (unsigned int *)&v23, *(double *)a7.m128_u64);
    v28[0] = 0;
    sub_29F770((__int64)v28, (unsigned int *)&v25, *(double *)a7.m128_u64);
    v29 = 2;
    sub_2A8310((__int64)a1, (__int64)v27, 0, v19, v20, v21, a7);
    v29 = -1;
    sub_29EC30((__int64)v28, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v27, *(double *)a7.m128_u64);
    sub_29EC30((__int64)&v23, *(double *)a7.m128_u64);
    sub_29EC30((__int64)&v25, *(double *)a7.m128_u64);
  }
  return v30 - __readfsqword(0x28u);
}

