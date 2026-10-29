__int64 __fastcall sub_18B8E0(__int64 *a1, const __m128i *a2)
{
  __int64 v2; // r12
  __m128i v4; // xmm0
  double v5; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __m128 v18; // xmm0
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  _QWORD v32[5]; // [rsp+10h] [rbp-98h] BYREF
  char v33; // [rsp+38h] [rbp-70h]
  __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h]
  __m128 v36; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = a1[1] + 216LL * a2[4].m128i_i32[2];
  if ( !*(_BYTE *)(v2 + 208) )
  {
    *(_BYTE *)(v2 + 208) = 1;
    *(_QWORD *)v2 = a2;
    v4 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2[4].m128i_i64[0] + 1472) + 40 * a2[32].m128i_i64[0] + 8));
    *(_QWORD *)&v5 = _mm_add_epi64(v4, _mm_srli_si128(v4, 8)).m128i_u64[0];
    *(double *)(v2 + 200) = v5;
    *(_QWORD *)(v2 + 192) = a2[32].m128i_i64[0];
    v6 = a2[22].m128i_i64[0];
    if ( (int)v6 > 0 )
    {
      v7 = 0;
      v8 = 4LL * (unsigned int)(v6 - 1) + 4;
      while ( 1 )
      {
        v9 = *(unsigned int *)(a2[21].m128i_i64[1] + v7);
        if ( (unsigned int)v9 >= *(_DWORD *)(*a1 + 64) )
          break;
        v10 = sub_18B8E0(a1, *(const __m128i **)(*(_QWORD *)(*a1 + 528) + 8 * v9));
        v11 = *(_QWORD *)(v2 + 24);
        v12 = *(_QWORD *)(v2 + 32);
        v13 = v10;
        v14 = (__int64 *)(v11 + 8 * v12);
        if ( (__int64 *)v11 == v14 )
          goto LABEL_9;
        v15 = *(__int64 **)(v2 + 24);
        while ( v13 != *v15 )
        {
          if ( v14 == ++v15 )
            goto LABEL_9;
        }
        if ( v14 == v15 )
        {
LABEL_9:
          v16 = v12 + 1;
          if ( *(_QWORD *)(v2 + 40) < v16 )
          {
            v27 = qvector_reserve(v2 + 24, v11, v16, 8);
            v28 = *(_QWORD *)(v2 + 32);
            *(_QWORD *)(v2 + 24) = v27;
            v14 = (__int64 *)(v27 + 8 * v28);
          }
          *v14 = v13;
          ++*(_QWORD *)(v2 + 32);
        }
        v7 += 4;
        if ( v8 == v7 )
          goto LABEL_13;
      }
      if ( !under_debugger )
        sub_383060(0xCDEFu, v5);
LABEL_35:
      BUG();
    }
LABEL_13:
    v17 = a2[4].m128i_i64[0];
    memset(&v32[1], 0, 32);
    v33 = 0;
    v34 = v2;
    v35 = 0;
    v18 = _mm_loadh_ps((const double *)(v17 + 128));
    v32[0] = &off_4DE108;
    v36 = v18;
    sub_11F5B0(a2, (__int64)v32);
    v20 = *(_QWORD *)v2;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 64LL) + 144LL);
    if ( v21 > *(_QWORD *)(v2 + 176) )
      v21 = *(_QWORD *)(v2 + 176);
    if ( v21 )
    {
      do
      {
        if ( !sub_317040((unsigned __int64 **)(v2 + 128), v21) )
          break;
        --v21;
      }
      while ( v21 );
      v20 = *(_QWORD *)v2;
    }
    v22 = *(_QWORD *)(v2 + 168);
    *(_QWORD *)(v2 + 176) = v21;
    *(_QWORD *)(v20 + 336) = v22;
    v23 = *(_QWORD *)(v2 + 176);
    *(_QWORD *)(*(_QWORD *)v2 + 328LL) = v23;
    v24 = *(_QWORD *)v2;
    *(_QWORD *)(*(_QWORD *)v2 + 520LL) = v23;
    v25 = *(_QWORD **)v2;
    if ( (*(_BYTE *)(*(_QWORD *)v2 + 26LL) & 4) == 0 )
      goto LABEL_21;
    v29 = *(_QWORD *)(v25[8] + 1472LL) + 40LL * v25[64];
    v19 = *(_QWORD *)(v2 + 200);
    v30 = *(_QWORD *)(v29 + 16);
    v31 = *(_QWORD *)(v29 + 8);
    if ( v30 && v19 >= v31 )
    {
      v24 = v31 + v30;
      if ( v24 - 1 >= v19 )
      {
LABEL_29:
        v25[65] = v19;
LABEL_21:
        sub_316CB0(a1 + 4, (__int64 **)(v2 + 128), v24, v19);
        return v2;
      }
    }
    else
    {
      v24 = v31 + v30;
    }
    if ( v19 != v24 )
    {
      if ( !under_debugger )
        sub_383060(0xCDF7u, *(double *)v18.m128_u64);
      goto LABEL_35;
    }
    goto LABEL_29;
  }
  return v2;
}

