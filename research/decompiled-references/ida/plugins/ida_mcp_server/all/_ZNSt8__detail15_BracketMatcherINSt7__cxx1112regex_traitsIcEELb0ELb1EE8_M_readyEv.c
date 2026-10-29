unsigned __int64 __fastcall std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_ready(char **a1)
{
  char *v1; // r12
  char *v2; // r13
  char **v3; // rbx
  char *v4; // rax
  unsigned __int64 v5; // rdx
  char *v6; // rcx
  char *v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 j; // rdx
  char *v10; // rsi
  char v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // rcx
  unsigned __int8 v15; // r13
  _BYTE *v16; // r12
  size_t v17; // r15
  __int64 v18; // r14
  double *v19; // rax
  char *v20; // r12
  __int64 *v21; // r14
  void *v22; // r15
  size_t v23; // r8
  size_t v24; // rdx
  signed __int64 v25; // rax
  size_t v26; // r13
  size_t v27; // rdx
  signed __int64 v28; // rax
  char *v30; // r15
  __int64 v31; // r14
  const char *v32; // rdi
  const char *v33; // rsi
  __int64 *v34; // rdi
  __int64 v35; // rax
  double *v36; // rdx
  _BYTE *v37; // rsi
  size_t v38; // rax
  double v39; // rsi
  char *v40; // rcx
  char *v41; // r14
  size_t *v42; // r8
  size_t v43; // rdx
  __int64 v44; // rax
  size_t *v45; // rbp
  size_t v46; // r12
  char *v47; // rbx
  char *v48; // r15
  char *v49; // r14
  char *v50; // r15
  double *v51; // rdi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  char *i; // rdi
  char v56; // cl
  char v57; // dl
  char *v58; // rsi
  char *v59; // rax
  char *v60; // rcx
  char v61; // si
  char *v62; // rax
  char v63; // cl
  char *v64; // rsi
  unsigned __int64 v65; // rcx
  char *v66; // rsi
  char *v67; // rdi
  unsigned int v68; // edx
  unsigned int v69; // eax
  __int64 v70; // rsi
  unsigned __int64 v71; // [rsp+8h] [rbp-120h]
  size_t *v72; // [rsp+8h] [rbp-120h]
  size_t *v73; // [rsp+8h] [rbp-120h]
  size_t *v74; // [rsp+8h] [rbp-120h]
  char *v75; // [rsp+10h] [rbp-118h]
  char v76; // [rsp+10h] [rbp-118h]
  size_t v77; // [rsp+10h] [rbp-118h]
  size_t v78; // [rsp+10h] [rbp-118h]
  size_t v79; // [rsp+10h] [rbp-118h]
  char **v80; // [rsp+18h] [rbp-110h]
  char *v81; // [rsp+18h] [rbp-110h]
  char *v82; // [rsp+18h] [rbp-110h]
  char *v83; // [rsp+18h] [rbp-110h]
  char *v84; // [rsp+38h] [rbp-F0h]
  size_t v85; // [rsp+40h] [rbp-E8h]
  void *s2[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+70h] [rbp-B8h] BYREF
  void *v88; // [rsp+80h] [rbp-A8h]
  __m128 v89; // [rsp+88h] [rbp-A0h] BYREF
  void *src; // [rsp+A0h] [rbp-88h]
  size_t v91; // [rsp+A8h] [rbp-80h]
  _QWORD v92[2]; // [rsp+B0h] [rbp-78h] BYREF
  void *v93; // [rsp+C0h] [rbp-68h] BYREF
  size_t v94; // [rsp+C8h] [rbp-60h]
  double v95[3]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v96; // [rsp+E8h] [rbp-40h]

  v1 = a1[1];
  v2 = *a1;
  v96 = __readfsqword(0x28u);
  v3 = a1;
  v4 = v1;
  if ( v2 != v1 )
  {
    _BitScanReverse64(&v5, v1 - v2);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,long,__gnu_cxx::__ops::_Iter_less_iter>(
      (__int64)v2,
      v1,
      2LL * (int)v5);
    if ( v1 - v2 > 16 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v2,
        v2 + 16);
      for ( i = v2 + 16; v1 != i; *v58 = v56 )
      {
        v56 = *i;
        v57 = *(i - 1);
        v58 = i;
        if ( *i < v57 )
        {
          v59 = i - 1;
          do
          {
            v59[1] = v57;
            v58 = v59;
            v57 = *--v59;
          }
          while ( v56 < v57 );
        }
        ++i;
      }
    }
    else
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v2,
        v1);
    }
    v1 = v3[1];
    v4 = *v3;
    if ( *v3 != v1 )
    {
      v6 = *v3;
      while ( 1 )
      {
        v7 = v6++;
        if ( v1 == v6 )
          break;
        if ( *(v6 - 1) == v7[1] )
        {
          if ( v1 != v7 )
          {
            v60 = v7 + 2;
            if ( v1 == v7 + 2 )
            {
              v64 = v7;
            }
            else
            {
              v61 = *v7;
              v62 = v7 + 2;
              while ( 1 )
              {
                v63 = *v62;
                if ( *v62 != v61 )
                  break;
LABEL_144:
                if ( v1 == ++v62 )
                {
                  v64 = v7;
                  goto LABEL_146;
                }
              }
              while ( 1 )
              {
                ++v62;
                v7[1] = v63;
                v64 = v7 + 1;
                if ( v1 == v62 )
                  break;
                ++v7;
                v61 = v63;
                v63 = *v62;
                if ( *v62 == v61 )
                  goto LABEL_144;
              }
LABEL_146:
              v60 = v3[1];
              v4 = *v3;
            }
            v1 = v64 + 1;
            if ( v64 + 1 != v60 )
              v3[1] = v1;
          }
          break;
        }
      }
    }
  }
  v8 = 0;
  while ( 2 )
  {
    for ( j = v1 - v4; j > 0; j >>= 1 )
    {
      while ( 1 )
      {
        v10 = &v4[j >> 1];
        if ( *v10 >= (char)v8 )
          break;
        v4 = v10 + 1;
        j = j - (j >> 1) - 1;
        if ( j <= 0 )
          goto LABEL_13;
      }
    }
LABEL_13:
    if ( v4 != v1 && *v4 <= (char)v8 )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v15 = v8;
    src = v92;
    std::string::_M_construct();
    v16 = src;
    v17 = v91;
    v75 = v3[13];
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 8LL)
                    + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
    if ( !v18 )
      std::__throw_bad_cast();
    v93 = v95;
    v94 = 0;
    if ( v17 > 0xF )
    {
      v93 = (void *)std::string::_M_create();
      v51 = (double *)v93;
      *(_QWORD *)&v95[0] = v17;
LABEL_93:
      memcpy(v51, v16, v17);
      v19 = (double *)v93;
      goto LABEL_24;
    }
    if ( v17 == 1 )
    {
      LOBYTE(v95[0]) = *v16;
      goto LABEL_23;
    }
    if ( v17 )
    {
      v51 = v95;
      goto LABEL_93;
    }
