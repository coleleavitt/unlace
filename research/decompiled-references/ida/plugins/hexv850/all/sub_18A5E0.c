__int64 __fastcall sub_18A5E0(__int64 p_src, __int64 a2, __int64 a3, int a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // r13
  int *v9; // rcx
  int v10; // eax
  unsigned __int8 v11; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // r15
  int v19; // r14d
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r15
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // r14
  int v34; // edi
  _QWORD *v35; // rax
  __int64 v37; // rax
  int v38; // esi
  char v39; // al
  int v40; // eax
  _DWORD *v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rbp
  unsigned __int8 *v44; // rbx
  unsigned __int8 *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // r15
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r12
  __int64 *v57; // r15
  __int64 v58; // r14
  __int64 v59; // rdi
  __m128i v60; // xmm0
  __int64 *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  __int64 v66; // rax
  __m128i v67; // xmm1
  void *v68; // rax
  char v69; // r12
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  unsigned __int8 **v74; // r15
  __m128i v75; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+18h] [rbp-D0h]
  void **v77; // [rsp+20h] [rbp-C8h]
  __int64 *v78; // [rsp+28h] [rbp-C0h]
  __int64 *v79; // [rsp+30h] [rbp-B8h]
  int v80; // [rsp+38h] [rbp-B0h]
  char v81; // [rsp+3Fh] [rbp-A9h]
  __int64 v82; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v83[2]; // [rsp+50h] [rbp-98h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  __int128 v85; // [rsp+68h] [rbp-80h]
  __int64 v86; // [rsp+80h] [rbp-68h] BYREF
  __int128 v87; // [rsp+88h] [rbp-60h] BYREF
  __int128 v88; // [rsp+98h] [rbp-50h]
  unsigned __int64 v89; // [rsp+A8h] [rbp-40h]

  v7 = (_QWORD *)p_src;
  v80 = a4;
  v81 = a4;
  v9 = *(int **)(p_src + 32);
  v89 = __readfsqword(0x28u);
  *(_QWORD *)(p_src + 56) = a2;
  v86 = 0;
  v87 = 0;
  v10 = *v9;
  if ( *v9 == 2 )
  {
    v11 = 1;
    if ( (int *)a2 == v9 + 12 )
      goto LABEL_4;
  }
  else if ( v10 == 1 )
  {
    v11 = a2 == (_QWORD)(v9 + 16);
    goto LABEL_4;
  }
  v11 = (unsigned int)(v10 - 56) <= 1;
