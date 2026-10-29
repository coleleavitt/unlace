unsigned __int64 __fastcall sub_2D7370(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 *a5, __m128i a6)
{
  int v9; // eax
  int v10; // ecx
  int v11; // r15d
  __m128i si128; // xmm2
  unsigned __int64 v13; // r12
  const char *v14; // rax
  const char *v15; // r14
  int *v16; // rax
  int *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r14
  char *v21; // r9
  size_t v22; // rax
  __int64 v23; // r8
  int *v24; // r9
  size_t v25; // r10
  size_t v26; // r11
  __int64 v27; // rsi
  void *v28; // rdx
  unsigned __int64 tinfo_size; // r14
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdi
  const char *v40; // rax
  const char *v41; // r14
  int *v42; // rax
  int *v43; // r8
  void *v44; // rdi
  void *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // rdi
  void *v49; // rdx
  __int64 v50; // rax
  int v51; // r15d
  int v52; // r14d
  __m128i v53; // xmm4
  _QWORD *v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // eax
  _QWORD *v57; // rdx
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  __int64 v61; // r12
  unsigned __int64 v62; // r13
  __m128i v63; // xmm6
  bool v64; // cf
  __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  void *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  size_t v76; // r15
  void *v77; // rax
  size_t v78; // rdx
  signed int v81; // [rsp+18h] [rbp-160h]
  int v82; // [rsp+1Ch] [rbp-15Ch]
  size_t v83[2]; // [rsp+20h] [rbp-158h] BYREF
  _QWORD *v84; // [rsp+30h] [rbp-148h]
  void *src; // [rsp+38h] [rbp-140h]
  int *v86; // [rsp+40h] [rbp-138h]
  __int64 v87; // [rsp+48h] [rbp-130h]
  size_t v88; // [rsp+50h] [rbp-128h]
  size_t v89; // [rsp+58h] [rbp-120h]
  __int64 *v90; // [rsp+68h] [rbp-110h] BYREF
  __int64 v91; // [rsp+70h] [rbp-108h] BYREF
  __m128i v92; // [rsp+78h] [rbp-100h]
  void *v93; // [rsp+88h] [rbp-F0h]
  size_t n[2]; // [rsp+90h] [rbp-E8h]
  __int64 v95; // [rsp+A0h] [rbp-D8h] BYREF
  void *v96; // [rsp+A8h] [rbp-D0h]
  __int128 v97; // [rsp+B0h] [rbp-C8h]
  __int64 v98; // [rsp+C0h] [rbp-B8h]
  __int64 v99; // [rsp+C8h] [rbp-B0h]
  char *s; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v101; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v102; // [rsp+138h] [rbp-40h]

  v102 = __readfsqword(0x28u);
  v9 = unpack_dd();
  v81 = v9;
  if ( v9 > 111 )
  {
    v60 = unpack_dd();
    *(_DWORD *)(a2 + 48) = 0;
    v82 = v60;
    if ( v81 > 115 )
    {
      *(_DWORD *)(a2 + 48) = v60;
      v82 = unpack_dd();
      LODWORD(v83[0]) = unpack_dd();
      *(_QWORD *)(a2 + 40) = (unsigned int)unpack_dd();
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || (v10 = v83[0], SLODWORD(v83[0]) <= 0) )
      {
LABEL_31:
        if ( v81 <= 116 )
          return v102 - __readfsqword(0x28u);
        goto LABEL_44;
      }
    }
    else if ( v81 <= 113 )
    {
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        return v102 - __readfsqword(0x28u);
      v82 = 448;
      v10 = v60;
      if ( v60 <= 0 )
        return v102 - __readfsqword(0x28u);
    }
    else
    {
      v10 = unpack_dd();
      if ( v81 == 114 )
      {
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || v10 <= 0 )
          return v102 - __readfsqword(0x28u);
      }
      else
      {
        LODWORD(v83[0]) = v10;
        *(_QWORD *)(a2 + 40) = (unsigned int)unpack_dd();
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
          return v102 - __readfsqword(0x28u);
        v10 = v83[0];
        if ( SLODWORD(v83[0]) <= 0 )
          return v102 - __readfsqword(0x28u);
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 0;
    if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
      return v102 - __readfsqword(0x28u);
    v82 = 448;
    v10 = v9;
    if ( v9 <= 0 )
      return v102 - __readfsqword(0x28u);
  }
  LODWORD(v84) = v10;
  v11 = 0;
  *(__m128i *)v83 = _mm_load_si128((const __m128i *)&xmmword_424800);
  while ( 1 )
  {
    v30 = *(_QWORD *)(a2 + 8);
    v31 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v30 + 1) )
    {
      v32 = qvector_reserve(a2, v31, v30 + 1, 96);
      v30 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v32;
      v31 = v32;
    }
    si128 = _mm_load_si128((const __m128i *)v83);
    v13 = v31 + 96 * v30;
    *(_DWORD *)v13 = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 80) = -1;
    *(_DWORD *)(v13 + 88) = 0;
    *(__m128i *)(v13 + 8) = si128;
    *(_OWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 64) = 0;
    ++*(_QWORD *)(a2 + 8);
    if ( !(unsigned __int8)sub_2B4F40(a1, v13, a3, v81, v82, a4, a6) )
      break;
    v14 = sub_332380((const char **)a3, a3->m128i_u64[1]);
    v15 = v14;
    if ( v14 && (v16 = (int *)strlen(v14), (v17 = v16) != nullptr) )
    {
      v44 = *(void **)(v13 + 24);
      v45 = (char *)v16 + 1;
      if ( *(_QWORD *)(v13 + 40) < (unsigned __int64)v16 + 1 )
      {
        v86 = v16;
        src = (char *)v16 + 1;
        v50 = qvector_reserve(v13 + 24, (__int64)v44, (__int64)v45, 1);
        v17 = v86;
        v45 = src;
        *(_QWORD *)(v13 + 24) = v50;
        v44 = (void *)v50;
      }
      *(_QWORD *)(v13 + 32) = v45;
      src = v17;
      memmove(v44, v15, (size_t)v17);
      *((_BYTE *)src + *(_QWORD *)(v13 + 24)) = 0;
    }
    else
    {
      *(_QWORD *)(v13 + 32) = 0;
    }
    s = (char *)sub_332380((const char **)a3, a3->m128i_u64[1]);
    if ( a5 )
    {
      v18 = a5[1];
      v19 = *a5;
      if ( a5[2] < (unsigned __int64)(v18 + 1) )
      {
        v46 = qvector_reserve((__int64)a5, v19, v18 + 1, 24);
        v18 = a5[1];
        *a5 = v46;
        v19 = v46;
      }
      v20 = v19 + 24 * v18;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      v21 = s;
      ++a5[1];
      if ( v21 )
      {
        src = v21;
        v22 = strlen(v21);
        v23 = *(_QWORD *)(v20 + 8);
        v24 = (int *)src;
        v25 = v22;
        v26 = v22;
        if ( v23 )
        {
          --v23;
          v26 = v22 + v23;
        }
        v27 = *(_QWORD *)v20;
        v28 = (void *)(v26 + 1);
        if ( *(_QWORD *)(v20 + 16) < v26 + 1 )
        {
          v89 = v22;
          v88 = v26;
          v87 = v23;
          v86 = (int *)src;
          src = (void *)(v26 + 1);
          v47 = qvector_reserve(v20, v27, (__int64)v28, 1);
          v25 = v89;
          v26 = v88;
          v23 = v87;
          v24 = v86;
          *(_QWORD *)v20 = v47;
          v27 = v47;
          v28 = src;
        }
        *(_QWORD *)(v20 + 8) = v28;
        *(_BYTE *)(v27 + v26) = 0;
        memmove((void *)(v23 + *(_QWORD *)v20), v24, v25);
      }
    }
    deserialize_tinfo();
    if ( v81 > 111 )
    {
      v40 = sub_332380((const char **)a3, a3->m128i_u64[1]);
      v41 = v40;
      if ( v40 && (v42 = (int *)strlen(v40), (v43 = v42) != nullptr) )
      {
        v48 = *(void **)(v13 + 56);
        v49 = (char *)v42 + 1;
        if ( *(_QWORD *)(v13 + 72) < (unsigned __int64)v42 + 1 )
        {
          v86 = v42;
          src = (char *)v42 + 1;
          v58 = qvector_reserve(v13 + 56, (__int64)v48, (__int64)v49, 1);
          v43 = v86;
          v49 = src;
          *(_QWORD *)(v13 + 56) = v58;
          v48 = (void *)v58;
        }
        *(_QWORD *)(v13 + 64) = v49;
        src = v43;
        memmove(v48, v41, (size_t)v43);
        *((_BYTE *)src + *(_QWORD *)(v13 + 56)) = 0;
      }
      else
      {
        *(_QWORD *)(v13 + 64) = 0;
      }
      if ( v81 > 118 )
        *(_DWORD *)(v13 + 88) = unpack_dd();
    }
    tinfo_size = get_tinfo_size();
    if ( tinfo_size - 1 > 0xFFFFFFFFFFFFFFFDLL || sub_330820((_DWORD *)v13, *(_QWORD **)(a1 + 112), tinfo_size) )
      goto LABEL_20;
    sub_6D0A0(
      (__int64)"%a: lvar locator cannot be imported (illegal size %zu), skipping...\n",
      *(double *)a6.m128i_i64,
      a4);
    v33 = *(_QWORD *)(a2 + 8);
    if ( v33 )
    {
      v68 = v33 - 1;
      *(_QWORD *)(a2 + 8) = v68;
      sub_2B9980((_QWORD *)(*(_QWORD *)a2 + 96 * v68));
    }
    if ( a5
      && (v34 = a5[1]) != 0
      && (v35 = v34 - 1, v36 = *a5, a5[1] = v35, v37 = (__int64 *)(v36 + 24 * v35), (v38 = *v37) != 0) )
    {
      v37[1] = 0;
      ++v11;
      qfree(v38);
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        goto LABEL_31;
    }
    else
    {
LABEL_20:
      ++v11;
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        goto LABEL_31;
    }
    if ( v11 >= (int)v84 )
      goto LABEL_31;
  }
  v61 = *(_QWORD *)(a2 + 8);
  a6 = 0;
  v62 = *(_QWORD *)a2;
  v63 = _mm_load_si128((const __m128i *)v83);
  v99 = 0;
  v64 = v61 != 0;
  v65 = v61 - 1;
  LODWORD(v91) = 0;
  v66 = v64;
  v93 = nullptr;
  v95 = 0;
  v96 = nullptr;
  v98 = -1;
  v92 = v63;
  *(_OWORD *)n = 0;
  v97 = 0;
  if ( v64 )
  {
    sub_2B9980((_QWORD *)(v62 + 96 * v65));
    *(_QWORD *)(a2 + 8) = v65;
  }
  else
  {
    v67 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&v91 < v62 || (unsigned __int64)&v91 >= v62 + 96 * v67 )
    {
      if ( v67 == -1
        || (v69 = qvector_reserve(a2, v62, -1, 96), v66 = *(_QWORD *)(a2 + 8), *(_QWORD *)a2 = v69, v62 = v69, v66 != -1) )
      {
        while ( 1 )
        {
          v72 = 96 * v66 + v62;
          *(_DWORD *)v72 = 0;
          copy_argloc();
          v75 = v92.m128i_i64[1];
          *(_QWORD *)(v72 + 24) = 0;
          *(_OWORD *)(v72 + 32) = 0;
          *(_QWORD *)(v72 + 16) = v75;
          v76 = n[0];
          if ( n[0] )
          {
            v70 = (void *)qalloc_or_throw(n[0], (__int64)&v91, v73, v74);
            *(_QWORD *)(v72 + 24) = v70;
            *(_QWORD *)(v72 + 40) = v76;
            memcpy(v70, v93, v76);
            *(_QWORD *)(v72 + 32) = v76;
          }
          *(_QWORD *)(v72 + 48) = 0;
          copy_tinfo_t();
          *(_QWORD *)(v72 + 56) = 0;
          *(_OWORD *)(v72 + 64) = 0;
          if ( (_QWORD)v97 )
          {
            v83[0] = v97;
            v77 = (void *)qalloc_or_throw(v97, (__int64)&v95, v97, v71);
            v78 = v83[0];
            *(_QWORD *)(v72 + 56) = v77;
            *(_QWORD *)(v72 + 72) = v78;
            memcpy(v77, v96, v78);
            *(_QWORD *)(v72 + 64) = v83[0];
          }
          ++v66;
          *(_QWORD *)(v72 + 80) = v98;
          *(_DWORD *)(v72 + 88) = v99;
          if ( v66 == -1 )
            break;
          v62 = *(_QWORD *)a2;
        }
      }
      *(_QWORD *)(a2 + 8) = -1;
    }
    else
    {
      sub_2BD1D0((__int64)&s, (__int64)&v91);
      sub_2C57F0((__int64 *)a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&s);
      sub_2B9980(&s);
    }
  }
  sub_2B9980(&v91);
  if ( v81 > 116 )
  {
LABEL_44:
    v51 = unpack_dd();
    if ( a3->m128i_i64[0] < (unsigned __int64)a3->m128i_i64[1] && v51 > 0 )
    {
      v52 = 0;
      *(__m128i *)v83 = _mm_load_si128((const __m128i *)&xmmword_424800);
      while ( 1 )
      {
        v53 = _mm_load_si128((const __m128i *)v83);
        v91 = 0;
        v92 = v53;
        s = nullptr;
        v101 = v53;
        if ( !(unsigned __int8)sub_2B4F40(a1, (unsigned __int64)&v91, a3, v81, v82, a4, a6)
          || !(unsigned __int8)sub_2B4F40(a1, (unsigned __int64)&s, a3, v81, v82, a4, a6) )
        {
          break;
        }
        if ( (unsigned int)sub_3307E0((int *)&v91, (int *)&s) )
        {
          v54 = *(_QWORD **)(a2 + 24);
          if ( !v54 )
            goto LABEL_47;
          v55 = *v54 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v55 )
          {
            if ( (*(_BYTE *)(*v54 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_47;
            do
            {
              src = v54;
              v84 = (_QWORD *)v55;
              v86 = (int *)(v55 + 24);
              v56 = sub_3307E0((int *)&s, (int *)(v55 + 24));
              v54 = src;
              if ( v56 >= 0 )
              {
                src = v84;
                v84 = v54;
                v59 = sub_3307E0(v86, (int *)&s);
                v54 = v84;
                v57 = src;
                if ( v59 >= 0 )
                  goto LABEL_60;
                v55 = *((_QWORD *)src + 2);
              }
              else
              {
                v55 = v84[1];
              }
            }
            while ( (*(_BYTE *)v55 & 2) == 0 );
            v57 = *(_QWORD **)(a2 + 24);
LABEL_60:
            if ( v54 == v57 )
            {
LABEL_47:
              v90 = &v91;
              v84 = (_QWORD *)(sub_219540((__m128i *)(a2 + 24), (int *)&v91, (__int64 *)&v90) + 24);
              copy_argloc();
              v84[5] = v101.m128i_i64[1];
            }
          }
        }
        ++v52;
        cleanup_argloc();
        cleanup_argloc();
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || v51 <= v52 )
          return v102 - __readfsqword(0x28u);
      }
      cleanup_argloc();
      cleanup_argloc();
    }
  }
  return v102 - __readfsqword(0x28u);
}

