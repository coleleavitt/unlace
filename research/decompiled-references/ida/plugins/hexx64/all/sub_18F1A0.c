__int64 __fastcall sub_18F1A0(_QWORD *p_src, __int64 a2, __int64 a3, int a4, double a5, __m128 a6)
{
  _QWORD *exception; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  int *v11; // rcx
  int v12; // eax
  _BOOL4 v13; // r9d
  int v14; // r8d
  _QWORD *v15; // rcx
  __int64 v16; // r15
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rbx
  _QWORD *v21; // r12
  __int64 v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r15
  __int64 v31; // rbx
  int v32; // edx
  int v33; // esi
  int v34; // eax
  __int64 v35; // r14
  int v36; // edi
  _QWORD *v37; // rax
  __int64 v39; // rax
  int v40; // esi
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rsi
  _DWORD *v44; // rbx
  unsigned int v45; // eax
  __int64 v46; // rbp
  unsigned __int8 *v47; // rbx
  unsigned __int8 *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rsi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r13
  __int64 v53; // rax
  int v54; // r8d
  int v55; // r9d
  unsigned __int64 v56; // r15
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r12
  __int64 *v62; // r15
  void *v63; // r14
  __int64 v64; // rdi
  __m128i v65; // xmm0
  __int64 *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rax
  char v74; // r12
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __m128i v77; // xmm0
  __int64 v78; // rax
  unsigned __int8 **v79; // r15
  __m128i v80; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v81; // [rsp+18h] [rbp-D0h]
  __m128i *v82; // [rsp+20h] [rbp-C8h]
  __int64 *v83; // [rsp+28h] [rbp-C0h]
  __int64 *v84; // [rsp+30h] [rbp-B8h]
  int v85; // [rsp+38h] [rbp-B0h]
  char v86; // [rsp+3Fh] [rbp-A9h]
  __int64 v87; // [rsp+48h] [rbp-A0h] BYREF
  __m128i v88; // [rsp+50h] [rbp-98h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  __int128 v90; // [rsp+68h] [rbp-80h]
  __int64 v91; // [rsp+80h] [rbp-68h] BYREF
  __int128 v92; // [rsp+88h] [rbp-60h] BYREF
  __int128 v93; // [rsp+98h] [rbp-50h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-40h]

  v85 = a4;
  v86 = a4;
  v11 = (int *)p_src[4];
  v94 = __readfsqword(0x28u);
  p_src[7] = a2;
  v91 = 0;
  v92 = 0;
  v12 = *v11;
  if ( *v11 == 2 )
  {
    v13 = 1;
    if ( (int *)a2 == v11 + 12 )
      goto LABEL_4;
  }
  else if ( v12 == 1 )
  {
    v13 = a2 == (_QWORD)(v11 + 16);
    goto LABEL_4;
  }
  v13 = (unsigned int)(v12 - 56) <= 1;
LABEL_4:
  v84 = &v91;
  sub_18CB00(p_src, &v91, 0, v11, a2, v13, 0.0, a6);
  v15 = (_QWORD *)p_src[6];
  if ( *(_BYTE *)a2 == 8 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v16 + 32) )
    {
      v17 = 0;
      v18 = 0;
      v83 = &v87;
      v82 = (__m128i *)&src;
      do
      {
        v19 = *(_QWORD *)(v16 + 24) + 80 * v18;
        if ( *(int *)(v19 + 4) > 1 )
        {
          v20 = v15 + 16;
          if ( *(_BYTE *)v19 != 15 )
          {
            v80.m128i_i64[0] = *(_QWORD *)(v16 + 24) + 80 * v18;
            if ( (unsigned __int8)sub_32F330(v80.m128i_i64[0], v83) )
            {
              v41 = *(_DWORD *)(v80.m128i_i64[0] + 4) - 1;
              v88.m128i_i64[0] = v87 + 1;
              v88.m128i_i64[1] = v41;
              sub_316BB0(v20, &v88, 0.0, a6);
            }
            goto LABEL_16;
          }
          v21 = *(_QWORD **)(*(_QWORD *)(v19 + 8) + 8LL);
          if ( v21[1] )
          {
            v22 = -1;
            v23 = 0;
            v24 = 0;
            do
            {
              v25 = *v21 + 24 * v24;
              if ( *(_DWORD *)v25 == 1 )
              {
                v26 = *(_QWORD *)(v25 + 8);
                v87 = v26;
                if ( !v23 || v26 != v22 )
                {
                  v40 = *(unsigned __int16 *)(v25 + 18);
                  LODWORD(v81) = v23;
                  v80.m128i_i64[0] = v25;
                  src = (void *)(v26 + 1);
                  *(_QWORD *)&v90 = v40 - 1;
                  sub_316BB0(v20, v82, 0.0, a6);
                  v26 = v87;
                  v23 = v81;
                  v25 = v80.m128i_i64[0];
                }
                v22 = v26 + *(unsigned __int16 *)(v25 + 18);
              }
              v24 = ++v23;
            }
            while ( (unsigned __int64)v23 < v21[1] );
LABEL_16:
            v15 = (_QWORD *)p_src[6];
          }
        }
        v18 = ++v17;
      }
      while ( (unsigned __int64)v17 < *(_QWORD *)(v16 + 32) );
    }
  }
  v27 = v92;
  v28 = v91;
  v29 = v15[22];
  v30 = p_src[8];
  v31 = v91;
  if ( !(32LL * (_QWORD)v92) )
  {
    if ( v30 <= v15[21] )
      goto LABEL_33;
LABEL_95:
    if ( !under_debugger )
      sub_383060(0xC941u, 0.0);
    BUG();
  }
  do
  {
    v32 = *(_DWORD *)(v31 + 20);
    v33 = *(_DWORD *)(v31 + 24);
    v34 = *(_DWORD *)(v31 + 16);
    v35 = *(_QWORD *)v31;
    v36 = v33 + v32;
    v14 = v34 + v33 + v32;
    if ( v30 <= *(_QWORD *)v31 )
    {
      if ( v14 != 1 )
        goto LABEL_21;
      if ( v32 > 1 )
      {
        if ( v36 > 1 )
          goto LABEL_21;
        if ( v34 > 1 )
        {
          if ( v34 + v33 > 1 )
            goto LABEL_21;
          goto LABEL_28;
        }
        goto LABEL_92;
      }
      if ( v34 <= 1 )
      {
        if ( v32 >= 0 )
        {
LABEL_92:
          v14 = v34 + v33;
          if ( (v34 & (v34 + v33)) < 0 )
            goto LABEL_21;
          goto LABEL_64;
        }
        if ( v36 < 0 )
          goto LABEL_21;
        if ( v34 < 0 )
        {
          if ( v33 + v34 < 0 )
            goto LABEL_21;
          goto LABEL_65;
        }
      }
      else
      {
        v14 = v34 + v33;
        if ( v34 + v33 > 1 || (v32 & v36) < 0 )
          goto LABEL_21;
      }
LABEL_64:
      if ( v34 > v36 )
      {
LABEL_28:
        if ( v35 < v15[21] )
        {
          v15[21] = v35;
          v28 = v91;
          v27 = v92;
        }
        goto LABEL_21;
      }
LABEL_65:
      if ( v34 + v32 >= v33 )
        goto LABEL_21;
      goto LABEL_28;
    }
    if ( v14 != 1 )
      goto LABEL_21;
    if ( v32 <= 1 )
    {
      if ( v34 <= 1 )
      {
        if ( (v32 & v36) < 0 )
          goto LABEL_21;
LABEL_52:
        v14 = v34 + v33;
        if ( ((v34 + v33) & v34) < 0 )
          goto LABEL_21;
      }
      else
      {
        v14 = v34 + v33;
        if ( v34 + v33 > 1 || (v32 & v36) < 0 )
          goto LABEL_21;
      }
      if ( v32 <= v14 && v32 + v34 >= v33 )
        goto LABEL_21;
      goto LABEL_47;
    }
    if ( v36 > 1 )
      goto LABEL_21;
    if ( v34 <= 1 )
      goto LABEL_52;
    if ( v34 + v33 > 1 )
      goto LABEL_21;
LABEL_47:
    v39 = v15[20];
    if ( v35 < v39 )
    {
      if ( v35 < 0 )
      {
        v42 = v15[24];
LABEL_59:
        v43 = v15[19];
        v15[22] = v39;
        v15[25] = *(_QWORD *)(*(_QWORD *)(v43 + 1472) + 40 * v42 + 8);
LABEL_60:
        v28 = v91;
        v27 = v92;
        goto LABEL_21;
      }
      v49 = v15[19];
      v50 = *(_QWORD *)v31;
      v81 = v29;
      v80.m128i_i64[0] = (__int64)v15;
      v51 = sub_1CFC80(v49, v50);
      v15 = (_QWORD *)v80.m128i_i64[0];
      v29 = v81;
      v42 = *(_QWORD *)(v80.m128i_i64[0] + 192);
      if ( v51 != v42 )
      {
        v39 = *(_QWORD *)(v80.m128i_i64[0] + 160);
        goto LABEL_59;
      }
      if ( v35 >= *(_QWORD *)(v80.m128i_i64[0] + 200) )
        goto LABEL_60;
      *(_QWORD *)(v80.m128i_i64[0] + 200) = v35;
      v28 = v91;
      v27 = v92;
    }
    else if ( v35 < v15[22] )
    {
      v15[22] = v35;
      v28 = v91;
      v27 = v92;
    }
LABEL_21:
    v31 += 32;
  }
  while ( v31 != v28 + 32 * v27 );
  v37 = (_QWORD *)p_src[6];
  if ( v37[21] < p_src[8] )
    goto LABEL_95;
  if ( v29 > v37[22] )
    v37[23] = *(_QWORD *)(p_src[4] + 24LL);
