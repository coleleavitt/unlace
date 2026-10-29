unsigned __int64 __fastcall sub_C6EF0(__int64 *a1, signed int **a2, int a3, double a4, __m128i a5)
{
  signed int *v5; // rbx
  signed int *v7; // rsi
  __int64 v8; // r10
  __int64 *v9; // r14
  signed __int64 v12; // r8
  __int64 v13; // rbx
  signed int *v14; // r8
  __int64 *v15; // rbx
  __int64 v16; // r15
  signed int v17; // eax
  signed int v18; // edx
  signed int v19; // ecx
  signed int v20; // ebx
  __m128i v21; // xmm0
  __m128 v22; // xmm2
  signed __int64 v23; // rcx
  __int64 *v24; // rbx
  __int64 *v25; // r14
  __m128i v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  signed int *v30; // rdx
  __int64 v31; // rsi
  _DWORD *v32; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-C8h]
  signed int *v37; // [rsp+8h] [rbp-C0h]
  signed int *v38; // [rsp+8h] [rbp-C0h]
  __int64 v39; // [rsp+10h] [rbp-B8h]
  __int64 v40; // [rsp+18h] [rbp-B0h]
  int v41; // [rsp+20h] [rbp-A8h]
  signed int v42; // [rsp+24h] [rbp-A4h]
  signed int **v43; // [rsp+28h] [rbp-A0h]
  _DWORD *v44; // [rsp+38h] [rbp-90h]
  __m128i v45; // [rsp+40h] [rbp-88h] BYREF
  __m128i v46; // [rsp+50h] [rbp-78h]
  __m128i v47; // [rsp+60h] [rbp-68h] BYREF
  __m128i v48; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v5 = (signed int *)*a1;
  v49 = __readfsqword(0x28u);
  v7 = *a2;
  if ( v5 != v7 )
  {
    v8 = a1[1];
    v9 = (__int64 *)a1[3];
    v12 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v5 - v8) >> 2) + 1;
    if ( v12 < 0 )
    {
      v35 = ~(~v12 / 0x2AuLL);
    }
    else
    {
      if ( v12 <= 41 )
      {
        v13 = (__int64)(v5 + 3);
        v39 = a1[2];
        goto LABEL_5;
      }
      v35 = v12 / 42;
    }
    v9 += v35;
    v8 = *v9;
    v39 = *v9 + 504;
    v13 = *v9 + 12 * (v12 - 42 * v35);
LABEL_5:
    v40 = v8;
    v14 = (signed int *)v13;
    v15 = v9;
    v43 = a2;
    v41 = a3;
LABEL_6:
    v36 = (__int64)v15;
    while ( 1 )
    {
      if ( v14 == v7 )
        return v49 - __readfsqword(0x28u);
      v16 = *a1;
      v17 = *v14;
      v18 = *(_DWORD *)*a1;
      if ( v41 != *v14 )
        break;
      if ( v41 != v18 )
      {
        v42 = v14[2];
LABEL_33:
        v21 = _mm_cvtsi32_si128(v14[1]);
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v16 + 4) >= v14[1] )
        goto LABEL_30;
      v21 = _mm_cvtsi32_si128(v14[1]);
      v42 = v14[2];
LABEL_18:
      v22 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), v21);
      v37 = v14 + 3;
      v23 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v14 - v40) >> 2) + 1;
      if ( v23 < 0 )
      {
        v34 = ~(~v23 / 0x2AuLL);
      }
      else
      {
        if ( v23 <= 41 )
        {
          v24 = (__int64 *)a1[3];
          v25 = (__int64 *)v36;
          v26.m128i_i64[1] = v36;
          v26.m128i_i64[0] = v39;
          v27 = v40;
          v28 = (__int64)(v14 + 3);
          if ( v24 != (__int64 *)v36 )
            goto LABEL_21;
          goto LABEL_36;
        }
        v34 = v23 / 42;
      }
      v24 = (__int64 *)a1[3];
      v25 = (__int64 *)v36;
      v26.m128i_i64[1] = v36 + 8 * v34;
      v27 = *(_QWORD *)v26.m128i_i64[1];
      v26.m128i_i64[0] = *(_QWORD *)v26.m128i_i64[1] + 504LL;
      v28 = *(_QWORD *)v26.m128i_i64[1] + 12 * (v23 - 42 * v34);
      if ( v24 != (__int64 *)v36 )
      {
LABEL_21:
        v29 = (_DWORD *)a1[2];
        v45.m128i_i64[0] = v28;
        v30 = v14;
        v46 = v26;
        v31 = v40;
        v44 = v29;
        v45.m128i_i64[1] = v27;
        while ( 1 )
        {
          --v25;
          sub_C6CE0(&v47, v31, v30, &v45, *(double *)v21.m128i_i64, *(double *)a5.m128i_i64, v22);
          a5 = _mm_load_si128(&v47);
          v21 = _mm_load_si128(&v48);
          if ( v24 == v25 )
            break;
          v31 = *v25;
          v45 = a5;
          v46 = v21;
          v30 = (signed int *)(v31 + 504);
        }
        v47 = a5;
        v48 = v21;
        sub_C6CE0(&v45, v16, v44, &v47, *(double *)v21.m128i_i64, *(double *)a5.m128i_i64, v22);
        goto LABEL_25;
      }
LABEL_36:
      v47.m128i_i64[0] = v28;
      v48 = v26;
      v47.m128i_i64[1] = v27;
      sub_C6CE0(&v45, v16, v14, &v47, *(double *)v21.m128i_i64, *(double *)a5.m128i_i64, v22);
LABEL_25:
      v32 = (_DWORD *)*a1;
      *(_QWORD *)v32 = v22.m128_u64[0];
      v32[2] = v42;
LABEL_26:
      v14 = v37;
      v7 = *v43;
      if ( v37 == (signed int *)v39 )
      {
        v14 = *(signed int **)(v36 + 8);
        v15 = (__int64 *)(v36 + 8);
        v40 = (__int64)v14;
        v39 = (__int64)(v14 + 126);
        goto LABEL_6;
      }
    }
    if ( v41 == v18 )
      goto LABEL_30;
    if ( !(v18 | v17) )
    {
      v21 = _mm_cvtsi32_si128(v14[1]);
      if ( _mm_cvtsi128_si32(v21) >= *(_DWORD *)(v16 + 4) )
      {
LABEL_30:
        v47.m128i_i64[0] = (__int64)v14;
        v38 = v14;
        v47.m128i_i64[1] = v40;
        v48.m128i_i64[0] = v39;
        v48.m128i_i64[1] = v36;
        sub_C07B0((__int64)&v47, v41);
        v37 = v38 + 3;
        goto LABEL_26;
      }
      v19 = v14[2];
      goto LABEL_17;
    }
    v19 = v14[2];
    v42 = v19;
    if ( v19 < *(_DWORD *)(v16 + 8) )
      goto LABEL_30;
    if ( v19 <= *(_DWORD *)(v16 + 8) )
    {
      if ( v17 < v18 )
        goto LABEL_30;
      if ( v17 <= v18 )
      {
        v20 = v14[1];
        if ( *(_DWORD *)(v16 + 4) > v20 )
          goto LABEL_30;
        v21 = _mm_cvtsi32_si128(v20);
LABEL_17:
        v42 = v19;
        goto LABEL_18;
      }
    }
    goto LABEL_33;
  }
  return v49 - __readfsqword(0x28u);
}

