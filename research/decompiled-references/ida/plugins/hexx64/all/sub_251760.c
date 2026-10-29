_DWORD *__fastcall sub_251760(_QWORD *a1, int a2, __int64 a3, double a4)
{
  __int64 v5; // rbx
  int v6; // r13d
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, int); // rdx
  int v9; // r14d
  __int64 (__fastcall *v10)(__int64, int, int); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  const __m128i *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i *v21; // rax
  __int64 v22; // r9
  __m128i v23; // xmm0
  __int64 (__fastcall *v24)(__int64, int, int); // rax
  __int64 v25; // rsi
  _DWORD *result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 (__fastcall *v31)(__int64, int, int); // rax
  __int64 v32; // rsi
  _QWORD *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  __int64 (__fastcall *v38)(__int64, int, int); // rax
  __int64 v39; // rsi
  __m128d v40; // xmm0
  unsigned int v41; // eax
  unsigned int v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+10h] [rbp-48h]
  char v45; // [rsp+1Fh] [rbp-39h]

  v5 = a2;
  v6 = *(_DWORD *)(a1[38] + 4LL * a2);
  v7 = *a1;
  v8 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v8 == sub_65090 )
  {
    v9 = 0;
    if ( a1[7] )
    {
      v10 = *(__int64 (__fastcall **)(__int64, int, int))(v7 + 112);
      v9 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
      if ( v10 == sub_650D0 )
        goto LABEL_4;
      goto LABEL_16;
    }
  }
  else
  {
    v9 = v8((__int64)a1, a2);
    v7 = *a1;
  }
  v10 = *(__int64 (__fastcall **)(__int64, int, int))(v7 + 112);
  if ( v10 == sub_650D0 )
  {
LABEL_4:
    v42 = **(_DWORD **)(a1[6] + 24LL * a2);
    goto LABEL_5;
  }
LABEL_16:
  v42 = v10((__int64)a1, a2, 0);
LABEL_5:
  v13 = sub_250510((__int64)a1, v42, a3, 1, a4);
  if ( !v13 )
  {
    if ( v9 > 2 )
    {
      if ( !under_debugger )
        sub_383060(0xC4CDu, a4);
    }
    else
    {
      if ( v6 <= 14 )
      {
        v31 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v31 == sub_650D0 )
          v32 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v5) + 4LL);
        else
          v32 = (unsigned int)v31((__int64)a1, a2, 1);
        return (_DWORD *)sub_250510((__int64)a1, v32, a3, 0, a4);
      }
      if ( !under_debugger )
        sub_383060(0xC4CEu, a4);
    }
    BUG();
  }
  if ( v6 == 3 || v6 == 17 )
  {
    v13 = (__int64)sub_244460(*(_QWORD *)(a1[41] + 112LL), v13, v11, v12, v14, a4);
    if ( v9 <= 2 )
      goto LABEL_9;
  }
  else if ( v9 <= 2 )
  {
LABEL_9:
    v45 = 0;
    goto LABEL_10;
  }
  v29 = sub_2416D0(a1[41], v13, v11, v12, v14);
  v11 = (unsigned int)(2 * v29);
  if ( (int)v11 <= SHIDWORD(v29) )
    goto LABEL_9;
  v45 = 1;
  v13 = (__int64)sub_244460(*(_QWORD *)(a1[41] + 112LL), v13, v11, v12, v30, a4);
LABEL_10:
  v15 = (const __m128i *)sub_241920(a3, v13, v11, v12, a4);
  v18 = (_QWORD *)j__qalloc_or_throw(32, v13, v16, v17);
  *v18 = -1;
  v18[1] = -4294967225LL;
  v18[2] = 0xFFFFFFFFLL;
  v18[3] = 0;
  v43 = (__int64)v18;
  v21 = (__m128i *)qalloc_or_throw(24, v13, v19, v20);
  v22 = v43;
  v21[1].m128i_i64[0] = 0;
  v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
  *v21 = v23;
  *(_QWORD *)(v43 + 24) = v21;
  v15[4].m128i_i64[0] = v43;
  if ( v6 > 14 )
    return sub_241550(a1, v42, v43, *(double *)v23.m128i_i64);
  v24 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v24 == sub_650D0 )
  {
    v25 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v5) + 4LL);
  }
  else
  {
    v41 = v24((__int64)a1, a2, 1);
    v22 = v43;
    v25 = v41;
  }
  result = (_DWORD *)sub_250510((__int64)a1, v25, v22, 0, *(double *)v23.m128i_i64);
  if ( v9 > 2 )
  {
    v33 = (_QWORD *)j__qalloc_or_throw(32, v25, v27, v28);
    *v33 = -1;
    v33[1] = -4294967225LL;
    v33[2] = 0xFFFFFFFFLL;
    v33[3] = 0;
    v36 = (__m128i *)qalloc_or_throw(24, v25, v34, v35);
    v36[1].m128i_i64[0] = 0;
    v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v36);
    *v36 = v37;
    v33[3] = v36;
    v15[4].m128i_i64[1] = (__int64)v33;
    v38 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    if ( v38 == sub_650D0 )
      v39 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v5) + 8LL);
    else
      v39 = (unsigned int)v38((__int64)a1, a2, 2);
    result = (_DWORD *)sub_250510((__int64)a1, v39, (__int64)v33, 0, *(double *)v37.m128i_i64);
    if ( v45 )
    {
      v40 = (__m128d)_mm_loadu_si128(v15 + 4);
      v15[4] = (const __m128i)_mm_shuffle_pd(v40, v40, 1);
    }
  }
  return result;
}

