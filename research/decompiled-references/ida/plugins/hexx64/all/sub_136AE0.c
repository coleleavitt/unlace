__int64 __fastcall sub_136AE0(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned __int8 v24[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v4 + 4) )
  {
    if ( !sub_125B60((unsigned __int8 *)a2, v4, 0, *(double *)a3.m128i_i64) )
    {
      v17 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)v17 != 14 )
      {
        if ( !under_debugger )
          sub_383060(0xCA11u, *(double *)a3.m128i_i64);
        BUG();
      }
      v18 = *(_QWORD *)(v17 + 8);
      sub_123A40((__int64)v24, (unsigned __int8 *)a2, v15, v16);
      if ( !(unsigned __int8)sub_1272B0(
                               (__int64)v24,
                               *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                               *(_DWORD *)(v18 + 4),
                               0,
                               *(double *)a3.m128i_i64)
        || !sub_125B60(v24, v18, 0, *(double *)a3.m128i_i64)
        || (sub_11CDA0((__int64)v24),
            v19 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL),
            sub_123A40((__int64)v24, (unsigned __int8 *)a2, v20, v21),
            !(unsigned __int8)sub_127850(
                                (__int64)v24,
                                *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                                *(_DWORD *)(v19 + 20),
                                0,
                                a3))
        || !sub_125B60(v24, v19 + 16, 0, *(double *)a3.m128i_i64) )
      {
        sub_11CDA0((__int64)v24);
        goto LABEL_2;
      }
      sub_11CDA0((__int64)v24);
    }
    sub_125180((unsigned __int8 *)a2, *(unsigned __int8 **)(a1 + 56));
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x800u;
    return 1;
  }
LABEL_2:
  v5 = *(_QWORD *)(a1 + 72);
  v23 = v5 + 16LL * *(_QWORD *)(a1 + 80);
  if ( v23 != v5 )
  {
    v6 = 0;
    while ( 1 )
    {
      v9 = v6 + *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( sub_125B60((unsigned __int8 *)a2, v5, 0, *(double *)a3.m128i_i64) )
        break;
      sub_123A40((__int64)v24, (unsigned __int8 *)v5, v10, v11);
      if ( (unsigned __int8)sub_1272B0(
                              (__int64)v24,
                              *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                              *(_DWORD *)(a2 + 4),
                              0,
                              *(double *)a3.m128i_i64)
        && sub_125B60(v24, a2, 0, *(double *)a3.m128i_i64) )
      {
        sub_11CDA0((__int64)v24);
        *(_QWORD *)v24 = 1;
        *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 4)), _mm_cvtsi32_si128(v9)).m128i_u64[0];
        sub_125180((unsigned __int8 *)a2, v24);
        sub_11CDA0((__int64)v24);
        return 1;
      }
      sub_11CDA0((__int64)v24);
      sub_123A40((__int64)v24, (unsigned __int8 *)v5, v7, v8);
      if ( (unsigned __int8)sub_127850(
                              (__int64)v24,
                              *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                              *(_DWORD *)(a2 + 4),
                              0,
                              a3)
        && sub_125B60(v24, a2, 0, *(double *)a3.m128i_i64) )
      {
        sub_11CDA0((__int64)v24);
        v13 = *(_DWORD *)(a2 + 4);
        v14 = *(_DWORD *)(v5 + 4) + v9 - v13;
        *(_DWORD *)v24 = 1;
        *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v14)).m128i_u64[0];
        sub_125180((unsigned __int8 *)a2, v24);
        sub_11CDA0((__int64)v24);
        return 1;
      }
      v5 += 16;
      sub_11CDA0((__int64)v24);
      v6 += *(_DWORD *)(v5 - 12);
      if ( v23 == v5 )
        return 0;
    }
    v22 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    *(_DWORD *)v24 = 1;
    *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(v9)).m128i_u64[0];
    sub_125180((unsigned __int8 *)a2, v24);
    sub_11CDA0((__int64)v24);
    return 1;
  }
  return 0;
}

