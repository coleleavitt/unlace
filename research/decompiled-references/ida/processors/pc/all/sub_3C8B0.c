__int64 __fastcall sub_3C8B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __m128i v5; // xmm0
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // xmm0_8
  __m128i v11; // xmm0
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __m128i v17; // xmm0
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned __int64 v33; // [rsp+10h] [rbp-88h] BYREF
  __m128i v34; // [rsp+18h] [rbp-80h] BYREF
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  __m128i v36; // [rsp+38h] [rbp-60h] BYREF
  char v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 16);
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 3) != 0 )
    {
LABEL_4:
      sub_3C7B0((__int64)&v35);
      *(_QWORD *)a1 = v35;
      v11 = _mm_loadu_si128(&v36);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v11;
      return a1;
    }
    goto LABEL_6;
  }
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  v6 = v4 ^ 1;
  *(_QWORD *)(a4 + 16) = v6;
  v8 = v6;
  v9 = v5.m128i_i64[0];
  v10 = _mm_add_epi64(v5, _mm_srli_si128(v5, 8)).m128i_u64[0];
  if ( v6 < v9 || v6 >= v10 )
    goto LABEL_4;
  if ( v6 < 0xFFFFFFFFFFFFFFF4LL )
  {
    v13 = **(_QWORD **)(a2 + 176);
    sub_8C820(&v33, v13 + 16, v6, a4, v9, v10);
    if ( !v34.m128i_i8[8] || v8 + 11 < v33 || v8 + 11 >= v34.m128i_i64[0] )
    {
      sub_3C7B0((__int64)&v35);
      v16 = v35;
      v17 = _mm_loadu_si128(&v36);
      goto LABEL_14;
    }
    v32 = sub_8C5F0(v13, v8, v14, v15, v33, v34.m128i_i64[0]);
    v24 = sub_8C5F0(v13, v8 + 4, v20, v21, v22, v23);
    v29 = sub_8C5F0(v13, v8 + 8, v25, v26, v27, v28);
    v36.m128i_i64[0] = v24;
    v36.m128i_i64[1] = v29;
    v30 = *(_QWORD *)(a4 + 16);
    v35 = v32;
    v37 = 0;
    if ( (v29 & 1) != 0 || (v30 & 3) != 0 )
    {
      sub_3C7B0((__int64)&v33);
      *(_QWORD *)a1 = v33;
      v31 = _mm_loadu_si128(&v34);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v31;
      return a1;
    }
    *(_QWORD *)(a4 + 16) = v29;
LABEL_6:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  sub_3C7B0((__int64)&v35);
  v16 = v35;
  v17 = _mm_loadu_si128(&v36);
LABEL_14:
  v35 = v16;
  v37 = 1;
  v36 = v17;
  sub_3C7B0((__int64)&v33);
  v18 = v33;
  v19 = _mm_loadu_si128(&v34);
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)a1 = v18;
  *(__m128i *)(a1 + 8) = v19;
  if ( v16 )
    qfree();
  return a1;
}
