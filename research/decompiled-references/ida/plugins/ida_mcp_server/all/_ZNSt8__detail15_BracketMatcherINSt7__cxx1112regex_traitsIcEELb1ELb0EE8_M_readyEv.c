unsigned __int64 __fastcall std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_ready(__int64 a1)
{
  char *v1; // r12
  char *v2; // r13
  unsigned __int64 v4; // rdx
  char *v5; // rbp
  char v6; // cl
  char v7; // dl
  char *v8; // rax
  char *v9; // rsi
  char *v10; // rsi
  char *v11; // rdx
  char v12; // r8
  char v13; // cl
  char *v14; // rdi
  char *v15; // rax
  char *v16; // rdi
  unsigned __int64 i; // rbp
  __int64 v18; // r12
  __int64 v19; // rdi
  char v20; // si
  char *v21; // rax
  __int64 j; // rcx
  char *v23; // r8
  char *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  char v27; // al
  char v28; // r13
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v33; // r14
  __int64 v34; // r15
  const char *v35; // rdi
  const char *v36; // rsi
  __int64 *v37; // rdi
  __int64 v38; // rax
  double *v39; // rcx
  _BYTE *v40; // rdi
  size_t v41; // rax
  double v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r14
  size_t *v45; // r15
  size_t v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // r14
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned __int64 v58; // rsi
  char *v59; // rdi
  char *v60; // r8
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // rdi
  char *v64; // rsi
  char *v65; // rdx
  char v66; // [rsp+8h] [rbp-E0h]
  char v67; // [rsp+10h] [rbp-D8h]
  size_t v68; // [rsp+10h] [rbp-D8h]
  size_t v69; // [rsp+10h] [rbp-D8h]
  size_t v70; // [rsp+10h] [rbp-D8h]
  size_t v71; // [rsp+10h] [rbp-D8h]
  size_t v72; // [rsp+10h] [rbp-D8h]
  size_t v73; // [rsp+10h] [rbp-D8h]
  size_t v74; // [rsp+10h] [rbp-D8h]
  char v75; // [rsp+18h] [rbp-D0h]
  __int64 v76; // [rsp+18h] [rbp-D0h]
  __int64 v77; // [rsp+18h] [rbp-D0h]
  __int64 v78; // [rsp+18h] [rbp-D0h]
  __int64 v79; // [rsp+18h] [rbp-D0h]
  __int64 v80; // [rsp+18h] [rbp-D0h]
  __int64 v81; // [rsp+18h] [rbp-D0h]
  __int64 v82; // [rsp+18h] [rbp-D0h]
  __int64 v83; // [rsp+20h] [rbp-C8h]
  __int64 v84; // [rsp+20h] [rbp-C8h]
  __int64 v85; // [rsp+20h] [rbp-C8h]
  char *k; // [rsp+28h] [rbp-C0h]
  __int64 v87; // [rsp+38h] [rbp-B0h] BYREF
  void *s2; // [rsp+40h] [rbp-A8h]
  __m128 n; // [rsp+48h] [rbp-A0h] BYREF
  void *v90; // [rsp+60h] [rbp-88h]
  __int64 v91; // [rsp+68h] [rbp-80h]
  _QWORD v92[2]; // [rsp+70h] [rbp-78h] BYREF
  void *v93; // [rsp+80h] [rbp-68h] BYREF
  size_t v94; // [rsp+88h] [rbp-60h]
  double v95[3]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v96; // [rsp+A8h] [rbp-40h]

  v1 = *(char **)(a1 + 8);
  v2 = *(char **)a1;
  v96 = __readfsqword(0x28u);
  if ( v2 != v1 )
  {
    _BitScanReverse64(&v4, v1 - v2);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,__gnu_cxx::__ops::_Iter_less_iter>(
      (__int64)v2,
      v1,
      2LL * (int)v4);
    if ( v1 - v2 <= 16 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v2,
        v1);
    }
    else
    {
      v5 = v2 + 16;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v2,
        v2 + 16);
      if ( v1 != v2 + 16 )
      {
        v6 = *v5;
        v7 = v2[15];
        if ( *v5 >= v7 )
          goto LABEL_9;
        while ( 1 )
        {
          v8 = v5 - 1;
          do
          {
            v8[1] = v7;
            v9 = v8;
            v7 = *--v8;
          }
          while ( v6 < v7 );
          ++v5;
          *v9 = v6;
          if ( v1 == v5 )
            break;
          while ( 1 )
          {
            v6 = *v5;
            v7 = *(v5 - 1);
            if ( *v5 < v7 )
              break;
LABEL_9:
            v10 = v5++;
            *v10 = v6;
            if ( v1 == v5 )
              goto LABEL_117;
          }
        }
      }
    }
