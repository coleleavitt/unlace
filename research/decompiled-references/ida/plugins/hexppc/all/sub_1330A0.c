__int64 __fastcall sub_1330A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  int v5; // r15d
  unsigned int v6; // r13d
  unsigned int v8; // eax
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbp
  __m128i v13; // xmm0
  __int64 v14; // [rsp+8h] [rbp-60h]
  unsigned __int8 v15[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v3 + 4) )
  {
    if ( !sub_122120((unsigned __int8 *)a2, v3, 0) )
    {
      v10 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)v10 != 14 )
      {
        if ( !under_debugger )
          sub_37EEE0(51729);
        BUG();
      }
      v11 = *(_QWORD *)(v10 + 8);
      sub_120000((__int64)v15, (unsigned __int8 *)a2);
      if ( !(unsigned __int8)sub_123870(
                               (unsigned __int64)v15,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                               *(_DWORD *)(v11 + 4))
        || !sub_122120(v15, v11, 0)
        || (sub_119360((__int64)v15),
            v12 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL),
            sub_120000((__int64)v15, (unsigned __int8 *)a2),
            !(unsigned __int8)sub_123E10(
                                (unsigned __int64)v15,
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                                *(_DWORD *)(v12 + 20),
                                0))
        || !sub_122120(v15, v12 + 16, 0) )
      {
        sub_119360((__int64)v15);
        goto LABEL_2;
      }
      sub_119360((__int64)v15);
    }
    sub_121740(a2, *(unsigned __int8 **)(a1 + 56));
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x800u;
    return 1;
  }
LABEL_2:
  v4 = *(_QWORD *)(a1 + 72);
  v14 = v4 + 16LL * *(_QWORD *)(a1 + 80);
  if ( v14 != v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v5 + *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( sub_122120((unsigned __int8 *)a2, v4, 0) )
        break;
      sub_120000((__int64)v15, (unsigned __int8 *)v4);
      if ( (unsigned __int8)sub_123870(
                              (unsigned __int64)v15,
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                              *(_DWORD *)(a2 + 4))
        && sub_122120(v15, a2, 0) )
      {
        sub_119360((__int64)v15);
        *(_QWORD *)v15 = 1;
        *(_QWORD *)&v15[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 4)), _mm_cvtsi32_si128(v6)).m128i_u64[0];
        sub_121740(a2, v15);
        sub_119360((__int64)v15);
        return 1;
      }
      sub_119360((__int64)v15);
      sub_120000((__int64)v15, (unsigned __int8 *)v4);
      if ( (unsigned __int8)sub_123E10(
                              (unsigned __int64)v15,
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL),
                              *(_DWORD *)(a2 + 4),
                              0)
        && sub_122120(v15, a2, 0) )
      {
        sub_119360((__int64)v15);
        v8 = *(_DWORD *)(a2 + 4);
        v9 = *(_DWORD *)(v4 + 4) + v6 - v8;
        *(_DWORD *)v15 = 1;
        *(_QWORD *)&v15[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v9)).m128i_u64[0];
        sub_121740(a2, v15);
        sub_119360((__int64)v15);
        return 1;
      }
      v4 += 16;
      sub_119360((__int64)v15);
      v5 += *(_DWORD *)(v4 - 12);
      if ( v14 == v4 )
        return 0;
    }
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    *(_DWORD *)v15 = 1;
    *(_QWORD *)&v15[4] = _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v6)).m128i_u64[0];
    sub_121740(a2, v15);
    sub_119360((__int64)v15);
    return 1;
  }
  return 0;
}