LABEL_23:
    v19 = v95;
LABEL_24:
    v94 = v17;
    *((_BYTE *)v19 + v17) = 0;
    (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v18 + 24LL))(s2, v18, v93, (char *)v93 + v94);
    if ( v93 != v95 )
      operator delete(v93, *(_QWORD *)&v95[0] + 1LL);
    if ( src != v92 )
      operator delete(src, v92[0] + 1LL);
    v20 = v3[6];
    if ( v20 == v3[7] )
      goto LABEL_51;
    v21 = (__int64 *)s2[0];
    v22 = s2[1];
    v84 = v3[7];
    while ( 1 )
    {
      v23 = *((_QWORD *)v20 + 1);
      v24 = v23;
      if ( (unsigned __int64)v22 <= v23 )
        v24 = (size_t)v22;
      if ( v24 )
      {
        v85 = *((_QWORD *)v20 + 1);
        LODWORD(v25) = memcmp(*(const void **)v20, v21, v24);
        v23 = v85;
        if ( (_DWORD)v25 )
          goto LABEL_37;
      }
      v25 = v23 - (_QWORD)v22;
      if ( (__int64)(v23 - (_QWORD)v22) > 0x7FFFFFFF )
        goto LABEL_30;
      if ( v25 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_37:
        if ( (int)v25 > 0 )
          goto LABEL_30;
      }
      v26 = *((_QWORD *)v20 + 5);
      v27 = v26;
      if ( (unsigned __int64)v22 <= v26 )
        v27 = (size_t)v22;
      if ( v27 )
      {
        LODWORD(v28) = memcmp(v21, *((const void **)v20 + 4), v27);
        if ( (_DWORD)v28 )
          goto LABEL_44;
      }
      v28 = (signed __int64)v22 - v26;
      if ( (__int64)((__int64)v22 - v26) <= 0x7FFFFFFF )
        break;
LABEL_30:
      v20 += 64;
      if ( v84 == v20 )
      {
        v15 = v8;
LABEL_51:
        v11 = std::regex_traits<char>::isctype((__int64)v3[14], v15, *((_WORD *)v3 + 48), *((_BYTE *)v3 + 98));
        if ( v11 )
        {
LABEL_94:
          v21 = (__int64 *)s2[0];
          goto LABEL_46;
        }
        if ( v3[4] == v3[3] )
          goto LABEL_85;
        v30 = v3[14];
        v89.m128_u64[0] = 0;
        v88 = &v89.m128_u16[4];
        v89.m128_i8[8] = 0;
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 8LL)
                        + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
        if ( !v31 )
          std::__throw_bad_cast();
        v32 = *(const char **)(*(_QWORD *)(*(_QWORD *)v31 - 8LL) + 8LL);
        v33 = (const char *)`typeinfo for'std::collate<char>[1];
        if ( v32 != v33 && (*v32 == 42 || strcmp(v32, &v33[*v33 == 42])) )
        {
LABEL_66:
          v40 = v3[4];
          v41 = v3[3];
          v42 = (size_t *)v88;
          v43 = v89.m128_u64[0];
          if ( v40 == v41 )
          {
LABEL_83:
            if ( v42 != (size_t *)&v89.m128_u16[4] )
              operator delete(v42, v89.m128_u64[1] + 1);
LABEL_85:
            v49 = v3[10];
            v50 = v3[9];
            if ( v50 == v49 )
              goto LABEL_94;
            while ( std::regex_traits<char>::isctype((__int64)v3[14], v15, *(_WORD *)v50, v50[2]) )
            {
              v50 += 4;
              if ( v49 == v50 )
                goto LABEL_94;
            }
LABEL_89:
            v21 = (__int64 *)s2[0];
            v11 = 1;
            goto LABEL_46;
          }
          v44 = ((unsigned __int8)((unsigned __int64)(v40 - v41 - 32) >> 5) + 1) & 3;
          if ( (((unsigned __int8)((unsigned __int64)(v40 - v41 - 32) >> 5) + 1) & 3) == 0 )
          {
LABEL_76:
            v71 = v8;
            v45 = v42;
            v76 = v11;
            v46 = v43;
            v80 = v3;
            v47 = v40;
            while ( 1 )
            {
              if ( v46 == *((_QWORD *)v41 + 1) && (!v46 || !memcmp(*(const void **)v41, v45, v46)) )
              {
LABEL_97:
                v40 = v47;
                v42 = v45;
                v11 = v76;
                v8 = v71;
                v3 = v80;
                goto LABEL_98;
              }
              v48 = v41 + 32;
              v41 = v48;
              if ( v46 == *((_QWORD *)v48 + 1) )
              {
                if ( !v46 || !memcmp(*(const void **)v48, v45, v46) )
                  goto LABEL_97;
                v41 = v48 + 32;
                if ( v46 != *((_QWORD *)v48 + 5) )
                {
LABEL_80:
                  v41 = v48 + 64;
                  if ( v46 != *((_QWORD *)v48 + 9) )
                    goto LABEL_81;
LABEL_107:
                  if ( !v46 || !memcmp(*((const void **)v48 + 8), v45, v46) )
                    goto LABEL_97;
                  goto LABEL_81;
                }
              }
              else
              {
                v41 = v48 + 32;
                if ( v46 != *((_QWORD *)v48 + 5) )
                  goto LABEL_80;
              }
              if ( !v46 || !memcmp(*((const void **)v48 + 4), v45, v46) )
                goto LABEL_97;
              v41 = v48 + 64;
              if ( v46 == *((_QWORD *)v48 + 9) )
                goto LABEL_107;
LABEL_81:
              v41 = v48 + 96;
              if ( v47 == v48 + 96 )
              {
                v42 = v45;
                v11 = v76;
                v8 = v71;
                v3 = v80;
                goto LABEL_83;
              }
            }
          }
          if ( v44 != 1 )
          {
            if ( v44 != 2 )
            {
              if ( v89.m128_u64[0] == *((_QWORD *)v41 + 1) )
              {
                if ( !v89.m128_u64[0] )
                  goto LABEL_98;
                v83 = v3[4];
                v79 = v89.m128_u64[0];
                v74 = (size_t *)v88;
                v54 = memcmp(*(const void **)v41, v88, v89.m128_u64[0]);
                v42 = v74;
                v43 = v79;
                v40 = v83;
                if ( !v54 )
                  goto LABEL_98;
              }
              v41 += 32;
            }
            if ( v43 == *((_QWORD *)v41 + 1) )
            {
              if ( !v43 )
                goto LABEL_98;
              v82 = v40;
              v78 = v43;
              v73 = v42;
              v53 = memcmp(*(const void **)v41, v42, v43);
              v42 = v73;
              v43 = v78;
              v40 = v82;
              if ( !v53 )
                goto LABEL_98;
            }
            v41 += 32;
          }
          if ( v43 != *((_QWORD *)v41 + 1)
            || v43
            && (v81 = v40,
                v77 = v43,
                v72 = v42,
                v52 = memcmp(*(const void **)v41, v42, v43),
                v42 = v72,
                v43 = v77,
                v40 = v81,
                v52) )
          {
            v41 += 32;
            if ( v40 != v41 )
              goto LABEL_76;
            goto LABEL_83;
          }
LABEL_98:
          if ( v40 != v41 )
          {
            if ( v42 != (size_t *)&v89.m128_u16[4] )
            {
              v11 = 1;
              operator delete(v42, v89.m128_u64[1] + 1);
              v21 = (__int64 *)s2[0];
              goto LABEL_46;
            }
            goto LABEL_89;
          }
          goto LABEL_83;
        }
        v34 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v30 + 8LL)
                          + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
        if ( !v34 )
          std::__throw_bad_cast();
        v91 = 1;
        LOWORD(v92[0]) = (unsigned __int8)v8;
        v35 = *v34;
        src = v92;
        (*(void (__fastcall **)(__int64 *, _QWORD *, char *))(v35 + 40))(v34, v92, (char *)v92 + 1);
        (*(void (__fastcall **)(void **, __int64, _QWORD *, char *))(*(_QWORD *)v31 + 24LL))(
          &v93,
          v31,
          v92,
          (char *)v92 + 1);
        v36 = (double *)v88;
        v37 = v88;
        if ( v88 == &v89.m128_u16[4] )
        {
          if ( v93 != v95 )
          {
            v88 = v93;
            v89 = _mm_loadh_ps(v95);
            goto LABEL_119;
          }
          v38 = v94;
        }
        else
        {
          v38 = v94;
          if ( v93 != v95 )
          {
            v39 = *(double *)&v89.m128_u64[1];
            v88 = v93;
            v89 = _mm_loadh_ps(v95);
            if ( v36 )
            {
              v93 = v36;
              v95[0] = v39;
LABEL_62:
              *(_BYTE *)v36 = 0;
              if ( v93 != v95 )
                operator delete(v93, *(_QWORD *)&v95[0] + 1LL);
              if ( src != v92 )
                operator delete(src, v92[0] + 1LL);
              goto LABEL_66;
            }
LABEL_119:
            v93 = v95;
            v36 = v95;
            goto LABEL_62;
          }
        }
        if ( v38 )
        {
          if ( v38 == 1 )
          {
            *(_BYTE *)v88 = LOBYTE(v95[0]);
            v38 = v94;
            v37 = v88;
            goto LABEL_131;
          }
          if ( (unsigned int)v38 >= 8 )
          {
            *(double *)v88 = v95[0];
            *(_QWORD *)&v37[(unsigned int)v38 - 8] = *(size_t *)((char *)&v95[-1] + (unsigned int)v38);
            v65 = (unsigned __int64)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v66 = &v37[-v65];
            v67 = (char *)((char *)v95 - v66);
            if ( (((_DWORD)v66 + (_DWORD)v38) & 0xFFFFFFF8) >= 8 )
            {
              v68 = ((_DWORD)v66 + v38) & 0xFFFFFFF8;
              v69 = 0;
              do
              {
                v70 = v69;
                v69 += 8;
                *(_QWORD *)(v65 + v70) = *(_QWORD *)&v67[v70];
              }
              while ( v69 < v68 );
            }
            goto LABEL_154;
          }
          if ( (v38 & 4) != 0 )
          {
            *(_DWORD *)v88 = LODWORD(v95[0]);
            *(_DWORD *)&v37[(unsigned int)v38 - 4] = *(_DWORD *)((char *)&v94 + (unsigned int)v38 + 4);
            v38 = v94;
            v37 = v88;
            goto LABEL_131;
          }
          if ( (_DWORD)v38 )
          {
            *(_BYTE *)v88 = LOBYTE(v95[0]);
            if ( (v38 & 2) != 0 )
            {
              *(_WORD *)&v37[(unsigned int)v38 - 2] = *(_WORD *)((char *)&v94 + (unsigned int)v38 + 6);
              v38 = v94;
              v37 = v88;
              goto LABEL_131;
            }
LABEL_154:
            v38 = v94;
            v37 = v88;
          }
        }
LABEL_131:
        v89.m128_u64[0] = v38;
        v37[v38] = 0;
        v36 = (double *)v93;
        goto LABEL_62;
      }
    }
    if ( v28 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_45;
LABEL_44:
    if ( (int)v28 > 0 )
      goto LABEL_30;
LABEL_45:
    v11 = 1;
LABEL_46:
    if ( v21 != &v87 )
      operator delete(v21, v87 + 1);
LABEL_16:
    v12 = v8 >> 6;
    v13 = 1LL << v8;
    v14 = v3[(v8 >> 6) + 16];
    if ( *((_BYTE *)v3 + 120) == v11 )
    {
      ++v8;
      v3[v12 + 16] = (char *)((unsigned __int64)v14 & ~v13);
      if ( v8 == 256 )
        return v96 - __readfsqword(0x28u);
LABEL_18:
      v1 = v3[1];
      v4 = *v3;
      continue;
    }
    break;
  }
  ++v8;
  v3[v12 + 16] = (char *)((unsigned __int64)v14 | v13);
  if ( v8 != 256 )
    goto LABEL_18;
  return v96 - __readfsqword(0x28u);
}

