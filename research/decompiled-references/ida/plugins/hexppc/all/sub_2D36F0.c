unsigned __int64 __fastcall sub_2D36F0(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 *a5, __m128i a6)
{
  int v9; // eax
  int v10; // ecx
  int v11; // r15d
  __m128i si128; // xmm2
  __int64 v13; // r12
  const char *v14; // rax
  const char *v15; // r14
  size_t v16; // rax
  void *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r14
  char *v21; // r9
  size_t v22; // rax
  __int64 v23; // r8
  void *v24; // r9
  size_t v25; // r10
  size_t v26; // r11
  __int64 v27; // rsi
  void *v28; // rdx
  __int64 tinfo_size; // r14
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  const char *v39; // rax
  const char *v40; // r14
  size_t v41; // rax
  void *v42; // r8
  void *v43; // rdi
  void *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  void *v47; // rdi
  void *v48; // rdx
  __int64 v49; // rax
  int v50; // r15d
  int v51; // r14d
  __m128i v52; // xmm4
  _QWORD *v53; // rcx
  _BYTE *v54; // rdx
  int v55; // eax
  _QWORD *v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // r12
  unsigned __int64 v61; // r13
  __m128i v62; // xmm6
  bool v63; // cf
  __int64 v64; // r12
  __int64 v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  void *v69; // rax
  __int64 v70; // r13
  __int64 v71; // rax
  size_t v72; // r15
  void *v73; // rax
  size_t v74; // rdx
  int v77; // [rsp+18h] [rbp-160h]
  int v78; // [rsp+1Ch] [rbp-15Ch]
  size_t v79[2]; // [rsp+20h] [rbp-158h] BYREF
  _QWORD *v80; // [rsp+30h] [rbp-148h]
  void *src; // [rsp+38h] [rbp-140h]
  void *v82; // [rsp+40h] [rbp-138h]
  __int64 v83; // [rsp+48h] [rbp-130h]
  size_t v84; // [rsp+50h] [rbp-128h]
  size_t v85; // [rsp+58h] [rbp-120h]
  __int64 *v86; // [rsp+68h] [rbp-110h] BYREF
  __int64 v87; // [rsp+70h] [rbp-108h] BYREF
  __m128i v88; // [rsp+78h] [rbp-100h]
  void *v89; // [rsp+88h] [rbp-F0h]
  size_t n[2]; // [rsp+90h] [rbp-E8h]
  __int64 v91; // [rsp+A0h] [rbp-D8h]
  void *v92; // [rsp+A8h] [rbp-D0h]
  __int128 v93; // [rsp+B0h] [rbp-C8h]
  __int64 v94; // [rsp+C0h] [rbp-B8h]
  __int64 v95; // [rsp+C8h] [rbp-B0h]
  char *s; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v97; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v98; // [rsp+138h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  v9 = unpack_dd();
  v77 = v9;
  if ( v9 > 111 )
  {
    v59 = unpack_dd();
    *(_DWORD *)(a2 + 48) = 0;
    v78 = v59;
    if ( v77 > 115 )
    {
      *(_DWORD *)(a2 + 48) = v59;
      v78 = unpack_dd();
      LODWORD(v79[0]) = unpack_dd();
      *(_QWORD *)(a2 + 40) = (unsigned int)unpack_dd();
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || (v10 = v79[0], SLODWORD(v79[0]) <= 0) )
      {
LABEL_31:
        if ( v77 <= 116 )
          return v98 - __readfsqword(0x28u);
        goto LABEL_44;
      }
    }
    else if ( v77 <= 113 )
    {
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        return v98 - __readfsqword(0x28u);
      v78 = 448;
      v10 = v59;
      if ( v59 <= 0 )
        return v98 - __readfsqword(0x28u);
    }
    else
    {
      v10 = unpack_dd();
      if ( v77 == 114 )
      {
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || v10 <= 0 )
          return v98 - __readfsqword(0x28u);
      }
      else
      {
        LODWORD(v79[0]) = v10;
        *(_QWORD *)(a2 + 40) = (unsigned int)unpack_dd();
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
          return v98 - __readfsqword(0x28u);
        v10 = v79[0];
        if ( SLODWORD(v79[0]) <= 0 )
          return v98 - __readfsqword(0x28u);
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 0;
    if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
      return v98 - __readfsqword(0x28u);
    v78 = 448;
    v10 = v9;
    if ( v9 <= 0 )
      return v98 - __readfsqword(0x28u);
  }
  LODWORD(v80) = v10;
  v11 = 0;
  *(__m128i *)v79 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  while ( 1 )
  {
    v30 = *(_QWORD *)(a2 + 8);
    v31 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v30 + 1) )
    {
      v32 = qvector_reserve();
      v30 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v32;
      v31 = v32;
    }
    si128 = _mm_load_si128((const __m128i *)v79);
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
    if ( !(unsigned __int8)sub_2B12C0(a1, v13, a3, v77, v78, a4, a6) )
      break;
    v14 = (const char *)sub_32DF40(a3, a3->m128i_i64[1]);
    v15 = v14;
    if ( v14 && (v16 = strlen(v14), (v17 = (void *)v16) != nullptr) )
    {
      v43 = *(void **)(v13 + 24);
      v44 = (void *)(v16 + 1);
      if ( *(_QWORD *)(v13 + 40) < v16 + 1 )
      {
        v82 = (void *)v16;
        src = (void *)(v16 + 1);
        v49 = qvector_reserve();
        v17 = v82;
        v44 = src;
        *(_QWORD *)(v13 + 24) = v49;
        v43 = (void *)v49;
      }
      *(_QWORD *)(v13 + 32) = v44;
      src = v17;
      memmove(v43, v15, (size_t)v17);
      *((_BYTE *)src + *(_QWORD *)(v13 + 24)) = 0;
    }
    else
    {
      *(_QWORD *)(v13 + 32) = 0;
    }
    s = (char *)sub_32DF40(a3, a3->m128i_i64[1]);
    if ( a5 )
    {
      v18 = a5[1];
      v19 = *a5;
      if ( a5[2] < (unsigned __int64)(v18 + 1) )
      {
        v45 = qvector_reserve();
        v18 = a5[1];
        *a5 = v45;
        v19 = v45;
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
        v24 = src;
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
          v85 = v22;
          v84 = v26;
          v83 = v23;
          v82 = src;
          src = (void *)(v26 + 1);
          v46 = qvector_reserve();
          v25 = v85;
          v26 = v84;
          v23 = v83;
          v24 = v82;
          *(_QWORD *)v20 = v46;
          v27 = v46;
          v28 = src;
        }
        *(_QWORD *)(v20 + 8) = v28;
        *(_BYTE *)(v27 + v26) = 0;
        memmove((void *)(v23 + *(_QWORD *)v20), v24, v25);
      }
    }
    deserialize_tinfo();
    if ( v77 > 111 )
    {
      v39 = (const char *)sub_32DF40(a3, a3->m128i_i64[1]);
      v40 = v39;
      if ( v39 && (v41 = strlen(v39), (v42 = (void *)v41) != nullptr) )
      {
        v47 = *(void **)(v13 + 56);
        v48 = (void *)(v41 + 1);
        if ( *(_QWORD *)(v13 + 72) < v41 + 1 )
        {
          v82 = (void *)v41;
          src = (void *)(v41 + 1);
          v57 = qvector_reserve();
          v42 = v82;
          v48 = src;
          *(_QWORD *)(v13 + 56) = v57;
          v47 = (void *)v57;
        }
        *(_QWORD *)(v13 + 64) = v48;
        src = v42;
        memmove(v47, v40, (size_t)v42);
        *((_BYTE *)src + *(_QWORD *)(v13 + 56)) = 0;
      }
      else
      {
        *(_QWORD *)(v13 + 64) = 0;
      }
      if ( v77 > 118 )
        *(_DWORD *)(v13 + 88) = unpack_dd();
    }
    tinfo_size = get_tinfo_size();
    if ( (unsigned __int64)(tinfo_size - 1) > 0xFFFFFFFFFFFFFFFDLL
      || (unsigned __int8)sub_32C3D0(v13, *(_QWORD *)(a1 + 112), tinfo_size) )
    {
      goto LABEL_20;
    }
    sub_69660(
      (__int64)"%a: lvar locator cannot be imported (illegal size %zu), skipping...\n",
      *(double *)a6.m128i_i64,
      a4);
    v33 = *(_QWORD *)(a2 + 8);
    if ( v33 )
    {
      v67 = v33 - 1;
      *(_QWORD *)(a2 + 8) = v67;
      sub_2B5D00((_QWORD *)(*(_QWORD *)a2 + 96 * v67));
    }
    if ( a5 && (v34 = a5[1]) != 0 && (v35 = v34 - 1, v36 = *a5, a5[1] = v35, v37 = (_QWORD *)(v36 + 24 * v35), *v37) )
    {
      v37[1] = 0;
      ++v11;
      qfree();
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
    if ( v11 >= (int)v80 )
      goto LABEL_31;
  }
  v60 = *(_QWORD *)(a2 + 8);
  a6 = 0;
  v61 = *(_QWORD *)a2;
  v62 = _mm_load_si128((const __m128i *)v79);
  v95 = 0;
  v63 = v60 != 0;
  v64 = v60 - 1;
  LODWORD(v87) = 0;
  v65 = v63;
  v89 = nullptr;
  v91 = 0;
  v92 = nullptr;
  v94 = -1;
  v88 = v62;
  *(_OWORD *)n = 0;
  v93 = 0;
  if ( v63 )
  {
    sub_2B5D00((_QWORD *)(v61 + 96 * v64));
    *(_QWORD *)(a2 + 8) = v64;
  }
  else
  {
    v66 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&v87 < v61 || (unsigned __int64)&v87 >= v61 + 96 * v66 )
    {
      if ( v66 == -1 || (v68 = qvector_reserve(), v65 = *(_QWORD *)(a2 + 8), *(_QWORD *)a2 = v68, v61 = v68, v65 != -1) )
      {
        while ( 1 )
        {
          v70 = 96 * v65 + v61;
          *(_DWORD *)v70 = 0;
          copy_argloc();
          v71 = v88.m128i_i64[1];
          *(_QWORD *)(v70 + 24) = 0;
          *(_OWORD *)(v70 + 32) = 0;
          *(_QWORD *)(v70 + 16) = v71;
          v72 = n[0];
          if ( n[0] )
          {
            v69 = (void *)qalloc_or_throw();
            *(_QWORD *)(v70 + 24) = v69;
            *(_QWORD *)(v70 + 40) = v72;
            memcpy(v69, v89, v72);
            *(_QWORD *)(v70 + 32) = v72;
          }
          *(_QWORD *)(v70 + 48) = 0;
          copy_tinfo_t();
          *(_QWORD *)(v70 + 56) = 0;
          *(_OWORD *)(v70 + 64) = 0;
          if ( (_QWORD)v93 )
          {
            v79[0] = v93;
            v73 = (void *)qalloc_or_throw();
            v74 = v79[0];
            *(_QWORD *)(v70 + 56) = v73;
            *(_QWORD *)(v70 + 72) = v74;
            memcpy(v73, v92, v74);
            *(_QWORD *)(v70 + 64) = v79[0];
          }
          ++v65;
          *(_QWORD *)(v70 + 80) = v94;
          *(_DWORD *)(v70 + 88) = v95;
          if ( v65 == -1 )
            break;
          v61 = *(_QWORD *)a2;
        }
      }
      *(_QWORD *)(a2 + 8) = -1;
    }
    else
    {
      sub_2B9550((__int64)&s, (__int64)&v87);
      sub_2C1B70((__int64 *)a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&s);
      sub_2B5D00(&s);
    }
  }
  sub_2B5D00(&v87);
  if ( v77 > 116 )
  {
LABEL_44:
    v50 = unpack_dd();
    if ( a3->m128i_i64[0] < (unsigned __int64)a3->m128i_i64[1] && v50 > 0 )
    {
      v51 = 0;
      *(__m128i *)v79 = _mm_load_si128((const __m128i *)&xmmword_411C00);
      while ( 1 )
      {
        v52 = _mm_load_si128((const __m128i *)v79);
        v87 = 0;
        v88 = v52;
        s = nullptr;
        v97 = v52;
        if ( !(unsigned __int8)sub_2B12C0(a1, (__int64)&v87, a3, v77, v78, a4, a6)
          || !(unsigned __int8)sub_2B12C0(a1, (__int64)&s, a3, v77, v78, a4, a6) )
        {
          break;
        }
        if ( (unsigned int)sub_32C390(&v87, &s) )
        {
          v53 = *(_QWORD **)(a2 + 24);
          if ( !v53 )
            goto LABEL_47;
          v54 = (_BYTE *)(*v53 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v54 )
          {
            if ( (*(_BYTE *)(*v53 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_47;
            do
            {
              src = v53;
              v80 = v54;
              v82 = v54 + 24;
              v55 = sub_32C390(&s, v54 + 24);
              v53 = src;
              if ( v55 >= 0 )
              {
                src = v80;
                v80 = v53;
                v58 = sub_32C390(v82, &s);
                v53 = v80;
                v56 = src;
                if ( v58 >= 0 )
                  goto LABEL_60;
                v54 = *((_BYTE **)src + 2);
              }
              else
              {
                v54 = (_BYTE *)v80[1];
              }
            }
            while ( (*v54 & 2) == 0 );
            v56 = *(_QWORD **)(a2 + 24);
LABEL_60:
            if ( v53 == v56 )
            {
LABEL_47:
              v86 = &v87;
              v80 = (_QWORD *)(sub_2158C0((__m128i *)(a2 + 24), (__int64)&v87, (__int64 *)&v86) + 24);
              copy_argloc();
              v80[5] = v97.m128i_i64[1];
            }
          }
        }
        ++v51;
        cleanup_argloc();
        cleanup_argloc();
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || v50 <= v51 )
          return v98 - __readfsqword(0x28u);
      }
      cleanup_argloc();
      cleanup_argloc();
    }
  }
  return v98 - __readfsqword(0x28u);
}

