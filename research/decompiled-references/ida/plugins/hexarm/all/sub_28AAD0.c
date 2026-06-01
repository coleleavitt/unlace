__int64 __fastcall sub_28AAD0(__int64 a1, __int64 a2)
{
  char v2; // r13
  const __m128i *v3; // rbx
  __int64 *v4; // r14
  unsigned int v5; // r12d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __m128d v11; // xmm0
  __m128i *v12; // r13
  int v13; // r8d
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  int radix; // eax
  _QWORD *v18; // [rsp+8h] [rbp-68h]

  v2 = 0;
  v3 = (const __m128i *)a2;
  v4 = (__int64 *)sub_27F440(a2, 47);
  if ( (v4
     || (v15 = sub_27F440(a2, 36), (v4 = (__int64 *)v15) != nullptr)
     && (v16 = *(_QWORD *)(v15 + 32), *(_DWORD *)(v16 + 8) == 61)
     && (v2 = 1, sub_255DF0(*(__int64 **)(v16 + 24)) == 1))
    && (v5 = sub_29D040(v4[3] + 48), (_BYTE)v5) )
  {
    copy_tinfo_t();
    if ( *(__int64 **)(a2 + 32) == v4 )
      *(__m128 *)(a2 + 24) = _mm_loadh_ps((const double *)(a2 + 24));
    if ( *(_DWORD *)(a2 + 8) == 19 )
    {
      v7 = 1;
      v8 = -1;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    v9 = (_QWORD *)sub_241310(*(_QWORD *)(a1 + 72), v8, 0, -1, 0, v7, 0);
    v10 = v3->m128i_i64[0];
    v3[2].m128i_i64[1] = (__int64)v9;
    *v9 = v10;
    v3->m128i_i32[2] = 16;
    if ( v2 )
    {
      if ( v4[4] )
      {
        sub_2559F0(v4[4]);
        clear_tinfo_t();
        j__qfree();
      }
      v4[4] = 0;
      sub_255C10(v4, v4[3]);
      sub_244580((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    }
    else
    {
      sub_255C10(v4, v4[3]);
    }
    if ( *(_DWORD *)(v3[2].m128i_i64[0] + 8) == 61 )
    {
      if ( (unsigned int)lexcompare_tinfo()
        || (v18 = *(_QWORD **)(v3[2].m128i_i64[0] + 24),
            radix = get_radix(),
            (unsigned __int8)sub_261950(
                               v18,
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
        sub_244580((__int64)v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      }
    }
    if ( v2 != (_BYTE)v7 )
    {
      v11 = (__m128d)_mm_loadu_si128(v3 + 2);
      v3[2] = (const __m128i)_mm_shuffle_pd(v11, v11, 1);
    }
    v12 = *(__m128i **)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v13 = v12->m128i_i32[2];
    if ( (unsigned int)(v13 - 35) <= 1 )
    {
      v14 = v12[1].m128i_i64[1];
      if ( *(_DWORD *)(v14 + 8) == 61 || (v14 = v12[2].m128i_i64[0], *(_DWORD *)(v14 + 8) == 61) )
      {
        if ( v14 )
        {
          v3[2].m128i_i64[0] = sub_28A950(*(_QWORD *)(a1 + 64), v3[2].m128i_i64[0], v14, v12->m128i_i64[0], v13);
          v3[2].m128i_i64[1] = sub_28A950(
                                 *(_QWORD *)(a1 + 64),
                                 v3[2].m128i_i64[1],
                                 v14,
                                 v12->m128i_i64[0],
                                 v12->m128i_i32[2]);
          sub_244580((__int64)v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          sub_2559F0(v14);
          clear_tinfo_t();
          j__qfree();
          sub_255C10(v12->m128i_i64, (__int64)v3);
          *(_DWORD *)(a1 + 8) |= 8u;
          v3 = v12;
        }
      }
    }
    sub_244580((__int64)v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned int)lexcompare_tinfo() && (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    clear_tinfo_t();
  }
  else
  {
    return 0;
  }
  return v5;
}

