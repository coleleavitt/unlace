__int64 __fastcall sub_7AD0(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // cx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // r12
  __m128i v12; // xmm0
  unsigned __int32 v13; // eax
  __m128i v14; // xmm0
  unsigned int v15; // eax
  unsigned __int32 v16; // eax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm2
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm1
  unsigned __int32 v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __m128i v33; // xmm2
  __m128i v34; // xmm0
  void *v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  int v54; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v55; // [rsp+4h] [rbp-E4h] BYREF
  __m128i v56; // [rsp+14h] [rbp-D4h] BYREF
  __m128i v57; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+38h] [rbp-B0h]
  __int64 v59; // [rsp+40h] [rbp-A8h]
  __int64 v60; // [rsp+48h] [rbp-A0h]
  unsigned int v61; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+54h] [rbp-94h] BYREF
  __int64 v63; // [rsp+58h] [rbp-90h]
  __int64 v64; // [rsp+60h] [rbp-88h] BYREF
  __int64 v65; // [rsp+68h] [rbp-80h]
  __m128i v66; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+84h] [rbp-64h]
  __int64 v68; // [rsp+88h] [rbp-60h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  __int64 v70; // [rsp+98h] [rbp-50h]
  __int64 v71; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v72; // [rsp+C8h] [rbp-20h]

  v72 = __readfsqword(0x28u);
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 98) = 0;
  memset(
    (void *)((a3 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a3 - (((_DWORD)a3 + 8) & 0xFFFFFFF8) + 106) >> 3));
  v6 = *a2;
  v7 = a2[12];
  if ( (((_WORD)v6 - 387) & 0xFFFD) != 0 )
  {
    if ( a4 )
    {
      v9 = (unsigned int)(v6 - 320);
      if ( (unsigned __int16)(v6 - 320) <= 0x23u )
      {
        v10 = 0x900000001LL;
        v11 = 1;
        if ( _bittest64(&v10, v9) )
        {
          if ( v7 <= 0x37u )
            return 0;
          lread(a1, &v61, 56);
          v12 = _mm_cvtsi32_si128(v61);
          *(_QWORD *)(a3 + 4) = _byteswap_ulong(v62);
          v13 = _byteswap_ulong(v63);
          *(_DWORD *)a3 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v12, 8u), _mm_slli_epi16(v12, 8u)));
          *(_QWORD *)(a3 + 12) = v13;
          *(_QWORD *)(a3 + 20) = _byteswap_ulong(HIDWORD(v63));
          *(_QWORD *)(a3 + 28) = _byteswap_ulong(v64);
          v14 = _mm_unpacklo_epi32(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(_byteswap_ulong(HIDWORD(v64))),
                    _mm_cvtsi32_si128(_byteswap_ulong(v65))),
                  (__m128i)0LL);
          *(_QWORD *)(a3 + 52) = _byteswap_ulong(HIDWORD(v65));
          v15 = v66.m128i_i32[0];
          *(__m128i *)(a3 + 36) = v14;
          *(_DWORD *)(a3 + 60) = _byteswap_ulong(v15);
          *(_DWORD *)(a3 + 64) = _byteswap_ulong(v66.m128i_u32[2]);
          v16 = _byteswap_ulong(v67);
          goto LABEL_9;
        }