LABEL_117:
    v64 = *(char **)(a1 + 8);
    v65 = *(char **)a1;
    if ( *(char **)a1 != v64 )
    {
      while ( 1 )
      {
        v15 = v65++;
        if ( v64 == v65 )
          break;
        if ( *(v65 - 1) == v15[1] )
        {
          if ( v64 != v15 )
          {
            v11 = v15 + 2;
            if ( v64 == v15 + 2 )
            {
              v14 = v15;
            }
            else
            {
              v12 = *v15;
              while ( 1 )
              {
                v13 = *v11;
                if ( *v11 != v12 )
                  break;
LABEL_17:
                if ( v64 == ++v11 )
                {
                  v14 = v15;
                  goto LABEL_19;
                }
              }
              while ( 1 )
              {
                ++v11;
                v15[1] = v13;
                v14 = v15 + 1;
                if ( v64 == v11 )
                  break;
                v12 = v13;
                v13 = *v11;
                ++v15;
                if ( *v11 == v12 )
                  goto LABEL_17;
              }
LABEL_19:
              v11 = *(char **)(a1 + 8);
            }
            v16 = v14 + 1;
            if ( v16 != v11 )
              *(_QWORD *)(a1 + 8) = v16;
          }
          break;
        }
      }
    }
  }
  for ( i = 0; i != 256; ++i )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(a1 + 104);
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL)
                      + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
      if ( !v19 )
        std::__throw_bad_cast();
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, (unsigned int)(char)i);
      v21 = *(char **)a1;
      for ( j = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1; j > 0; j >>= 1 )
      {
        while ( 1 )
        {
          v23 = &v21[j >> 1];
          if ( *v23 >= v20 )
            break;
          v21 = v23 + 1;
          j = j - (j >> 1) - 1;
          if ( j <= 0 )
            goto LABEL_28;
        }
      }