LABEL_4:
  v13 = (__int64)&v86;
  v79 = &v86;
  sub_187F40((_QWORD *)p_src, &v86, 0, v9, a2, v11);
  v17 = *(_QWORD **)(p_src + 48);
  if ( *(_BYTE *)a2 == 8 )
  {
    v18 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v18 + 32) )
    {
      v19 = 0;
      v20 = 0;
      v78 = &v82;
      p_src = (__int64)&src;
      v77 = &src;
      do
      {
        v14 = *(_QWORD *)(v18 + 24) + 80 * v20;
        if ( *(int *)(v14 + 4) > 1 )
        {
          v21 = v17 + 16;
          if ( *(_BYTE *)v14 != 15 )
          {
            v13 = (__int64)v78;
            v75.m128i_i64[0] = *(_QWORD *)(v18 + 24) + 80 * v20;
            p_src = v75.m128i_i64[0];
            v39 = sub_3297A0(v75.m128i_i64[0], v78);
            v14 = v75.m128i_i64[0];
            if ( v39 )
            {
              v13 = (__int64)v83;
              p_src = (__int64)v21;
              v40 = *(_DWORD *)(v75.m128i_i64[0] + 4) - 1;
              v83[0] = v82 + 1;
              v83[1] = v40;
              sub_3112F0(v21, v83, v82 + 1, v82, v15, v16);
            }
            goto LABEL_16;
          }
          v22 = *(_QWORD **)(*(_QWORD *)(v14 + 8) + 8LL);
          if ( v22[1] )
          {
            v13 = -1;
            v23 = 0;
            v24 = 0;
            do
            {
              p_src = 3 * v24;
              v25 = *v22 + 24 * v24;
              if ( *(_DWORD *)v25 == 1 )
              {
                v26 = *(_QWORD *)(v25 + 8);
                v82 = v26;
                if ( !(_DWORD)v23 || v26 != v13 )
                {
                  v38 = *(unsigned __int16 *)(v25 + 18);
                  p_src = (__int64)v21;
                  LODWORD(v76) = v23;
                  v75.m128i_i64[0] = v25;
                  src = (void *)(v26 + 1);
                  *(_QWORD *)&v85 = v38 - 1;
                  sub_3112F0(v21, v77, v14, v23, v15, v16);
                  v26 = v82;
                  LODWORD(v23) = v76;
                  v25 = v75.m128i_i64[0];
                }
                v13 = v26 + *(unsigned __int16 *)(v25 + 18);
              }
              v23 = (unsigned int)(v23 + 1);
              v24 = (int)v23;
            }
            while ( (unsigned __int64)(int)v23 < v22[1] );
LABEL_16:
            v17 = (_QWORD *)v7[6];
          }
        }
        v20 = ++v19;
      }
      while ( (unsigned __int64)v19 < *(_QWORD *)(v18 + 32) );
    }
  }
  v27 = v87;
  v28 = v86;
  v29 = v17[22];
  v30 = v7[8];
  v31 = v86;
  if ( !(32LL * (_QWORD)v87) )
  {
    if ( v30 <= v17[21] )
      goto LABEL_33;
LABEL_95:
    if ( !under_debugger )
      sub_37CFE0(51521);
    BUG();
  }
  do
  {
    v14 = *(unsigned int *)(v31 + 20);
    v13 = *(unsigned int *)(v31 + 24);
    v32 = *(_DWORD *)(v31 + 16);
    v33 = *(_QWORD *)v31;
    v34 = v13 + v14;
    v15 = (unsigned int)(v32 + v13 + v14);
    if ( v30 <= *(_QWORD *)v31 )
    {
      if ( (_DWORD)v15 != 1 )
        goto LABEL_21;
      if ( (int)v14 > 1 )
      {
        if ( v34 > 1 )
          goto LABEL_21;
        if ( v32 > 1 )
        {
          v13 = (unsigned int)(v32 + v13);
          if ( (int)v13 > 1 )
            goto LABEL_21;
          goto LABEL_28;
        }
        goto LABEL_92;
      }
      if ( v32 <= 1 )
      {
        if ( (int)v14 >= 0 )
        {
LABEL_92:
          v15 = (unsigned int)(v32 + v13);
          if ( (int)(v32 & v15) < 0 )
            goto LABEL_21;
          goto LABEL_64;
        }
        if ( v34 < 0 )
          goto LABEL_21;
        if ( v32 < 0 )
        {
          if ( (int)v13 + v32 < 0 )
            goto LABEL_21;
          goto LABEL_65;
        }
      }
      else
      {
        v15 = (unsigned int)(v32 + v13);
        if ( (int)v15 > 1 || (int)(v14 & v34) < 0 )
          goto LABEL_21;
      }
LABEL_64:
      if ( v32 > v34 )
      {
LABEL_28:
        if ( v33 < v17[21] )
        {
          v17[21] = v33;
          v28 = v86;
          v27 = v87;
        }
        goto LABEL_21;
      }
LABEL_65:
      v14 = (unsigned int)(v32 + v14);
      if ( (int)v14 >= (int)v13 )
        goto LABEL_21;
      goto LABEL_28;
    }
    if ( (_DWORD)v15 != 1 )
      goto LABEL_21;
    if ( (int)v14 <= 1 )
    {
      if ( v32 <= 1 )
      {
        if ( (int)(v14 & v34) < 0 )
          goto LABEL_21;
LABEL_52:
        v15 = (unsigned int)(v32 + v13);
        if ( (int)(v15 & v32) < 0 )
          goto LABEL_21;
      }
      else
      {
        v15 = (unsigned int)(v32 + v13);
        if ( (int)v15 > 1 || (int)(v14 & v34) < 0 )
          goto LABEL_21;
      }
      if ( (int)v14 <= (int)v15 && (int)v14 + v32 >= (int)v13 )
        goto LABEL_21;
      goto LABEL_47;
    }
    if ( v34 > 1 )
      goto LABEL_21;
    if ( v32 <= 1 )
      goto LABEL_52;
    v13 = (unsigned int)(v32 + v13);
    if ( (int)v13 > 1 )
      goto LABEL_21;
LABEL_47:
    v37 = v17[20];
    if ( v33 < v37 )
    {
      if ( v33 < 0 )
      {
        v14 = v17[24];
LABEL_59:
        v13 = v17[19];
        v17[22] = v37;
        v17[25] = *(_QWORD *)(*(_QWORD *)(v13 + 1472) + 40 * v14 + 8);
LABEL_60:
        v28 = v86;
        v27 = v87;
        goto LABEL_21;
      }
      v46 = v17[19];
      v13 = *(_QWORD *)v31;
      v76 = v29;
      v75.m128i_i64[0] = (__int64)v17;
      v47 = sub_1CAE00(v46, v13);
      v17 = (_QWORD *)v75.m128i_i64[0];
      v29 = v76;
      v14 = *(_QWORD *)(v75.m128i_i64[0] + 192);
      if ( v47 != v14 )
      {
        v37 = *(_QWORD *)(v75.m128i_i64[0] + 160);
        goto LABEL_59;
      }
      if ( v33 >= *(_QWORD *)(v75.m128i_i64[0] + 200) )
        goto LABEL_60;
      *(_QWORD *)(v75.m128i_i64[0] + 200) = v33;
      v28 = v86;
      v27 = v87;
    }
    else if ( v33 < v17[22] )
    {
      v17[22] = v33;
      v28 = v86;
      v27 = v87;
    }
LABEL_21:
    v31 += 32;
  }
  while ( v31 != v28 + 32 * v27 );
  v35 = (_QWORD *)v7[6];
  p_src = v7[8];
  if ( v35[21] < p_src )
    goto LABEL_95;
  if ( v29 > v35[22] )
  {
    v14 = *(_QWORD *)(v7[4] + 24LL);
    v35[23] = v14;
  }
