__int64 __fastcall sub_DBA20(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // esi
  __int64 v5; // r12
  double v6; // xmm0_8
  __int64 v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE v16[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 132);
  v17 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v16 = 1;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = *(_DWORD *)(v2 + 352);
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 480) + 112LL);
  *(_QWORD *)&v6 = _mm_unpacklo_epi32(
                     _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v3 + 1504) + 80LL)),
                     _mm_cvtsi32_si128(v1)).m128i_u64[0];
  *(double *)&v16[4] = v6;
  if ( v4 <= 0 )
  {
LABEL_18:
    v12 = 1;
    goto LABEL_15;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v2 + 344) + 4 * v8);
    if ( v9 >= *(_DWORD *)(v3 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, v6);
      goto LABEL_27;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * v9);
    if ( !*(_QWORD *)(v10 + 56) )
    {
      v10 = v2;
      while ( 1 )
      {
        if ( *(_DWORD *)(v10 + 352) != 1 )
          goto LABEL_14;
        v14 = *(_QWORD *)(v10 + 64);
        v15 = **(unsigned int **)(v10 + 344);
        if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
          break;
        v10 = *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15);
        if ( *(_QWORD *)(v10 + 48) )
          goto LABEL_11;
      }
      if ( !under_debugger )
        sub_383060(0xCDEFu, v6);
LABEL_27:
      BUG();
    }
LABEL_11:
    if ( !v10 )
      goto LABEL_14;
    v11 = *(_QWORD *)(v10 + 56);
    if ( *(_DWORD *)v11 != 44 )
      break;
    if ( *(_DWORD *)(v2 + 72) - 1 != v9 )
      goto LABEL_14;
LABEL_5:
    if ( *(_BYTE *)(v11 + 32) == 1 && *(_DWORD *)(a1 + 132) == *(_DWORD *)(v11 + 40) )
    {
      if ( *(_DWORD *)(v2 + 352) <= (int)++v8 )
        goto LABEL_18;
    }
    else
    {
      if ( !(unsigned __int8)sub_12EA80(v5, (const __m128i *)v10, v11, (__int64)v16, *(_QWORD *)(v10 + 56), v11 + 32, 0) )
        goto LABEL_14;
      v2 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v2 + 352) <= (int)++v8 )
        goto LABEL_18;
    }
    v3 = *(_QWORD *)(v2 + 64);
  }
  if ( *(_DWORD *)v11 == 43 && *(_DWORD *)(v11 + 72) == *(_DWORD *)(v2 + 72) )
    goto LABEL_5;
LABEL_14:
  v12 = 0;
LABEL_15:
  sub_11CDA0((__int64)v16);
  return v12;
}

