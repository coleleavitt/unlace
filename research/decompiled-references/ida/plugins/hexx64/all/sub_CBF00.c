__int64 __fastcall sub_CBF00(
        __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *exception; // rdi
  __m128i *v13; // rbp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  int i; // edx
  __int64 v18; // rcx
  signed int *v19; // rbx
  signed int *v20; // r14
  signed int *v21; // rdx
  __int64 v22; // r9
  signed int **v23; // r12
  __int64 v24; // r10
  __int64 v25; // rax
  _BYTE *v26; // rax
  signed int *v27; // r8
  _QWORD *v28; // r15
  __int64 v29; // r14
  __m128i v30; // xmm0
  unsigned __int64 v31; // r11
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // r12
  unsigned int v35; // ecx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  signed __int64 v38; // rcx
  signed int *v39; // rax
  signed int *v40; // r13
  signed int *v41; // rbp
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rax
  char v48; // r12
  unsigned __int64 v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rax
  __m128i v52; // xmm0
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __m128i v58; // xmm0
  int v59; // [rsp+Ch] [rbp-ECh]
  __m128i v60; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-B8h]
  _QWORD *v63; // [rsp+48h] [rbp-B0h]
  __int64 v64; // [rsp+50h] [rbp-A8h]
  __int64 v65; // [rsp+58h] [rbp-A0h]
  signed __int64 v66; // [rsp+60h] [rbp-98h]
  signed int *v67; // [rsp+68h] [rbp-90h]
  __m128i v68; // [rsp+70h] [rbp-88h] BYREF
  __m128i v69; // [rsp+80h] [rbp-78h]
  signed int *v70; // [rsp+90h] [rbp-68h] BYREF
  __m128i v71; // [rsp+98h] [rbp-60h]
  _QWORD *v72; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+B8h] [rbp-40h]

  v13 = a1;
  v14 = a1[6].m128i_u64[0];
  v73 = __readfsqword(0x28u);
  v15 = 0;
  if ( !v14 )
    goto LABEL_23;
  v16 = a1[5].m128i_i64[1];
  for ( i = 0; i < v14; v15 = ++i )
  {
    if ( !*(_QWORD *)(v13[4].m128i_i64[0] + 8LL * *(int *)(v16 + 4 * v15)) )
    {
      if ( !under_debugger )
        sub_383060(0xC37Bu, a4);
      BUG();
    }
  }
  v18 = v13[9].m128i_i64[1];
  v13[6].m128i_i64[0] = 0;
  v19 = (signed int *)v13[8].m128i_i64[0];
  v20 = (signed int *)v13[9].m128i_i64[0];
  v21 = (signed int *)v13[10].m128i_i64[0];
  v22 = v13[10].m128i_i64[1];
  v23 = (signed int **)(v18 + 8);
  v24 = v13[11].m128i_i64[0];
  v25 = v13[11].m128i_i64[1];
  while ( v19 != v21 )
  {
    while ( 1 )
    {
      if ( v19[2] != -1 )
      {
        v26 = (_BYTE *)sub_330E60(*(_QWORD *)(*(_QWORD *)(v13[20].m128i_i64[0] + 528) + 8LL * *v19), v19[1]);
        v19[2] = sub_BD290((__int64)v13, v26);
        v21 = (signed int *)v13[10].m128i_i64[0];
        v22 = v13[10].m128i_i64[1];
        v24 = v13[11].m128i_i64[0];
        v25 = v13[11].m128i_i64[1];
      }
      v19 += 3;
      if ( v20 != v19 )
        break;
      v19 = *v23++;
      v20 = v19 + 126;
      if ( v19 == v21 )
        goto LABEL_11;
    }
  }
