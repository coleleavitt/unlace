__int64 __fastcall sub_5EF00(__int64 a1, double *a2, double a3, double a4, double a5, double a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v10; // xmm0
  __m128 v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  bool v16; // cf
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  double v19; // r15
  __int64 v20; // rcx
  __m128i v21; // kr00_16
  __m128 v22; // xmm0
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  __m128 v25; // xmm0
  double v26; // [rsp+0h] [rbp-128h] BYREF
  __m128 v27; // [rsp+8h] [rbp-120h]
  unsigned __int64 v28; // [rsp+20h] [rbp-108h] BYREF
  __m128 v29; // [rsp+28h] [rbp-100h]
  __int64 v30; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v31; // [rsp+48h] [rbp-E0h] BYREF
  char v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+68h] [rbp-C0h] BYREF
  char v35; // [rsp+90h] [rbp-98h]
  __int64 v36; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v37[2]; // [rsp+A8h] [rbp-80h] BYREF
  char v38; // [rsp+D0h] [rbp-58h]
  char v39; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-40h]

  v6 = *((_QWORD *)a2 + 1);
  v40 = __readfsqword(0x28u);
  sub_5EC60((__int64)&v36, a2, a3, a4, a5, a6);
  if ( v39 )
  {
    v7 = v36;
    v8 = _mm_loadu_si128(v37);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v8;
    return a1;
  }
  if ( !v38 )
  {
    sub_19A90((__int64)&v33, (__int64)"%a: no catchable types ea", v6);
LABEL_6:
    *(_QWORD *)a1 = v33;
    v10 = _mm_loadu_si128(&v34);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v10;
    return a1;
  }
  v11 = _mm_loadh_ps(a2 + 2);
  v26 = *a2;
  v27 = v11;
  sub_5EAA0((__int64)&v30, (__int64)&v26, *(double *)v11.m128_u64, a4, a5, a6);
  if ( v32 )
  {
    v12 = v30;
    v13 = _mm_loadu_si128(&v31);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v13;
    return a1;
  }
  if ( !(_DWORD)v30 )
  {
    sub_19A90((__int64)&v33, (__int64)"%a: no catchable types", v6);
    goto LABEL_6;
  }
  v14 = v27.m128_u64[0];
  v15 = 4LL * (unsigned int)v30;
  v16 = __CFADD__(v27.m128_u64[0], v15);
  v17 = v27.m128_u64[0] + v15;
  v18 = v17;
  if ( v16 )
  {
    sub_19A90((__int64)&v33, (__int64)"[%a,%a): bad range", v27.m128_u64[0], v17);
    goto LABEL_18;
  }
  v19 = v26;
  sub_74B30(&v28, *(_QWORD *)&v26 + 16LL, v27.m128_u64[0]);
  if ( !v29.m128_i8[8] )
  {
    sub_19A90((__int64)&v33, (__int64)"[%a,%a): no associated segment", v14, v18);
LABEL_18:
    v20 = v33;
    v21 = v34;
    goto LABEL_16;
  }
  if ( v18 - 1 >= v29.m128_u64[0] || v18 - 1 < v28 )
  {
    sub_19A90((__int64)&v33, (__int64)"[%a,%a): does not fit in segment [%a,%a)", *(double *)v11.m128_u64, a4, a5, a6);
    v20 = v33;
    v21 = v34;
LABEL_16:
    *(_QWORD *)a1 = v20;
    *(__m128i *)(a1 + 8) = v21;
    *(_BYTE *)(a1 + 24) = 1;
    return a1;
  }
  sub_734C0(*(_QWORD *)&v19);
  v22 = _mm_loadh_ps(a2 + 2);
  v28 = *(_QWORD *)a2;
  v29 = v22;
  sub_5E7A0((__int64)&v33, &v28, *(double *)v22.m128_u64, a4, a5, a6);
  v23 = v34.m128i_i64[0];
  if ( v35 )
  {
    v24 = v33;
    v25 = _mm_loadh_ps((const double *)&v34.m128i_i64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128 *)(a1 + 8) = v25;
    *(_QWORD *)a1 = v24;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v23;
  }
  return a1;
}

