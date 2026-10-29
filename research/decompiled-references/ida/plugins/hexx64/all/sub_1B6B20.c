unsigned __int64 __fastcall sub_1B6B20(__int64 a1, __int64 *a2, double a3, double a4, double a5, __m128 a6)
{
  int v7; // r12d
  int v9; // r11d
  __int64 *v10; // rax
  int v11; // r13d
  const char *v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i v26; // xmm1
  __int64 *v27; // r14
  __int64 v28; // rax
  __m128i si128; // xmm0
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r13
  __m128 v51; // xmm0
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // r12
  __int64 v58; // r13
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rsi
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  __int64 v72; // r8
  __int64 *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // r8
  bool v76; // zf
  int v77; // edx
  int v78; // esi
  __int64 v79; // r9
  unsigned __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rax
  void *v83; // rax
  const void *v84; // rsi
  void *v85; // rax
  const void *v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  char *v90; // r12
  char *v91; // r13
  __int64 v92; // rsi
  __int64 *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  __m128i v99; // xmm0
  __int64 v100; // rax
  __int64 v101; // [rsp+0h] [rbp-C0h]
  __m128i v102; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v103; // [rsp+18h] [rbp-A8h]
  __int64 v104; // [rsp+20h] [rbp-A0h] BYREF
  __m128i v105; // [rsp+28h] [rbp-98h]
  __int64 v106; // [rsp+40h] [rbp-80h] BYREF
  __int128 v107; // [rsp+48h] [rbp-78h]
  _BYTE v108[24]; // [rsp+60h] [rbp-60h] BYREF
  __int128 v109; // [rsp+78h] [rbp-48h]
  unsigned __int64 v110; // [rsp+88h] [rbp-38h]

  v7 = *(_DWORD *)(a1 + 72);
  v110 = __readfsqword(0x28u);
  v105 = 0;
  v104 = 0;
  if ( !v7 )
  {
    sub_6B870(&v104);
    v62 = a2[1];
    v63 = *a2;
    if ( a2[2] < (unsigned __int64)(v62 + 1) )
    {
      v87 = qvector_reserve((__int64)a2, v63, v62 + 1, 24);
      *a2 = v87;
      v62 = a2[1];
      v63 = v87;
    }
    v64 = v63 + 24 * v62;
    *(_QWORD *)v64 = 0;
    v65 = v104;
    *(_OWORD *)(v64 + 8) = 0;
    ++a2[1];
    v66 = *(_QWORD *)v64;
    *(_QWORD *)v64 = v65;
    v67 = _mm_loadu_si128((const __m128i *)(v64 + 8));
    v104 = v66;
    *(__m128i *)(v64 + 8) = v105;
    v68 = *(_QWORD *)(a1 + 64);
    v105 = v67;
    v69 = *(_QWORD *)(v68 + 920);
    if ( v69 && *(_QWORD *)(v69 + 16) )
    {
      v103 = (__int64 *)v67.m128i_i64[0];
      if ( v67.m128i_i64[0] )
      {
        v72 = v67.m128i_i64[0] + 14;
        v71 = v67.m128i_i64[0] + 15;
        v103 = (__int64 *)(v67.m128i_i64[0] - 1);
      }
      else
      {
        v71 = 16;
        v72 = 15;
      }
      if ( _mm_movehl_ps(a6, (__m128)v67).m128_u64[0] < v71 )
      {
        v102.m128i_i64[0] = v72;
        v102.m128i_i64[1] = v71;
        v104 = qvector_reserve((__int64)&v104, v66, v71, 1);
        v72 = v102.m128i_i64[0];
        v66 = v104;
        v71 = v102.m128i_u64[1];
      }
      v105.m128i_i64[0] = v71;
      v73 = v103;
      *(_BYTE *)(v66 + v72) = 0;
      v74 = (__int64 *)((char *)v73 + v104);
      v75 = 0;
      *v74 = 0x45564153203B0301LL;
      *(_QWORD *)((char *)v74 + 7) = 0x203A534745524445LL;
      v76 = *(_QWORD *)(v69 + 16) == 0;
      v103 = (__int64 *)v108;
      if ( !v76 )
      {
        while ( 1 )
        {
          v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
          v78 = *(_DWORD *)(*(_QWORD *)(v69 + 8) + 4 * v75);
          *(_OWORD *)v108 = 0u;
          sub_63E80(v103, v78, v77, *(double *)v67.m128i_i64);
          sub_64DF0(v103, &v104);
          ++v7;
          qfree(*(__int64 *)v108);
          v75 = v7;
          if ( (unsigned __int64)v7 >= *(_QWORD *)(v69 + 16) )
            break;
          v79 = v105.m128i_i64[0];
          v80 = 2;
          if ( v105.m128i_i64[0] )
          {
            v80 = v105.m128i_i64[0] + 1;
            v79 = v105.m128i_i64[0] - 1;
          }
          v81 = v104;
          if ( v105.m128i_i64[1] < v80 )
          {
            v101 = v79;
            v102.m128i_i64[0] = v7;
            v102.m128i_i64[1] = v80;
            v104 = qvector_reserve((__int64)&v104, v104, v80, 1);
            v79 = v101;
            v81 = v104;
            v75 = v7;
            v80 = v102.m128i_u64[1];
          }
          v105.m128i_i64[0] = v80;
          *(_BYTE *)(v81 + v79) = 44;
          *(_BYTE *)(v104 + v79 + 1) = 0;
        }
      }
      v103 = (__int64 *)v105.m128i_i64[0];
      if ( v105.m128i_i64[0] )
      {
        v91 = (char *)v103 + 1;
        v90 = (char *)v103 + 2;
        v103 = (__int64 *)((char *)v103 - 1);
      }
      else
      {
        v90 = (_BYTE *)(&word_2 + 1);
        v91 = (char *)&word_2;
      }
      v92 = v104;
      if ( v105.m128i_i64[1] < (unsigned __int64)v90 )
      {
        v104 = qvector_reserve((__int64)&v104, v104, (__int64)v90, 1);
        v92 = v104;
      }
      v105.m128i_i64[0] = (__int64)v90;
      v93 = v103;
      v91[v92] = 0;
      *(_WORD *)((char *)v93 + v104) = 770;
      v94 = a2[1];
      v95 = *a2;
      if ( a2[2] < (unsigned __int64)(v94 + 1) )
      {
        v100 = qvector_reserve((__int64)a2, v95, v94 + 1, 24);
        *a2 = v100;
        v94 = a2[1];
        v95 = v100;
      }
      v96 = v95 + 24 * v94;
      *(_QWORD *)v96 = 0;
      v97 = v104;
      *(_OWORD *)(v96 + 8) = 0;
      ++a2[1];
      v98 = *(_QWORD *)v96;
      *(_QWORD *)v96 = v97;
      v99 = _mm_loadu_si128((const __m128i *)(v96 + 8));
      v104 = v98;
      *(__m128i *)(v96 + 8) = v105;
      v105 = v99;
    }
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = (__int64 *)" EXTFRAME";
  v11 = *(_DWORD *)(a1 + 76);
  if ( (v9 & 0x40000) == 0 )
    v10 = (__int64 *)&unk_418793;
  v12 = " COMB";
  v103 = v10;
  if ( (v9 & 0x40) == 0 )
    v12 = (const char *)&unk_418793;
  v102.m128i_i64[1] = (__int64)v12;
  v102.m128i_i32[0] = v11 - 1;
  sub_6B870(&v104);
  if ( *(_DWORD *)(a1 + 352) )
  {
    v103 = (__int64 *)v105.m128i_i64[0];
    if ( v105.m128i_i64[0] )
    {
      v58 = v105.m128i_i64[0] + 9;
      v57 = v105.m128i_i64[0] + 10;
      v56 = v104;
      v103 = (__int64 *)(v105.m128i_i64[0] - 1);
      if ( v105.m128i_i64[1] >= (unsigned __int64)(v105.m128i_i64[0] + 10) )
        goto LABEL_57;
    }
    else
    {
      v56 = v104;
      v57 = 11;
      v58 = 10;
      if ( v105.m128i_i64[1] >= 0xBuLL )
        goto LABEL_57;
    }
    v104 = qvector_reserve((__int64)&v104, v56, v57, 1);
    v56 = v104;
LABEL_57:
    v105.m128i_i64[0] = v57;
    v59 = v103;
    *(_BYTE *)(v56 + v58) = 0;
    qmemcpy((char *)v59 + v104, " INBOUNDS:", 10);
    if ( *(int *)(a1 + 352) > 0 )
    {
      v60 = 0;
      do
      {
        v61 = v60;
        sub_FAAD0(&v104);
        v60 = v61 + 1;
      }
      while ( *(_DWORD *)(a1 + 352) > (int)v61 + 1 );
    }
  }
  if ( !*(_DWORD *)(a1 + 376) )
    goto LABEL_13;
  v103 = (__int64 *)v105.m128i_i64[0];
  if ( v105.m128i_i64[0] )
  {
    v15 = v105.m128i_i64[0] + 10;
    v14 = v105.m128i_i64[0] + 11;
    v13 = v104;
    v103 = (__int64 *)(v105.m128i_i64[0] - 1);
    if ( v105.m128i_i64[1] >= (unsigned __int64)(v105.m128i_i64[0] + 11) )
      goto LABEL_10;
  }
  else
  {
    v13 = v104;
    v14 = 12;
    v15 = 11;
    if ( v105.m128i_i64[1] >= 0xCuLL )
      goto LABEL_10;
  }
  v104 = qvector_reserve((__int64)&v104, v13, v14, 1);
  v13 = v104;
LABEL_10:
  v105.m128i_i64[0] = v14;
  v16 = v103;
  *(_BYTE *)(v13 + v15) = 0;
  qmemcpy((char *)v16 + v104, " OUTBOUNDS:", 11);
  if ( *(int *)(a1 + 376) > 0 )
  {
    v17 = 0;
    do
    {
      v18 = v17;
      sub_FAAD0(&v104);
      v17 = v18 + 1;
    }
    while ( *(_DWORD *)(a1 + 376) > (int)v18 + 1 );
  }
LABEL_13:
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(_QWORD **)(a1 + 64);
  v102 = *(__m128i *)(a1 + 328);
  v103 = (__int64 *)v108;
  sub_1B6370((__int64)v108, v20, v19);
  sub_1B6370((__int64)&v106, *(_QWORD **)(a1 + 64), *(_QWORD *)(a1 + 32));
  sub_FAAD0(&v104);
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106);
  }
  if ( *(_QWORD *)v108 )
  {
    *(_QWORD *)&v108[8] = 0;
    qfree(*(__int64 *)v108);
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    sub_FAAD0(&v104);
  v21 = a2[1];
  v22 = *a2;
  if ( a2[2] < (unsigned __int64)(v21 + 1) )
  {
    v55 = qvector_reserve((__int64)a2, v22, v21 + 1, 24);
    *a2 = v55;
    v21 = a2[1];
    v22 = v55;
  }
  v23 = v22 + 24 * v21;
  *(_QWORD *)v23 = 0;
  v24 = v104;
  *(_OWORD *)(v23 + 8) = 0;
  ++a2[1];
  v25 = *(_QWORD *)v23;
  *(_QWORD *)v23 = v24;
  v26 = _mm_loadu_si128((const __m128i *)(v23 + 8));
  v104 = v25;
  *(__m128i *)(v23 + 8) = v105;
  LODWORD(v23) = *(_DWORD *)(a1 + 24);
  v105 = v26;
  if ( (v23 & 0x600) == 0x200 )
  {
    sub_64000(v103, a1 + 160, 0.0);
    v47 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)&v108[16] = 0;
    v109 = 0;
    if ( v47 )
    {
      v85 = (void *)qalloc_or_throw(16 * v47, a1 + 160, v45, v46);
      v86 = *(const void **)(a1 + 176);
      *(_QWORD *)&v108[16] = v85;
      *((_QWORD *)&v109 + 1) = v47;
      memcpy(v85, v86, 16 * v47);
      *(_QWORD *)&v109 = v47;
    }
    sub_1B67E0(a2, (__int64)&unk_418774, (__int64 *)(a1 + 120), v103);
    if ( *(_QWORD *)&v108[16] )
    {
      *(_QWORD *)&v109 = 0;
      qfree(*(__int64 *)&v108[16]);
    }
    qfree(*(__int64 *)v108);
    sub_64000(v103, a1 + 240, 0.0);
    v50 = *(_QWORD *)(a1 + 264);
    *(_QWORD *)&v108[16] = 0;
    v109 = 0;
    if ( v50 )
    {
      v83 = (void *)qalloc_or_throw(16 * v50, a1 + 240, v48, v49);
      v84 = *(const void **)(a1 + 256);
      *(_QWORD *)&v108[16] = v83;
      *((_QWORD *)&v109 + 1) = v50;
      memcpy(v83, v84, 16 * v50);
      *(_QWORD *)&v109 = v50;
    }
    sub_1B67E0(a2, (__int64)&unk_418778, (__int64 *)(a1 + 200), v103);
    if ( *(_QWORD *)&v108[16] )
    {
      *(_QWORD *)&v109 = 0;
      qfree(*(__int64 *)&v108[16]);
    }
    qfree(*(__int64 *)v108);
    if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 280)) || *(_QWORD *)(a1 + 304) )
    {
      v106 = 0;
      v107 = 0;
      v51 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
      *(_QWORD *)&v108[16] = 0;
      *(__m128 *)v108 = v51;
      sub_1B3C00((_QWORD *)(a1 + 280), &v106, (__int64)v103, *(double *)v51.m128_u64);
      v52 = a2[1];
      v53 = *a2;
      if ( a2[2] < (unsigned __int64)(v52 + 1) )
      {
        v89 = qvector_reserve((__int64)a2, v53, v52 + 1, 24);
        *a2 = v89;
        v52 = a2[1];
        v53 = v89;
      }
      v54 = v53 + 24 * v52;
      *(_QWORD *)v54 = 0;
      *(_OWORD *)(v54 + 8) = 0;
      ++a2[1];
      sub_6B870((__int64 *)v54);
      if ( v106 )
      {
        *(_QWORD *)&v107 = 0;
        qfree(v106);
      }
    }
  }
  else
  {
    v27 = v103;
    memset(v108, 0, sizeof(v108));
    v28 = qvector_reserve((__int64)v103, 0, 34, 1);
    *(_QWORD *)v108 = v28;
    *(_QWORD *)&v108[8] = 34;
    *(__m128i *)v28 = _mm_load_si128((const __m128i *)&xmmword_424830);
    si128 = _mm_load_si128((const __m128i *)&xmmword_424840);
    *(_BYTE *)(v28 + 32) = 3;
    *(__m128i *)(v28 + 16) = si128;
    v30 = *(_QWORD *)v108;
    *(_BYTE *)(*(_QWORD *)v108 + 33LL) = 0;
    v31 = a2[1];
    v32 = *a2;
    v33 = a2[2];
    v34 = v31 + 1;
    if ( (unsigned __int64)v27 < *a2 || (unsigned __int64)v103 >= v32 + 24 * v33 )
    {
      if ( v33 < v34 )
      {
        v82 = qvector_reserve((__int64)a2, v32, v31 + 1, 24);
        *a2 = v82;
        v32 = v82;
        v30 = *(_QWORD *)v108;
        v31 = a2[1];
      }
      v35 = _mm_loadu_si128((const __m128i *)&v108[8]);
      v36 = v32 + 24 * v31;
      *(_QWORD *)v36 = v30;
      *(__m128i *)(v36 + 8) = v35;
      ++a2[1];
    }
    else
    {
      v41 = _mm_loadl_epi64((const __m128i *)&v108[8]);
      v42 = _mm_loadl_epi64((const __m128i *)&v108[16]);
      memset(v108, 0, sizeof(v108));
      if ( v33 < v34 )
      {
        v102.m128i_i64[0] = v42.m128i_i64[0];
        v102.m128i_i64[1] = v41.m128i_i64[0];
        v88 = qvector_reserve((__int64)a2, v32, v31 + 1, 24);
        v42 = _mm_loadl_epi64(&v102);
        *a2 = v88;
        v32 = v88;
        v41 = _mm_loadl_epi64((const __m128i *)&v102.m128i_u64[1]);
        v31 = a2[1];
      }
      v43 = v32 + 24 * v31;
      *(_QWORD *)v43 = v30;
      *(__m128i *)(v43 + 8) = _mm_unpacklo_epi64(v41, v42);
      v44 = *(_QWORD *)v108;
      ++a2[1];
      if ( v44 )
      {
        *(_QWORD *)&v108[8] = 0;
        qfree(v44);
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 440) && *(_QWORD *)(a1 + 432) )
  {
    memset(v108, 0, sizeof(v108));
    sub_1B04A0((__int64 *)(a1 + 416), v103);
    v37 = a2[1];
    v38 = *a2;
    if ( a2[2] < (unsigned __int64)(v37 + 1) )
    {
      v70 = qvector_reserve((__int64)a2, v38, v37 + 1, 24);
      *a2 = v70;
      v37 = a2[1];
      v38 = v70;
    }
    v39 = v38 + 24 * v37;
    *(_QWORD *)v39 = 0;
    *(_OWORD *)(v39 + 8) = 0;
    ++a2[1];
    sub_6B870((__int64 *)v39);
    if ( *(_QWORD *)v108 )
    {
      *(_QWORD *)&v108[8] = 0;
      qfree(*(__int64 *)v108);
    }
  }
  if ( v104 )
  {
    v105.m128i_i64[0] = 0;
    qfree(v104);
  }
  return v110 - __readfsqword(0x28u);
}