LABEL_11:
  v27 = (signed int *)v13[8].m128i_i64[0];
  if ( v27 == v19 )
    goto LABEL_23;
  v28 = (_QWORD *)v13[9].m128i_i64[1];
  v29 = v13[9].m128i_i64[0];
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v28);
  v31 = 0xAAAAAAAAAAAAAAABLL * (((v29 - (__int64)v27) >> 2) + (((__int64)v19 - v22) >> 2))
      + 42 * ((v25 == 0) + ((v25 - (__int64)v28) >> 3) - 1);
  v32 = -2;
  if ( v31 )
  {
    _BitScanReverse64(&v33, v31);
    v32 = 2LL * (int)v33;
  }
  v63 = (_QWORD *)v25;
  v34 = v13[8].m128i_i64[1];
  v72 = (_QWORD *)v25;
  v35 = v13[14].m128i_u32[0];
  v66 = 0xAAAAAAAAAAAAAAABLL * (((v29 - (__int64)v27) >> 2) + (((__int64)v19 - v22) >> 2))
      + 42 * ((v25 == 0) + ((v25 - (__int64)v28) >> 3) - 1);
  v71.m128i_i64[0] = v22;
  v65 = v22;
  v71.m128i_i64[1] = v24;
  v64 = v24;
  v62 = (__int64)&v68;
  v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v34);
  v61 = v68;
  v69 = v30;
  v60 = v30;
  v67 = v27;
  v70 = v19;
  v59 = v35;
  sub_CB4B0(
    v68.m128i_i64,
    (__m128i *)&v70,
    v32,
    v35,
    *(double *)v30.m128i_i64,
    *(double *)v68.m128i_i64,
    a6,
    *(double *)&v28,
    (__m128)(unsigned __int64)v34,
    a9);
  v36 = _mm_load_si128(&v60);
  v37 = _mm_load_si128(&v61);
  if ( v66 > 16 )
  {
    v72 = v28;
    v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v29);
    v38 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v67 - v34) >> 2) + 16;
    if ( v38 < 0 )
    {
      v53 = ~(~v38 / 0x2AuLL);
    }
    else
    {
      if ( v38 <= 41 )
      {
        v68 = v37;
        v70 = v67 + 48;
        v62 = (__int64)(v67 + 48);
        v69 = v36;
        sub_CBAB0((signed int **)&v68, &v70, v59, *(double *)v36.m128i_i64, v37);
        v39 = (signed int *)v62;
        v62 = (__int64)v13;
        v60.m128i_i64[0] = a3;
        v40 = (signed int *)v29;
        goto LABEL_18;
      }
      v53 = v38 / 42;
    }
    v28 += v53;
    v68 = v37;
    v54 = *v28;
    v72 = v28;
    v69 = v36;
    v71.m128i_i64[0] = v54;
    v71.m128i_i64[1] = v54 + 504;
    v62 = 12 * (v38 - 42 * v53);
    v70 = (signed int *)(v62 + v54);
    sub_CBAB0((signed int **)&v68, &v70, v59, *(double *)v36.m128i_i64, v37);
    v34 = *v28;
    v55 = v62;
    v60.m128i_i64[0] = a3;
    v62 = (__int64)v13;
    v39 = (signed int *)(v34 + v55);
    v40 = (signed int *)(v34 + 504);
LABEL_18:
    v41 = v39;
    while ( v19 != v41 )
    {
      v70 = v41;
      v41 += 3;
      v71.m128i_i64[0] = v34;
      v71.m128i_i64[1] = (__int64)v40;
      v72 = v28;
      sub_C5370((__int64)&v70, v59);
      if ( v40 == v41 )
      {
        v39 = (signed int *)v28[1];
        ++v28;
        v40 = v39 + 126;
        v34 = (__int64)v39;
        goto LABEL_18;
      }
    }
    v13 = (__m128i *)v62;
    a3 = v60.m128i_i64[0];
    goto LABEL_23;
  }
  v70 = v19;
  v71.m128i_i64[0] = v65;
  v71.m128i_i64[1] = v64;
  v72 = v63;
  v68 = v37;
  v69 = v36;
  sub_CBAB0((signed int **)&v68, &v70, v59, *(double *)v36.m128i_i64, v37);
