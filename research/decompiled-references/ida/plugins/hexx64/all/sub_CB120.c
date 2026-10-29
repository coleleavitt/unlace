unsigned __int64 __fastcall sub_CB120(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  _QWORD *v9; // r11
  _QWORD *v10; // r13
  _QWORD *v11; // r12
  int *v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r15
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  __m128i v20; // xmm5
  unsigned __int64 v21; // rax
  __m128 v22; // xmm6
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rbx
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int32 v30; // r8d
  __m128i v31; // xmm3
  __m128i v32; // xmm2
  __int64 v33; // r14
  _QWORD *v34; // rsi
  int v35; // r9d
  _QWORD *v36; // rbp
  bool i; // al
  __m128i v38; // xmm0
  int v39; // edx
  int v40; // ecx
  int v41; // edi
  __m128 v43; // xmm1
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int32 v47; // r8d
  __int64 v48; // rsi
  int v49; // r10d
  bool v50; // dl
  __m128i v51; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v52; // [rsp+10h] [rbp-A8h] BYREF
  __m128i *v53; // [rsp+20h] [rbp-98h]
  _QWORD *v54; // [rsp+28h] [rbp-90h]
  _QWORD *v55; // [rsp+30h] [rbp-88h]
  _QWORD *v56; // [rsp+38h] [rbp-80h]
  __int64 v57; // [rsp+44h] [rbp-74h]
  __int32 v58; // [rsp+4Ch] [rbp-6Ch]
  __m128i v59; // [rsp+50h] [rbp-68h] BYREF
  __m128i v60; // [rsp+60h] [rbp-58h]
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v9 = a3;
  v10 = a2;
  v11 = a1;
  v12 = (int *)*a2;
  v13 = a1[2];
  v61 = __readfsqword(0x28u);
  v15 = *a1;
  v16 = (_QWORD *)a2[3];
  v17 = a1[3];
  v18 = 0xAAAAAAAAAAAAAAABLL * ((((__int64)v12 - a2[1]) >> 2) + ((__int64)(v13 - *a1) >> 2));
  v19 = v18 + 42 * ((v16 == nullptr) + ((__int64)((__int64)v16 - v17) >> 3) - 1);
  if ( v19 <= 1 )
    goto LABEL_11;
  v20 = (__m128i)v13;
  v21 = 0xAAAAAAAAAAAAAAABLL * ((v15 - v11[1]) >> 2);
  v22 = _mm_loadh_ps((const double *)v11 + 1);
  v54 = v11;
  v55 = v10;
  v23 = (v19 >> 1) - 1;
  v56 = a3;
  v51 = _mm_unpacklo_epi64(v20, (__m128i)v17);
  v24 = (v19 >> 1) + v21 - 1;
  v52 = (__m128i)v22;
  v25 = v15 + 12 * v23;
  v53 = &v59;
  v26 = v18 + 42 * ((v16 == nullptr) + ((__int64)((__int64)v16 - v17) >> 3) - 1);
  v27 = v17;
  while ( 1 )
  {
    if ( v24 >= 0 )
    {
      v28 = v25;
      if ( v24 <= 41 )
        goto LABEL_6;
      v29 = v24 / 42;
    }
    else
    {
      v29 = ~(~v24 / 0x2AuLL);
    }
    v28 = *(_QWORD *)(v27 + 8 * v29) + 12 * (v24 - 42 * v29);
LABEL_6:
    v30 = *(_DWORD *)(v28 + 8);
    v31 = _mm_load_si128(&v51);
    --v24;
    v25 -= 12;
    v32 = _mm_load_si128(&v52);
    v57 = *(_QWORD *)v28;
    v58 = v30;
    v59 = v32;
    v60 = v31;
    sub_CA920(v53->m128i_i64, v23, v26, v57, v30, a4);
    if ( !v23 )
      break;
    --v23;
  }
  v10 = v55;
  v11 = v54;
  v9 = v56;
  v12 = (int *)*v55;
  v16 = (_QWORD *)v55[3];
LABEL_11:
  v33 = v10[2];
  v34 = (_QWORD *)v9[3];
  v35 = a4;
  v36 = v9;
LABEL_12:
  for ( i = v16 < v34; v16 == v34; i = v16 < v34 )
  {
    if ( (unsigned __int64)v12 >= *v36 )
      return v61 - __readfsqword(0x28u);
LABEL_14:
    v38 = _mm_loadu_si128((const __m128i *)v11);
    v39 = *v12;
    v40 = *(_DWORD *)v38.m128i_i64[0];
    if ( v35 == *v12 )
    {
      if ( v40 != v35 )
        goto LABEL_27;
      v50 = v12[1] > *(_DWORD *)(v38.m128i_i64[0] + 4);
    }
    else
    {
      if ( v40 == v35 )
        goto LABEL_22;
      if ( v39 | v40 )
      {
        v41 = *(_DWORD *)(v38.m128i_i64[0] + 8);
        if ( v12[2] < v41 || v12[2] <= v41 && (v40 > v39 || v40 >= v39 && v12[1] < *(_DWORD *)(v38.m128i_i64[0] + 4)) )
        {
LABEL_22:
          v12 += 3;
          if ( (int *)v33 != v12 )
            goto LABEL_12;
          goto LABEL_23;
        }
LABEL_27:
        v43 = (__m128)_mm_loadu_si128((const __m128i *)v11 + 1);
        v44 = v10[1];
        v51.m128i_i32[0] = v35;
        v45 = *v10;
        v47 = v12[2];
        v48 = v10[3];
        v57 = *(_QWORD *)v12;
        v46 = v57;
        v58 = v47;
        *(_QWORD *)v12 = *(_QWORD *)v38.m128i_i64[0];
        v49 = *(_DWORD *)(v38.m128i_i64[0] + 8);
        v59 = v38;
        v12[2] = v49;
        v60 = (__m128i)v43;
        v12 += 3;
        sub_CA920(
          v59.m128i_i64,
          0,
          0xAAAAAAAAAAAAAAABLL * (((__int64)(v43.m128_u64[0] - v38.m128i_i64[0]) >> 2) + ((v45 - v44) >> 2))
        + 42 * ((v48 == 0) + ((__int64)(v48 - _mm_movehl_ps(a9, v43).m128_u64[0]) >> 3) - 1),
          v46,
          v47,
          v35);
        v34 = (_QWORD *)v36[3];
        v35 = v51.m128i_i32[0];
        if ( (int *)v33 != v12 )
          goto LABEL_12;
        goto LABEL_23;
      }
      v50 = v12[1] < *(_DWORD *)(v38.m128i_i64[0] + 4);
    }
    if ( v50 )
      goto LABEL_27;
    v12 += 3;
    if ( (int *)v33 != v12 )
      goto LABEL_12;
LABEL_23:
    v12 = (int *)*++v16;
    v33 = *v16 + 504LL;
  }
  if ( i )
    goto LABEL_14;
  return v61 - __readfsqword(0x28u);
}

