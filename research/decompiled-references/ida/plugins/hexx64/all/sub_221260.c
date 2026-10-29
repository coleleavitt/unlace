__int64 __fastcall sub_221260(__int64 a1, __int64 *a2, int a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  char v8; // bl
  int v9; // edx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  __m128i si128; // xmm0
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  void *v17; // r12
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  int v37; // eax
  __m128i *v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // r14
  _QWORD *v41; // rbp
  signed __int64 v42; // rbp
  __m128i v43; // xmm0
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rax
  signed __int64 v46; // rsi
  __m128i v47; // xmm0
  signed __int64 v48; // xmm0_8
  _QWORD *v50; // rdi
  unsigned __int64 *v51; // rax
  signed __int64 v52; // rax
  size_t n[2]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v54; // [rsp+18h] [rbp-150h]
  __int64 v55; // [rsp+20h] [rbp-148h]
  __int64 v56; // [rsp+28h] [rbp-140h]
  __int64 *v57; // [rsp+30h] [rbp-138h]
  unsigned __int8 v58; // [rsp+3Ah] [rbp-12Eh]
  char v59; // [rsp+3Bh] [rbp-12Dh]
  int v60; // [rsp+3Ch] [rbp-12Ch]
  __int64 v61[2]; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int64 *v62; // [rsp+50h] [rbp-118h] BYREF
  __int128 v63; // [rsp+58h] [rbp-110h]
  __int64 v64[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD *v65; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v66; // [rsp+88h] [rbp-E0h]
  __int64 v67[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 *v68; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v69; // [rsp+B8h] [rbp-B0h]
  __int64 v70[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v72; // [rsp+E8h] [rbp-80h]
  __int64 v73; // [rsp+100h] [rbp-68h] BYREF
  __int128 v74; // [rsp+108h] [rbp-60h] BYREF
  __int128 v75; // [rsp+118h] [rbp-50h]
  unsigned __int64 v76; // [rsp+128h] [rbp-40h]

  v55 = a1;
  v57 = a2;
  v76 = __readfsqword(0x28u);
  v58 = *(_BYTE *)(a1 + 320);
  if ( v58 )
    return 0;
  v60 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 <= 0x10 )
    v6 = getinf();
  LOBYTE(a3) = v6 == 256;
  LOBYTE(v6) = v6 == 176;
  v7 = v6 | a3;
  v59 = v7;
  v8 = v7;
  v56 = sub_1D5170(v55, (__int64)a2, v7, a4, a5);
  v9 = *(_QWORD *)(v56 + 352);
  if ( (!v9 || !v8) && !*(_BYTE *)(*(_QWORD *)(v55 + 1496) + 148LL) )
    return 0;
  v61[0] = 0;
  v61[1] = 0;
  v10 = *(_QWORD *)(v55 + 664);
  v11 = *(_QWORD *)(v55 + 672);
  v63 = 0;
  v62 = nullptr;
  if ( v10 + v11 - 1 >= v10 )
  {
    v62 = (unsigned __int64 *)qvector_reserve((__int64)&v62, 0, 1, 16);
    *(__m128i *)&v62[2 * v63] = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v11);
    *(_QWORD *)&v63 = v63 + 1;
    v9 = *(_DWORD *)(v56 + 352);
  }
  si128.m128i_i64[0] = 0;
  v64[0] = 0;
  v64[1] = 0;
  v65 = nullptr;
  v54 = 0;
  v66 = 0;
  if ( !v9 )
    goto LABEL_61;
  do
  {
    v13 = *(unsigned int *)(*(_QWORD *)(v56 + 344) + 4LL * (int)v54);
    if ( (unsigned int)v13 >= *(_DWORD *)(v55 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, *(double *)si128.m128i_i64);
LABEL_77:
      BUG();
    }
    v14 = *(_QWORD *)(*(_QWORD *)(v55 + 528) + 8 * v13);
    v69 = 0;
    v67[0] = 0;
    v67[1] = 0;
    v68 = nullptr;
    sub_648D0(v67, (const void **)(v14 + 200), *(double *)si128.m128i_i64);
    v16 = *(_QWORD *)(v14 + 224);
    v17 = nullptr;
    if ( v16 )
    {
      n[0] = 16 * v16;
      v17 = (void *)qalloc_or_throw(16 * v16, v14 + 200, 16 * v16, v15);
      memcpy(v17, *(const void **)(v14 + 216), n[0]);
    }
    si128 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
    if ( v68 )
    {
      *(__m128i *)n = si128;
      v69.m128i_i64[0] = 0;
      qfree((__int64)v68);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    v18 = *(_DWORD *)(v14 + 352) == 1;
    v68 = (__int64 *)v17;
    v70[0] = 0;
    v70[1] = 0;
    v71 = 0;
    v69 = si128;
    v72 = 0;
    if ( !v18 )
    {
      v31 = 0;
      goto LABEL_31;
    }
    while ( 1 )
    {
      sub_64280(v70, (__int64 *)(v14 + 120), *(double *)si128.m128i_i64);
      sub_316CB0(&v71, (__int64 **)(v14 + 136), v21, v22);
      v23 = *(_QWORD *)(v14 + 64);
      v24 = **(unsigned int **)(v14 + 344);
      if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, *(double *)si128.m128i_i64);
        goto LABEL_77;
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v23 + 528) + 8 * v24);
      if ( *(_QWORD *)(v14 + 48) )
        break;
LABEL_20:
      if ( *(_DWORD *)(v14 + 352) != 1 )
        goto LABEL_28;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v14 + 480) + 148LL) != 2
      || (v25 = *(_BYTE **)(v14 + 56), (v25[65] & 0x40) == 0) && !sub_120380(v25, 0) )
    {
      sub_64000(&v73, v14 + 200, *(double *)si128.m128i_i64);
      *((_QWORD *)&v74 + 1) = 0;
      v75 = 0;
      v30 = *(_QWORD *)(v14 + 224);
      if ( v30 )
      {
        n[0] = 16 * v30;
        *((_QWORD *)&v74 + 1) = qalloc_or_throw(16 * v30, v14 + 200, 16 * v30, v27);
        *((_QWORD *)&v75 + 1) = v30;
        memcpy(*((void **)&v74 + 1), *(const void **)(v14 + 216), n[0]);
        *(_QWORD *)&v75 = v30;
      }
      sub_64640(&v73, v70, v26, v27, v28, v29);
      sub_317C60((__int64 *)&v74 + 1, (__int64)&v71);
      sub_64280(v67, &v73, *(double *)si128.m128i_i64);
      sub_316CB0((__int64 *)&v68, (__int64 **)&v74 + 1, v19, v20);
      if ( *((_QWORD *)&v74 + 1) )
      {
        *(_QWORD *)&v75 = 0;
        qfree(*((__int64 *)&v74 + 1));
      }
      qfree(v73);
      goto LABEL_20;
    }
