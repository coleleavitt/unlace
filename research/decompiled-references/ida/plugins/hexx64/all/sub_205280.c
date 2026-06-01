__int64 __fastcall sub_205280(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __m128i *a5,
        __int64 a6,
        double a7,
        __m128 a8,
        char a9)
{
  bool v9; // zf
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rbp
  int v22; // ebx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  void *v29; // rdi
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rbx
  __m128i v34; // xmm3
  const void **v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r12
  void *v38; // r13
  __m128i *v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rbp
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rdx
  __m128i si128; // xmm0
  __m128 v51; // xmm1
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  _QWORD *v57; // rbp
  int v58; // ebx
  __int64 v59; // [rsp+8h] [rbp-210h]
  size_t n[2]; // [rsp+10h] [rbp-208h] BYREF
  _QWORD *v61; // [rsp+20h] [rbp-1F8h]
  int v62; // [rsp+28h] [rbp-1F0h]
  int v63; // [rsp+2Ch] [rbp-1ECh]
  const void **v64; // [rsp+30h] [rbp-1E8h]
  unsigned __int64 v65; // [rsp+38h] [rbp-1E0h]
  __int64 v66; // [rsp+40h] [rbp-1D8h]
  __int64 *v67; // [rsp+48h] [rbp-1D0h]
  __int64 v68; // [rsp+50h] [rbp-1C8h]
  size_t v69; // [rsp+58h] [rbp-1C0h]
  __int64 *v70; // [rsp+60h] [rbp-1B8h]
  __m128i *v71; // [rsp+68h] [rbp-1B0h]
  unsigned __int64 *v72[2]; // [rsp+70h] [rbp-1A8h] BYREF
  void *v73; // [rsp+80h] [rbp-198h] BYREF
  __m128i v74; // [rsp+88h] [rbp-190h]
  __int64 v75; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-170h]
  void *src; // [rsp+B0h] [rbp-168h]
  __m128i v78; // [rsp+B8h] [rbp-160h] BYREF
  unsigned __int64 *v79[2]; // [rsp+D0h] [rbp-148h] BYREF
  void *v80; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v81; // [rsp+E8h] [rbp-130h]
  _QWORD v82[2]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v83; // [rsp+110h] [rbp-108h]
  __m128i v84; // [rsp+118h] [rbp-100h]
  char v85; // [rsp+128h] [rbp-F0h]
  __int64 *v86; // [rsp+130h] [rbp-E8h]
  __int64 *v87; // [rsp+138h] [rbp-E0h]
  __m128i *v88; // [rsp+140h] [rbp-D8h]
  __int64 v89; // [rsp+148h] [rbp-D0h]
  __int64 v90; // [rsp+150h] [rbp-C8h]
  __int128 v91; // [rsp+158h] [rbp-C0h]
  __int64 v92; // [rsp+168h] [rbp-B0h] BYREF
  __int64 v93; // [rsp+170h] [rbp-A8h]
  void *v94; // [rsp+178h] [rbp-A0h] BYREF
  __m128 v95; // [rsp+180h] [rbp-98h] BYREF
  __int64 v96[2]; // [rsp+190h] [rbp-88h] BYREF
  __int64 v97; // [rsp+1A0h] [rbp-78h]
  __int128 v98; // [rsp+1A8h] [rbp-70h]
  __int64 v99; // [rsp+1B8h] [rbp-60h]
  __int64 v100; // [rsp+1C0h] [rbp-58h]
  char v101; // [rsp+1C8h] [rbp-50h]
  char v102; // [rsp+1C9h] [rbp-4Fh]
  unsigned __int64 v103; // [rsp+1D8h] [rbp-40h]

  v9 = *(_QWORD *)(a2 + 48) == 0;
  v66 = a1;
  v70 = a3;
  v67 = a4;
  v71 = a5;
  v65 = a6;
  v103 = __readfsqword(0x28u);
  if ( v9 )
    return 0;
  v11 = *(_QWORD *)(a2 + 64);
  v12 = *(int *)(a6 + 44);
  v13 = **(_QWORD **)(a1 + 64);
  v86 = a3;
  v82[0] = off_4DEEA8;
  v84 = 0u;
  v85 = 0;
  v87 = a4;
  v88 = a5;
  v89 = a6;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  v94 = nullptr;
  v96[0] = 0;
  v96[1] = 0;
  v97 = 0;
  v99 = a1;
  v100 = 0xFFFFFFFFLL;
  v101 = 0;
  v102 = a9;
  v82[1] = v11;
  v83 = a2;
  v91 = 0;
  v95 = 0;
  v98 = 0;
  sub_103D60(a6, v11, v96);
  v14 = v13 + 104 * v12;
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 0x2000000) == 0
    && *(_DWORD *)(v14 + 88) > *(_DWORD *)(v65 + 40)
    && (*(_BYTE *)(v65 + 48) & 1) != 0
    && (v15 & 0x100) == 0
    && *(_DWORD *)(v66 + 40) == 58
    && !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(v66 + 56))
    && *(int *)(v65 + 40) < (unsigned __int64)get_tinfo_property() )
  {
    if ( !under_debugger )
      sub_383060(0xC4B5u, 0.0);
    BUG();
  }
  v16 = *(_QWORD *)(a2 + 480);
  v72[0] = nullptr;
  v72[1] = nullptr;
  *(_QWORD *)(v16 + 872) = v66;
  v73 = nullptr;
  v74 = 0;
  if ( (*(_BYTE *)(v14 + 27) & 2) != 0 )
    sub_103D60(v65, *(_QWORD *)(v66 + 56), (__int64 *)v72);
  else
    sub_1C31B0(v14, (__int64)v72, *(_DWORD *)(v14 + 88), *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1440LL), 0, 0.0, a8);
  if ( (*(_BYTE *)(v65 + 48) & 0x20) != 0 && !a9 )
  {
    v57 = (_QWORD *)(*v67 + 24LL * *(int *)(a2 + 72));
    sub_64000((__int64 *)v79, (__int64)v72, 0.0);
    v80 = nullptr;
    v81 = 0;
    if ( v74.m128i_i64[0] )
    {
      v59 = v74.m128i_i64[0];
      n[0] = 16 * v74.m128i_i64[0];
      v80 = (void *)qalloc_or_throw(16 * v74.m128i_i64[0], (__int64)v72, 16 * v74.m128i_i64[0], v74.m128i_i64[0]);
      *((_QWORD *)&v81 + 1) = v59;
      memcpy(v80, v73, n[0]);
      *(_QWORD *)&v81 = v59;
    }
    v61 = v82;
    sub_204F60((__int64)v82, (__int64 *)v79, v57, 0.0, a8);
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree((__int64)v80);
    }
    qfree((__int64)v79[0]);
  }
  LOBYTE(n[0]) = 0;
  if ( (*(_BYTE *)(v14 + 27) & 2) != 0 )
    LOBYTE(n[0]) = *(_DWORD *)(v14 + 92) == *(_DWORD *)(a2 + 72);
  v64 = (const void **)&v75;
  sub_64000(&v75, (__int64)v72, 0.0);
  v19 = v74.m128i_i64[0];
  v20.m128i_i64[0] = 0;
  src = nullptr;
  v78 = 0;
  if ( v74.m128i_i64[0] )
  {
    src = (void *)qalloc_or_throw(16 * v74.m128i_i64[0], (__int64)v72, v17, v18);
    v78.m128i_i64[1] = v19;
    memcpy(src, v73, 16 * v19);
    v78.m128i_i64[0] = v19;
  }
  if ( a9 )
  {
    sub_64700((__int64 *)v72, (__int64 *)(a2 + 240));
    v61 = v82;
    sub_3180C0((__int64 *)&v73, a2 + 256, v39, v40);
    v43 = *(_QWORD *)(a2 + 56);
    if ( v43 )
    {
      v62 = 0;
      v22 = 0;
      do
      {
        if ( *(char *)(v43 + 4) >= 0 )
        {
          v61 = v82;
          v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)(unsigned __int64)v43);
          v101 = 1;
          HIDWORD(v100) = 0;
          v84 = v44;
          v22 = sub_11E900((_BYTE *)v43, (__int64)v82);
          if ( v22 < 0 )
            break;
          v22 = HIDWORD(v100);
          if ( v100 < 0 )
            break;
          v62 += HIDWORD(v100);
          sub_127A20((__int64)v79, a2, v43, 129, v41, v42, *(double *)v44.m128i_i64, a8);
          sub_64640((__int64 *)v72, (__int64 *)v79, v45, v46, v47, v48);
          sub_317C60((__int64 *)&v73, (__int64)&v80);
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree((__int64)v80);
          }
          qfree((__int64)v79[0]);
          if ( (unsigned __int8)sub_64880(v72) )
          {
            if ( !v74.m128i_i64[0] )
              break;
          }
        }
        v43 = *(_QWORD *)(v43 + 16);
      }
      while ( v43 );
      v63 = 0;
      if ( LOBYTE(n[0]) )
      {
LABEL_59:
        *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
        if ( v22 < 0 )
          goto LABEL_31;
LABEL_30:
        v22 = v63 + v62;
        goto LABEL_31;
      }
    }
    else
    {
      if ( LOBYTE(n[0]) )
        goto LABEL_95;
      v62 = 0;
      v22 = 0;
    }
    v49 = v75;
    v63 = 0;
    v29 = v94;
    si128 = _mm_load_si128((const __m128i *)&v95);
    v75 = v92;
    v51 = (__m128)_mm_loadu_si128(&v78);
    v92 = v49;
    v52 = v76;
    v76 = v93;
    v95 = v51;
    v93 = v52;
    v94 = src;
    src = v29;
    v78 = si128;
    if ( v22 < 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
      goto LABEL_32;
    }
    while ( 1 )
    {
      if ( v43 )
      {
        if ( *(char *)(v43 + 4) >= 0 )
        {
          v61 = v82;
          sub_127A20((__int64)v79, a2, v43, 129, v41, v42, *(double *)si128.m128i_i64, v51);
          sub_64640(&v92, (__int64 *)v79, v53, v54, v55, v56);
          sub_317C60((__int64 *)&v94, (__int64)&v80);
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree((__int64)v80);
          }
          qfree((__int64)v79[0]);
        }
        v43 = *(_QWORD *)(v43 + 8);
        if ( !v43 )
        {
LABEL_29:
          *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
          goto LABEL_30;
        }
      }
      else
      {
        v43 = *(_QWORD *)(a2 + 48);
      }
      v101 = 0;
      si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)(unsigned __int64)v43);
      v61 = v82;
      HIDWORD(v100) = 0;
      v84 = si128;
      v22 = sub_11E900((_BYTE *)v43, (__int64)v82);
      if ( v22 < 0 || (v22 = HIDWORD(v100), v100 < 0) )
      {
LABEL_61:
        *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
        goto LABEL_31;
      }
      v63 += HIDWORD(v100);
    }
  }
  v21 = *(_QWORD *)(a2 + 48);
  if ( !v21 )
  {
LABEL_95:
    v22 = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
    goto LABEL_31;
  }
  v63 = 0;
  v22 = 0;
  v62 = 0;
  while ( *(char *)(v21 + 4) < 0 )
  {
LABEL_57:
    v21 = *(_QWORD *)(v21 + 8);
    if ( !v21 )
    {
      if ( !v63 )
        goto LABEL_59;
      goto LABEL_92;
    }
  }
  v101 = 0;
  HIDWORD(v100) = 0;
  v61 = v82;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
  v84 = *(__m128i *)n;
  v22 = sub_11E900((_BYTE *)v21, (__int64)v82);
  if ( v22 < 0 )
    goto LABEL_61;
  v22 = HIDWORD(v100);
  if ( v100 < 0 )
    goto LABEL_61;
  v62 += HIDWORD(v100);
  sub_127A20((__int64)v79, a2, v21, 129, v23, v24, *(double *)v20.m128i_i64, a8);
  sub_64640((__int64 *)v72, (__int64 *)v79, v25, v26, v27, v28);
  sub_317C60((__int64 *)&v73, (__int64)&v80);
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree((__int64)v80);
  }
  qfree((__int64)v79[0]);
  if ( (unsigned __int8)sub_64880(v72) && !v74.m128i_i64[0] )
    goto LABEL_29;
  if ( !v22 )
    goto LABEL_50;
  v31 = v83;
  v32 = *(_QWORD *)(v21 + 8);
  sub_64000((__int64 *)v79, (__int64)v72, *(double *)v20.m128i_i64);
  v20.m128i_i64[0] = 0;
  v80 = nullptr;
  v81 = 0;
  if ( v74.m128i_i64[0] )
  {
    v68 = v74.m128i_i64[0];
    v69 = 16 * v74.m128i_i64[0];
    v80 = (void *)qalloc_or_throw(16 * v74.m128i_i64[0], (__int64)v72, 16 * v74.m128i_i64[0], v74.m128i_i64[0]);
    *((_QWORD *)&v81 + 1) = v68;
    memcpy(v80, v73, v69);
    *(_QWORD *)&v81 = v68;
  }
  v33 = sub_A9D90(v31, v79, v32, 0, 1u);
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree((__int64)v80);
  }
  qfree((__int64)v79[0]);
  if ( v33 )
  {
LABEL_50:
    v34 = _mm_load_si128((const __m128i *)n);
    v101 = 1;
    HIDWORD(v100) = 0;
    v84 = v34;
    v22 = sub_11E900((_BYTE *)v21, (__int64)v82);
    if ( v22 < 0 )
      goto LABEL_61;
    v22 = HIDWORD(v100);
    if ( v100 < 0 )
      goto LABEL_61;
    v35 = v64;
    v63 += HIDWORD(v100);
    sub_648D0((__int64 *)v72, v64, *(double *)v20.m128i_i64);
    v37 = v78.m128i_i64[0];
    v38 = nullptr;
    if ( v78.m128i_i64[0] )
    {
      n[0] = 16 * v78.m128i_i64[0];
      v38 = (void *)qalloc_or_throw(16 * v78.m128i_i64[0], (__int64)v35, 16 * v78.m128i_i64[0], v36);
      memcpy(v38, src, n[0]);
    }
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
    if ( v73 )
    {
      *(__m128i *)n = v20;
      v74.m128i_i64[0] = 0;
      qfree((__int64)v73);
      v20 = _mm_load_si128((const __m128i *)n);
    }
    v73 = v38;
    v74 = v20;
    goto LABEL_57;
  }
  if ( !v63 )
  {
    v22 = v62;
    *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
    goto LABEL_31;
  }
  if ( !sub_A9AA0(v83, v72, v21, 0, 0x81u) )
  {
LABEL_92:
    v61 = v82;
    v22 = sub_206510(v66, a2, v70, v67, v71, v65);
    goto LABEL_59;
  }
  v58 = v62;
  *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
  v22 = v63 + v58;
LABEL_31:
  v29 = src;
LABEL_32:
  if ( v29 )
  {
    v78.m128i_i64[0] = 0;
    qfree((__int64)v29);
  }
  qfree(v75);
  if ( v73 )
  {
    v74.m128i_i64[0] = 0;
    qfree((__int64)v73);
  }
  qfree((__int64)v72[0]);
  v82[0] = off_4DEEA8;
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree(v97);
  }
  qfree(v96[0]);
  if ( v94 )
  {
    v95.m128_u64[0] = 0;
    qfree((__int64)v94);
  }
  qfree(v92);
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree(v90);
  }
  return (unsigned int)v22;
}

