unsigned __int64 __fastcall std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_ready(char **a1)
{
  char *v1; // r12
  char *v2; // r13
  char **v3; // rbx
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
  char *v18; // r12
  __int64 v19; // rdi
  unsigned __int8 v20; // r12
  char v21; // si
  char *v22; // rax
  __int64 j; // rcx
  char *v24; // r8
  char v25; // r13
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // rcx
  char *v30; // r15
  _BYTE *v31; // r13
  size_t v32; // r14
  __int64 v33; // r15
  double *v34; // rax
  char *v35; // r15
  char v36; // r13
  char v37; // r14
  __int64 v38; // rax
  char v39; // al
  char *v40; // r14
  __int64 v41; // r15
  const char *v42; // rdi
  const char *v43; // rsi
  __int64 *v44; // rdi
  __int64 v45; // rax
  double *v46; // rdx
  _BYTE *v47; // rsi
  size_t v48; // rax
  double v49; // rsi
  char *v50; // r8
  char *v51; // r14
  size_t *v52; // r15
  size_t v53; // rdx
  __int64 v54; // rax
  size_t v55; // r13
  char *v56; // r12
  size_t *v57; // rbp
  char **v58; // r15
  char *v59; // rbx
  char *v60; // r14
  char *v61; // r14
  char *v62; // r15
  double *v63; // rdi
  int v64; // eax
  int v65; // eax
  int v66; // eax
  char *v67; // rsi
  char *v68; // rdx
  unsigned __int64 v69; // rcx
  char *v70; // rsi
  char *v71; // rdi
  unsigned int v72; // edx
  unsigned int v73; // eax
  __int64 v74; // rsi
  char v75; // [rsp+8h] [rbp-130h]
  char v76; // [rsp+10h] [rbp-128h]
  std::locale *v77; // [rsp+10h] [rbp-128h]
  std::locale *v78; // [rsp+10h] [rbp-128h]
  std::locale *v79; // [rsp+10h] [rbp-128h]
  unsigned __int8 v80; // [rsp+18h] [rbp-120h]
  char *v81; // [rsp+18h] [rbp-120h]
  char *v82; // [rsp+18h] [rbp-120h]
  char *v83; // [rsp+18h] [rbp-120h]
  unsigned __int64 v84; // [rsp+20h] [rbp-118h]
  __int64 v85; // [rsp+30h] [rbp-108h]
  char v86; // [rsp+30h] [rbp-108h]
  __int64 v87; // [rsp+38h] [rbp-100h]
  char *k; // [rsp+40h] [rbp-F8h]
  double v89; // [rsp+68h] [rbp-D0h] BYREF
  void *v90; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+80h] [rbp-B8h] BYREF
  void *s2; // [rsp+90h] [rbp-A8h]
  __m128 v93; // [rsp+98h] [rbp-A0h] BYREF
  void *src; // [rsp+B0h] [rbp-88h]
  size_t n; // [rsp+B8h] [rbp-80h]
  _QWORD v96[2]; // [rsp+C0h] [rbp-78h] BYREF
  void *v97; // [rsp+D0h] [rbp-68h] BYREF
  size_t v98; // [rsp+D8h] [rbp-60h]
  double v99[3]; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v100; // [rsp+F8h] [rbp-40h]

  v1 = a1[1];
  v2 = *a1;
  v100 = __readfsqword(0x28u);
  v3 = a1;
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
              goto LABEL_136;
          }
        }
      }
    }
LABEL_136:
    v67 = a1[1];
    v68 = *a1;
    if ( *a1 != v67 )
    {
      while ( 1 )
      {
        v15 = v68++;
        if ( v67 == v68 )
          break;
        if ( *(v68 - 1) == v15[1] )
        {
          if ( v67 != v15 )
          {
            v11 = v15 + 2;
            if ( v67 == v15 + 2 )
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
                if ( v67 == ++v11 )
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
                if ( v67 == v11 )
                  break;
                v12 = v13;
                v13 = *v11;
                ++v15;
                if ( *v11 == v12 )
                  goto LABEL_17;
              }
LABEL_19:
              v11 = v3[1];
            }
            v16 = v14 + 1;
            if ( v16 != v11 )
              v3[1] = v16;
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
      v18 = v3[13];
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL)
                      + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
      if ( !v19 )
        std::__throw_bad_cast();
      v20 = i;
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, (unsigned int)(char)i);
      v22 = *v3;
      for ( j = v3[1] - *v3; j > 0; j >>= 1 )
      {
        while ( 1 )
        {
          v24 = &v22[j >> 1];
          if ( *v24 >= v21 )
            break;
          v22 = v24 + 1;
          j = j - (j >> 1) - 1;
          if ( j <= 0 )
            goto LABEL_28;
        }
      }