LABEL_28:
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree(v71);
    }
    v31 = v70[0];
LABEL_31:
    qfree(v31);
    sub_64280(v64, v67, *(double *)si128.m128i_i64);
    sub_316CB0((__int64 *)&v65, &v68, v32, v33);
    sub_64700(v61, v67);
    sub_3180C0((__int64 *)&v62, (__int64)&v68, v34, v35);
    if ( v68 )
    {
      v69.m128i_i64[0] = 0;
      qfree((__int64)v68);
    }
    qfree(v67[0]);
    ++v54;
  }
  while ( v54 < *(int *)(v56 + 352) );
  if ( !(_QWORD)v66 )
    goto LABEL_58;
  if ( v59 )
    goto LABEL_38;
  if ( (_QWORD)v63 )
  {
    *(_DWORD *)(v55 + 72) = 16;
LABEL_38:
    v36 = v55;
    v37 = sub_F2D80(v55);
    v39 = *(unsigned int *)(v36 + 64);
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v36 + 1440) + v37);
    if ( !(_DWORD)v39 )
      sub_21BD60(*(double *)si128.m128i_i64);
    v41 = **(_QWORD ***)(v55 + 528);
    if ( v41[33] )
    {
      if ( (unsigned __int8)sub_64880(v41 + 30) )
      {
        si128 = _mm_loadu_si128((const __m128i *)(v41[32] + 16LL * v41[33] - 16));
        a6 = (__m128)_mm_srli_si128(si128, 8);
        si128.m128i_i64[0] = _mm_add_epi64(si128, (__m128i)a6).m128i_u64[0];
        if ( v40 < si128.m128i_i64[0] )
          v40 = si128.m128i_i64[0];
      }
    }
    if ( (_QWORD)v63 )
    {
      v42 = *v62;
      if ( *v62 < v40 )
      {
        v52 = sub_1F5460(
                v55,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 + 1496) + 24LL) + 16LL) & (v42 - *(_QWORD *)(v55 + 1440)),
                *(double *)si128.m128i_i64,
                a6);
        v40 = v42;
        if ( v52 >= v42 )
          v40 = v52;
      }
    }
    v73 = 0;
    v43 = _mm_loadu_si128((const __m128i *)(v55 + 664));
    v44 = _mm_add_epi64(v43, _mm_srli_si128(v43, 8)).m128i_u64[0];
    v74 = 0;
    if ( v44 - 1 >= v40 )
    {
      v73 = qvector_reserve((__int64)&v73, 0, 1, 16);
      v38 = (__m128i *)(16 * v74);
      v51 = (unsigned __int64 *)(16 * v74 + v73);
      *v51 = v40;
      v51[1] = v44 - v40;
      *(_QWORD *)&v74 = v74 + 1;
    }
    sub_3180C0((__int64 *)&v65, (__int64)&v73, v38, v39);
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    if ( !(_QWORD)v66 )
      goto LABEL_50;
    v45 = *v65 & -v60;
    v46 = v45 + v60;
    if ( v45 >= v40 )
      v46 = *v65 & -v60;
    v47 = _mm_loadu_si128((const __m128i *)&v65[2 * v66 - 2]);
    v48 = _mm_add_epi64(v47, _mm_srli_si128(v47, 8)).m128i_u64[0];
    if ( v46 >= v48 )
    {
LABEL_50:
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree((__int64)v65);
      }
      qfree(v64[0]);
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree((__int64)v62);
      }
      qfree(v61[0]);
      return 0;
    }
    sub_122B20(v57, v46, v48 - v46);
    v58 = 1;
    v50 = v65;
  }
  else
  {
LABEL_58:
    v50 = v65;
  }
  if ( v50 )
  {
    *(_QWORD *)&v66 = 0;
    qfree((__int64)v50);
  }
LABEL_61:
  qfree(v64[0]);
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree((__int64)v62);
  }
  qfree(v61[0]);
  return v58;
}