LABEL_33:
  if ( v28 )
  {
    *(_QWORD *)&v87 = 0;
    p_src = v28;
    qfree();
  }
  if ( !(_BYTE)v80 )
    return 0;
  if ( *(_BYTE *)a2 == 1 )
  {
    v13 = *(unsigned int *)(a2 + 8);
    p_src = *(_QWORD *)(v7[1] + 1504LL);
    if ( (unsigned __int8)sub_118110(p_src, v13) )
      return 0;
  }
  v41 = (_DWORD *)v7[4];
  src = nullptr;
  v85 = 0;
  v42 = *v41;
  if ( *v41 == 5 )
  {
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_187F40(v7, (__int64 *)&src, 1u, v41, (__int64)(v41 + 8), 1u);
    goto LABEL_74;
  }
  if ( v42 <= 5 )
  {
    if ( v42 != 4 )
      goto LABEL_75;
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_187F40(v7, (__int64 *)&src, 0, v41, (__int64)(v41 + 8), 1u);
LABEL_74:
    v41 = (_DWORD *)v7[4];
    goto LABEL_75;
  }
  if ( v42 - 12 <= 1 )
  {
    sub_187F40(v7, (__int64 *)&src, 0, v41, (__int64)(v41 + 8), 1u);
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_187F40(v7, (__int64 *)&src, *v41 == 13, v41, (__int64)(v41 + 12), 1u);
    goto LABEL_74;
  }
LABEL_75:
  v43 = v7[6];
  v44 = (unsigned __int8 *)(v41 + 16);
  if ( !*(_QWORD *)v43 )
    sub_186D00(p_src, v13, v14, v17, v15);
  v86 = 0;
  v87 = 0u;
  v88 = 0;
  sub_123420(*(_QWORD *)v43, v79, (__int64)v44, 0);
  v45 = (unsigned __int8 *)v79;
  sub_189DC0(v43, v79);
  if ( *((_QWORD *)&v87 + 1) )
  {
    *(_QWORD *)&v88 = 0;
    qfree();
  }
  qfree();
  if ( !(_QWORD)v85 )
    goto LABEL_79;
  v48 = *(_QWORD *)(v43 + 8);
  if ( !v48 )
  {
    v66 = qalloc();
    v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
    if ( !v66 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v66 + 48) = 0;
    *(_OWORD *)(v66 + 16) = 0;
    *(_OWORD *)(v66 + 32) = 0;
    *(__m128i *)(v66 + 8) = v67;
    *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v43 + 8) = v66;
    *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v66 & 3LL;
    *(__m128i *)(*(_QWORD *)(v43 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(v43 + 8),
                                                 (__m128i)*(unsigned __int64 *)(v43 + 8));
    **(_QWORD **)(v43 + 8) &= ~1uLL;
    **(_QWORD **)(v43 + 8) |= 2uLL;
    v48 = *(_QWORD *)(v43 + 8);
LABEL_101:
    v49 = qalloc();
    v51 = v49;
    if ( !v49 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v49 + 32) = 0;
    *(_OWORD *)(v49 + 16) = 0;
    *(_OWORD *)v49 = 0;
    *(_QWORD *)(v49 + 24) = v44;
    *(_OWORD *)(v49 + 40) = 0;
    *(_QWORD *)v49 = v48 & 0xFFFFFFFFFFFFFFFCLL;
    v52 = _mm_loadl_epi64((const __m128i *)(v43 + 8));
    *(_QWORD *)v49 = v48 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64(v52, v52);
    if ( *(_QWORD *)(v43 + 8) != v48 )
      goto LABEL_103;
    goto LABEL_128;
  }
  if ( !*(_QWORD *)(v43 + 16) )
    goto LABEL_101;
  v69 = v80;
  v70 = *(_QWORD *)v48 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v70 & 2) != 0 )
  {
LABEL_119:
    v71 = qalloc();
    v51 = v71;
    if ( !v71 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v71 + 32) = 0;
    *(_OWORD *)(v71 + 16) = 0;
    *(_OWORD *)v71 = 0;
    *(_QWORD *)(v71 + 24) = v44;
    *(_OWORD *)(v71 + 40) = 0;
    *(_QWORD *)v71 = v48 & 0xFFFFFFFFFFFFFFFCLL;
    v72 = _mm_loadl_epi64((const __m128i *)(v43 + 8));
    *(_QWORD *)v71 = v48 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v71 + 8) = _mm_unpacklo_epi64(v72, v72);
    if ( *(_QWORD *)(v43 + 8) != v48 )
    {
      if ( !v69 )
      {
        *(_QWORD *)(v48 + 16) = v71;
        v73 = *(_QWORD *)(v43 + 8);
        if ( *(_QWORD *)(v73 + 16) == v48 )
          *(_QWORD *)(v73 + 16) = v51;
LABEL_105:
        v45 = (unsigned __int8 *)v51;
        sub_18A200((_QWORD *)(v43 + 8), (__int64 *)v51);
LABEL_106:
        ++*(_QWORD *)(v43 + 16);
        goto LABEL_107;
      }
LABEL_103:
      *(_QWORD *)(v48 + 8) = v51;
      v53 = *(_QWORD *)(v43 + 8);
      if ( *(_QWORD *)(v53 + 8) == v48 )
        *(_QWORD *)(v53 + 8) = v51;
      goto LABEL_105;
    }
