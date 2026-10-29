unsigned __int64 __fastcall sub_2710(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v10; // r13
  __int64 ph; // rbx
  int v12; // eax
  unsigned __int64 v13; // rdx
  const char *v14; // r14
  unsigned int v15; // eax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r10
  int v19; // r11d
  unsigned int v20; // edx
  int v21; // r15d
  unsigned int v22; // esi
  __m128i v23; // xmm1
  __m128 v24; // xmm0
  int v25; // eax
  unsigned int v26; // r13d
  unsigned __int64 v27; // rcx
  int v28; // r13d
  unsigned int v29; // eax
  unsigned int v30; // r14d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  unsigned int v39; // r9d
  int v40; // eax
  __int64 v41; // rax
  size_t v42; // r14
  void *v43; // rdi
  char v44; // [rsp+0h] [rbp-E8h]
  unsigned int v45; // [rsp+8h] [rbp-E0h]
  unsigned int v46; // [rsp+8h] [rbp-E0h]
  void *v47; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v48; // [rsp+18h] [rbp-D0h]
  _OWORD v49[6]; // [rsp+30h] [rbp-B8h] BYREF
  char s[24]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+A8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v10 = 0;
  ph = get_ph();
  memset(v49, 0, sizeof(v49));
  lread(a1, v49, 32);
  v12 = v49[0];
  v13 = (unsigned int)LOWORD(v49[0]) - 204;
  if ( (unsigned int)v13 > 0x3F || (v27 = 0x9800000000000001LL, !_bittest64((const __int64 *)&v27, v13)) )
  {
    sub_13F0((unsigned int *)v49);
    sub_1600((__int64)"Assuming big-endian...\n");
    v12 = v49[0];
    v10 = 1;
  }
  v14 = nullptr;
  if ( (v12 & 0xFF0000) != 0 )
  {
    v14 = "arm";
    v15 = BYTE2(v12);
    if ( v15 != 103 )
    {
      if ( v15 > 0x67 )
      {
        v14 = "metapc";
        if ( v15 != 134 )
        {
          v14 = "arm";
          if ( v15 != 143 )
            v14 = nullptr;
        }
      }
      else
      {
        v14 = "sparcb";
        if ( v15 != 3 )
        {
          v14 = "metapc";
          if ( v15 != 100 )
            v14 = nullptr;
        }
      }
    }
  }
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  if ( v14 )
  {
    set_processor_type(v14, 1);
    v16 = v49[0];
    if ( (v49[0] & 0xFF0000) != 0x30000 )
      goto LABEL_9;
    sub_17B0(0xBB9u, 1);
  }
  else
  {
    if ( (int)sub_16D0(1u, (__int64)"HIDECANCEL\nAUTOHIDE REGISTRY\nMissing machine type. Continue?") <= 0 )
      sub_1870(0);
    if ( *(_DWORD *)(ph + 4) == -1 )
    {
      if ( !getinf_buf(1, s, 16) )
        s[0] = 0;
      v47 = nullptr;
      v48 = 0;
      v42 = strlen(s);
      v47 = (void *)qvector_reserve(&v47, 0, v42 + 1, 1);
      *(_QWORD *)&v48 = v42 + 1;
      memmove(v47, s, v42);
      v43 = &unk_44AC;
      *((_BYTE *)v47 + v42) = 0;
      if ( (_QWORD)v48 )
        v43 = v47;
      set_processor_type(v43, 1);
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
    }
  }
  v16 = v49[0];
LABEL_9:
  v17 = WORD2(v49[0]);
  v18 = WORD4(v49[0]);
  BYTE8(v49[5]) = v10;
  v19 = v16;
  memset(&v49[2], 0, 20);
  v20 = DWORD1(v49[0]) + DWORD2(v49[0]);
  if ( v16 != 267 )
  {
    v21 = 32 * (v16 != 204);
    v22 = v21 + v20 + DWORD2(v49[1]);
    a4 = (__m128)_mm_cvtsi32_si128(v22);
    v23 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(v22 + HIDWORD(v49[1])),
            _mm_cvtsi32_si128(v22 + HIDWORD(v49[1]) + LODWORD(v49[1])));
    v24 = (__m128)_mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v21 + v20), (__m128i)a4), v23);
    *(__m128 *)((char *)&v49[4] + 8) = v24;
    v25 = *(_DWORD *)(ph + 4);
    if ( v25 != 13 )
    {
      if ( v25 == 23 )
      {
        v20 += 32;
        if ( v19 == 263 )
          v26 = DWORD1(v49[1]);
        else
          v26 = 0x2000;
        v21 = 32;
        goto LABEL_45;
      }
      if ( v19 != 204 )
      {
        v26 = 0;
        v21 = 32;
        if ( v19 != 263 )
          sub_1870((__int64)"This image type is not supported yet");
        goto LABEL_23;
      }
      goto LABEL_59;
    }
    v28 = v19 != 204;