LABEL_28:
      if ( *(char **)(a1 + 8) != v21 && *v21 <= v20 )
        goto LABEL_34;
      v24 = *(char **)(a1 + 48);
      for ( k = *(char **)(a1 + 56); k != v24; v24 += 2 )
      {
        v66 = *v24;
        v67 = v24[1];
        std::locale::locale((std::locale *)&v87, *(const std::locale **)(a1 + 104));
        v25 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
        v26 = *(_QWORD *)(*(_QWORD *)(v87 + 8) + 8 * v25);
        if ( !v26 )
          std::__throw_bad_cast();
        std::locale::~locale((std::locale *)&v87);
        v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 32LL))(v26, (unsigned int)(char)i);
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 16LL))(v26, (unsigned int)(char)i);
        if ( v66 <= v75 && v67 >= v75 )
          goto LABEL_34;
        if ( v66 <= v27 && v67 >= v27 )
          goto LABEL_34;
      }
      v28 = std::regex_traits<char>::isctype(*(_QWORD *)(a1 + 112), i, *(_WORD *)(a1 + 96), *(_BYTE *)(a1 + 98));
      if ( v28 )
        goto LABEL_34;
      if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 24) )
      {
        v33 = *(_QWORD *)(a1 + 112);
        n.m128_u64[0] = 0;
        s2 = &n.m128_u16[4];
        n.m128_i8[8] = 0;
        v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
        if ( !v34 )
          std::__throw_bad_cast();
        v35 = *(const char **)(*(_QWORD *)(*(_QWORD *)v34 - 8LL) + 8LL);
        v36 = (const char *)`typeinfo for'std::collate<char>[1];
        if ( v35 != v36 && (*v35 == 42 || strcmp(v35, &v36[*v36 == 42])) )
        {
LABEL_58:
          v43 = *(_QWORD *)(a1 + 32);
          v44 = *(_QWORD *)(a1 + 24);
          v45 = (size_t *)s2;
          v46 = n.m128_u64[0];
          if ( v43 == v44 )
          {
LABEL_73:
            if ( v45 != (size_t *)&n.m128_u16[4] )
              operator delete(v45, n.m128_u64[1] + 1);
            goto LABEL_75;
          }
          v47 = ((unsigned __int8)((unsigned __int64)(v43 - v44 - 32) >> 5) + 1) & 3;
          if ( (((unsigned __int8)((unsigned __int64)(v43 - v44 - 32) >> 5) + 1) & 3) != 0 )
          {
            if ( v47 != 1 )
            {
              if ( v47 != 2 )
              {
                if ( n.m128_u64[0] == *(_QWORD *)(v44 + 8) )
                {
                  if ( !n.m128_u64[0] )
                    goto LABEL_83;
                  v82 = *(_QWORD *)(a1 + 32);
                  v74 = n.m128_u64[0];
                  v57 = memcmp(*(const void **)v44, s2, n.m128_u64[0]);
                  v46 = v74;
                  v43 = v82;
                  if ( !v57 )
                    goto LABEL_83;
                }
                v44 += 32;
              }
              if ( v46 == *(_QWORD *)(v44 + 8) )
              {
                if ( !v46 )
                  goto LABEL_83;
                v81 = v43;
                v73 = v46;
                v56 = memcmp(*(const void **)v44, v45, v46);
                v46 = v73;
                v43 = v81;
                if ( !v56 )
                  goto LABEL_83;
              }
              v44 += 32;
            }
            if ( v46 != *(_QWORD *)(v44 + 8)
              || v46 && (v80 = v43, v72 = v46, v55 = memcmp(*(const void **)v44, v45, v46), v46 = v72, v43 = v80, v55) )
            {
              v44 += 32;
              if ( v43 != v44 )
                goto LABEL_68;
              goto LABEL_73;
            }
LABEL_83:
            if ( v43 != v44 )
            {
              if ( v45 != (size_t *)&n.m128_u16[4] )
                operator delete(v45, n.m128_u64[1] + 1);
LABEL_34:
              v28 = 1;
              goto LABEL_35;
            }
            goto LABEL_73;
          }
          while ( 1 )
          {
LABEL_68:
            if ( v46 == *(_QWORD *)(v44 + 8) )
            {
              if ( !v46 )
                goto LABEL_83;
              v76 = v43;
              v68 = v46;
              v51 = memcmp(*(const void **)v44, v45, v46);
              v46 = v68;
              v43 = v76;
              if ( !v51 )
                goto LABEL_83;
            }
            v48 = v44 + 32;
            v44 = v48;
            if ( v46 == *(_QWORD *)(v48 + 8) )
            {
              if ( !v46 )
                goto LABEL_83;
              v83 = v43;
              v77 = v48;
              v69 = v46;
              v52 = memcmp(*(const void **)v48, v45, v46);
              v46 = v69;
              v48 = v77;
              v43 = v83;
              if ( !v52 )
                goto LABEL_83;
              v44 = v77 + 32;
              if ( v69 != *(_QWORD *)(v77 + 40) )
              {
LABEL_71:
                v44 = v48 + 64;
                if ( v46 != *(_QWORD *)(v48 + 72) )
                  goto LABEL_72;
LABEL_92:
                if ( !v46 )
                  goto LABEL_83;
                v85 = v43;
                v79 = v48;
                v71 = v46;
                v54 = memcmp(*(const void **)(v48 + 64), v45, v46);
                v46 = v71;
                v48 = v79;
                v43 = v85;
                if ( !v54 )
                  goto LABEL_83;
                goto LABEL_72;
              }
            }
            else
            {
              v44 = v48 + 32;
              if ( v46 != *(_QWORD *)(v48 + 40) )
                goto LABEL_71;
            }
            if ( !v46 )
              goto LABEL_83;
            v84 = v43;
            v78 = v48;
            v70 = v46;
            v53 = memcmp(*(const void **)(v48 + 32), v45, v46);
            v46 = v70;
            v48 = v78;
            v43 = v84;
            if ( !v53 )
              goto LABEL_83;
            v44 = v78 + 64;
            if ( v70 == *(_QWORD *)(v78 + 72) )
              goto LABEL_92;
LABEL_72:
            v44 = v48 + 96;
            if ( v43 == v48 + 96 )
              goto LABEL_73;
          }
        }
        v37 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v33 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( !v37 )
          std::__throw_bad_cast();
        v90 = v92;
        LOWORD(v92[0]) = (unsigned __int8)i;
        v38 = *v37;
        v91 = 1;
        (*(void (__fastcall **)(__int64 *, _QWORD *, char *))(v38 + 40))(v37, v92, (char *)v92 + 1);
        (*(void (__fastcall **)(void **, __int64, _QWORD *, char *))(*(_QWORD *)v34 + 24LL))(
          &v93,
          v34,
          v92,
          (char *)v92 + 1);
        v39 = (double *)s2;
        v40 = s2;
        if ( s2 == &n.m128_u16[4] )
        {
          if ( v93 != v95 )
          {
            s2 = v93;
            n = _mm_loadh_ps(v95);
            goto LABEL_103;
          }
          v41 = v94;
        }
        else
        {
          v41 = v94;
          if ( v93 != v95 )
          {
            v42 = *(double *)&n.m128_u64[1];
            s2 = v93;
            n = _mm_loadh_ps(v95);
            if ( v39 )
            {
              v93 = v39;
              v95[0] = v42;
LABEL_54:
              *(_BYTE *)v39 = 0;
              if ( v93 != v95 )
                operator delete(v93, *(_QWORD *)&v95[0] + 1LL);
              if ( v90 != v92 )
                operator delete(v90, v92[0] + 1LL);
              goto LABEL_58;
            }
LABEL_103:
            v93 = v95;
            v39 = v95;
            goto LABEL_54;
          }
        }
        if ( v41 )
        {
          if ( v41 == 1 )
          {
            *(_BYTE *)s2 = LOBYTE(v95[0]);
            v40 = s2;
            v41 = v94;
            goto LABEL_115;
          }
          if ( (unsigned int)v41 >= 8 )
          {
            *(double *)s2 = v95[0];
            *(_QWORD *)&v40[(unsigned int)v41 - 8] = *(size_t *)((char *)&v95[-1] + (unsigned int)v41);
            v58 = (unsigned __int64)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v59 = &v40[-v58];
            v60 = (char *)((char *)v95 - v59);
            if ( (((_DWORD)v59 + (_DWORD)v41) & 0xFFFFFFF8) >= 8 )
            {
              v61 = ((_DWORD)v59 + v41) & 0xFFFFFFF8;
              v62 = 0;
              do
              {
                v63 = v62;
                v62 += 8;
                *(_QWORD *)(v58 + v63) = *(_QWORD *)&v60[v63];
              }
              while ( v62 < v61 );
            }
LABEL_114:
            v40 = s2;
            v41 = v94;
            goto LABEL_115;
          }
          if ( (v41 & 4) != 0 )
          {
            *(_DWORD *)s2 = LODWORD(v95[0]);
            *(_DWORD *)&v40[(unsigned int)v41 - 4] = *(_DWORD *)((char *)&v94 + (unsigned int)v41 + 4);
            v40 = s2;
            v41 = v94;
            goto LABEL_115;
          }
          if ( (_DWORD)v41 )
          {
            *(_BYTE *)s2 = LOBYTE(v95[0]);
            if ( (v41 & 2) != 0 )
            {
              *(_WORD *)&v40[(unsigned int)v41 - 2] = *(_WORD *)((char *)&v94 + (unsigned int)v41 + 6);
              v40 = s2;
              v41 = v94;
              goto LABEL_115;
            }
            goto LABEL_114;
          }
        }
LABEL_115:
        n.m128_u64[0] = v41;
        v40[v41] = 0;
        v39 = (double *)v93;
        goto LABEL_54;
      }
LABEL_75:
      v49 = *(_QWORD *)(a1 + 80);
      v50 = *(_QWORD *)(a1 + 72);
      if ( v50 != v49 )
      {
        while ( std::regex_traits<char>::isctype(*(_QWORD *)(a1 + 112), i, *(_WORD *)v50, *(_BYTE *)(v50 + 2)) )
        {
          v50 += 4;
          if ( v49 == v50 )
            goto LABEL_35;
        }
        goto LABEL_34;
      }
LABEL_35:
      v29 = i >> 6;
      v30 = 1LL << i;
      v31 = *(_QWORD *)(a1 + 8 * (i >> 6) + 128);
      if ( *(_BYTE *)(a1 + 120) == v28 )
        break;
      ++i;
      *(_QWORD *)(a1 + 8 * v29 + 128) = v30 | v31;
      if ( i == 256 )
        return v96 - __readfsqword(0x28u);
    }
    *(_QWORD *)(a1 + 8 * v29 + 128) = v31 & ~v30;
  }
  return v96 - __readfsqword(0x28u);
}