LABEL_22:
        if ( v7 <= 0x1Bu )
          return 0;
        lread(a1, &v54, 28);
        sub_5180((__int16 *)&v54, a3, v11);
        return 1;
      }
    }
    else if ( (v6 & 0xFFDF) == 0x142 )
    {
      if ( v7 <= 0x37u )
        return 0;
      lread(a1, &v61, 56);
      v17 = _mm_loadu_si128((const __m128i *)&v62);
      *(_DWORD *)a3 = v61;
      v18 = HIDWORD(v65);
      v19 = v17;
      *(__m128i *)(a3 + 20) = _mm_unpackhi_epi32(v17, (__m128i)0LL);
      v20 = _mm_loadl_epi64((const __m128i *)((char *)&v64 + 4));
      *(_QWORD *)(a3 + 52) = v18;
      LODWORD(v18) = v66.m128i_i32[0];
      *(__m128i *)(a3 + 4) = _mm_unpacklo_epi32(v19, (__m128i)0LL);
      *(_DWORD *)(a3 + 60) = v18;
      LODWORD(v18) = v66.m128i_i32[2];
      *(__m128i *)(a3 + 36) = _mm_unpacklo_epi32(v20, (__m128i)0LL);
      *(_DWORD *)(a3 + 64) = v18;
      v16 = v67;
LABEL_9:
      *(_QWORD *)(a3 + 68) = v16;
      return 1;
    }
    if ( (_WORD)v6 == 21020 )
    {
      if ( v7 <= 0x1Bu )
        return 0;
      lread(a1, &v54, 28);
      v31 = _mm_loadl_epi64(&v56);
      v32 = _mm_loadl_epi64(&v55);
      v33 = _mm_loadu_si128(&v55);
      *(_DWORD *)a3 = v54;
      *(__m128i *)(a3 + 36) = _mm_unpacklo_epi32(v31, (__m128i)0LL);
      v34 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_unpacklo_epi32(v32, v31), 78), (__m128i)0LL);
      *(__m128i *)(a3 + 20) = _mm_unpackhi_epi32(v33, (__m128i)0LL);
      *(__m128i *)(a3 + 4) = _mm_unpacklo_epi32(v33, (__m128i)0LL);
      *(_QWORD *)(a3 + 52) = _mm_add_epi64(v34, _mm_srli_si128(v34, 8)).m128i_u64[0];
      return 1;
    }
    v27 = (unsigned int)(v6 - 472);
    v11 = a4;
    if ( (unsigned __int16)(v6 - 472) > 7u )
    {
      LOWORD(v6) = v6 - 487;
      if ( (unsigned __int16)v6 <= 0x10u )
      {
        v35 = &loc_10101;
        if ( _bittest64((const __int64 *)&v35, v6) )
        {
          if ( v7 <= 0x77u )
            return 0;
          lread(a1, &v61, 120);
          v36 = _mm_cvtsi32_si128(v61);
          v37 = v63;
          if ( a4 )
          {
            *(_DWORD *)a3 = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v36, 8u), _mm_slli_epi16(v36, 8u)));
            v38 = swap64(v37);
            v39 = v64;
            *(_QWORD *)(a3 + 36) = v38;
            v40 = swap64(v39);
          }
          else
          {
            *(_QWORD *)(a3 + 36) = v63;
            v40 = v64;
            *(_DWORD *)a3 = _mm_cvtsi128_si32(v36);
          }
          *(_QWORD *)(a3 + 44) = v40;
          v41 = swap64(v65);
          v42 = _mm_load_si128(&v66);
          v43 = v63;
          *(_QWORD *)(a3 + 76) = v41;
          *(__m128i *)(a3 + 84) = _mm_or_si128(_mm_slli_epi16(v42, 8u), _mm_srli_epi16(v42, 8u));
          v44 = swap64(v43);
          v45 = v64;
          *(_QWORD *)(a3 + 36) = v44;
          v46 = swap64(v45);
          v47 = v68;
          *(_QWORD *)(a3 + 44) = v46;
          v48 = swap64(v47);
          v49 = v69;
          *(_QWORD *)(a3 + 4) = v48;
          v50 = swap64(v49);
          v51 = v70;
          *(_QWORD *)(a3 + 12) = v50;
          v52 = swap64(v51);
          v53 = v71;
          *(_QWORD *)(a3 + 20) = v52;
          *(_QWORD *)(a3 + 28) = swap64(v53);
          return 1;
        }
      }
    }
    else
    {
      v28 = 161;
      if ( _bittest64(&v28, v27) )
      {
        if ( v7 <= 0x47u )
          return 0;
        lread(a1, &v61, 72);
        sub_5180((__int16 *)&v61, a3, a4);
        v29 = _mm_load_si128(&v66);
        *(_QWORD *)(a3 + 76) = _byteswap_ulong(HIDWORD(v65));
        v30 = _byteswap_ulong(v67);
        *(__m128i *)(a3 + 84) = _mm_or_si128(_mm_slli_epi16(v29, 8u), _mm_srli_epi16(v29, 8u));
        *(_DWORD *)(a3 + 102) = v30;
        return 1;
      }
    }
    goto LABEL_22;
  }
  if ( v7 <= 0x4Fu )
    return 0;
  lread(a1, &v54, 80);
  v21 = _mm_loadu_si128((const __m128i *)((char *)v55.m128i_i64 + 4));
  *(_DWORD *)a3 = v54;
  v22 = v58;
  *(__m128i *)(a3 + 4) = v21;
  v23 = _mm_loadu_si128((const __m128i *)((char *)v56.m128i_i64 + 4));
  *(_QWORD *)(a3 + 52) = v22;
  v24 = v59;
  *(__m128i *)(a3 + 20) = v23;
  v25 = _mm_loadu_si128(&v57);
  *(_QWORD *)(a3 + 60) = v24;
  v26 = v60;
  *(__m128i *)(a3 + 36) = v25;
  *(_QWORD *)(a3 + 68) = v26;
  return 1;
}
