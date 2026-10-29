__int64 __fastcall sub_63700(__int64 a1, _QWORD *a2, void **a3, __int64 *a4, __int64 a5)
{
  void *v5; // rax
  int *v9; // r15
  int v10; // r12d
  __int64 v11; // r15
  unsigned __int64 *v12; // r9
  unsigned __int64 *v13; // rbp
  unsigned __int64 *v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 *v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  char i; // al
  __m128i v24; // xmm0
  int *v25; // rax
  int *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r13
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rax
  char *v39; // r12
  void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  void **v43; // r15
  __int64 v44; // r13
  __int64 v45; // r12
  void *v46; // rdi
  bool v47; // cf
  void *v48; // r10
  void *v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  void **v53; // r13
  unsigned __int64 v54; // r15
  __int64 range; // rax
  void *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  void **v59; // r13
  __int64 v60; // r15
  __int64 v61; // r12
  void *v62; // rdi
  void *v63; // r10
  void *v64; // rax
  size_t v65; // r12
  __m128 v66; // xmm0
  void **v67; // rdx
  __int64 v68; // r12
  __int64 v69; // rbp
  __int64 v70; // rbx
  void *v71; // rdi
  __int64 v72; // rbx
  _QWORD *v73; // rax
  __m128 v74; // xmm0
  int *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  _QWORD *v79; // rsi
  __int64 v80; // rcx
  void **v81; // r13
  void *v82; // rax
  void **v83; // rdx
  void **v84; // rdx
  bool v85; // r13
  __int64 v86; // rax
  __m128i v87; // xmm0
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  void *v91; // [rsp+8h] [rbp-1A0h]
  __int64 v92; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v93; // [rsp+8h] [rbp-1A0h]
  __int64 v94; // [rsp+10h] [rbp-198h]
  unsigned __int64 *v95; // [rsp+10h] [rbp-198h]
  void *v96; // [rsp+10h] [rbp-198h]
  int v97; // [rsp+10h] [rbp-198h]
  unsigned __int64 v98; // [rsp+18h] [rbp-190h]
  int v99; // [rsp+18h] [rbp-190h]
  __int64 v100; // [rsp+18h] [rbp-190h]
  int *v102; // [rsp+30h] [rbp-178h]
  void **v103; // [rsp+30h] [rbp-178h]
  void *v104; // [rsp+30h] [rbp-178h]
  void *v105; // [rsp+30h] [rbp-178h]
  void **v106; // [rsp+30h] [rbp-178h]
  size_t na; // [rsp+38h] [rbp-170h]
  __int64 nc; // [rsp+38h] [rbp-170h]
  size_t nd; // [rsp+38h] [rbp-170h]
  size_t nb; // [rsp+38h] [rbp-170h]
  size_t v112; // [rsp+40h] [rbp-168h]
  size_t v113; // [rsp+40h] [rbp-168h]
  __int64 v114; // [rsp+40h] [rbp-168h]
  size_t v115; // [rsp+40h] [rbp-168h]
  char *v116; // [rsp+58h] [rbp-150h]
  __int64 v117; // [rsp+60h] [rbp-148h]
  _QWORD *v118; // [rsp+60h] [rbp-148h]
  void *v119; // [rsp+60h] [rbp-148h]
  __int64 v120; // [rsp+68h] [rbp-140h]
  __int64 v121; // [rsp+70h] [rbp-138h]
  __int64 v122; // [rsp+78h] [rbp-130h]
  void **v123; // [rsp+80h] [rbp-128h] BYREF
  __int128 v124; // [rsp+88h] [rbp-120h]
  __int64 v125; // [rsp+A0h] [rbp-108h] BYREF
  int v126; // [rsp+A8h] [rbp-100h] BYREF
  int *v127; // [rsp+B0h] [rbp-F8h]
  int *v128; // [rsp+B8h] [rbp-F0h]
  int *v129; // [rsp+C0h] [rbp-E8h]
  __int64 v130; // [rsp+C8h] [rbp-E0h]
  __int64 v131; // [rsp+D0h] [rbp-D8h] BYREF
  int v132; // [rsp+D8h] [rbp-D0h] BYREF
  _QWORD *v133; // [rsp+E0h] [rbp-C8h]
  int *v134; // [rsp+E8h] [rbp-C0h] BYREF
  int *v135; // [rsp+F0h] [rbp-B8h]
  __int64 v136; // [rsp+F8h] [rbp-B0h]
  void *src; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v138; // [rsp+108h] [rbp-A0h] BYREF
  char v139; // [rsp+118h] [rbp-90h]
  char v140; // [rsp+128h] [rbp-80h]
  void *v141[3]; // [rsp+130h] [rbp-78h] BYREF
  void **v142; // [rsp+148h] [rbp-60h]
  void **v143; // [rsp+150h] [rbp-58h]
  __int64 v144; // [rsp+158h] [rbp-50h]
  int v145; // [rsp+160h] [rbp-48h]
  unsigned __int64 v146; // [rsp+168h] [rbp-40h]

  v146 = __readfsqword(0x28u);
  v5 = a3[1];
  if ( v5 )
  {
    v128 = &v126;
    v129 = &v126;
    v134 = &v132;
    v135 = &v132;
    v126 = 0;
    v9 = (int *)*a3;
    v127 = nullptr;
    v130 = 0;
    v132 = 0;
    v133 = nullptr;
    v136 = 0;
    v112 = (size_t)&v9[10 * (_QWORD)v5];
    v102 = v9;
    if ( v9 != (int *)v112 )
    {
      while ( 1 )
      {
        v10 = *v102;
        v11 = *((_QWORD *)v102 + 2);
        v94 = v11 + 72LL * *((_QWORD *)v102 + 3);
        if ( v11 != v94 )
          break;
LABEL_16:
        v102 += 10;
        if ( (int *)v112 == v102 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)v11 == 4
          && (unsigned __int8)(((*(_BYTE *)(v11 + 64) >> 4) & 3) - 1) <= 1u
          && *(_BYTE *)(v11 + 28) != 1 )
        {
          v12 = *(unsigned __int64 **)(v11 + 32);
          v13 = &v12[*(_QWORD *)(v11 + 40)];
          if ( v12 != v13 )
            break;
        }
LABEL_15:
        v11 += 72;
        if ( v94 == v11 )
          goto LABEL_16;
      }
      v14 = *(unsigned __int64 **)(v11 + 32);
      while ( 1 )
      {
        v15 = a4[1];
        v16 = *v14;
        v17 = *a4;
        if ( a4[2] < (unsigned __int64)(v15 + 1) )
        {
          v98 = *v14;
          v18 = qvector_reserve(a4, v17, v15 + 1, 8);
          *a4 = v18;
          v17 = v18;
          v16 = v98;
          v15 = a4[1];
        }
        *(_QWORD *)(v17 + 8 * v15) = v16;
        ++a4[1];
        sub_634E0((__int64)v141, (__int64)a2, &v131, v16, v10);
        if ( (_BYTE)v142 )
          break;
        if ( v13 == ++v14 )
          goto LABEL_15;
      }
      v24 = _mm_loadu_si128((const __m128i *)&v141[1]);
      *(void **)a1 = v141[0];
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v24;
      goto LABEL_30;
    }
LABEL_17:
    v19 = (_QWORD *)a2[27];
    v20 = (unsigned __int64 *)v19[3];
    v21 = 2LL * v19[4];
    v95 = &v20[v21];
    if ( &v20[v21] != v20 )
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( v19[2] == *v20 )
        {
LABEL_26:
          v22 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)(a2[2] + 16LL) + 8LL))(
                  a2[2] + 16LL,
                  v22,
                  v20[1]);
          if ( v22 == -1 )
            goto LABEL_27;
        }
        else if ( v22 == -1 )
        {
          goto LABEL_27;
        }
        if ( v22 < v20[1] )
        {
          memset(v141, 0, sizeof(v141));
          for ( i = xrefblk_t_first_to(v141, v22, 2); ; i = xrefblk_t_next_to(v141) )
          {
            if ( !i )
              goto LABEL_26;
            if ( BYTE1(v141[2]) == 1
              && (~(**(unsigned __int16 (__fastcall ***)(__int64, void *))(a2[2] + 8LL))(a2[2] + 8LL, v141[0]) & 0x600) == 0 )
            {
              break;
            }
LABEL_24:
            ;
          }
          v25 = v127;
          if ( v127 )
          {
            v26 = &v126;
            do
            {
              while ( 1 )
              {
                v27 = *((_QWORD *)v25 + 2);
                v28 = *((_QWORD *)v25 + 3);
                if ( (void *)*((_QWORD *)v25 + 4) < v141[1] )
                  break;
                v26 = v25;
                v25 = *((int **)v25 + 2);
                if ( !v27 )
                  goto LABEL_36;
              }
              v25 = *((int **)v25 + 3);
            }
            while ( v28 );
LABEL_36:
            if ( v26 == &v126 || v141[1] < (void *)*((_QWORD *)v26 + 4) )
            {
LABEL_38:
              src = &v141[1];
              v26 = (int *)sub_631E0(&v125, v26, (__int64)&unk_78AE8, (unsigned __int64 **)&src);
            }
            v29 = *((_QWORD *)v26 + 6);
            v30 = v141[0];
            v31 = *((_QWORD *)v26 + 5);
            if ( *((_QWORD *)v26 + 7) < (unsigned __int64)(v29 + 1) )
            {
              v91 = v141[0];
              v32 = qvector_reserve(v26 + 10, v31, v29 + 1, 8);
              *((_QWORD *)v26 + 5) = v32;
              v31 = v32;
              v30 = v91;
              v29 = *((_QWORD *)v26 + 6);
            }
            *(_QWORD *)(v31 + 8 * v29) = v30;
            ++*((_QWORD *)v26 + 6);
            goto LABEL_24;
          }
          v26 = &v126;
          goto LABEL_38;
        }
