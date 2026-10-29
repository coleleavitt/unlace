unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,false>(
        __int64 a1,
        char a2)
{
  __int64 v2; // rax
  char v3; // si
  char v4; // al
  bool v5; // zf
  char *v6; // rbx
  char *v7; // r14
  signed __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  char *v10; // rbp
  char v11; // cl
  char v12; // dl
  char *v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  char *v16; // rdx
  char *v17; // rax
  char *v18; // rax
  size_t v19; // rbx
  char *v20; // rsi
  __int64 i; // rax
  char *v22; // rcx
  char *v23; // rax
  char v24; // bp
  char v25; // r12
  size_t v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rax
  __m128i v31; // xmm0
  int v32; // edx
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 inserted; // rax
  __int64 v39; // r13
  unsigned __int8 v40; // r14
  __int64 v41; // r12
  size_t *v42; // r8
  const char *v43; // rdi
  const char *v44; // rsi
  int v45; // eax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __m128 *v48; // rcx
  _BYTE *v49; // rsi
  size_t v50; // rax
  size_t v51; // rsi
  size_t v52; // rdx
  size_t *v53; // rcx
  __int64 v54; // rax
  size_t *v55; // rbp
  size_t v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r12
  __int64 v59; // r15
  const void *v60; // rdi
  int v61; // eax
  const void *v62; // rdi
  int v63; // eax
  const void *v64; // rdi
  int v65; // eax
  unsigned __int64 v66; // rdi
  char *v67; // rsi
  char *v68; // r8
  unsigned int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // rsi
  char *v72; // rdx
  char v73; // di
  char v74; // cl
  char *v75; // rsi
  char *v76; // [rsp+0h] [rbp-1B0h]
  char *v77; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+10h] [rbp-1A0h]
  __int64 v79; // [rsp+18h] [rbp-198h]
  size_t *v80; // [rsp+20h] [rbp-190h]
  size_t *v81; // [rsp+28h] [rbp-188h]
  size_t v82; // [rsp+30h] [rbp-180h]
  void **v83; // [rsp+38h] [rbp-178h]
  __int64 v84; // [rsp+40h] [rbp-170h]
  char v85; // [rsp+56h] [rbp-15Ah]
  char v86; // [rsp+57h] [rbp-159h]
  __int64 v87; // [rsp+58h] [rbp-158h] BYREF
  __m128i v88; // [rsp+60h] [rbp-150h]
  void *s2; // [rsp+78h] [rbp-138h]
  __m128 n; // [rsp+80h] [rbp-130h] BYREF
  void *v91; // [rsp+98h] [rbp-118h]
  __int64 v92; // [rsp+A0h] [rbp-110h]
  _QWORD v93[2]; // [rsp+A8h] [rbp-108h] BYREF
  void *v94[2]; // [rsp+B8h] [rbp-F8h] BYREF
  __m128 v95; // [rsp+C8h] [rbp-E8h] BYREF
  void *src[2]; // [rsp+D8h] [rbp-D8h] BYREF
  __m128i v97; // [rsp+E8h] [rbp-C8h] BYREF
  __m128i v98; // [rsp+F8h] [rbp-B8h] BYREF
  __m128i v99; // [rsp+108h] [rbp-A8h] BYREF
  __m128i v100; // [rsp+118h] [rbp-98h] BYREF
  __m128i v101; // [rsp+128h] [rbp-88h] BYREF
  __int64 v102; // [rsp+138h] [rbp-78h]
  __int64 v103; // [rsp+140h] [rbp-70h]
  char v104; // [rsp+148h] [rbp-68h]
  __m128i v105; // [rsp+150h] [rbp-60h] BYREF
  __m128i v106; // [rsp+160h] [rbp-50h] BYREF
  unsigned __int64 v107; // [rsp+170h] [rbp-40h]

  v84 = a1;
  v107 = __readfsqword(0x28u);
  *(_OWORD *)src = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v2 = *(_QWORD *)(a1 + 384);
  v104 = a2;
  v102 = 0;
  v103 = v2;
  v83 = src;
  v105 = 0;
  v106 = 0;
  if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
  {
    v3 = **(_BYTE **)(a1 + 272);
    v4 = 1;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    if ( *(_DWORD *)(v84 + 152) == 28 )
    {
      std::string::_M_assign();
      v83 = src;
      std::__detail::_Scanner<char>::_M_advance();
      v3 = 45;
      v4 = 1;
    }
  }
  v83 = src;
  do
  {
    v86 = v3;
    v85 = v4;
    v5 = (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>() == 0;
    v4 = v85;
  }
  while ( !v5 );
  if ( v85 == 1 )
    std::vector<char>::emplace_back<char>(v83, v3);
  v6 = (char *)src[1];
  v76 = (char *)src[0];
  v7 = (char *)src[0];
  if ( src[1] != src[0] )
  {
    v8 = (char *)src[1] - (char *)src[0];
    _BitScanReverse64(&v9, (char *)src[1] - (char *)src[0]);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,__gnu_cxx::__ops::_Iter_less_iter>(
      (__int64)src[0],
      (char *)src[1],
      2LL * (int)v9);
    if ( v8 <= 16 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v76,
        v6);
    }
    else
    {
      v10 = v7 + 16;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v7,
        v7 + 16);
      if ( v6 != v7 + 16 )
      {
        v11 = *v10;
        v12 = v7[15];
        if ( *v10 >= v12 )
          goto LABEL_15;
        while ( 1 )
        {
          v13 = v10 - 1;
          do
          {
            v13[1] = v12;
            v14 = v13;
            v12 = *--v13;
          }
          while ( v11 < v12 );
          ++v10;
          *v14 = v11;
          if ( v6 == v10 )
            break;
          while ( 1 )
          {
            v11 = *v10;
            v12 = *(v10 - 1);
            if ( *v10 < v12 )
              break;
LABEL_15:
            v15 = v10++;
            *v15 = v11;
            if ( v6 == v10 )
              goto LABEL_20;
          }
        }
      }
    }
