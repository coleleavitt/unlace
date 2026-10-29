__int64 __fastcall sub_E070(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int16 v5; // ax
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // r13
  int v10; // ecx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int16 v13; // r15
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rdx

  v5 = *(_WORD *)(a2 + 24);
  if ( v5 != 36 && (v5 != 38 || *(_BYTE *)(a2 + 41) != 5) )
    return 0;
  if ( *(_QWORD *)(a3 + 16) == -1
    && (int)decode_insn(a3, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), a4) <= 0 )
  {
    return 0;
  }
  v7 = sub_A660(a3);
  if ( v7 == -1 )
    return 0;
  v8 = *(_WORD *)(a2 + 24) == 38 ? *(unsigned __int16 *)(a2 + 86) : *(unsigned __int16 *)(a2 + 126);
  v9 = v7;
  if ( *(_WORD *)(a3 + 40LL * v7 + 46) != (_WORD)v8 )
    return 0;
  v10 = -1;
  if ( !v7 )
    v10 = *(unsigned __int16 *)(a3 + 86);
  if ( (unsigned __int8)sub_DE40(a1, a3, v8, v10) )
    return 0;
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(a3 + 40 * v9 + 56);
  if ( *(_WORD *)(a2 + 24) == 38 )
  {
    LODWORD(v14) = v11 + extend_sign(v12, 2, 1);
    *(_WORD *)(a2 + 24) = *(_WORD *)(a3 + 24);
    *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a3 + 40));
    *(__m128i *)(a2 + 56) = _mm_loadu_si128((const __m128i *)(a3 + 56));
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(a3 + 72);
    *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 80));
    *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a3 + 96));
    v17 = *(_DWORD *)(a3 + 112);
    *(_BYTE *)(a2 + 121) = 0;
    *(_DWORD *)(a2 + 112) = v17;
    goto LABEL_21;
  }
  v13 = *(_WORD *)(a2 + 86);
  v14 = (v11 << 16) + extend_sign(v12, 2, 1);
  *(_WORD *)(a2 + 24) = *(_WORD *)(a3 + 24);
  *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a3 + 40));
  *(__m128i *)(a2 + 56) = _mm_loadu_si128((const __m128i *)(a3 + 56));
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a3 + 72);
  *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 80));
  *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a3 + 96));
  v15 = *(_DWORD *)(a3 + 112);
  *(_BYTE *)(a2 + 121) = 0;
  *(_DWORD *)(a2 + 112) = v15;
  if ( !v13 )
  {
LABEL_21:
    v14 = (unsigned int)v14;
    v18 = a2 + 40 * v9;
    *(_BYTE *)(v18 + 41) = 2;
    *(_WORD *)(v18 + 46) = 0;
    goto LABEL_16;
  }
  *(_WORD *)(a2 + 40 * v9 + 46) = v13;
LABEL_16:
  v16 = a2 + 40 * v9;
  *(_BYTE *)(v16 + 72) |= 4u;
  *(_QWORD *)(v16 + 56) = v14;
  *(_WORD *)(a2 + 26) += *(_WORD *)(a3 + 26);
  return 1;
}