LABEL_23:
  *(_QWORD *)(*(_QWORD *)(v13[2].m128i_i64[1] + 24LL * (int)a2) + 8 * (a2 >> 32)) = a3;
  v42 = v13->m128i_i64[0];
  if ( !v13->m128i_i64[0] )
  {
    v57 = qalloc();
    v58 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v57, (__m128i)(unsigned __int64)v57);
    if ( !v57 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v57 + 16) = 0;
    *(__m128i *)(v57 + 8) = v58;
    *(_QWORD *)v57 = v57 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v13->m128i_i64[0] = v57;
    *(_QWORD *)v57 = v57 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v57 & 3LL;
    *(__m128i *)(v13->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v13->m128i_u64[0], (__m128i)v13->m128i_u64[0]);
    *(_QWORD *)v13->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v13->m128i_i64[0] |= 2uLL;
    v42 = v13->m128i_i64[0];
LABEL_25:
    v43 = qalloc();
    v44 = v43;
    if ( !v43 )
    {
      v9 = __cxa_allocate_exception(8u);
      *v9 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v43 + 16) = 0;
    *(_OWORD *)v43 = 0;
    *(_QWORD *)(v43 + 24) = a3;
    *(_QWORD *)v43 = v42 & 0xFFFFFFFFFFFFFFFCLL;
    v45 = _mm_loadl_epi64(v13);
    *(_QWORD *)v43 = v42 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v43 + 8) = _mm_unpacklo_epi64(v45, v45);
    if ( v42 != v13->m128i_i64[0] )
    {
      *(_QWORD *)(v42 + 8) = v43;
      v46 = v13->m128i_i64[0];
      if ( v42 == *(_QWORD *)(v13->m128i_i64[0] + 8) )
        goto LABEL_39;
      goto LABEL_28;
    }
    goto LABEL_44;
  }
  if ( !v13->m128i_i64[1] )
    goto LABEL_25;
  if ( (*(_BYTE *)(*(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v48 = 1;
    goto LABEL_35;
  }
  v42 = *(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFCLL;
  v48 = 1;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v42 + 24);
    if ( a3 < v49 )
    {
      v50 = *(_BYTE **)(v42 + 8);
      v48 = 1;
      if ( (*v50 & 2) != 0 )
        goto LABEL_35;
      goto LABEL_47;
    }
    if ( v49 >= a3 )
      break;
    v50 = *(_BYTE **)(v42 + 16);
    v48 = 0;
    if ( (*v50 & 2) != 0 )
      goto LABEL_35;
LABEL_47:
    v42 = (unsigned __int64)v50;
  }
  if ( v42 )
    return 1;
LABEL_35:
  v51 = qalloc();
  v44 = v51;
  if ( !v51 )
  {
    v10 = __cxa_allocate_exception(8u);
    *v10 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v10, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v51 + 16) = 0;
  *(_OWORD *)v51 = 0;
  *(_QWORD *)(v51 + 24) = a3;
  *(_QWORD *)v51 = v42 & 0xFFFFFFFFFFFFFFFCLL;
  v52 = _mm_loadl_epi64(v13);
  *(_QWORD *)v51 = v42 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64(v52, v52);
  if ( v13->m128i_i64[0] == v42 )
  {
LABEL_44:
    *(_QWORD *)v42 = v44 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v42 & 3LL;
    *(_QWORD *)(v13->m128i_i64[0] + 8) = v44;
    *(_QWORD *)(v13->m128i_i64[0] + 16) = v44;
    v56 = *(_QWORD *)v44 & 2LL;
    *(_QWORD *)v44 &= ~1uLL;
    *(_QWORD *)v44 = v56 | v13->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_29;
  }
  if ( v48 )
  {
    *(_QWORD *)(v42 + 8) = v51;
    v46 = v13->m128i_i64[0];
    if ( *(_QWORD *)(v13->m128i_i64[0] + 8) == v42 )
LABEL_39:
      *(_QWORD *)(v46 + 8) = v44;
  }
  else
  {
    *(_QWORD *)(v42 + 16) = v51;
    if ( *(_QWORD *)(v13->m128i_i64[0] + 16) == v42 )
      *(_QWORD *)(v13->m128i_i64[0] + 16) = v51;
  }
LABEL_28:
  sub_C3D20(v13, (__int64 *)v44);
LABEL_29:
  ++v13->m128i_i64[1];
  return 1;
}