LABEL_27:
        v20 += 2;
        if ( v95 == v20 )
          break;
        v19 = (_QWORD *)a2[27];
      }
    }
    v123 = nullptr;
    v124 = 0;
    if ( v130 )
    {
      v116 = (char *)*a3;
      v121 = (__int64)*a3 + 40 * (_QWORD)a3[1];
      if ( (void *)v121 != *a3 )
      {
        while ( 1 )
        {
          v33 = *((_QWORD *)v116 + 2);
          v99 = *(_DWORD *)v116;
          v92 = v33 + 72LL * *((_QWORD *)v116 + 3);
          if ( v92 != v33 )
            break;
LABEL_85:
          v116 += 40;
          if ( (char *)v121 == v116 )
            goto LABEL_86;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(v33 + 28) == 1 )
          {
            sub_2FE60((__int64)&src, *(_QWORD *)(v33 + 8), 0.0);
            v34 = v138.m128i_i64[0];
            if ( v140 )
            {
              v66 = _mm_loadh_ps((const double *)&v138.m128i_i64[1]);
              *(_QWORD *)a1 = src;
              *(_BYTE *)(a1 + 24) = 1;
              *(__m128 *)(a1 + 8) = v66;
              goto LABEL_105;
            }
            if ( v138.m128i_i64[0] )
            {
              v96 = (void *)qalloc_or_throw(16 * v138.m128i_i64[0]);
              memcpy(v96, src, 16 * v34);
              *(_OWORD *)&v141[1] = 0;
              v141[0] = (void *)qalloc_or_throw(16 * v34);
              v141[2] = (void *)v34;
              memcpy(v141[0], v96, 16 * v34);
              v141[1] = (void *)v34;
            }
            else
            {
              memset(v141, 0, sizeof(v141));
              v96 = nullptr;
            }
            v142 = nullptr;
            v144 = v33;
            v35 = *((_QWORD *)&v124 + 1);
            v145 = v99;
            LODWORD(v143) = -1;
            v103 = v123;
            if ( v141 < v123 || v141 >= &v123[7 * *((_QWORD *)&v124 + 1)] )
            {
              v38 = v124;
              if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
              {
                v41 = qvector_reserve(&v123, 0, v124 + 1, 56);
                v42 = *((_QWORD *)&v124 + 1);
                *((_QWORD *)&v124 + 1) = v35;
                v103 = (void **)v41;
                v117 = v42;
                v43 = v123;
                v44 = v124 - 1;
                if ( (__int64)v124 - 1 >= 0 )
                {
                  v45 = v41;
                  do
                  {
                    *(_QWORD *)v45 = 0;
                    *(_OWORD *)(v45 + 8) = 0;
                    v48 = v43[1];
                    if ( v48 )
                    {
                      nd = (size_t)v43[1];
                      v114 = 16LL * (_QWORD)v48;
                      v49 = (void *)qalloc_or_throw(16LL * (_QWORD)v48);
                      *(_QWORD *)v45 = v49;
                      *(_QWORD *)(v45 + 16) = nd;
                      memcpy(v49, *v43, v114);
                      *(_QWORD *)(v45 + 8) = nd;
                    }
                    *(_QWORD *)(v45 + 24) = 0;
                    *(_DWORD *)(v45 + 32) = -1;
                    *(_QWORD *)(v45 + 40) = v43[5];
                    *(_DWORD *)(v45 + 48) = *((_DWORD *)v43 + 12);
                    v46 = *v43;
                    if ( *v43 )
                    {
                      v43[1] = nullptr;
                      qfree(v46);
                    }
                    v43 += 7;
                    v45 += 56;
                    v47 = v44-- == 0;
                  }
                  while ( !v47 );
                  v43 = v123;
                }
                qfree(v43);
                v123 = v103;
                *((_QWORD *)&v124 + 1) = v117;
                v38 = v124;
              }
              v39 = (char *)&v103[7 * v38];
              *(_QWORD *)v39 = 0;
              *(_OWORD *)(v39 + 8) = 0;
              if ( v141[1] )
              {
                v105 = v141[1];
                nc = 16 * (__int64)v141[1];
                v40 = (void *)qalloc_or_throw(16 * (__int64)v141[1]);
                *(_QWORD *)v39 = v40;
                *((_QWORD *)v39 + 2) = v105;
                memcpy(v40, v141[0], nc);
                *((_QWORD *)v39 + 1) = v105;
              }
              *((_QWORD *)v39 + 5) = v33;
              *((_QWORD *)v39 + 3) = 0;
              *((_DWORD *)v39 + 8) = -1;
              *((_DWORD *)v39 + 12) = v99;
            }
            else
            {
              v104 = nullptr;
              na = (size_t)v141[1];
              if ( v141[1] )
              {
                v65 = 16 * (__int64)v141[1];
                v104 = (void *)qalloc_or_throw(16 * (__int64)v141[1]);
                memcpy(v104, v141[0], v65);
                v35 = *((_QWORD *)&v124 + 1);
              }
              v36 = v124;
              if ( v35 < (__int64)v124 + 1 )
              {
                v57 = qvector_reserve(&v123, 0, v124 + 1, 56);
                v58 = *((_QWORD *)&v124 + 1);
                *((_QWORD *)&v124 + 1) = v35;
                v113 = v57;
                v59 = v123;
                v122 = v58;
                v60 = v124 - 1;
                if ( (__int64)v124 - 1 >= 0 )
                {
                  v61 = v57;
                  do
                  {
                    *(_QWORD *)v61 = 0;
                    *(_OWORD *)(v61 + 8) = 0;
                    v63 = v59[1];
                    if ( v63 )
                    {
                      v119 = v59[1];
                      v120 = 16LL * (_QWORD)v63;
                      v64 = (void *)qalloc_or_throw(16LL * (_QWORD)v63);
                      *(_QWORD *)v61 = v64;
                      *(_QWORD *)(v61 + 16) = v119;
                      memcpy(v64, *v59, v120);
                      *(_QWORD *)(v61 + 8) = v119;
                    }
                    *(_QWORD *)(v61 + 24) = 0;
                    *(_DWORD *)(v61 + 32) = -1;
                    *(_QWORD *)(v61 + 40) = v59[5];
                    *(_DWORD *)(v61 + 48) = *((_DWORD *)v59 + 12);
                    v62 = *v59;
                    if ( *v59 )
                    {
                      v59[1] = nullptr;
                      qfree(v62);
                    }
                    v59 += 7;
                    v61 += 56;
                    v47 = v60-- == 0;
                  }
                  while ( !v47 );
                  v59 = v123;
                }
                qfree(v59);
                v123 = (void **)v113;
                *((_QWORD *)&v124 + 1) = v122;
                v36 = v124;
              }
              else
              {
                v113 = (size_t)v123;
              }
              v37 = (_QWORD *)(v113 + 56 * v36);
              *v37 = 0;
              *(_OWORD *)(v37 + 1) = 0;
              if ( na )
              {
                v118 = (_QWORD *)(v113 + 56 * v36);
                v56 = (void *)qalloc_or_throw(16 * na);
                *v118 = v56;
                v118[2] = na;
                memcpy(v56, v104, 16 * na);
                v37 = v118;
                v118[1] = na;
              }
              v37[3] = 0;
              *((_DWORD *)v37 + 8) = -1;
              *((_DWORD *)v37 + 12) = v99;
              v37[5] = v33;
              if ( v104 )
                qfree(v104);
            }
            *(_QWORD *)&v124 = v124 + 1;
            if ( v141[0] )
              qfree(v141[0]);
            if ( v96 )
              qfree(v96);
            if ( !v140 )
            {
              if ( !src )
                goto LABEL_47;
LABEL_68:
              v138.m128i_i64[0] = 0;
              qfree(src);
              goto LABEL_47;
            }
            if ( src )
              goto LABEL_68;
          }
LABEL_47:
          v33 += 72;
          if ( v33 == v92 )
            goto LABEL_85;
        }
      }
