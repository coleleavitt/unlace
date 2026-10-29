__int64 __fastcall sub_18660(
        __int64 *a1,
        _QWORD *a2,
        double a3,
        __m128i a4,
        __m128i a5,
        __m128i a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r14d
  __int128 v22; // xmm0
  char v23; // al
  char v24; // r13
  __int64 v25; // rdx
  __m128i v26; // xmm1
  __int128 v27; // xmm0
  int v28; // r14d
  const char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // xmm0_8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int128 v45; // xmm0
  __int128 v46; // xmm0
  __m128i v47; // xmm1
  __int128 v48; // xmm0
  const char *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int128 v53; // xmm0
  __int64 v54; // r8
  __int64 v55; // r9
  __m128i v56; // xmm1
  __int128 v57; // xmm0
  const char *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // xmm0_8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  char tinfo_property; // al
  __int64 tinfo_size; // rax
  int v74; // ecx
  int v75; // r12d
  const char *v76; // rax
  __int128 v77; // xmm0
  __int128 v78; // xmm0
  __m128i v79; // xmm1
  __int128 v80; // xmm0
  const char *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // xmm0_8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int8 (__fastcall *v90)(char **, const char *, __int64 *); // r14
  const char *v91; // rsi
  __int64 v92; // r13
  char *v93; // rsi
  int v94; // r14d
  __m128i v95; // xmm0
  char *v96; // r14
  __m128i v97; // xmm0
  __int128 v98; // xmm0
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  char *v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  char *v107; // rdx
  __int128 v108; // xmm0
  char *v109; // rdi
  __int128 v110; // xmm0
  char *v111; // rsi
  char *v112; // rdi
  int v113; // eax
  bool v114; // zf
  int v115; // eax
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  char *v120; // rdx
  __int128 v121; // xmm0
  char *v122; // rdi
  __int64 v123; // rdx
  __int64 v124; // r15
  __int64 v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rdi
  __int64 v128; // [rsp+20h] [rbp-170h]
  __int64 v129; // [rsp+28h] [rbp-168h]
  __m128i v130; // [rsp+30h] [rbp-160h] BYREF
  __int64 v131; // [rsp+40h] [rbp-150h] BYREF
  __int64 v132; // [rsp+48h] [rbp-148h] BYREF
  char *s1; // [rsp+50h] [rbp-140h] BYREF
  __int128 v134; // [rsp+58h] [rbp-138h]
  char *s2; // [rsp+70h] [rbp-120h] BYREF
  __m128i v136; // [rsp+78h] [rbp-118h]
  char *v137; // [rsp+90h] [rbp-100h] BYREF
  __m128i v138; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v139; // [rsp+A8h] [rbp-E8h]
  __int128 v140; // [rsp+B0h] [rbp-E0h]
  int v141; // [rsp+C0h] [rbp-D0h]
  char v142; // [rsp+C4h] [rbp-CCh]
  __m128i v143[4]; // [rsp+D0h] [rbp-C0h] BYREF
  __m128i v144; // [rsp+110h] [rbp-80h] BYREF
  __int128 v145; // [rsp+120h] [rbp-70h]
  __m128i v146; // [rsp+130h] [rbp-60h] BYREF
  __int128 v147; // [rsp+140h] [rbp-50h]
  unsigned __int64 v148; // [rsp+158h] [rbp-38h]

  v148 = __readfsqword(0x28u);
  v131 = 0;
  v14 = sub_BB20();
  v15 = sub_A170(v14);
  if ( (unsigned int)v15 > 0x2A )
  {
    if ( (_DWORD)v15 == 501 )
    {
      v23 = sub_11530(
              (__int64)&v131,
              (__int64)a2,
              v16,
              v17,
              v18,
              v19,
              (__int128)_mm_loadu_si128((const __m128i *)&a11),
              (__int128)_mm_loadu_si128((const __m128i *)&a12));
LABEL_7:
      v24 = v23;
      goto LABEL_8;
    }
LABEL_4:
    v20 = 2;
    goto LABEL_5;
  }
  if ( (unsigned int)v15 <= 1 )
    goto LABEL_4;
  switch ( v15 )
  {
    case 2LL:
    case 3LL:
    case 4LL:
      v22 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v23 = sub_12350(
              (char *)&v131,
              (__int64)a2,
              *(double *)&v22,
              a4,
              v16,
              v17,
              v18,
              v19,
              (__int128)_mm_loadu_si128((const __m128i *)&a11),
              v22);
      goto LABEL_7;
    case 5LL:
      v56 = _mm_loadu_si128((const __m128i *)&a11);
      v57 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v143[2] = v56;
      v143[3] = (__m128i)v57;
      if ( (*((_BYTE *)a2 + 108) & 2) != 0 )
      {
        sub_10160((__int64)&v137, (__int64)a2, v16, v17, v18, v19, (__int128)v56, v57);
        v58 = ::s1;
        if ( v138.m128i_i64[0] )
          v58 = v137;
        sub_7470((__int64)"%-12s %s\n", "enum", v58);
        if ( v137 )
        {
          v138.m128i_i64[0] = 0;
          qfree(v137);
        }
      }
      v59 = sub_BB20();
      sub_A290((__int64)&v146, v59, v60, v61);
      v132 = 0;
      v62 = sub_BB20();
      sub_AA10((__int64)v143, v62, v63, v64);
      v65 = _mm_load_si128(v143).m128i_u64[0];
      if ( (unsigned __int8)sub_138E0(&v132, (const char *)a2, v66, v67, v68, v69, *(double *)&v65, v56, a5, a6, v65)
        && (tinfo_property = get_tinfo_property(v132, 2), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8 )
      {
        tinfo_size = get_tinfo_size(0, v132, 0);
        v74 = 0;
        while ( 1LL << v74 != tinfo_size )
        {
          if ( ++v74 == 7 )
            goto LABEL_38;
        }
        if ( v74 > 3 )
        {
LABEL_38:
          v75 = tinfo_size;
          v76 = (const char *)dstr_tinfo(&v132);
          sub_67C0(a2 + 10, (__int64)"bad enum type: %s, size=%d", v76, v75);
          ++a2[17];
          clear_tinfo_t(&v132);
          goto LABEL_18;
        }
        v137 = nullptr;
        v113 = 1 << v74;
        v142 = 0x80;
        v138 = 0;
        v139 = 0;
        v141 = 0;
        v140 = 0;
        if ( (v113 & (v113 - 1)) == 0 )
          v142 = (log2ceil(v113, 1) + 1) | v142 & 0xF8;
        v114 = (unsigned int)get_tinfo_property(v132, 3) == 1;
        v115 = 64;
        if ( v114 )
          v115 = 128;
        v141 |= v115;
        sub_C420((__int64)&s1);
        s2 = (char *)a2;
        v136.m128i_i64[0] = (__int64)&v137;
        v136.m128i_i8[8] = 1;
        v116 = sub_BB20();
        if ( (unsigned int)sub_A020(v116, (__int64)sub_10FF0, (__int64)&s2) )
        {
          v24 = 0;
        }
        else
        {
          if ( (v142 & 0x10) != 0 )
          {
            v142 &= ~0x10u;
            create_tinfo(&v131, 45, 45, &v137);
            set_tinfo_property4(&v131, 18, 2, 0, 0, 0);
          }
          else
          {
            create_tinfo(&v131, 45, 45, &v137);
          }
          v120 = (char *)::s1;
          if ( (_QWORD)v134 )
            v120 = s1;
          v121 = (__int128)_mm_load_si128(&v146);
          v24 = sub_EE80(&v131, a2, v120, v117, v118, v119, *(double *)&v121, v56, v121, v147);
        }
        if ( s1 )
        {
          *(_QWORD *)&v134 = 0;
          qfree(s1);
        }
        if ( v139 )
        {
          *(_QWORD *)&v140 = 0;
          qfree(v139);
        }
        v122 = v137;
        if ( v137 )
        {
          v123 = 0;
          v124 = 0;
          v129 = v138.m128i_i64[0];
          if ( v138.m128i_i64[0] )
          {
            do
            {
              v125 = (__int64)&v122[v123];
              v126 = *(_QWORD *)&v122[v123 + 24];
              v130.m128i_i64[0] = v125;
              if ( v126 )
              {
                *(_QWORD *)(v125 + 32) = 0;
                v128 = v123;
                qfree(v126);
                v123 = v128;
              }
              v127 = *(_QWORD *)v130.m128i_i64[0];
              if ( *(_QWORD *)v130.m128i_i64[0] )
              {
                *(_QWORD *)(v130.m128i_i64[0] + 8) = 0;
                v130.m128i_i64[0] = v123;
                qfree(v127);
                v123 = v130.m128i_i64[0];
              }
              v122 = v137;
              ++v124;
              v123 += 56;
            }
            while ( v129 != v124 );
          }
          v138.m128i_i64[0] = 0;
          qfree(v122);
        }
      }
      else
      {
        v77 = (__int128)_mm_load_si128(&v146);
        v24 = sub_FFD0(0, &v131, 45, a2, v70, v71, *(double *)&v77, v56, v77, v147);
      }
      clear_tinfo_t(&v132);
      goto LABEL_8;
    case 8LL:
      v78 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v23 = sub_17F40(
              &v131,
              (__int64)a2,
              v16,
              v17,
              v18,
              v19,
              *(double *)&v78,
              a4,
              a5,
              a6,
              (__int128)_mm_loadu_si128((const __m128i *)&a11),
              v78);
      goto LABEL_7;
    case 9LL:
      v79 = _mm_loadu_si128((const __m128i *)&a11);
      v80 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v144 = v79;
      v145 = v80;
      if ( (*((_BYTE *)a2 + 108) & 2) != 0 )
      {
        sub_10160((__int64)&v137, (__int64)a2, v16, v17, v18, v19, (__int128)v79, v80);
        v81 = ::s1;
        if ( v138.m128i_i64[0] )
          v81 = v137;
        sub_7470((__int64)"%-12s %s\n", "var", v81);
        if ( v137 )
        {
          v138.m128i_i64[0] = 0;
          qfree(v137);
        }
      }
      v82 = sub_BB20();
      sub_A290((__int64)&v146, v82, v83, v84);
      v85 = _mm_load_si128(&v146).m128i_u64[0];
      if ( !(unsigned __int8)sub_138E0(&v131, (const char *)a2, v86, v87, v88, v89, *(double *)&v85, v79, a5, a6, v85) )
        goto LABEL_18;
      v90 = (unsigned __int8 (__fastcall *)(char **, const char *, __int64 *))a2[20];
      s2 = nullptr;
      v136 = 0;
      if ( !v90 )
        goto LABEL_64;
      sub_C260((__int64)&v137);
      v91 = ::s1;
      if ( v138.m128i_i64[0] )
        v91 = v137;
      if ( v90(&s2, v91, &v131) )
      {
        if ( v137 )
        {
          v138.m128i_i64[0] = 0;
          qfree(v137);
          v92 = v136.m128i_i64[0];
          goto LABEL_54;
        }
LABEL_67:
        v92 = v136.m128i_i64[0];
        goto LABEL_54;
      }
      if ( v137 )
      {
        v138.m128i_i64[0] = 0;
        qfree(v137);
      }
LABEL_64:
      sub_C6E0((__int64)&v137);
      v95 = _mm_loadu_si128(&v138);
      v96 = v137;
      v138 = 0;
      v137 = nullptr;
      v92 = v95.m128i_i64[0];
      if ( s2 )
      {
        v130 = v95;
        v136.m128i_i64[0] = 0;
        qfree(s2);
        v97 = _mm_load_si128(&v130);
        s2 = v96;
        v136 = v97;
        if ( !v137 )
          goto LABEL_54;
        v138.m128i_i64[0] = 0;
        qfree(v137);
        goto LABEL_67;
      }
      s2 = v96;
      v136 = v95;
LABEL_54:
      v93 = (char *)::s1;
      if ( v92 )
        v93 = s2;
      v94 = sub_EB50(&v131, v93, a2, 0, nullptr);
      if ( s2 )
      {
        v136.m128i_i64[0] = 0;
        qfree(s2);
      }
      if ( v94 )
        goto LABEL_18;
      goto LABEL_9;
    case 11LL:
      v46 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v23 = sub_11880(
              (char *)&v131,
              (__int64)a2,
              v16,
              v17,
              v18,
              v19,
              *(double *)&v46,
              a4,
              (__int128)_mm_loadu_si128((const __m128i *)&a11),
              v46);
      goto LABEL_7;
    case 12LL:
      v45 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v23 = sub_11FB0(
              (char *)&v131,
              (__int64)a2,
              v16,
              v17,
              v18,
              v19,
              *(double *)&v45,
              a4,
              (__int128)_mm_loadu_si128((const __m128i *)&a11),
              v45);
      goto LABEL_7;
    case 20LL:
    case 36LL:
      v26 = _mm_loadu_si128((const __m128i *)&a11);
      v27 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v28 = a11;
      v143[0] = v26;
      v143[1] = (__m128i)v27;
      if ( (*((_BYTE *)a2 + 108) & 2) != 0 )
      {
        sub_10160((__int64)&v137, (__int64)a2, v16, v17, v18, v19, (__int128)v26, v27);
        v29 = ::s1;
        if ( v138.m128i_i64[0] )
          v29 = v137;
        sub_7470((__int64)"%-12s %s\n", "typedef", v29);
        if ( v137 )
        {
          v138.m128i_i64[0] = 0;
          qfree(v137);
        }
      }
      v30 = sub_BB20();
      sub_A290((__int64)&v144, v30, v31, v32);
      v33 = sub_BB20();
      sub_A4A0((__int64)&v146, v33, v34, v35);
      v36 = _mm_load_si128(&v146).m128i_u64[0];
      v24 = sub_138E0(&v131, (const char *)a2, v37, v38, v39, v40, *(double *)&v36, v26, a5, a6, v36);
      if ( !v24 )
        goto LABEL_18;
      s1 = nullptr;
      v134 = 0;
      v136 = 0;
      v98 = (__int128)_mm_load_si128(&v144);
      s2 = nullptr;
      if ( !(unsigned __int8)sub_D270((__int64)&s1, *(double *)&v98, v26, (__int64)a2, v41, v42, v43, v44, v98, v145) )
        goto LABEL_69;
      v110 = (__int128)_mm_load_si128(&v146);
      if ( !(unsigned __int8)sub_D270(
                               (__int64)&s2,
                               *(double *)&v110,
                               v26,
                               (__int64)a2,
                               v99,
                               v100,
                               v101,
                               v102,
                               v110,
                               v147) )
        goto LABEL_69;
      if ( v136.m128i_i64[0] )
      {
        v111 = s2;
        v112 = (char *)::s1;
        if ( !(_QWORD)v134 )
          goto LABEL_85;
      }
      else
      {
        v111 = (char *)::s1;
        if ( !(_QWORD)v134 )
          goto LABEL_86;
      }
      v112 = s1;
LABEL_85:
      if ( !strcmp(v112, v111) )
        goto LABEL_86;
LABEL_69:
      if ( v28 != 36 )
        goto LABEL_73;
      v103 = (char *)::s1;
      if ( (_QWORD)v134 )
        v103 = s1;
      if ( !(unsigned int)get_named_type(*a2, v103, 1, 0, 0, 0, 0, 0, 0) )
      {
LABEL_73:
        sub_C420((__int64)&v137);
        v107 = nullptr;
        if ( v138.m128i_i64[0] > 1uLL )
          v107 = v137;
        v108 = (__int128)_mm_load_si128(&v144);
        v24 = sub_EE80(&v131, a2, v107, v104, v105, v106, *(double *)&v108, v26, v108, v145);
        if ( v137 )
        {
          v138.m128i_i64[0] = 0;
          qfree(v137);
        }
        if ( s2 )
        {
          v136.m128i_i64[0] = 0;
          qfree(s2);
        }
        v109 = s1;
        if ( s1 )
          goto LABEL_80;
LABEL_8:
        if ( !v24 )
        {
LABEL_18:
          v20 = 1;
          goto LABEL_5;
        }
        goto LABEL_9;
      }
LABEL_86:
      if ( !s2 )
      {
        if ( s1 )
        {
          *(_QWORD *)&v134 = 0;
          qfree(s1);
        }
        goto LABEL_9;
      }
      v136.m128i_i64[0] = 0;
      qfree(s2);
      v109 = s1;
      if ( s1 )
      {
LABEL_80:
        *(_QWORD *)&v134 = 0;
        qfree(v109);
        goto LABEL_8;
      }
LABEL_9:
      if ( a1 )
      {
        v25 = v131;
        v131 = *a1;
        *a1 = v25;
      }
      v20 = 0;
LABEL_5:
      clear_tinfo_t(&v131);
      return v20;
    case 42LL:
      v47 = _mm_loadu_si128((const __m128i *)&a11);
      v48 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      v146 = v47;
      v147 = v48;
      if ( (*((_BYTE *)a2 + 108) & 2) != 0 )
      {
        sub_10160((__int64)&v137, (__int64)a2, v16, v17, v18, v19, (__int128)v47, v48);
        v49 = ::s1;
        if ( v138.m128i_i64[0] )
          v49 = v137;
        sub_7470((__int64)"%-12s %s\n", "@class", v49);
        if ( v137 )
        {
          v138.m128i_i64[0] = 0;
          qfree(v137);
        }
      }
      v50 = sub_BB20();
      sub_A290((__int64)&v144, v50, v51, v52);
      v53 = (__int128)_mm_load_si128(&v144);
      v23 = sub_FFD0(0, &v131, 13, a2, v54, v55, *(double *)&v53, v47, v53, v145);
      goto LABEL_7;
    default:
      goto LABEL_4;
  }
}