LABEL_20:
    v16 = v76;
    while ( 1 )
    {
      v17 = v16++;
      if ( v6 == v16 )
        break;
      if ( *(v16 - 1) == v17[1] )
      {
        if ( v6 != v17 )
        {
          v72 = v17 + 2;
          if ( v6 == v17 + 2 )
          {
LABEL_126:
            v75 = v17;
          }
          else
          {
            v73 = *v17;
            while ( 1 )
            {
              v74 = *v72;
              if ( *v72 != v73 )
                break;
LABEL_125:
              if ( v6 == ++v72 )
                goto LABEL_126;
            }
            while ( 1 )
            {
              ++v72;
              v17[1] = v74;
              v75 = v17 + 1;
              if ( v72 == v6 )
                break;
              v73 = v74;
              v74 = *v72;
              ++v17;
              if ( *v72 == v73 )
                goto LABEL_125;
            }
          }
          v18 = v75 + 1;
          v77 = v75 + 1;
          if ( v6 != v75 + 1 )
          {
            src[1] = v75 + 1;
            goto LABEL_24;
          }
        }
        break;
      }
    }
  }
  v77 = v6;
  v18 = v6;
LABEL_24:
  v19 = 0;
  v78 = v18 - v76;
  do
  {
    while ( 1 )
    {
      v20 = v76;
      for ( i = v78; i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          v22 = &v20[i >> 1];
          if ( *v22 >= (char)v19 )
            break;
          v20 = v22 + 1;
          i = i - (i >> 1) - 1;
          if ( i <= 0 )
            goto LABEL_29;
        }
      }
LABEL_29:
      if ( v20 != v77 && *v20 <= (char)v19 )
        goto LABEL_36;
      v23 = (char *)v99.m128i_i64[0];
      if ( v99.m128i_i64[0] != v99.m128i_i64[1] )
      {
        while ( *v23 > (char)v19 || v23[1] < (char)v19 )
        {
          v23 += 2;
          if ( (char *)v99.m128i_i64[1] == v23 )
            goto LABEL_45;
        }
        goto LABEL_36;
      }
LABEL_45:
      v39 = v103;
      v40 = v19;
      v24 = std::regex_traits<char>::isctype(v103, v19, v102, SBYTE2(v102));
      if ( v24 )
        goto LABEL_36;
      v41 = v97.m128i_i64[1];
      v79 = v98.m128i_i64[0];
      if ( v98.m128i_i64[0] != v97.m128i_i64[1] )
      {
        n.m128_u64[0] = 0;
        v80 = &n.m128_u64[1];
        s2 = &n.m128_u16[4];
        n.m128_i8[8] = 0;
        v42 = *(size_t **)(*(_QWORD *)(*(_QWORD *)v39 + 8LL)
                         + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
        if ( !v42 )
          std::__throw_bad_cast();
        v43 = *(const char **)(*(_QWORD *)(*v42 - 8) + 8LL);
        v44 = (const char *)`typeinfo for'std::collate<char>[1];
        if ( v43 != v44 )
        {
          if ( *v43 == 42 || (v5 = *v44 == 42, v81 = v42, v45 = strcmp(v43, &v44[v5]), v42 = v81, v45) )
          {
LABEL_60:
            v52 = n.m128_u64[0];
            v53 = (size_t *)s2;
            v54 = ((unsigned __int8)((unsigned __int64)(v79 - v41 - 32) >> 5) + 1) & 3;
            if ( (((unsigned __int8)((unsigned __int64)(v79 - v41 - 32) >> 5) + 1) & 3) == 0 )
              goto LABEL_69;
            if ( v54 != 1 )
            {
              if ( v54 != 2 )
              {
                if ( n.m128_u64[0] == *(_QWORD *)(v41 + 8) )
                {
                  if ( !n.m128_u64[0] )
                    goto LABEL_86;
                  v64 = *(const void **)v41;
                  v82 = n.m128_u64[0];
                  v81 = (size_t *)s2;
                  v65 = memcmp(v64, s2, n.m128_u64[0]);
                  v53 = (size_t *)s2;
                  v52 = v82;
                  if ( !v65 )
                    goto LABEL_86;
                }
                v41 += 32;
              }
              if ( v52 == *(_QWORD *)(v41 + 8) )
              {
                if ( !v52 )
                  goto LABEL_86;
                v62 = *(const void **)v41;
                v82 = v52;
                v81 = v53;
                v63 = memcmp(v62, v53, v52);
                v53 = v81;
                v52 = v82;
                if ( !v63 )
                  goto LABEL_86;
              }
              v41 += 32;
            }
            if ( v52 != *(_QWORD *)(v41 + 8)
              || v52
              && (v60 = *(const void **)v41, v82 = v52,
                                             v81 = v53,
                                             v61 = memcmp(v60, v53, v52),
                                             v53 = v81,
                                             v52 = v82,
                                             v61) )
            {
              v41 += 32;
              if ( v79 != v41 )
              {
LABEL_69:
                LOBYTE(v81) = v24;
                v55 = v53;
                v82 = v19;
                v56 = v52;
                while ( 1 )
                {
                  if ( v56 == *(_QWORD *)(v41 + 8) && (!v56 || !memcmp(*(const void **)v41, v55, v56)) )
                  {
LABEL_85:
                    v53 = v55;
                    v19 = v82;
                    v24 = (char)v81;
                    goto LABEL_86;
                  }
                  v57 = v41 + 32;
                  v41 = v57;
                  if ( v56 == *(_QWORD *)(v57 + 8) )
                  {
                    if ( !v56 || !memcmp(*(const void **)v57, v55, v56) )
                      goto LABEL_85;
                    v41 = v57 + 32;
                    if ( v56 != *(_QWORD *)(v57 + 40) )
                    {
LABEL_73:
                      v41 = v57 + 64;
                      if ( v56 != *(_QWORD *)(v57 + 72) )
                        goto LABEL_74;
LABEL_95:
                      if ( !v56 || !memcmp(*(const void **)(v57 + 64), v55, v56) )
                        goto LABEL_85;
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    v41 = v57 + 32;
                    if ( v56 != *(_QWORD *)(v57 + 40) )
                      goto LABEL_73;
                  }
                  if ( !v56 || !memcmp(*(const void **)(v57 + 32), v55, v56) )
                    goto LABEL_85;
                  v41 = v57 + 64;
                  if ( v56 == *(_QWORD *)(v57 + 72) )
                    goto LABEL_95;
LABEL_74:
                  v41 = v57 + 96;
                  if ( v79 == v57 + 96 )
                  {
                    v53 = v55;
                    v19 = v82;
                    v24 = (char)v81;
                    break;
                  }
                }
              }
LABEL_76:
              if ( v53 != v80 )
                operator delete(v53, n.m128_u64[1] + 1);
              goto LABEL_78;
            }
LABEL_86:
            if ( v79 != v41 )
            {
              if ( v53 != v80 )
                operator delete(v53, n.m128_u64[1] + 1);
LABEL_36:
              v24 = 1;
              goto LABEL_37;
            }
            goto LABEL_76;
          }
        }
        v82 = (size_t)v42;
        LOWORD(v81) = (unsigned __int8)v19;
        v46 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v39 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( !v46 )
          std::__throw_bad_cast();
        v92 = 1;
        v91 = v93;
        LOWORD(v93[0]) = (_WORD)v81;
        v47 = *v46;
        v81 = (_QWORD *)((char *)v93 + 1);
        (*(void (__fastcall **)(__int64 *, _QWORD *, char *))(v47 + 40))(v46, v93, (char *)v93 + 1);
        (*(void (__fastcall **)(void **, size_t, _QWORD *, char *))(*(_QWORD *)v82 + 24LL))(
          v94,
          v82,
          v93,
          (char *)v93 + 1);
        v48 = (__m128 *)s2;
        v49 = s2;
        if ( s2 == v80 )
        {
          if ( v94[0] != &v95 )
          {
            s2 = v94[0];
            n = _mm_loadh_ps((const double *)v95.m128_u64);
            goto LABEL_106;
          }
          v50 = (size_t)v94[1];
        }
        else
        {
          v50 = (size_t)v94[1];
          if ( v94[0] != &v95 )
          {
            v51 = n.m128_u64[1];
            s2 = v94[0];
            n = _mm_loadh_ps((const double *)v95.m128_u64);
            if ( v48 )
            {
              v94[0] = v48;
              v95.m128_u64[0] = v51;
LABEL_56:
              v48->m128_i8[0] = 0;
              if ( v94[0] != &v95 )
                operator delete(v94[0], v95.m128_u64[0] + 1);
              if ( v91 != v93 )
                operator delete(v91, v93[0] + 1LL);
              goto LABEL_60;
            }
LABEL_106:
            v94[0] = &v95;
            v48 = &v95;
            goto LABEL_56;
          }
        }
        if ( v50 )
        {
          if ( v50 == 1 )
          {
            *(_BYTE *)s2 = v95.m128_i8[0];
            v49 = s2;
            v50 = (size_t)v94[1];
            goto LABEL_118;
          }
          if ( (unsigned int)v50 >= 8 )
          {
            *(_QWORD *)s2 = v95.m128_u64[0];
            *(_QWORD *)&v49[(unsigned int)v50 - 8] = *(void **)((char *)&v94[1] + (unsigned int)v50);
            v66 = (unsigned __int64)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v67 = &v49[-v66];
            v68 = (char *)((char *)&v95 - v67);
            if ( (((_DWORD)v67 + (_DWORD)v50) & 0xFFFFFFF8) >= 8 )
            {
              v69 = ((_DWORD)v67 + v50) & 0xFFFFFFF8;
              v70 = 0;
              do
              {
                v71 = v70;
                v70 += 8;
                *(_QWORD *)(v66 + v71) = *(_QWORD *)&v68[v71];
              }
              while ( v70 < v69 );
            }
LABEL_117:
            v49 = s2;
            v50 = (size_t)v94[1];
            goto LABEL_118;
          }
          if ( (v50 & 4) != 0 )
          {
            *(_DWORD *)s2 = v95.m128_i32[0];
            *(_DWORD *)&v49[(unsigned int)v50 - 4] = *(_DWORD *)((char *)&v94[1] + (unsigned int)v50 + 4);
            v49 = s2;
            v50 = (size_t)v94[1];
            goto LABEL_118;
          }
          if ( (_DWORD)v50 )
          {
            *(_BYTE *)s2 = v95.m128_i8[0];
            if ( (v50 & 2) != 0 )
            {
              *(_WORD *)&v49[(unsigned int)v50 - 2] = *(_WORD *)((char *)&v94[1] + (unsigned int)v50 + 6);
              v49 = s2;
              v50 = (size_t)v94[1];
              goto LABEL_118;
            }
            goto LABEL_117;
          }
        }
LABEL_118:
        n.m128_u64[0] = v50;
        v49[v50] = 0;
        v48 = (__m128 *)v94[0];
        goto LABEL_56;
      }
LABEL_78:
      v58 = v101.m128i_i64[0];
      v59 = v100.m128i_i64[1];
      if ( v100.m128i_i64[1] != v101.m128i_i64[0] )
      {
        while ( std::regex_traits<char>::isctype(v39, v40, *(_WORD *)v59, *(_BYTE *)(v59 + 2)) )
        {
          v59 += 4;
          if ( v58 == v59 )
            goto LABEL_37;
        }
        goto LABEL_36;
      }
LABEL_37:
      v25 = v104;
      v26 = v19 >> 6;
      v27 = 1LL << v19;
      v28 = v105.m128i_i64[v19 >> 6];
      if ( v104 == v24 )
        break;
      ++v19;
      v105.m128i_i64[v26] = v27 | v28;
      if ( v19 == 256 )
        goto LABEL_39;
    }
    ++v19;
    v105.m128i_i64[v26] = v28 & ~v27;
  }
  while ( v19 != 256 );
LABEL_39:
  v29 = v84;
  v95.m128_u64[0] = 0;
  *(_OWORD *)v94 = 0;
  v30 = operator new(0x98u);
  *(__m128 *)v30 = _mm_loadh_ps((const double *)&v77);
  v31 = _mm_load_si128(&v97);
  v32 = v102;
  *(_BYTE *)(v30 + 112) = v25;
  *(__m128i *)(v30 + 16) = v31;
  v33 = _mm_load_si128(&v98);
  *(_DWORD *)(v30 + 96) = v32;
  v34 = v103;
  *(__m128i *)(v30 + 32) = v33;
  v35 = _mm_load_si128(&v99);
  *(_QWORD *)(v30 + 104) = v34;
  *(__m128i *)(v30 + 48) = v35;
  v36 = _mm_load_si128(&v100);
  v94[0] = (void *)v30;
  *(__m128i *)(v30 + 64) = v36;
  *(__m128i *)(v30 + 80) = _mm_load_si128(&v101);
  *(_OWORD *)src = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  *(__m128i *)(v30 + 120) = _mm_loadu_si128(&v105);
  *(__m128i *)(v30 + 136) = _mm_loadu_si128(&v106);
  v95 = _mm_loadh_ps((const double *)&std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>>::_M_invoke);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher();
  v87 = *(_QWORD *)(v29 + 256);
  v88 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    (_QWORD *)(v29 + 304),
    (const __m128i *)&v87);
  if ( v95.m128_u64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v95.m128_u64[0])(v94, v94, 3);
  return v107 - __readfsqword(0x28u);
}