LABEL_86:
      v50 = (__int64)v128;
      LODWORD(v141[1]) = 0;
      v141[2] = nullptr;
      v142 = &v141[1];
      v143 = &v141[1];
      v144 = 0;
      if ( v128 != &v126 )
      {
        while ( 1 )
        {
          v93 = *(_QWORD *)(v50 + 32);
          v51 = *(_QWORD *)(v50 + 40);
          v100 = v51;
          nb = v51 + 8LL * *(_QWORD *)(v50 + 48);
          if ( nb != v51 )
            break;
LABEL_113:
          v50 = std::_Rb_tree_increment(v50);
          if ( (int *)v50 == &v126 )
            goto LABEL_114;
        }
        while ( 1 )
        {
          v52 = (unsigned __int64)v123;
          v53 = &v123[7 * v124];
          if ( v53 != v123 )
            break;
LABEL_112:
          v100 += 8;
          if ( nb == v100 )
            goto LABEL_113;
        }
        v97 = -1;
        v54 = 0;
        do
        {
          if ( *(_QWORD *)(v52 + 8) )
          {
            v115 = v52;
            range = rangeset_t_find_range(v52);
            v52 = v115;
            if ( range )
            {
              if ( v54 )
              {
                sub_64B50(
                  (unsigned int)&src,
                  a2[4],
                  (unsigned int)"populate_directly_referenced_try_continuations: %a found in handlers %a and %a",
                  v93,
                  *(_QWORD *)(v54 + 8),
                  *(_QWORD *)(*(_QWORD *)(v115 + 40) + 8LL));
                goto LABEL_135;
              }
              v54 = *(_QWORD *)(v115 + 40);
              v97 = *(_DWORD *)(v115 + 48);
            }
          }
          v52 += 56LL;
        }
        while ( (void **)v52 != v53 );
        if ( !v54 )
          goto LABEL_112;
        v76 = a4[1];
        v77 = *a4;
        if ( a4[2] < (unsigned __int64)(v76 + 1) )
        {
          v89 = qvector_reserve(a4, v77, v76 + 1, 8);
          *a4 = v89;
          v77 = v89;
          v76 = a4[1];
        }
        *(_QWORD *)(v77 + 8 * v76) = v93;
        ++a4[1];
        v78 = *(_QWORD *)(v54 + 40);
        v79 = *(_QWORD **)(v54 + 32);
        if ( *(_QWORD *)(v54 + 48) < (unsigned __int64)(v78 + 1) )
        {
          v88 = qvector_reserve(v54 + 32, v79, v78 + 1, 8);
          *(_QWORD *)(v54 + 32) = v88;
          v79 = (_QWORD *)v88;
          v78 = *(_QWORD *)(v54 + 40);
        }
        v80 = v93;
        v79[v78] = v93;
        *(_BYTE *)(v54 + 28) = 0;
        ++*(_QWORD *)(v54 + 40);
        v81 = (void **)v141[2];
        if ( v141[2] )
        {
          while ( 1 )
          {
            v82 = v81[4];
            v79 = v81[2];
            v80 = 0;
            v83 = (void **)v81[3];
            if ( v54 < (unsigned __int64)v82 )
            {
              v83 = (void **)v81[2];
              v80 = 1;
            }
            if ( !v83 )
              break;
            v81 = v83;
          }
          v84 = v81;
          if ( !(_BYTE)v80 )
          {
LABEL_130:
            if ( (unsigned __int64)v82 >= v54 )
            {
LABEL_134:
              sub_634E0((__int64)&src, (__int64)a2, &v131, v93, v97);
              if ( !v139 )
                goto LABEL_112;
LABEL_135:
              *(_QWORD *)a1 = src;
              v87 = _mm_loadu_si128(&v138);
              *(_BYTE *)(a1 + 24) = 1;
              *(__m128i *)(a1 + 8) = v87;
              sub_5F920((_QWORD *)v141[2]);
              goto LABEL_105;
            }
            goto LABEL_131;
          }
          v84 = v142;
          if ( v142 == v81 )
          {
LABEL_131:
            v85 = 1;
            if ( v84 != &v141[1] )
              v85 = v54 < (unsigned __int64)v84[4];
            goto LABEL_133;
          }
        }
        else
        {
          v84 = v142;
          if ( v142 == &v141[1] )
          {
            v85 = 1;
LABEL_133:
            v106 = v84;
            v86 = operator new(0x28u);
            *(_QWORD *)(v86 + 32) = v54;
            std::_Rb_tree_insert_and_rebalance(v85, v86, v106, &v141[1]);
            ++v144;
            goto LABEL_134;
          }
          v81 = &v141[1];
        }
        v90 = std::_Rb_tree_decrement(v81, v79, v84, v80, a5);
        v84 = v81;
        v82 = *(void **)(v90 + 32);
        goto LABEL_130;
      }