LABEL_28:
      if ( v3[1] != v22 && *v22 <= v21 )
      {
        v25 = 1;
        goto LABEL_31;
      }
      src = v96;
      std::string::_M_construct();
      v30 = v3[13];
      v31 = src;
      v32 = n;
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 8LL)
                      + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
      if ( !v33 )
        std::__throw_bad_cast();
      v89 = *(double *)&v32;
      v97 = v99;
      v98 = 0;
      if ( v32 > 0xF )
      {
        v97 = (void *)std::string::_M_create();
        v63 = (double *)v97;
        v99[0] = v89;
      }
      else
      {
        if ( v32 == 1 )
        {
          LOBYTE(v99[0]) = *v31;
LABEL_38:
          v34 = v99;
          goto LABEL_39;
        }
        if ( !v32 )
          goto LABEL_38;
        v63 = v99;
      }
      memcpy(v63, v31, v32);
      v32 = *(_QWORD *)&v89;
      v34 = (double *)v97;
LABEL_39:
      v98 = v32;
      *((_BYTE *)v34 + v32) = 0;
      (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v33 + 24LL))(
        &v90,
        v33,
        v97,
        (char *)v97 + v98);
      if ( v97 != v99 )
        operator delete(v97, *(_QWORD *)&v99[0] + 1LL);
      if ( src != v96 )
        operator delete(src, v96[0] + 1LL);
      v35 = v3[6];
      for ( k = v3[7]; k != v35; v35 += 64 )
      {
        v36 = *(_BYTE *)v90;
        v37 = **((_BYTE **)v35 + 4);
        v75 = **(_BYTE **)v35;
        std::locale::locale((std::locale *)&v89, (const std::locale *)v3[13]);
        v38 = std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id);
        if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v89 + 8LL) + 8 * v38) )
          std::__throw_bad_cast();
        v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v89 + 8LL) + 8 * v38);
        std::locale::~locale((std::locale *)&v89);
        v87 = v85;
        v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v85 + 32LL))(v85, (unsigned int)v36);
        v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v87 + 16LL))(v87, (unsigned int)v36);
        if ( v75 <= v86 && v37 >= v86 )
          goto LABEL_47;
        if ( v75 <= v39 && v37 >= v39 )
          goto LABEL_47;
      }
      v25 = std::regex_traits<char>::isctype((__int64)v3[14], i, *((_WORD *)v3 + 48), *((_BYTE *)v3 + 98));
      if ( v25 )
        goto LABEL_47;
      if ( v3[4] != v3[3] )
      {
        v40 = v3[14];
        v93.m128_u64[0] = 0;
        s2 = &v93.m128_u16[4];
        v93.m128_i8[8] = 0;
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
        if ( !v41 )
          std::__throw_bad_cast();
        v42 = *(const char **)(*(_QWORD *)(*(_QWORD *)v41 - 8LL) + 8LL);
        v43 = (const char *)`typeinfo for'std::collate<char>[1];
        if ( v42 != v43 && (*v42 == 42 || strcmp(v42, &v43[*v43 == 42])) )
          goto LABEL_68;
        v44 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v40 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( !v44 )
          std::__throw_bad_cast();
        n = 1;
        LOWORD(v96[0]) = (unsigned __int8)i;
        v45 = *v44;
        src = v96;
        (*(void (__fastcall **)(__int64 *, _QWORD *, char *))(v45 + 40))(v44, v96, (char *)v96 + 1);
        (*(void (__fastcall **)(void **, __int64, _QWORD *, char *))(*(_QWORD *)v41 + 24LL))(
          &v97,
          v41,
          v96,
          (char *)v96 + 1);
        v46 = (double *)s2;
        v47 = s2;
        if ( s2 == &v93.m128_u16[4] )
        {
          if ( v97 != v99 )
          {
            s2 = v97;
            v93 = _mm_loadh_ps(v99);
            goto LABEL_125;
          }
          v48 = v98;
        }
        else
        {
          v48 = v98;
          if ( v97 != v99 )
          {
            v49 = *(double *)&v93.m128_u64[1];
            s2 = v97;
            v93 = _mm_loadh_ps(v99);
            if ( v46 )
            {
              v97 = v46;
              v99[0] = v49;
              goto LABEL_64;
            }
LABEL_125:
            v97 = v99;
            v46 = v99;
LABEL_64:
            *(_BYTE *)v46 = 0;
            if ( v97 != v99 )
              operator delete(v97, *(_QWORD *)&v99[0] + 1LL);
            if ( src != v96 )
              operator delete(src, v96[0] + 1LL);
LABEL_68:
            v50 = v3[4];
            v51 = v3[3];
            v52 = (size_t *)s2;
            v53 = v93.m128_u64[0];
            if ( v50 == v51 )
              goto LABEL_85;
            v54 = ((unsigned __int8)((unsigned __int64)(v50 - v51 - 32) >> 5) + 1) & 3;
            if ( (((unsigned __int8)((unsigned __int64)(v50 - v51 - 32) >> 5) + 1) & 3) == 0 )
              goto LABEL_78;
            if ( v54 != 1 )
            {
              if ( v54 != 2 )
              {
                if ( v93.m128_u64[0] != *((_QWORD *)v51 + 1)
                  || v93.m128_u64[0]
                  && (v83 = v3[4],
                      v79 = (std::locale *)v93.m128_u64[0],
                      v66 = memcmp(*(const void **)v51, s2, v93.m128_u64[0]),
                      v53 = (size_t)v79,
                      v50 = v83,
                      v66) )
                {
                  v51 += 32;
                  goto LABEL_74;
                }
LABEL_101:
                if ( v50 != v51 )
                {
                  if ( v52 != (size_t *)&v93.m128_u16[4] )
                    operator delete(v52, v93.m128_u64[1] + 1);
LABEL_47:
                  v25 = 1;
                  goto LABEL_48;
                }
                goto LABEL_85;
              }
LABEL_74:
              if ( v53 == *((_QWORD *)v51 + 1) )
              {
                if ( !v53 )
                  goto LABEL_101;
                v82 = v50;
                v78 = (std::locale *)v53;
                v65 = memcmp(*(const void **)v51, v52, v53);
                v53 = (size_t)v78;
                v50 = v82;
                if ( !v65 )
                  goto LABEL_101;
              }
              v51 += 32;
            }
            if ( v53 == *((_QWORD *)v51 + 1) )
            {
              if ( !v53 )
                goto LABEL_101;
              v81 = v50;
              v77 = (std::locale *)v53;
              v64 = memcmp(*(const void **)v51, v52, v53);
              v53 = (size_t)v77;
              v50 = v81;
              if ( !v64 )
                goto LABEL_101;
            }
            v51 += 32;
            if ( v50 != v51 )
            {
LABEL_78:
              v76 = v25;
              v55 = v53;
              v80 = i;
              v56 = v50;
              v84 = i;
              v57 = v52;
              v58 = v3;
              v59 = v51;
              while ( 1 )
              {
                if ( v55 == *((_QWORD *)v59 + 1) && (!v55 || !memcmp(*(const void **)v59, v57, v55)) )
                {
LABEL_100:
                  v50 = v56;
                  v51 = v59;
                  v20 = v80;
                  v3 = v58;
                  v25 = v76;
                  v52 = v57;
                  i = v84;
                  goto LABEL_101;
                }
                v60 = v59 + 32;
                v59 = v60;
                if ( v55 == *((_QWORD *)v60 + 1) )
                {
                  if ( !v55 || !memcmp(*(const void **)v60, v57, v55) )
                    goto LABEL_100;
                  v59 = v60 + 32;
                  if ( v55 != *((_QWORD *)v60 + 5) )
                  {
LABEL_82:
                    v59 = v60 + 64;
                    if ( v55 != *((_QWORD *)v60 + 9) )
                      goto LABEL_83;
LABEL_110:
                    if ( !v55 || !memcmp(*((const void **)v60 + 8), v57, v55) )
                      goto LABEL_100;
                    goto LABEL_83;
                  }
                }
                else
                {
                  v59 = v60 + 32;
                  if ( v55 != *((_QWORD *)v60 + 5) )
                    goto LABEL_82;
                }
                if ( !v55 || !memcmp(*((const void **)v60 + 4), v57, v55) )
                  goto LABEL_100;
                v59 = v60 + 64;
                if ( v55 == *((_QWORD *)v60 + 9) )
                  goto LABEL_110;
LABEL_83:
                v59 = v60 + 96;
                if ( v56 == v60 + 96 )
                {
                  v3 = v58;
                  v25 = v76;
                  v52 = v57;
                  v20 = v80;
                  i = v84;
                  break;
                }
              }
            }
LABEL_85:
            if ( v52 != (size_t *)&v93.m128_u16[4] )
              operator delete(v52, v93.m128_u64[1] + 1);
            goto LABEL_87;
          }
        }
        if ( v48 )
        {
          if ( v48 == 1 )
          {
            *(_BYTE *)s2 = LOBYTE(v99[0]);
            v48 = v98;
            v47 = s2;
            goto LABEL_134;
          }
          if ( (unsigned int)v48 >= 8 )
          {
            *(double *)s2 = v99[0];
            *(_QWORD *)&v47[(unsigned int)v48 - 8] = *(size_t *)((char *)&v99[-1] + (unsigned int)v48);
            v69 = (unsigned __int64)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v70 = &v47[-v69];
            v71 = (char *)((char *)v99 - v70);
            if ( (((_DWORD)v70 + (_DWORD)v48) & 0xFFFFFFF8) >= 8 )
            {
              v72 = ((_DWORD)v70 + v48) & 0xFFFFFFF8;
              v73 = 0;
              do
              {
                v74 = v73;
                v73 += 8;
                *(_QWORD *)(v69 + v74) = *(_QWORD *)&v71[v74];
              }
              while ( v73 < v72 );
            }
            goto LABEL_146;
          }
          if ( (v48 & 4) != 0 )
          {
            *(_DWORD *)s2 = LODWORD(v99[0]);
            *(_DWORD *)&v47[(unsigned int)v48 - 4] = *(_DWORD *)((char *)&v98 + (unsigned int)v48 + 4);
            v48 = v98;
            v47 = s2;
            goto LABEL_134;
          }
          if ( (_DWORD)v48 )
          {
            *(_BYTE *)s2 = LOBYTE(v99[0]);
            if ( (v48 & 2) != 0 )
            {
              *(_WORD *)&v47[(unsigned int)v48 - 2] = *(_WORD *)((char *)&v98 + (unsigned int)v48 + 6);
              v48 = v98;
              v47 = s2;
              goto LABEL_134;
            }
LABEL_146:
            v48 = v98;
            v47 = s2;
          }
        }
LABEL_134:
        v93.m128_u64[0] = v48;
        v47[v48] = 0;
        v46 = (double *)v97;
        goto LABEL_64;
      }
LABEL_87:
      v61 = v3[10];
      v62 = v3[9];
      if ( v62 != v61 )
      {
        while ( std::regex_traits<char>::isctype((__int64)v3[14], v20, *(_WORD *)v62, v62[2]) )
        {
          v62 += 4;
          if ( v61 == v62 )
            goto LABEL_48;
        }
        goto LABEL_47;
      }
LABEL_48:
      if ( v90 != &v91 )
        operator delete(v90, v91 + 1);
LABEL_31:
      v26 = i >> 6;
      v27 = 1LL << i;
      v28 = v3[(i >> 6) + 16];
      if ( *((_BYTE *)v3 + 120) == v25 )
        break;
      ++i;
      v3[v26 + 16] = (char *)((unsigned __int64)v28 | v27);
      if ( i == 256 )
        return v100 - __readfsqword(0x28u);
    }
    v3[v26 + 16] = (char *)((unsigned __int64)v28 & ~v27);
  }
  return v100 - __readfsqword(0x28u);
}