LABEL_33:
  if ( v28 )
  {
    *(_QWORD *)&v92 = 0;
    qfree(v28);
  }
  if ( !(_BYTE)v85
    || *(_BYTE *)a2 == 1 && (unsigned __int8)sub_11CCD0(*(_QWORD *)(p_src[1] + 1504LL), *(_DWORD *)(a2 + 8)) )
  {
    return 0;
  }
  v44 = (_DWORD *)p_src[4];
  src = nullptr;
  v90 = 0;
  v45 = *v44;
  if ( *v44 == 5 )
  {
    sub_18CB00(p_src, (__int64 *)&src, 1u, v44, (__int64)(v44 + 8), 1, 0.0, a6);
    goto LABEL_74;
  }
  if ( v45 <= 5 )
  {
    if ( v45 != 4 )
      goto LABEL_75;
    sub_18CB00(p_src, (__int64 *)&src, 0, v44, (__int64)(v44 + 8), 1, 0.0, a6);
LABEL_74:
    v44 = (_DWORD *)p_src[4];
    goto LABEL_75;
  }
  if ( v45 - 12 <= 1 )
  {
    sub_18CB00(p_src, (__int64 *)&src, 0, v44, (__int64)(v44 + 8), 1, 0.0, a6);
    sub_18CB00(p_src, (__int64 *)&src, *v44 == 13, v44, (__int64)(v44 + 12), 1, 0.0, a6);
    goto LABEL_74;
  }
