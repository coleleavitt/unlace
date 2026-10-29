__int64 __fastcall sub_28A710(__int64 a1, __int64 a2, __m128 a3)
{
  char v3; // r13
  const __m128i *v4; // rbx
  __int64 *v5; // r14
  unsigned int v6; // r12d
  int v8; // r15d
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __m128d v12; // xmm0
  __m128i *v13; // r13
  int v14; // r8d
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  int radix; // eax
  __int64 v19; // [rsp+8h] [rbp-68h]
  _QWORD *v20; // [rsp+8h] [rbp-68h]

  v3 = 0;
  v4 = (const __m128i *)a2;
  v5 = (__int64 *)sub_27F080(a2, 47);
  if ( (v5
     || (v16 = sub_27F080(a2, 36), (v5 = (__int64 *)v16) != nullptr)
     && (v17 = *(_QWORD *)(v16 + 32), *(_DWORD *)(v17 + 8) == 61)
     && (v3 = 1, sub_255A30(*(__int64 **)(v17 + 24)) == 1))
    && (v6 = sub_29CC80((_QWORD *)(v5[3] + 48)), (_BYTE)v6) )
  {
    copy_tinfo_t();
    if ( *(__int64 **)(a2 + 32) == v5 )
    {
      a3 = _mm_loadh_ps((const double *)(a2 + 24));
      *(__m128 *)(a2 + 24) = a3;
    }
    if ( *(_DWORD *)(a2 + 8) == 19 )
    {
      v8 = 1;
      v9 = -1;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    v10 = (_QWORD *)sub_240F50(*(_QWORD *)(a1 + 72), v9, 0, -1, 0, v8, 0);
    v11 = v4->m128i_i64[0];
    v4[2].m128i_i64[1] = (__int64)v10;
    *v10 = v11;
    v4->m128i_i32[2] = 16;
    if ( v3 )
    {
      if ( v5[4] )
      {
        v19 = v5[4];
        sub_255630(v19, *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v19);
      }
      v5[4] = 0;
      sub_255850(v5, v5[3], *(double *)a3.m128_u64);
      sub_2441C0((__int64)v5, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
    }
    else
    {
      sub_255850(v5, v5[3], *(double *)a3.m128_u64);
    }
    if ( *(_DWORD *)(v4[2].m128i_i64[0] + 8) == 61 )
    {
      if ( (unsigned int)lexcompare_tinfo()
        || (v20 = *(_QWORD **)(v4[2].m128i_i64[0] + 24),
            radix = get_radix(),
            (unsigned __int8)sub_261590(
                               v20,
                               *(_QWORD *)(a1 + 72),
                               *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
                               radix)) )
      {
        clear_tinfo_t();
      }
      else
      {
        clear_tinfo_t();
        copy_tinfo_t();
        clear_tinfo_t();
        sub_2441C0((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
      }
    }
    if ( v3 != (_BYTE)v8 )
    {
      v12 = (__m128d)_mm_loadu_si128(v4 + 2);
      a3 = (__m128)_mm_shuffle_pd(v12, v12, 1);
      v4[2] = (const __m128i)a3;
    }
    v13 = *(__m128i **)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v14 = v13->m128i_i32[2];
    if ( (unsigned int)(v14 - 35) <= 1 )
    {
      v15 = v13[1].m128i_i64[1];
      if ( *(_DWORD *)(v15 + 8) == 61 || (v15 = v13[2].m128i_i64[0], *(_DWORD *)(v15 + 8) == 61) )
      {
        if ( v15 )
        {
          v4[2].m128i_i64[0] = sub_28A590(
                                 *(_QWORD *)(a1 + 64),
                                 v4[2].m128i_i64[0],
                                 v15,
                                 v13->m128i_i64[0],
                                 v14,
                                 *(double *)a3.m128_u64);
          v4[2].m128i_i64[1] = sub_28A590(
                                 *(_QWORD *)(a1 + 64),
                                 v4[2].m128i_i64[1],
                                 v15,
                                 v13->m128i_i64[0],
                                 v13->m128i_i32[2],
                                 *(double *)a3.m128_u64);
          sub_2441C0((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
          sub_255630(v15, *(double *)a3.m128_u64);
          clear_tinfo_t();
          j__qfree(v15);
          sub_255850(v13->m128i_i64, (__int64)v4, *(double *)a3.m128_u64);
          *(_DWORD *)(a1 + 8) |= 8u;
          v4 = v13;
        }
      }
    }
    sub_2441C0((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
    if ( (unsigned int)lexcompare_tinfo()
      && (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    {
      *(_DWORD *)(a1 + 8) |= 8u;
    }
    clear_tinfo_t();
  }
  else
  {
    return 0;
  }
  return v6;
}

