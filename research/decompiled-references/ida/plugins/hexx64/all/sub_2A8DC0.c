unsigned __int64 __fastcall sub_2A8DC0(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  unsigned int v7; // ecx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v21; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v24[4]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v25[4]; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+50h] [rbp-38h]
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v7 = a4 - 22;
  v8 = a2;
  v27 = __readfsqword(0x28u);
  v9 = a3;
  if ( v7 > 1
    || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
    || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
    || (v8 = sub_254FE0(a2), v9 = sub_254FE0(v9), (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u)
    || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
  {
    v23[1] = v9;
    v10 = *a1;
    v23[0] = 6;
    sub_2A0060((__int64)v23, v10, a3, v7, a5, a6, *(double *)a7.m128_u64);
    v11 = *a1;
    v22[1] = v8;
    v22[0] = 6;
    sub_2A0060((__int64)v22, v11, v12, v13, v14, v15, *(double *)a7.m128_u64);
    v24[0] = 0;
    sub_29F770((__int64)v24, (unsigned int *)v22, *(double *)a7.m128_u64);
    v25[0] = 0;
    sub_29F770((__int64)v25, (unsigned int *)v23, *(double *)a7.m128_u64);
    v26 = 2;
    sub_29EC30((__int64)v22, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v23, *(double *)a7.m128_u64);
    v16 = a1[1];
    v21 = 0;
    if ( (!(unsigned __int8)sub_29B3C0((__int64)v24, *(_QWORD *)(v16 + 8), &v21, *(double *)a7.m128_u64)
       || (get_tinfo_property() & 0xF) != 8)
      && (!(unsigned __int8)sub_29B3C0((__int64)v25, *(_QWORD *)(a1[1] + 8), &v21, *(double *)a7.m128_u64)
       || (get_tinfo_property() & 0xF) != 8) )
    {
      sub_2A8310((__int64)a1, (__int64)v24, 0, v17, v18, v19, a7);
    }
    clear_tinfo_t();
    v26 = -1;
    sub_29EC30((__int64)v25, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v24, *(double *)a7.m128_u64);
  }
  return v27 - __readfsqword(0x28u);
}

