__int64 __fastcall sub_47600(const void *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v11; // rbp
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __m128i v14; // xmm3
  __m128i v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 *v24; // rdi
  const char *v25; // rax
  const char *v26; // rsi
  int v27; // eax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v35; // [rsp+10h] [rbp-5B8h] BYREF
  __m128i v36; // [rsp+14h] [rbp-5B4h]
  __m128i v37; // [rsp+24h] [rbp-5A4h]
  __m128i v38; // [rsp+34h] [rbp-594h]
  __m128i v39; // [rsp+44h] [rbp-584h]
  __int64 v40; // [rsp+94h] [rbp-534h]
  _BYTE v41[156]; // [rsp+250h] [rbp-378h] BYREF
  unsigned int v42; // [rsp+2ECh] [rbp-2DCh]
  unsigned int v43; // [rsp+2F0h] [rbp-2D8h]
  unsigned int v44; // [rsp+2F4h] [rbp-2D4h]
  unsigned int v45; // [rsp+2F8h] [rbp-2D0h]
  unsigned int v46; // [rsp+2FCh] [rbp-2CCh]
  unsigned int v47; // [rsp+300h] [rbp-2C8h]
  unsigned int v48; // [rsp+304h] [rbp-2C4h]
  unsigned int v49; // [rsp+314h] [rbp-2B4h]
  unsigned int v50; // [rsp+51Ch] [rbp-ACh]
  int v51; // [rsp+520h] [rbp-A8h]
  unsigned int v52; // [rsp+528h] [rbp-A0h]
  unsigned int v53; // [rsp+534h] [rbp-94h]
  unsigned int v54; // [rsp+578h] [rbp-50h]
  unsigned __int64 v55; // [rsp+588h] [rbp-40h]

  v8 = *(_QWORD *)(qword_753F8 + 4824);
  v9 = *(_QWORD *)(qword_753F8 + 4832);
  v55 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v8 + 2616);
  *a3 = 0;
  v12 = (_QWORD *)qword_753F8;
  *(_BYTE *)qword_753F8 = 0;
  v13 = v12[688];
  v12[2] = 0;
  if ( (unsigned int)sub_26EC0(v12[604], v13, (__int64)v41, 824, 1) )
  {
    sub_45250((__int64)v12);
    sub_EB00(
      (__int64)"Error: failed to read the exception context.\n"
               "Execution has been suspended; exception information has been lost",
      "Failed to exception context record!\n");
    return 1;
  }
  v35 = 1;
  v40 = v54;
  v14 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v46)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v45), _mm_cvtsi32_si128(v44)));
  v37 = _mm_unpackhi_epi32(v14, (__m128i)0LL);
  v15 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v48)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v43), _mm_cvtsi32_si128(v42)));
  v36 = _mm_unpacklo_epi32(v14, (__m128i)0LL);
  v38 = _mm_unpacklo_epi32(v15, (__m128i)0LL);
  v39 = _mm_unpackhi_epi32(v15, (__m128i)0LL);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, v50);
  v17 = v16;
  if ( v16 && (v18 = *(_DWORD *)(v16 + 4), (v18 & 1) == 0) )
  {
    if ( (v18 & 2) != 0 )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(qword_753F8 + 48) + 40LL))(*(_QWORD *)(qword_753F8 + 48));
      sub_25E50(v9, (__int64)&v35, v29 == 2);
    }
    return *(unsigned __int8 *)(v8 + 2609);
  }
  else
  {
    v19 = operator new(0x48u);
    *a2 = v19;
    *(_QWORD *)v19 = 0xFFFFFFFFLL;
    *(_QWORD *)(v19 + 8) = -1;
    *(_QWORD *)(v19 + 16) = 0;
    *a3 = 1;
    *(_OWORD *)(v19 + 24) = 0;
    *(_OWORD *)(v19 + 40) = 0;
    *(_OWORD *)(v19 + 56) = 0;
    set_debug_event_code();
    if ( (*(_DWORD *)(v19 + 20) & 0xFFFFFFF) == 7 )
    {
      v20 = qword_753F8;
      v21 = v50;
      v22 = v52;
      *(_DWORD *)(v19 + 24) = v50;
      *(_QWORD *)(v19 + 8) = v22;
      *(_DWORD *)(v19 + 4) = *(_DWORD *)(v20 + 316);
      LODWORD(v20) = *(_DWORD *)(v20 + 312);
      *(_QWORD *)(v19 + 32) = -1;
      *(_DWORD *)v19 = v20;
      LODWORD(v20) = v51;
      *(_QWORD *)(v19 + 48) = 0;
      *(_BYTE *)(v19 + 16) = 0;
      *(_BYTE *)(v19 + 28) = (_DWORD)v20 == 0;
      if ( v17 )
      {
        v23 = v53;
        *(_BYTE *)(v19 + 16) = (*(_BYTE *)(v17 + 4) & 2) != 0;
        if ( v21 == -1073741819 )
        {
          *(_QWORD *)(v19 + 32) = v23;
          v24 = (__int64 *)(v19 + 40);
          v25 = s1;
          if ( *(_QWORD *)(v17 + 40) )
            v25 = *(const char **)(v17 + 32);
        }
        else
        {
          v24 = (__int64 *)(v19 + 40);
          v25 = s1;
          if ( *(_QWORD *)(v17 + 40) )
            v25 = *(const char **)(v17 + 32);
        }
        v26 = v25;
        sub_F490(v24);
      }
      else
      {
        v26 = "%08a: unknown exception code %X";
        sub_F490((__int64 *)(v19 + 40));
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD, const char *))(**(_QWORD **)(qword_753F8 + 48) + 40LL))(
              *(_QWORD *)(qword_753F8 + 48),
              v26);
      sub_25E50(v9, (__int64)&v35, v27 == 2);
      qmemcpy((void *)(qword_753F8 + 4888), a1, 0x238u);
      return 1;
    }
    sub_42050();
    return sub_479E0(v19, 7, v30, v31, v32, v33, a7);
  }
}

