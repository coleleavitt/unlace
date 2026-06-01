__int64 __fastcall sub_186D20(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // r12
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  _QWORD v30[5]; // [rsp+10h] [rbp-98h] BYREF
  char v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  __m128 v34; // [rsp+50h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v2 = a1[1] + 216LL * a2[4].m128i_i32[2];
  if ( !*(_BYTE *)(v2 + 208) )
  {
    *(_BYTE *)(v2 + 208) = 1;
    *(_QWORD *)v2 = a2;
    v4 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2[4].m128i_i64[0] + 1472) + 40 * a2[32].m128i_i64[0] + 8));
    *(_QWORD *)(v2 + 200) = _mm_add_epi64(v4, _mm_srli_si128(v4, 8)).m128i_u64[0];
    *(_QWORD *)(v2 + 192) = a2[32].m128i_i64[0];
    v5 = a2[22].m128i_i64[0];
    if ( (int)v5 > 0 )
    {
      v6 = 0;
      v7 = 4LL * (unsigned int)(v5 - 1) + 4;
      while ( 1 )
      {
        v8 = *(unsigned int *)(a2[21].m128i_i64[1] + v6);
        if ( (unsigned int)v8 >= *(_DWORD *)(*a1 + 64LL) )
          break;
        v9 = sub_186D20(a1, *(_QWORD *)(*(_QWORD *)(*a1 + 528LL) + 8 * v8));
        v10 = *(__int64 **)(v2 + 24);
        v11 = *(_QWORD *)(v2 + 32);
        v12 = v9;
        v13 = &v10[v11];
        if ( v10 == v13 )
          goto LABEL_9;
        v14 = *(__int64 **)(v2 + 24);
        while ( v12 != *v14 )
        {
          if ( v13 == ++v14 )
            goto LABEL_9;
        }
        if ( v13 == v14 )
        {
LABEL_9:
          if ( *(_QWORD *)(v2 + 40) < (unsigned __int64)(v11 + 1) )
          {
            v23 = qvector_reserve();
            v24 = *(_QWORD *)(v2 + 32);
            *(_QWORD *)(v2 + 24) = v23;
            v13 = (__int64 *)(v23 + 8 * v24);
          }
          *v13 = v12;
          ++*(_QWORD *)(v2 + 32);
        }
        v6 += 4;
        if ( v7 == v6 )
          goto LABEL_13;
      }
      if ( !under_debugger )
        sub_37CFE0(52719);
LABEL_35:
      BUG();
    }
LABEL_13:
    v15 = a2[4].m128i_i64[0];
    memset(&v30[1], 0, 32);
    v31 = 0;
    v32 = v2;
    v33 = 0;
    v16 = _mm_loadh_ps((const double *)(v15 + 128));
    v30[0] = off_4B1AE8;
    v34 = v16;
    sub_11A9F0(a2, (__int64)v30);
    v17 = *(_QWORD *)v2;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 64LL) + 144LL);
    if ( v18 > *(_QWORD *)(v2 + 176) )
      v18 = *(_QWORD *)(v2 + 176);
    if ( v18 )
    {
      do
      {
        if ( !(unsigned __int8)sub_311780(v2 + 128, v18) )
          break;
        --v18;
      }
      while ( v18 );
      v17 = *(_QWORD *)v2;
    }
    v19 = *(_QWORD *)(v2 + 168);
    *(_QWORD *)(v2 + 176) = v18;
    *(_QWORD *)(v17 + 336) = v19;
    v20 = *(_QWORD *)(v2 + 176);
    *(_QWORD *)(*(_QWORD *)v2 + 328LL) = v20;
    *(_QWORD *)(*(_QWORD *)v2 + 520LL) = v20;
    v21 = *(_QWORD **)v2;
    if ( (*(_BYTE *)(*(_QWORD *)v2 + 26LL) & 4) == 0 )
      goto LABEL_21;
    v25 = *(_QWORD *)(v21[8] + 1472LL) + 40LL * v21[64];
    v26 = *(_QWORD *)(v2 + 200);
    v27 = *(_QWORD *)(v25 + 16);
    v28 = *(_QWORD *)(v25 + 8);
    if ( v27 && v26 >= v28 )
    {
      v29 = v28 + v27;
      if ( v29 - 1 >= v26 )
      {
LABEL_29:
        v21[65] = v26;
LABEL_21:
        sub_3113F0(a1 + 4, v2 + 128);
        return v2;
      }
    }
    else
    {
      v29 = v28 + v27;
    }
    if ( v26 != v29 )
    {
      if ( !under_debugger )
        sub_37CFE0(52727);
      goto LABEL_35;
    }
    goto LABEL_29;
  }
  return v2;
}

