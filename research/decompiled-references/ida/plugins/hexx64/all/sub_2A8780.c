unsigned __int64 __fastcall sub_2A8780(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __m128 a5)
{
  __int64 v7; // rbx
  unsigned __int64 tinfo_size; // rax
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // edx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  _QWORD v21[2]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v22[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-60h]
  _DWORD v24[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v25[4]; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+40h] [rbp-38h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v7 = sub_254FE0(a2);
  tinfo_size = get_tinfo_size();
  v11 = *(_DWORD *)(v7 + 8);
  if ( v11 <= 0x36 )
  {
    if ( v11 <= 0x34 )
      return v27 - __readfsqword(0x28u);
    v16 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v16 + 8) != 65 )
      return v27 - __readfsqword(0x28u);
    v12 = 13 * *(_DWORD *)(v16 + 32);
    v13 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 432LL) + 104LL * *(int *)(v16 + 32);
  }
  else
  {
    if ( v11 != 65 )
      return v27 - __readfsqword(0x28u);
    v12 = 13 * *(_DWORD *)(v7 + 32);
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 432LL) + 104LL * *(int *)(v7 + 32);
  }
  if ( v13 )
  {
    v14 = *(int *)(v13 + 88);
    if ( v14 == tinfo_size && tinfo_size >= a4 )
    {
      v17 = *a1;
      v22[1] = a3;
      v22[0] = 0;
      v23 = 0;
      v21[0] = 6;
      v21[1] = v7;
      sub_2A0060((__int64)v21, v17, v14, v12, v9, v10, *(double *)a5.m128_u64);
      v24[0] = 0;
      sub_29F770((__int64)v24, (unsigned int *)v21, *(double *)a5.m128_u64);
      v25[0] = 0;
      sub_29F770((__int64)v25, v22, *(double *)a5.m128_u64);
      v26 = 2;
      sub_2A8310((__int64)a1, (__int64)v24, 0, v18, v19, v20, a5);
      v26 = -1;
      sub_29EC30((__int64)v25, *(double *)a5.m128_u64);
      sub_29EC30((__int64)v24, *(double *)a5.m128_u64);
      sub_29EC30((__int64)v21, *(double *)a5.m128_u64);
      sub_29EC30((__int64)v22, *(double *)a5.m128_u64);
    }
  }
  return v27 - __readfsqword(0x28u);
}

