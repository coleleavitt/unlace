unsigned __int64 __fastcall sub_3F19D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(_DWORD *, unsigned int); // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // eax
  bool v10; // zf
  int dtype_size; // eax
  __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // eax
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-B8h]
  _DWORD v21[4]; // [rsp+20h] [rbp-A0h] BYREF
  _BYTE v22[12]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-80h] BYREF
  __int64 v24; // [rsp+50h] [rbp-70h] BYREF
  int v25; // [rsp+58h] [rbp-68h]
  __int64 v26; // [rsp+60h] [rbp-60h] BYREF
  int v27; // [rsp+68h] [rbp-58h]
  __int64 v28; // [rsp+70h] [rbp-50h] BYREF
  int v29; // [rsp+78h] [rbp-48h]
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 832);
  v3 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v2 + 168LL);
  v4 = *(unsigned __int16 *)(a1 + 70);
  if ( v3 == sub_3E59C0 )
  {
    v5 = (int)sub_3E59C0((_DWORD *)v2, v4);
  }
  else
  {
    v19 = v3((_DWORD *)v2, v4);
    v2 = *(_QWORD *)(a1 + 832);
    v5 = v19;
  }
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 80));
  v7 = *(_QWORD *)(v2 + 4464);
  v21[0] = 1;
  *(_QWORD *)&v21[1] = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(v5)).m128i_u64[0];
  if ( !v7 )
    sub_3E6800(*(double *)v6.m128i_i64);
  v8 = *(_DWORD *)(*(_QWORD *)(v2 + 4456) + 4 * v7 - 4);
  *(_QWORD *)v22 = 1;
  *(_QWORD *)(v2 + 4464) = v7 - 1;
  v9 = 2;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8;
  *(_QWORD *)&v22[4] = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(v8)).m128i_u64[0];
  if ( v10 )
    v9 = 7;
  sub_3E9CF0(a1, 1LL << (~(unsigned __int8)*(_DWORD *)(a1 + 112) & 0x1F), v9, v8);
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 0x14u, dtype_size, v5, *(int *)&v22[8], *(int *)&v22[8], 0);
  v12 = *(_QWORD *)(a1 + 832);
  v13 = *(_QWORD *)(a1 + 40);
  v23[1] = 0;
  v23[0] = 0xFFFFFFFF00000000LL;
  sub_11CFD0((__int64)v23, v12, 0, v21[1], v13, 0);
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL);
  v24 = 0x100000001LL;
  v25 = v14 + 2;
  sub_1D2850(a1, 33, v22, (unsigned __int8 *)v23, (unsigned __int8 *)&v24);
  v26 = 0x100000001LL;
  v27 = v14 + 1;
  sub_1D2850(a1, 32, v22, (unsigned __int8 *)v23, (unsigned __int8 *)&v26);
  v15 = *(_QWORD *)(a1 + 832);
  v16 = *(_QWORD *)(a1 + 40);
  v29 = v14;
  v28 = 0x100000001LL;
  sub_11CFD0((__int64)v23, v15, 0, 1, v16, 0);
  sub_1D2850(a1, 4, (unsigned __int8 *)v23, nullptr, (unsigned __int8 *)&v28);
  v20 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
  v17 = get_dtype_size();
  sub_1D2710(a1, 4u, v17, v20, 0x3BEA45E214ADDC55LL, v14 + 3, 0);
  sub_119360((__int64)&v28);
  sub_119360((__int64)&v26);
  sub_119360((__int64)&v24);
  sub_119360((__int64)v23);
  sub_119360((__int64)v22);
  sub_119360((__int64)v21);
  return v30 - __readfsqword(0x28u);
}

