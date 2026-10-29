unsigned __int64 __fastcall sub_1B1D80(__int64 a1, __int64 *a2, double a3, double a4, double a5, __m128 a6)
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
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __m128i v25; // xmm1
  __int64 *v26; // r14
  __int64 v27; // rax
  __m128i si128; // xmm0
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 v45; // r13
  __m128 v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // r12
  __int64 v53; // r13
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __m128 v62; // xmm0
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // r8
  __int64 *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // r8
  bool v71; // zf
  int v72; // edx
  int v73; // esi
  __int64 v74; // r9
  unsigned __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rax
  void *v78; // rax
  const void *v79; // rsi
  void *v80; // rax
  const void *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  char *v85; // r12
  char *v86; // r13
  __int64 v87; // rsi
  __int64 *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __m128i v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // [rsp+0h] [rbp-C0h]
  __m128i v97; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v98; // [rsp+18h] [rbp-A8h]
  __int64 v99; // [rsp+20h] [rbp-A0h] BYREF
  __m128i v100; // [rsp+28h] [rbp-98h]
  __int64 v101; // [rsp+40h] [rbp-80h] BYREF
  __int128 v102; // [rsp+48h] [rbp-78h]
  _BYTE v103[24]; // [rsp+60h] [rbp-60h] BYREF
  __int128 v104; // [rsp+78h] [rbp-48h]
  unsigned __int64 v105; // [rsp+88h] [rbp-38h]

  v7 = *(_DWORD *)(a1 + 72);
  v105 = __readfsqword(0x28u);
  v100 = 0;
  v99 = 0;
  if ( !v7 )
  {
    sub_66DF0(&v99);
    v57 = a2[1];
    v58 = *a2;
    if ( a2[2] < (unsigned __int64)(v57 + 1) )
    {
      v82 = qvector_reserve();
      *a2 = v82;
      v57 = a2[1];
      v58 = v82;
    }
    v59 = v58 + 24 * v57;
    *(_QWORD *)v59 = 0;
    v60 = v99;
    *(_OWORD *)(v59 + 8) = 0;
    ++a2[1];
    v61 = *(_QWORD *)v59;
    *(_QWORD *)v59 = v60;
    v62 = (__m128)_mm_loadu_si128((const __m128i *)(v59 + 8));
    v99 = v61;
    *(__m128i *)(v59 + 8) = v100;
    v63 = *(_QWORD *)(a1 + 64);
    v100 = (__m128i)v62;
    v64 = *(_QWORD *)(v63 + 920);
    if ( v64 && *(_QWORD *)(v64 + 16) )
    {
      v98 = (__int64 *)v62.m128_u64[0];
      if ( v62.m128_u64[0] )
      {
        v67 = v62.m128_u64[0] + 14;
        v66 = v62.m128_u64[0] + 15;
        v98 = (__int64 *)(v62.m128_u64[0] - 1);
      }
      else
      {
        v66 = 16;
        v67 = 15;
      }
      if ( _mm_movehl_ps(a6, v62).m128_u64[0] < v66 )
      {
        v97.m128i_i64[0] = v67;
        v97.m128i_i64[1] = v66;
        v99 = qvector_reserve();
        v67 = v97.m128i_i64[0];
        v61 = v99;
        v66 = v97.m128i_u64[1];
      }
      v100.m128i_i64[0] = v66;
      v68 = v98;
      *(_BYTE *)(v61 + v67) = 0;
      v69 = (__int64 *)((char *)v68 + v99);
      v70 = 0;
      *v69 = 0x45564153203B0301LL;
      *(_QWORD *)((char *)v69 + 7) = 0x203A534745524445LL;
      v71 = *(_QWORD *)(v64 + 16) == 0;
      v98 = (__int64 *)v103;
      if ( !v71 )
      {
        while ( 1 )
        {
          v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
          v73 = *(_DWORD *)(*(_QWORD *)(v64 + 8) + 4 * v70);
          *(_OWORD *)v103 = 0u;
          sub_5F400(v98, v73, v72);
          sub_60370((__int64)v98, (__int64)&v99);
          ++v7;
          qfree();
          v70 = v7;
          if ( (unsigned __int64)v7 >= *(_QWORD *)(v64 + 16) )
            break;
          v74 = v100.m128i_i64[0];
          v75 = 2;
          if ( v100.m128i_i64[0] )
          {
            v75 = v100.m128i_i64[0] + 1;
            v74 = v100.m128i_i64[0] - 1;
          }
          v76 = v99;
          if ( v100.m128i_i64[1] < v75 )
          {
            v96 = v74;
            v97.m128i_i64[0] = v7;
            v97.m128i_i64[1] = v75;
            v99 = qvector_reserve();
            v74 = v96;
            v76 = v99;
            v70 = v7;
            v75 = v97.m128i_u64[1];
          }
          v100.m128i_i64[0] = v75;
          *(_BYTE *)(v76 + v74) = 44;
          *(_BYTE *)(v99 + v74 + 1) = 0;
        }
      }
      v98 = (__int64 *)v100.m128i_i64[0];
      if ( v100.m128i_i64[0] )
      {
        v86 = (char *)v98 + 1;
        v85 = (char *)v98 + 2;
        v98 = (__int64 *)((char *)v98 - 1);
      }
      else
      {
        v85 = (_BYTE *)(&word_2 + 1);
        v86 = (char *)&word_2;
      }
      v87 = v99;
      if ( v100.m128i_i64[1] < (unsigned __int64)v85 )
      {
        v99 = qvector_reserve();
        v87 = v99;
      }
      v100.m128i_i64[0] = (__int64)v85;
      v88 = v98;
      v86[v87] = 0;
      *(_WORD *)((char *)v88 + v99) = 770;
      v89 = a2[1];
      v90 = *a2;
      if ( a2[2] < (unsigned __int64)(v89 + 1) )
      {
        v95 = qvector_reserve();
        *a2 = v95;
        v89 = a2[1];
        v90 = v95;
      }
      v91 = v90 + 24 * v89;
      *(_QWORD *)v91 = 0;
      v92 = v99;
      *(_OWORD *)(v91 + 8) = 0;
      ++a2[1];
      v93 = *(_QWORD *)v91;
      *(_QWORD *)v91 = v92;
      v94 = _mm_loadu_si128((const __m128i *)(v91 + 8));
      v99 = v93;
      *(__m128i *)(v91 + 8) = v100;
      v100 = v94;
    }
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = (__int64 *)" EXTFRAME";
  v11 = *(_DWORD *)(a1 + 76);
  if ( (v9 & 0x40000) == 0 )
    v10 = (__int64 *)&unk_3F5793;
  v12 = " COMB";
  v98 = v10;
  if ( (v9 & 0x40) == 0 )
    v12 = (const char *)&unk_3F5793;
  v97.m128i_i64[1] = (__int64)v12;
  v97.m128i_i32[0] = v11 - 1;
  sub_66DF0(&v99);
  if ( *(_DWORD *)(a1 + 352) )
  {
    v98 = (__int64 *)v100.m128i_i64[0];
    if ( v100.m128i_i64[0] )
    {
      v53 = v100.m128i_i64[0] + 9;
      v52 = v100.m128i_i64[0] + 10;
      v51 = v99;
      v98 = (__int64 *)(v100.m128i_i64[0] - 1);
      if ( v100.m128i_i64[1] >= (unsigned __int64)(v100.m128i_i64[0] + 10) )
        goto LABEL_57;
    }
    else
    {
      v51 = v99;
      v52 = 11;
      v53 = 10;
      if ( v100.m128i_i64[1] >= 0xBuLL )
        goto LABEL_57;
    }
    v99 = qvector_reserve();
    v51 = v99;
LABEL_57:
    v100.m128i_i64[0] = v52;
    v54 = v98;
    *(_BYTE *)(v51 + v53) = 0;
    qmemcpy((char *)v54 + v99, " INBOUNDS:", 10);
    if ( *(int *)(a1 + 352) > 0 )
    {
      v55 = 0;
      do
      {
        v56 = v55;
        sub_F5F10(&v99);
        v55 = v56 + 1;
      }
      while ( *(_DWORD *)(a1 + 352) > (int)v56 + 1 );
    }
  }
  if ( !*(_DWORD *)(a1 + 376) )
    goto LABEL_13;
  v98 = (__int64 *)v100.m128i_i64[0];
  if ( v100.m128i_i64[0] )
  {
    v15 = v100.m128i_i64[0] + 10;
    v14 = v100.m128i_i64[0] + 11;
    v13 = v99;
    v98 = (__int64 *)(v100.m128i_i64[0] - 1);
    if ( v100.m128i_i64[1] >= (unsigned __int64)(v100.m128i_i64[0] + 11) )
      goto LABEL_10;
  }
  else
  {
    v13 = v99;
    v14 = 12;
    v15 = 11;
    if ( v100.m128i_i64[1] >= 0xCuLL )
      goto LABEL_10;
  }
  v99 = qvector_reserve();
  v13 = v99;
LABEL_10:
  v100.m128i_i64[0] = v14;
  v16 = v98;
  *(_BYTE *)(v13 + v15) = 0;
  qmemcpy((char *)v16 + v99, " OUTBOUNDS:", 11);
  if ( *(int *)(a1 + 376) > 0 )
  {
    v17 = 0;
    do
    {
      v18 = v17;
      sub_F5F10(&v99);
      v17 = v18 + 1;
    }
    while ( *(_DWORD *)(a1 + 376) > (int)v18 + 1 );
  }
LABEL_13:
  v19 = *(_QWORD *)(a1 + 64);
  v97 = *(__m128i *)(a1 + 328);
  v98 = (__int64 *)v103;
  sub_1B15D0((__int64)v103, v19);
  sub_1B15D0((__int64)&v101, *(_QWORD *)(a1 + 64));
  sub_F5F10(&v99);
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree();
  }
  if ( *(_QWORD *)v103 )
  {
    *(_QWORD *)&v103[8] = 0;
    qfree();
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    sub_F5F10(&v99);
  v20 = a2[1];
  v21 = *a2;
  if ( a2[2] < (unsigned __int64)(v20 + 1) )
  {
    v50 = qvector_reserve();
    *a2 = v50;
    v20 = a2[1];
    v21 = v50;
  }
  v22 = v21 + 24 * v20;
  *(_QWORD *)v22 = 0;
  v23 = v99;
  *(_OWORD *)(v22 + 8) = 0;
  ++a2[1];
  v24 = *(_QWORD *)v22;
  *(_QWORD *)v22 = v23;
  v25 = _mm_loadu_si128((const __m128i *)(v22 + 8));
  v99 = v24;
  *(__m128i *)(v22 + 8) = v100;
  LODWORD(v22) = *(_DWORD *)(a1 + 24);
  v100 = v25;
  if ( (v22 & 0x600) == 0x200 )
  {
    sub_5F580(v98, a1 + 160);
    v44 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)&v103[16] = 0;
    v104 = 0;
    if ( v44 )
    {
      v80 = (void *)qalloc_or_throw();
      v81 = *(const void **)(a1 + 176);
      *(_QWORD *)&v103[16] = v80;
      *((_QWORD *)&v104 + 1) = v44;
      memcpy(v80, v81, 16 * v44);
      *(_QWORD *)&v104 = v44;
    }
    sub_1B1A40(a2, (__int64)&unk_3F5774, (__int64 *)(a1 + 120), v98);
    if ( *(_QWORD *)&v103[16] )
    {
      *(_QWORD *)&v104 = 0;
      qfree();
    }
    qfree();
    sub_5F580(v98, a1 + 240);
    v45 = *(_QWORD *)(a1 + 264);
    *(_QWORD *)&v103[16] = 0;
    v104 = 0;
    if ( v45 )
    {
      v78 = (void *)qalloc_or_throw();
      v79 = *(const void **)(a1 + 256);
      *(_QWORD *)&v103[16] = v78;
      *((_QWORD *)&v104 + 1) = v45;
      memcpy(v78, v79, 16 * v45);
      *(_QWORD *)&v104 = v45;
    }
    sub_1B1A40(a2, (__int64)&unk_3F5778, (__int64 *)(a1 + 200), v98);
    if ( *(_QWORD *)&v103[16] )
    {
      *(_QWORD *)&v104 = 0;
      qfree();
    }
    qfree();
    if ( !(unsigned __int8)sub_5FE00((_QWORD *)(a1 + 280)) || *(_QWORD *)(a1 + 304) )
    {
      v101 = 0;
      v102 = 0;
      v46 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
      *(_QWORD *)&v103[16] = 0;
      *(__m128 *)v103 = v46;
      sub_1AEF00((_QWORD *)(a1 + 280), &v101, (__int64)v98);
      v47 = a2[1];
      v48 = *a2;
      if ( a2[2] < (unsigned __int64)(v47 + 1) )
      {
        v84 = qvector_reserve();
        *a2 = v84;
        v47 = a2[1];
        v48 = v84;
      }
      v49 = v48 + 24 * v47;
      *(_QWORD *)v49 = 0;
      *(_OWORD *)(v49 + 8) = 0;
      ++a2[1];
      sub_66DF0((__int64 *)v49);
      if ( v101 )
      {
        *(_QWORD *)&v102 = 0;
        qfree();
      }
    }
  }
  else
  {
    v26 = v98;
    memset(v103, 0, sizeof(v103));
    v27 = qvector_reserve();
    *(_QWORD *)v103 = v27;
    *(_QWORD *)&v103[8] = 34;
    *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_4001B0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_4001C0);
    *(_BYTE *)(v27 + 32) = 3;
    *(__m128i *)(v27 + 16) = si128;
    v29 = *(_QWORD *)v103;
    *(_BYTE *)(*(_QWORD *)v103 + 33LL) = 0;
    v30 = a2[1];
    v31 = *a2;
    v32 = a2[2];
    v33 = v30 + 1;
    if ( (unsigned __int64)v26 < *a2 || (unsigned __int64)v98 >= v31 + 24 * v32 )
    {
      if ( v32 < v33 )
      {
        v77 = qvector_reserve();
        *a2 = v77;
        v31 = v77;
        v29 = *(_QWORD *)v103;
        v30 = a2[1];
      }
      v34 = _mm_loadu_si128((const __m128i *)&v103[8]);
      v35 = v31 + 24 * v30;
      *(_QWORD *)v35 = v29;
      *(__m128i *)(v35 + 8) = v34;
      ++a2[1];
    }
    else
    {
      v40 = _mm_loadl_epi64((const __m128i *)&v103[8]);
      v41 = _mm_loadl_epi64((const __m128i *)&v103[16]);
      memset(v103, 0, sizeof(v103));
      if ( v32 < v33 )
      {
        v97.m128i_i64[0] = v41.m128i_i64[0];
        v97.m128i_i64[1] = v40.m128i_i64[0];
        v83 = qvector_reserve();
        v41 = _mm_loadl_epi64(&v97);
        *a2 = v83;
        v31 = v83;
        v40 = _mm_loadl_epi64((const __m128i *)&v97.m128i_u64[1]);
        v30 = a2[1];
      }
      v42 = v31 + 24 * v30;
      *(_QWORD *)v42 = v29;
      *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64(v40, v41);
      v43 = *(_QWORD *)v103;
      ++a2[1];
      if ( v43 )
      {
        *(_QWORD *)&v103[8] = 0;
        qfree();
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 440) && *(_QWORD *)(a1 + 432) )
  {
    memset(v103, 0, sizeof(v103));
    sub_1AB7A0((__int64 *)(a1 + 416), v98);
    v36 = a2[1];
    v37 = *a2;
    if ( a2[2] < (unsigned __int64)(v36 + 1) )
    {
      v65 = qvector_reserve();
      *a2 = v65;
      v36 = a2[1];
      v37 = v65;
    }
    v38 = v37 + 24 * v36;
    *(_QWORD *)v38 = 0;
    *(_OWORD *)(v38 + 8) = 0;
    ++a2[1];
    sub_66DF0((__int64 *)v38);
    if ( *(_QWORD *)v103 )
    {
      *(_QWORD *)&v103[8] = 0;
      qfree();
    }
  }
  if ( v99 )
  {
    v100.m128i_i64[0] = 0;
    qfree();
  }
  return v105 - __readfsqword(0x28u);
}