LABEL_114:
      sub_5F920((_QWORD *)v141[2]);
    }
    v72 = a2[27];
    sub_5FAF0(*(_QWORD **)(v72 + 296));
    v73 = v133;
    *(_QWORD *)(v72 + 296) = 0;
    *(_QWORD *)(v72 + 304) = v72 + 288;
    *(_QWORD *)(v72 + 312) = v72 + 288;
    *(_QWORD *)(v72 + 320) = 0;
    if ( v73 )
    {
      v74 = _mm_loadh_ps((const double *)&v134);
      *(_DWORD *)(v72 + 288) = v132;
      v75 = v135;
      *(__m128 *)(v72 + 296) = v74;
      *(_QWORD *)(v72 + 312) = v75;
      v73[1] = v72 + 288;
      v133 = nullptr;
      *(_QWORD *)(v72 + 320) = v136;
      v136 = 0;
      v134 = &v132;
      v135 = &v132;
    }
    *(_BYTE *)(a1 + 24) = 0;
LABEL_105:
    v67 = v123;
    if ( v123 )
    {
      v68 = v124;
      if ( (_QWORD)v124 )
      {
        v69 = 0;
        v70 = 0;
        do
        {
          v71 = v67[v69];
          if ( v71 )
          {
            v67[v69 + 1] = nullptr;
            qfree(v71);
            v67 = v123;
          }
          ++v70;
          v69 += 7;
        }
        while ( v68 != v70 );
      }
      *(_QWORD *)&v124 = 0;
      qfree(v67);
    }
LABEL_30:
    sub_5FAF0(v133);
    sub_5FCC0(v127);
    return a1;
  }
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