LABEL_75:
  v46 = p_src[6];
  v47 = (unsigned __int8 *)(v44 + 16);
  if ( !*(_QWORD *)v46 )
    sub_18B8C0(0.0);
  v91 = 0;
  v92 = 0u;
  v93 = 0;
  sub_127FE0(*(_QWORD *)v46, v84, (__int64)v47, 0, v14, v28, 0.0, a6);
  v48 = (unsigned __int8 *)v84;
  sub_18E980(v46, v84, 0.0);
  if ( *((_QWORD *)&v92 + 1) )
  {
    *(_QWORD *)&v93 = 0;
    qfree(*((__int64 *)&v92 + 1));
  }
  qfree(v91);
  if ( !(_QWORD)v90 )
    goto LABEL_79;
  v52 = *(_QWORD *)(v46 + 8);
  if ( !v52 )
  {
    v73 = qalloc();
    a6 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v73, (__m128i)(unsigned __int64)v73);
    if ( !v73 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v73 + 48) = 0;
    *(_OWORD *)(v73 + 16) = 0;
    *(_OWORD *)(v73 + 32) = 0;
    *(__m128 *)(v73 + 8) = a6;
    *(_QWORD *)v73 = v73 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v46 + 8) = v73;
    *(_QWORD *)v73 = v73 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v73 & 3LL;
    *(__m128i *)(*(_QWORD *)(v46 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(v46 + 8),
                                                 (__m128i)*(unsigned __int64 *)(v46 + 8));
    **(_QWORD **)(v46 + 8) &= ~1uLL;
    **(_QWORD **)(v46 + 8) |= 2uLL;
    v52 = *(_QWORD *)(v46 + 8);
LABEL_101:
    v53 = qalloc();
    v56 = v53;
    if ( !v53 )
    {
      v8 = __cxa_allocate_exception(8u);
      *v8 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v53 + 32) = 0;
    *(_OWORD *)(v53 + 16) = 0;
    *(_OWORD *)v53 = 0;
    *(_QWORD *)(v53 + 24) = v47;
    *(_OWORD *)(v53 + 40) = 0;
    *(_QWORD *)v53 = v52 & 0xFFFFFFFFFFFFFFFCLL;
    v57 = _mm_loadl_epi64((const __m128i *)(v46 + 8));
    *(_QWORD *)v53 = v52 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64(v57, v57);
    if ( *(_QWORD *)(v46 + 8) != v52 )
      goto LABEL_103;
    goto LABEL_128;
  }
  if ( !*(_QWORD *)(v46 + 16) )
    goto LABEL_101;
  v74 = v85;
  v75 = *(_QWORD *)v52 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v75 & 2) != 0 )
  {
LABEL_119:
    v76 = qalloc();
    v56 = v76;
    if ( !v76 )
    {
      v7 = __cxa_allocate_exception(8u);
      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v76 + 32) = 0;
    *(_OWORD *)(v76 + 16) = 0;
    *(_OWORD *)v76 = 0;
    *(_QWORD *)(v76 + 24) = v47;
    *(_OWORD *)(v76 + 40) = 0;
    *(_QWORD *)v76 = v52 & 0xFFFFFFFFFFFFFFFCLL;
    v77 = _mm_loadl_epi64((const __m128i *)(v46 + 8));
    *(_QWORD *)v76 = v52 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v76 + 8) = _mm_unpacklo_epi64(v77, v77);
    if ( *(_QWORD *)(v46 + 8) != v52 )
    {
      if ( !v74 )
      {
        *(_QWORD *)(v52 + 16) = v76;
        v78 = *(_QWORD *)(v46 + 8);
        if ( *(_QWORD *)(v78 + 16) == v52 )
          *(_QWORD *)(v78 + 16) = v56;
LABEL_105:
        v48 = (unsigned __int8 *)v56;
        sub_18EDC0((_QWORD *)(v46 + 8), (__int64 *)v56);
LABEL_106:
        ++*(_QWORD *)(v46 + 16);
        goto LABEL_107;
      }
LABEL_103:
      *(_QWORD *)(v52 + 8) = v56;
      v58 = *(_QWORD *)(v46 + 8);
      if ( *(_QWORD *)(v58 + 8) == v52 )
        *(_QWORD *)(v58 + 8) = v56;
      goto LABEL_105;
    }
