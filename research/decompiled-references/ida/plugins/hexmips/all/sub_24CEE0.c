_DWORD *__fastcall sub_24CEE0(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, int); // rdx
  int v8; // r14d
  __int64 (__fastcall *v9)(__int64, int, int); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // r8
  const __m128i *v14; // rbp
  _QWORD *v15; // rax
  __m128i *v16; // rax
  __int64 v17; // r9
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  __int64 v19; // rsi
  _DWORD *result; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  __int64 v26; // rsi
  _QWORD *v27; // r13
  __m128i *v28; // rax
  __int64 (__fastcall *v29)(__int64, int, int); // rax
  __int64 v30; // rsi
  __m128d v31; // xmm0
  unsigned int v32; // eax
  unsigned int v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  char v36; // [rsp+1Fh] [rbp-39h]

  v4 = a2;
  v5 = *(_DWORD *)(a1[38] + 4LL * a2);
  v6 = *a1;
  v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v7 == sub_60E90 )
  {
    v8 = 0;
    if ( a1[7] )
    {
      v9 = *(__int64 (__fastcall **)(__int64, int, int))(v6 + 112);
      v8 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
      if ( v9 == sub_60ED0 )
        goto LABEL_4;
      goto LABEL_16;
    }
  }
  else
  {
    v8 = v7((__int64)a1, a2);
    v6 = *a1;
  }
  v9 = *(__int64 (__fastcall **)(__int64, int, int))(v6 + 112);
  if ( v9 == sub_60ED0 )
  {
LABEL_4:
    v33 = **(_DWORD **)(a1[6] + 24LL * a2);
    goto LABEL_5;
  }
LABEL_16:
  v33 = v9((__int64)a1, a2, 0);
LABEL_5:
  v12 = (_QWORD *)sub_24BC90(a1, v33, a3, 1);
  if ( !v12 )
  {
    if ( v8 > 2 )
    {
      if ( !under_debugger )
        sub_37E160(50381);
    }
    else
    {
      if ( v5 <= 14 )
      {
        v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v25 == sub_60ED0 )
          v26 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 4LL);
        else
          v26 = (unsigned int)v25((__int64)a1, a2, 1);
        return (_DWORD *)sub_24BC90(a1, v26, a3, 0);
      }
      if ( !under_debugger )
        sub_37E160(50382);
    }
    BUG();
  }
  if ( v5 == 3 || v5 == 17 )
  {
    v12 = sub_23FBE0(*(_QWORD *)(a1[41] + 112LL), (__int64)v12, v10, v11, v13);
    if ( v8 <= 2 )
      goto LABEL_9;
  }
  else if ( v8 <= 2 )
  {
LABEL_9:
    v36 = 0;
    goto LABEL_10;
  }
  v21 = sub_23CE50(a1[41], (__int64)v12, v10, v11, v13);
  v24 = (unsigned int)(2 * v21);
  if ( (int)v24 <= SHIDWORD(v21) )
    goto LABEL_9;
  v36 = 1;
  v12 = sub_23FBE0(*(_QWORD *)(a1[41] + 112LL), (__int64)v12, v24, v22, v23);
LABEL_10:
  v14 = (const __m128i *)sub_23D0A0(a3, (__int64)v12);
  v15 = (_QWORD *)j__qalloc_or_throw();
  *v15 = -1;
  v15[1] = -4294967225LL;
  v15[2] = 0xFFFFFFFFLL;
  v15[3] = 0;
  v34 = (__int64)v15;
  v16 = (__m128i *)qalloc_or_throw();
  v17 = v34;
  v16[1].m128i_i64[0] = 0;
  *v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
  *(_QWORD *)(v34 + 24) = v16;
  v14[4].m128i_i64[0] = v34;
  if ( v5 > 14 )
    return sub_23CCD0(a1, v33, v34);
  v18 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v18 == sub_60ED0 )
  {
    v19 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 4LL);
  }
  else
  {
    v32 = v18((__int64)a1, a2, 1);
    v17 = v34;
    v19 = v32;
  }
  result = (_DWORD *)sub_24BC90(a1, v19, v17, 0);
  if ( v8 > 2 )
  {
    v27 = (_QWORD *)j__qalloc_or_throw();
    *v27 = -1;
    v27[1] = -4294967225LL;
    v27[2] = 0xFFFFFFFFLL;
    v27[3] = 0;
    v28 = (__m128i *)qalloc_or_throw();
    v28[1].m128i_i64[0] = 0;
    *v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
    v27[3] = v28;
    v14[4].m128i_i64[1] = (__int64)v27;
    v29 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    if ( v29 == sub_60ED0 )
      v30 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 8LL);
    else
      v30 = (unsigned int)v29((__int64)a1, a2, 2);
    result = (_DWORD *)sub_24BC90(a1, v30, v27, 0);
    if ( v36 )
    {
      v31 = (__m128d)_mm_loadu_si128(v14 + 4);
      v14[4] = (const __m128i)_mm_shuffle_pd(v31, v31, 1);
    }
  }
  return result;
}