LABEL_22:
    v26 = v28 << 15;
    goto LABEL_23;
  }
  v39 = v20 + 1024 + DWORD2(v49[1]);
  a5 = (__m128)_mm_cvtsi32_si128(v39 + HIDWORD(v49[1]) + LODWORD(v49[1]));
  v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39 + HIDWORD(v49[1])), (__m128i)a5);
  v24 = (__m128)_mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20 + 1024), _mm_cvtsi32_si128(v39)), v23);
  *(__m128 *)((char *)&v49[4] + 8) = v24;
  v40 = *(_DWORD *)(ph + 4);
  if ( v40 == 13 )
  {
    v28 = 1;
    v21 = 1024;
    goto LABEL_22;
  }
  if ( v40 == 23 )
  {
    v21 = 0;
    v26 = (DWORD1(v49[1]) > 0x1FFF) << 13;
LABEL_45:
    a8 = (__m128)_mm_cvtsi32_si128(v20 + DWORD2(v49[1]));
    v23 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(v20 + DWORD2(v49[1]) + HIDWORD(v49[1])),
            _mm_cvtsi32_si128(v20 + DWORD2(v49[1]) + HIDWORD(v49[1]) + LODWORD(v49[1])));
    v24 = (__m128)_mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), (__m128i)a8), v23);
    *(__m128 *)((char *)&v49[4] + 8) = v24;
    goto LABEL_23;
  }
  v41 = qlsize(a1);
  v17 = WORD2(v49[0]);
  v18 = WORD4(v49[0]);
  if ( (unsigned int)(LODWORD(v49[1]) + DWORD1(v49[0]) + DWORD2(v49[0]) + 1024) > v41 )
  {
LABEL_59:
    v26 = 4096;
    v21 = 0;
    goto LABEL_60;
  }
  v26 = 0;
  v21 = 1024;
LABEL_60:
  if ( ((v18 | v17) & 0xFFF) != 0 )
    sub_1870((__int64)"Executable is not page aligned");
LABEL_23:
  setinf(12, 0);
  v29 = v26;
  if ( *(_QWORD *)((char *)v49 + 4) )
  {
    v30 = v26 + DWORD1(v49[0]);
    file2base(a1, v21, v26, v26 + DWORD1(v49[0]) + DWORD2(v49[0]), 1);
    if ( DWORD1(v49[0]) )
    {
      sub_1920(ph, 1u, v26, v30, (__int64)".text", (__int64)"CODE");
      setinf(14, 1);
      setinf(15, DWORD1(v49[1]));
      DWORD1(v49[3]) = v26;
    }
    v29 = v30;
    if ( DWORD2(v49[0]) )
    {
      v46 = DWORD2(v49[0]) + v30;
      sub_1920(ph, 2u, v30, DWORD2(v49[0]) + v30, (__int64)".data", (__int64)"DATA");
      set_default_dataseg(2);
      DWORD2(v49[3]) = v30;
      v29 = v46;
    }
  }
  v31 = HIDWORD(v49[0]);
  if ( HIDWORD(v49[0]) )
  {
    v45 = v29;
    sub_1920(ph, 3u, v29, HIDWORD(v49[0]) + v29, (__int64)".bss", (__int64)"BSS");
    v29 = v45;
    v31 = HIDWORD(v49[0]);
    HIDWORD(v49[3]) = v45;
  }
  DWORD1(v49[4]) = v31 + v29;
  if ( LODWORD(v49[1]) )
    sub_1E50(a1, (__int64)v49);
  if ( DWORD2(v49[1]) )
  {
    if ( (v49[0] & 0xFF0000) == 0x30000 )
      sub_21A0(a1, (__int64)v49, DWORD2(v49[4]), DWORD2(v49[1]), 1u);
    else
      sub_1600((__int64)"Warning: Relocation in image file not supported yet for this processor\n");
  }
  if ( HIDWORD(v49[1]) )
  {
    if ( (v49[0] & 0xFF0000) == 0x30000 )
      sub_21A0(a1, (__int64)v49, HIDWORD(v49[4]), HIDWORD(v49[1]), 2u);
    else
      sub_1600((__int64)"Warning: Relocation in image file not supported yet for this processor\n");
  }
  if ( *(_DWORD *)(ph + 4) != 23 && SLODWORD(v49[0]) < 0 )
    sub_19B0(a1, SDWORD1(v49[0]), v26);
  *(double *)v24.m128_u64 = create_filename_cmt();
  sub_1460(
    (__int64)"Flag value: %Xh",
    BYTE3(v49[0]),
    v32,
    v33,
    v34,
    v35,
    v24,
    (__m128)v23,
    a4,
    a5,
    v36,
    v37,
    a8,
    a9,
    v44);
  if ( *(_QWORD *)&v49[2] )
  {
    qfree(*(_QWORD *)&v49[2]);
    *(_QWORD *)&v49[2] = 0;
  }
  if ( *((_QWORD *)&v49[2] + 1) )
    qfree(*((_QWORD *)&v49[2] + 1));
  return v51 - __readfsqword(0x28u);
}
