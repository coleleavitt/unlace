__int64 __fastcall sub_2A98B0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  unsigned int v7; // eax
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _QWORD v15[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v17[4]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v7 = *(_DWORD *)(a2 + 8);
  v20 = __readfsqword(0x28u);
  if ( v7 <= 2 )
  {
    if ( v7 )
      return 0;
    goto LABEL_10;
  }
  a4 = v7 - 36;
  if ( v7 - 36 > 0x20 )
  {
    if ( v7 - 22 <= 9 )
      goto LABEL_7;
    goto LABEL_10;
  }
  if ( ((1LL << a4) & 0x15F9E1000LL) == 0 )
  {
    if ( ((1LL << a4) & 0x610001) != 0 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 8) |= 1u;
      return 0;
    }
    if ( v7 == 51 )
    {
      v8 = *(__int64 **)(a1 + 64);
      v9 = *(_QWORD *)(a2 + 24);
      v15[1] = 0;
      v15[0] = 0x1000000000LL;
      v10 = *v8;
      v16[1] = v9;
      v16[0] = 6;
      sub_2A0060((__int64)v16, v10, 0x1000000000LL, 15, a5, a6, *(double *)a7.m128_u64);
      v17[0] = 0;
      sub_29F770((__int64)v17, (unsigned int *)v16, *(double *)a7.m128_u64);
      v18[0] = 0;
      sub_29F770((__int64)v18, (unsigned int *)v15, *(double *)a7.m128_u64);
      v19 = 2;
      sub_2A8310((__int64)v8, (__int64)v17, 0, v11, v12, v13, a7);
      v19 = -1;
      sub_29EC30((__int64)v18, *(double *)a7.m128_u64);
      sub_29EC30((__int64)v17, *(double *)a7.m128_u64);
      sub_29EC30((__int64)v16, *(double *)a7.m128_u64);
      sub_29EC30((__int64)v15, *(double *)a7.m128_u64);
      goto LABEL_7;
    }
LABEL_10:
    sub_2A8440(*(__int64 **)(a1 + 64), a2, 8, a4, a5, a6, a7);
  }
  return 0;
}