LABEL_128:
    v60 = v56 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v52 = v56 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v52 & 3LL;
    *(_QWORD *)(*(_QWORD *)(v46 + 8) + 8LL) = v56;
    *(_QWORD *)(*(_QWORD *)(v46 + 8) + 16LL) = v56;
    v59 = *(_QWORD *)v56 & 2LL;
    *(_QWORD *)v56 &= ~1uLL;
    *(_QWORD *)v56 = v59 | *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_106;
  }
  while ( 2 )
  {
    v48 = *(unsigned __int8 **)(v75 + 24);
    v52 = v75;
    v79 = (unsigned __int8 **)(v75 + 24);
    if ( sub_11DA40(v47, v48, 0.0) < 0 )
    {
      v75 = *(_QWORD *)(v52 + 8);
      v74 = v86;
      goto LABEL_126;
    }
    v48 = v47;
    if ( sub_11DA40(*v79, v47, 0.0) < 0 )
    {
      v75 = *(_QWORD *)(v52 + 16);
      v74 = 0;
LABEL_126:
      if ( (*(_BYTE *)v75 & 2) != 0 )
        goto LABEL_119;
      continue;
    }
    break;
  }
  if ( !v52 )
    goto LABEL_119;
  v56 = v52;
LABEL_107:
  v61 = v90;
  v62 = (__int64 *)(v56 + 24);
  v63 = nullptr;
  if ( (_QWORD)v90 )
  {
    v63 = (void *)qalloc_or_throw(32 * v90, (__int64)v48, v59, v60);
    memcpy(v63, src, 32 * v61);
  }
  v64 = v62[1];
  v65 = _mm_unpacklo_epi64((__m128i)v61, (__m128i)v61);
  if ( v64 )
  {
    v62[2] = 0;
    v80 = v65;
    qfree(v64);
    v65 = _mm_load_si128(&v80);
  }
  v62[1] = (__int64)v63;
  *((__m128i *)v62 + 1) = v65;
  if ( !*(_QWORD *)v46 )
    sub_18B8C0(*(double *)v65.m128i_i64);
  v91 = 0;
  v92 = 0u;
  v93 = 0;
  sub_127FE0(*(_QWORD *)v46, v84, (__int64)v47, 0, v54, v55, 0.0, a6);
  v66 = v84;
  sub_64280((__int64 *)(v46 + 48), v84, 0.0);
  sub_316CB0((__int64 *)(v46 + 64), (__int64 **)&v92 + 1, v67, v68);
  sub_64640((__int64 *)(v46 + 88), v66, v69, v70, v71, v72);
  sub_317C60((__int64 *)(v46 + 104), (__int64)&v92 + 8);
  if ( *((_QWORD *)&v92 + 1) )
  {
    *(_QWORD *)&v93 = 0;
    qfree(*((__int64 *)&v92 + 1));
  }
  qfree(v91);
LABEL_79:
  if ( src )
  {
    *(_QWORD *)&v90 = 0;
    qfree((__int64)src);
  }
  return 0;
}

