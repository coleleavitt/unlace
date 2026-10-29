__int64 __fastcall sub_1BFB0(
        int a1,
        const char *a2,
        double a3,
        double a4,
        __m128i a5,
        __m128i a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __int128 a12)
{
  const char *v12; // rax
  _QWORD *v13; // r12
  const char *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rbx
  __m128i v21; // xmm1
  __int128 v22; // xmm0
  int v23; // eax
  char v24; // dl
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rbx
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  const char *v43; // r15
  const char *v44; // rdx
  __int64 idati; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // rbx
  const char *v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // r15
  _QWORD *v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rdi
  unsigned int v64; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  const char *v70; // rdx
  unsigned __int8 v71; // al
  size_t v72; // rax
  size_t v73; // r13
  size_t v74; // r15
  _QWORD *v75; // rax
  unsigned __int64 v76; // rdx
  char *v77; // rax
  const char *v78; // r14
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // ecx
  __int64 v82; // rsi
  __int64 *v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // r12
  __int64 v86; // r14
  _QWORD *v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // xmm0_8
  const char *v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int128 v104; // xmm0
  __int64 v105; // rax
  __int64 *v106; // rbx
  const char *v107; // rdx
  __m128i v108; // [rsp+40h] [rbp-210h] BYREF
  __int64 *v109; // [rsp+50h] [rbp-200h]
  const char *v110; // [rsp+58h] [rbp-1F8h]
  __int64 v111; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v112; // [rsp+68h] [rbp-1E8h] BYREF
  __int64 v113; // [rsp+70h] [rbp-1E0h] BYREF
  __int64 v114; // [rsp+78h] [rbp-1D8h] BYREF
  const char *v115; // [rsp+80h] [rbp-1D0h] BYREF
  __int64 v116; // [rsp+88h] [rbp-1C8h]
  __int64 v117; // [rsp+90h] [rbp-1C0h]
  __int128 v118; // [rsp+A0h] [rbp-1B0h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-1A0h] BYREF
  int v120; // [rsp+B8h] [rbp-198h]
  __int16 v121; // [rsp+BCh] [rbp-194h]
  const char *v122; // [rsp+C0h] [rbp-190h] BYREF
  __m128i v123; // [rsp+C8h] [rbp-188h] BYREF
  __int64 v124; // [rsp+D8h] [rbp-178h]
  __int64 v125; // [rsp+E0h] [rbp-170h] BYREF
  __int64 v126; // [rsp+E8h] [rbp-168h] BYREF
  __int128 v127; // [rsp+F0h] [rbp-160h]
  __int64 v128; // [rsp+100h] [rbp-150h]
  __int128 v129; // [rsp+108h] [rbp-148h]
  char v130; // [rsp+118h] [rbp-138h]
  __int128 v131; // [rsp+120h] [rbp-130h] BYREF
  _QWORD *v132; // [rsp+130h] [rbp-120h] BYREF
  __m128i v133; // [rsp+138h] [rbp-118h]
  __int64 v134; // [rsp+148h] [rbp-108h]
  __int128 v135; // [rsp+150h] [rbp-100h]
  _OWORD v136[3]; // [rsp+160h] [rbp-F0h] BYREF
  __int64 v137; // [rsp+190h] [rbp-C0h]
  int v138; // [rsp+198h] [rbp-B8h]
  __int64 v139; // [rsp+1A0h] [rbp-B0h]
  char v140; // [rsp+1A8h] [rbp-A8h]
  __m128i v141; // [rsp+1B0h] [rbp-A0h] BYREF
  __int64 v142; // [rsp+1C0h] [rbp-90h]
  __m128i v143; // [rsp+1D0h] [rbp-80h] BYREF
  __int128 v144; // [rsp+1F0h] [rbp-60h] BYREF
  __m128i v145; // [rsp+200h] [rbp-50h] BYREF
  unsigned __int64 v146; // [rsp+218h] [rbp-38h]

  v12 = *(const char **)a2;
  v146 = __readfsqword(0x28u);
  v13 = *((_QWORD **)a2 + 1);
  v110 = v12;
  switch ( a1 )
  {
    case 0:
      v14 = "vcall";
      goto LABEL_3;
    case 1:
      v14 = "vbase";
      if ( (v110[108] & 2) != 0 )
        goto LABEL_53;
      goto LABEL_4;
    case 2:
      v14 = "this";
      goto LABEL_3;
    case 3:
      v14 = "rtti";
      goto LABEL_3;
    case 4:
      v14 = "func";
      goto LABEL_3;
    case 5:
      v14 = "unused";
      goto LABEL_3;
    case 6:
      v14 = "dtor";
      goto LABEL_3;
    case 7:
      v14 = "delete";
LABEL_3:
      if ( (v110[108] & 2) != 0 )
      {
LABEL_53:
        v123 = 0;
        v122 = nullptr;
        sub_67C0((__int64 *)&v122, (__int64)"vtbl-%s", v14);
        sub_10160(
          (__int64)&v131,
          (__int64)"vtbl-%s",
          v66,
          v67,
          v68,
          v69,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          (__int128)_mm_loadu_si128((const __m128i *)&a12));
        v70 = s1;
        if ( *((_QWORD *)&v131 + 1) )
          v70 = (const char *)v131;
        a2 = s1;
        if ( v123.m128i_i64[0] )
          a2 = v122;
        sub_7470((__int64)"%-12s %s\n", a2, v70);
        if ( (_QWORD)v131 )
        {
          *((_QWORD *)&v131 + 1) = 0;
          qfree(v131);
        }
        if ( v122 )
        {
          v123.m128i_i64[0] = 0;
          qfree(v122);
        }
      }
LABEL_4:
      v132 = nullptr;
      v134 = 0;
      v137 = 1;
      v138 = -1;
      v139 = 0;
      v140 = 0;
      v131 = 0;
      v133 = 0;
      v135 = 0;
      v136[0] = 0;
      if ( a1 == 3 )
      {
        v72 = strlen(v14);
        v73 = v72 + 1;
        v74 = v72;
        v75 = (_QWORD *)qvector_reserve(&v132, 0, v72 + 1, 1);
        v132 = v75;
        v133.m128i_i64[0] = v73;
        if ( (unsigned int)v74 >= 8 )
        {
          *v75 = *(_QWORD *)v14;
          *(_QWORD *)((char *)v75 + (unsigned int)v74 - 8) = *(_QWORD *)&v14[(unsigned int)v74 - 8];
          v76 = (unsigned __int64)(v75 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v77 = (char *)v75 - v76;
          v78 = (const char *)(v14 - v77);
          v79 = (v74 + (_DWORD)v77) & 0xFFFFFFF8;
          if ( v79 >= 8 )
          {
            v80 = v79 & 0xFFFFFFF8;
            v81 = 0;
            do
            {
              v82 = v81;
              v81 += 8;
              *(_QWORD *)(v76 + v82) = *(_QWORD *)&v78[v82];
            }
            while ( v81 < v80 );
          }
        }
        else if ( (v74 & 4) != 0 )
        {
          *(_DWORD *)v75 = *(_DWORD *)v14;
          *(_DWORD *)((char *)v75 + (unsigned int)v74 - 4) = *(_DWORD *)&v14[(unsigned int)v74 - 4];
        }
        else if ( (_DWORD)v74 )
        {
          *(_BYTE *)v75 = *v14;
          if ( (v74 & 2) != 0 )
            *(_WORD *)((char *)v75 + (unsigned int)v74 - 2) = *(_WORD *)&v14[(unsigned int)v74 - 2];
        }
        *((_BYTE *)v132 + v74) = 0;
        get_stock_tinfo(v136, 7);
        sub_1BB70(v13 + 14, (__int64)&v131);
        goto LABEL_69;
      }
      if ( (unsigned int)(a1 - 4) > 3 )
      {
        sub_67C0((__int64 *)&v132, (__int64)"%sOffset", v14);
        v71 = getinf_flag(3, 4);
        create_tinfo(v136, (unsigned int)v71 + 4, 7, 0);
        sub_1BB70(v13 + 14, (__int64)&v131);
        if ( a1 == 2 )
        {
          v105 = sub_BB20();
          v13[40] = sub_B580(v105);
        }
        goto LABEL_69;
      }
      sub_C260((__int64)&v122);
      v19 = (__int64)v132;
      v20 = (__int64)v122;
      v21 = _mm_loadu_si128(&v123);
      v122 = nullptr;
      v123 = 0;
      if ( v132 )
      {
        v108 = v21;
        v133.m128i_i64[0] = 0;
        qfree(v132);
        v21 = _mm_load_si128(&v108);
        v19 = (__int64)v122;
        v132 = (_QWORD *)v20;
        v133 = v21;
        if ( v122 )
        {
          v123.m128i_i64[0] = 0;
          qfree(v122);
        }
      }
      else
      {
        v132 = (_QWORD *)v20;
        v133 = v21;
      }
      v122 = nullptr;
      v123 = 0;
      v127 = 0;
      v129 = 0;
      v22 = (__int128)_mm_loadu_si128((const __m128i *)&a11);
      v124 = 0;
      v125 = 0;
      v126 = 0;
      v128 = 0;
      v130 = 16;
      v23 = sub_CB90(v19, (int)a2, v15, v16, v17, v18, v22, (__int128)_mm_loadu_si128((const __m128i *)&a12));
      v24 = v130 & 0xF;
      if ( (v23 & 0xFFFFFF0F) != 0 || v23 == 192 )
      {
        v25 = v24 | 0xC0;
      }
      else
      {
        v25 = v23 | v24;
        v23 = 0;
      }
      v130 = v25;
      v26 = v123.m128i_i64[0];
      HIDWORD(v124) = v23;
      v27 = (__int64)v122;
      if ( v123.m128i_i64[1] < (unsigned __int64)(v123.m128i_i64[0] + 1) )
      {
        v122 = (const char *)qvector_reserve(&v122, v122, v123.m128i_i64[0] + 1, 80);
        v26 = v123.m128i_i64[0];
        v27 = (__int64)v122;
      }
      v28 = v27 + 80 * v26;
      *(_DWORD *)v28 = 0;
      *(_QWORD *)(v28 + 8) = 0;
      *(_QWORD *)(v28 + 16) = 0;
      *(_QWORD *)(v28 + 40) = 0;
      *(_QWORD *)(v28 + 64) = 0;
      *(_DWORD *)(v28 + 72) = 0;
      *(_OWORD *)(v28 + 24) = 0;
      *(_OWORD *)(v28 + 48) = 0;
      ++v123.m128i_i64[0];
      v29 = (_DWORD *)qvector_reserve(v28 + 16, 0, 5, 1);
      *(_QWORD *)(v28 + 16) = v29;
      *(_QWORD *)(v28 + 24) = 5;
      *v29 = 1936287860;
      v30 = *(_QWORD *)(v28 + 16);
      v117 = 0;
      *(_BYTE *)(v30 + 4) = 0;
      *(_DWORD *)(v28 + 72) |= 1u;
      v31 = sub_BB20();
      sub_B370((__int64)&v144, v31, v32, v33);
      v115 = nullptr;
      v116 = 0;
      v38 = sub_CCA0((__int64)&v115, v31, v34, v35, v36, v37, _mm_load_si128(&v145), v21);
      v43 = v115;
      if ( !v38 )
      {
        v106 = (__int64 *)(v110 + 80);
        sub_10160(
          (__int64)&v118,
          v31,
          v39,
          v40,
          v41,
          v42,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          (__int128)_mm_loadu_si128((const __m128i *)&a12));
        v107 = s1;
        if ( *((_QWORD *)&v118 + 1) )
          v107 = (const char *)v118;
        sub_67C0(v106, (__int64)"failed to find parent type for %s", v107);
        if ( (_QWORD)v118 )
        {
          *((_QWORD *)&v118 + 1) = 0;
          qfree(v118);
        }
        ++*((_QWORD *)v110 + 17);
        goto LABEL_33;
      }
      v44 = s1;
      v111 = 0;
      if ( v116 )
        v44 = v115;
      if ( !v44 )
      {
        v108.m128i_i64[0] = (__int64)&v111;
LABEL_83:
        copy_tinfo_t(v108.m128i_i64[0], *v13);
        goto LABEL_21;
      }
      idati = *(_QWORD *)v110;
      LOWORD(v119) = 256;
      *((_QWORD *)&v118 + 1) = v44;
      if ( !idati )
      {
        v108.m128i_i64[0] = (__int64)&v111;
        idati = get_idati();
      }
      *(_QWORD *)&v118 = idati;
      v108.m128i_i64[0] = (__int64)&v111;
      if ( !(unsigned __int8)create_tinfo(&v111, 61, 61, &v118) )
        goto LABEL_83;
LABEL_21:
      v46 = sub_BB20();
      if ( (unsigned int)sub_B220(v46) && (_BYTE)v111 )
        v111 |= 0x40uLL;
      v114 = 0;
      v113 = 0;
      v118 = 0;
      copy_tinfo_t((char *)&v118 + 8, &v113);
      v119 = 0;
      v109 = &v114;
      copy_tinfo_t(&v119, &v114);
      v120 = 0;
      v121 = 0;
      clear_tinfo_t(&v113);
      clear_tinfo_t(v109);
      copy_tinfo_t(&v118, v108.m128i_i64[0]);
      create_tinfo(v28 + 64, 10, 10, &v118);
      clear_tinfo_t(&v119);
      clear_tinfo_t((char *)&v118 + 8);
      clear_tinfo_t(&v118);
      v47 = sub_BB20();
      sub_A290((__int64)&v141, v47, v48, v49);
      v50 = sub_BB20();
      v51 = sub_A170(v50);
      if ( v51 == 25 )
      {
        create_tinfo(&v125, 1, 7, 0);
LABEL_85:
        v110 = (const char *)&v112;
        v112 = 0;
        if ( (unsigned __int8)create_tinfo(&v112, 12, 12, &v122) )
        {
          v114 = 0;
          v113 = 0;
          v118 = 0;
          copy_tinfo_t((char *)&v118 + 8, &v113);
          v83 = v109;
          v119 = 0;
          copy_tinfo_t(&v119, v109);
          v120 = 0;
          v121 = 0;
          clear_tinfo_t(&v113);
          clear_tinfo_t(v83);
          copy_tinfo_t(&v118, v110);
          create_tinfo(v136, 10, 10, &v118);
          clear_tinfo_t(&v119);
          clear_tinfo_t((char *)&v118 + 8);
          clear_tinfo_t(&v118);
        }
        sub_1BB70(v13 + 14, (__int64)&v131);
        if ( !v13[40] )
          sub_1BB70(v13 + 27, (__int64)&v131);
        clear_tinfo_t(v110);
        clear_tinfo_t(v108.m128i_i64[0]);
        if ( v43 )
          qfree(v43);
        if ( v128 )
        {
          *(_QWORD *)&v129 = 0;
          qfree(v128);
        }
        cleanup_argloc(&v126);
        clear_tinfo_t(&v125);
        v84 = (__int64)v122;
        if ( v122 )
        {
          v85 = v123.m128i_i64[0];
          if ( v123.m128i_i64[0] )
          {
            v86 = 0;
            do
            {
              v87 = (_QWORD *)(v84 + 80 * v86);
              clear_tinfo_t(v87 + 8);
              v88 = v87[5];
              if ( v88 )
              {
                v87[6] = 0;
                qfree(v88);
              }
              v89 = v87[2];
              if ( v89 )
              {
                v87[3] = 0;
                qfree(v89);
              }
              cleanup_argloc(v87);
              v84 = (__int64)v122;
              ++v86;
            }
            while ( v85 != v86 );
          }
          v123.m128i_i64[0] = 0;
          qfree(v84);
        }
LABEL_69:
        v64 = 1;
        goto LABEL_47;
      }
      if ( v51 != 26 && v51 != 21 )
      {
        v56 = (__int64 *)(v110 + 80);
        sub_10160(
          (__int64)&v118,
          v47,
          v52,
          v53,
          v54,
          v55,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          (__int128)_mm_loadu_si128((const __m128i *)&a12));
        v57 = s1;
        if ( *((_QWORD *)&v118 + 1) )
          v57 = (const char *)v118;
        sub_67C0(v56, (__int64)"unexpected cursor in vtable: %s", v57);
        if ( (_QWORD)v118 )
        {
          *((_QWORD *)&v118 + 1) = 0;
          qfree(v118);
        }
        ++*((_QWORD *)v110 + 17);
        goto LABEL_32;
      }
      v90 = sub_BB20();
      sub_A830((__int64)&v143, v90, v91, v92, v93, v94, (__int128)_mm_load_si128(&v141), v142);
      v95 = _mm_load_si128(&v143).m128i_u64[0];
      v96 = v110;
      if ( (unsigned __int8)sub_138E0(&v125, v110, v97, v98, v99, v100, *(double *)&v95, v21, a5, a6, v95) )
      {
        v104 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
        if ( (unsigned __int8)sub_15ED0(
                                (__int64 *)&v122,
                                (__int64)v96,
                                1,
                                *(double *)&v104,
                                *(double *)v21.m128i_i64,
                                a5,
                                a6,
                                v101,
                                v102,
                                v103,
                                (__int128)_mm_loadu_si128((const __m128i *)&a11),
                                v104) )
          goto LABEL_85;
      }
LABEL_32:
      clear_tinfo_t(v108.m128i_i64[0]);
LABEL_33:
      if ( v43 )
        qfree(v43);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree(v128);
      }
      cleanup_argloc(&v126);
      clear_tinfo_t(&v125);
      v58 = (__int64)v122;
      if ( v122 )
      {
        v59 = v123.m128i_i64[0];
        if ( v123.m128i_i64[0] )
        {
          v60 = 0;
          do
          {
            v61 = (_QWORD *)(v58 + 80 * v60);
            clear_tinfo_t(v61 + 8);
            v62 = v61[5];
            if ( v62 )
            {
              v61[6] = 0;
              qfree(v62);
            }
            v63 = v61[2];
            if ( v63 )
            {
              v61[3] = 0;
              qfree(v63);
            }
            cleanup_argloc(v61);
            v58 = (__int64)v122;
            ++v60;
          }
          while ( v59 != v60 );
        }
        v123.m128i_i64[0] = 0;
        qfree(v58);
      }
      v64 = 0;
LABEL_47:
      clear_tinfo_t(v136);
      if ( v134 )
      {
        *(_QWORD *)&v135 = 0;
        qfree(v134);
      }
      if ( v132 )
      {
        v133.m128i_i64[0] = 0;
        qfree(v132);
      }
      return v64;
    default:
      if ( !under_debugger )
        interr(30613);
      BUG();
  }
}