LABEL_128:
    v55 = v51 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v48 = v51 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v48 & 3LL;
    *(_QWORD *)(*(_QWORD *)(v43 + 8) + 8LL) = v51;
    *(_QWORD *)(*(_QWORD *)(v43 + 8) + 16LL) = v51;
    v54 = *(_QWORD *)v51 & 2LL;
    *(_QWORD *)v51 &= ~1uLL;
    *(_QWORD *)v51 = v54 | *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_106;
  }
  while ( 2 )
  {
    v45 = *(unsigned __int8 **)(v70 + 24);
    v48 = v70;
    v74 = (unsigned __int8 **)(v70 + 24);
    if ( sub_118E80(v44, v45) < 0 )
    {
      v70 = *(_QWORD *)(v48 + 8);
      v69 = v81;
      goto LABEL_126;
    }
    v45 = v44;
    if ( sub_118E80(*v74, v44) < 0 )
    {
      v70 = *(_QWORD *)(v48 + 16);
      v69 = 0;
LABEL_126:
      if ( (*(_BYTE *)v70 & 2) != 0 )
        goto LABEL_119;
      continue;
    }
    break;
  }
  if ( !v48 )
    goto LABEL_119;
  v51 = v48;
LABEL_107:
  v56 = v85;
  v57 = (__int64 *)(v51 + 24);
  v58 = 0;
  if ( (_QWORD)v85 )
  {
    v68 = (void *)qalloc_or_throw();
    v45 = (unsigned __int8 *)src;
    v58 = (__int64)v68;
    memcpy(v68, src, 32 * v56);
  }
  v59 = v57[1];
  v60 = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
  if ( v59 )
  {
    v57[2] = 0;
    v75 = v60;
    qfree();
    v60 = _mm_load_si128(&v75);
  }
  v57[1] = v58;
  *((__m128i *)v57 + 1) = v60;
  if ( !*(_QWORD *)v43 )
    sub_186D00(v59, v45, v54, v55, v50);
  v86 = 0;
  v87 = 0u;
  v88 = 0;
  sub_123420(*(_QWORD *)v43, v79, (__int64)v44, 0);
  v61 = v79;
  sub_5F800((__int64 *)(v43 + 48), v79);
  sub_3113F0(v43 + 64, (char *)&v87 + 8);
  sub_5FBC0((__int64 *)(v43 + 88), v61, v62, v63, v64, v65);
  sub_3123A0(v43 + 104, (char *)&v87 + 8);
  if ( *((_QWORD *)&v87 + 1) )
  {
    *(_QWORD *)&v88 = 0;
    qfree();
  }
  qfree();
LABEL_79:
  if ( src )
  {
    *(_QWORD *)&v85 = 0;
    qfree();
  }
  return 0;
}

