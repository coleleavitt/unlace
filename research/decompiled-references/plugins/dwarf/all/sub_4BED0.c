unsigned __int64 __fastcall sub_4BED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v11; // r15
  __int64 v13; // rdx
  const char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  size_t v22; // r8
  int tinfo_property; // eax
  _QWORD *v24; // r8
  size_t v25; // rdi
  char *v26; // r9
  size_t v27; // r10
  size_t v28; // r14
  __int64 v29; // r14
  unsigned __int32 v30; // eax
  __int64 v31; // rax
  __int64 v32; // r14
  size_t v33; // rax
  const void *v34; // r9
  size_t v35; // r8
  __int64 v36; // r9
  __m128i *v37; // r14
  __int64 v38; // rdx
  void **v39; // rdi
  char *v40; // r14
  char *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r14
  unsigned int v47; // eax
  __int64 idati; // rax
  int v49; // eax
  __int64 v50; // r12
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 tinfo_size; // r10
  const char *numbered_type_name; // rax
  size_t v56; // rax
  const char *v57; // r8
  void *v58; // r10
  size_t v59; // r9
  void *v60; // rdi
  void *v61; // rdx
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rsi
  __m128i v68; // xmm0
  __int64 v69; // rdi
  void *v71; // rdi
  size_t v72; // rdx
  unsigned __int64 v73; // r8
  int v74; // eax
  __int64 v75; // rax
  char *v76; // [rsp+0h] [rbp-390h]
  __int64 v77; // [rsp+8h] [rbp-388h]
  size_t v78; // [rsp+8h] [rbp-388h]
  __int64 v79; // [rsp+10h] [rbp-380h]
  char *v80; // [rsp+10h] [rbp-380h]
  _QWORD *v81; // [rsp+10h] [rbp-380h]
  unsigned __int64 v82; // [rsp+10h] [rbp-380h]
  unsigned __int64 v83; // [rsp+10h] [rbp-380h]
  void *v84; // [rsp+18h] [rbp-378h]
  void *v85; // [rsp+18h] [rbp-378h]
  _QWORD *v86; // [rsp+18h] [rbp-378h]
  char *v87; // [rsp+18h] [rbp-378h]
  void *v88; // [rsp+18h] [rbp-378h]
  size_t n; // [rsp+20h] [rbp-370h]
  size_t na; // [rsp+20h] [rbp-370h]
  const void *nb; // [rsp+20h] [rbp-370h]
  size_t nc; // [rsp+20h] [rbp-370h]
  __int64 v93; // [rsp+28h] [rbp-368h]
  __m128i *v94; // [rsp+28h] [rbp-368h]
  size_t v95; // [rsp+28h] [rbp-368h]
  char v96; // [rsp+30h] [rbp-360h]
  void *v97; // [rsp+30h] [rbp-360h]
  const char *v98; // [rsp+38h] [rbp-358h]
  void *v99; // [rsp+38h] [rbp-358h]
  int v100; // [rsp+40h] [rbp-350h]
  unsigned __int64 v101; // [rsp+40h] [rbp-350h]
  __int64 v102; // [rsp+40h] [rbp-350h]
  size_t v103; // [rsp+40h] [rbp-350h]
  size_t v104; // [rsp+40h] [rbp-350h]
  __int64 v105; // [rsp+48h] [rbp-348h]
  unsigned __int32 v106; // [rsp+48h] [rbp-348h]
  size_t v107; // [rsp+48h] [rbp-348h]
  char *s; // [rsp+50h] [rbp-340h]
  __m128i *sa; // [rsp+50h] [rbp-340h]
  char *sb; // [rsp+50h] [rbp-340h]
  char *sc; // [rsp+50h] [rbp-340h]
  __int64 v112; // [rsp+58h] [rbp-338h]
  const char *src; // [rsp+60h] [rbp-330h]
  _BYTE *srcb; // [rsp+60h] [rbp-330h]
  void *srca; // [rsp+60h] [rbp-330h]
  __int64 v116; // [rsp+68h] [rbp-328h]
  __int64 v117; // [rsp+68h] [rbp-328h]
  __m128i *v118; // [rsp+70h] [rbp-320h] BYREF
  __int64 v119; // [rsp+78h] [rbp-318h] BYREF
  int v120; // [rsp+80h] [rbp-310h] BYREF
  __int64 v121; // [rsp+88h] [rbp-308h]
  __int64 v122; // [rsp+90h] [rbp-300h]
  __int128 v123; // [rsp+A0h] [rbp-2F0h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-2E0h]
  void *dest; // [rsp+C0h] [rbp-2D0h] BYREF
  __int128 v126; // [rsp+C8h] [rbp-2C8h]
  __m128i *v127; // [rsp+E0h] [rbp-2B0h] BYREF
  __int128 v128; // [rsp+E8h] [rbp-2A8h]
  void *v129; // [rsp+100h] [rbp-290h] BYREF
  __int128 v130; // [rsp+108h] [rbp-288h]
  __int64 v131; // [rsp+120h] [rbp-270h] BYREF
  __int64 v132; // [rsp+128h] [rbp-268h]
  void *v133; // [rsp+130h] [rbp-260h]
  _BYTE v134[272]; // [rsp+140h] [rbp-250h] BYREF
  _BYTE v135[264]; // [rsp+250h] [rbp-140h] BYREF
  unsigned __int64 v136; // [rsp+358h] [rbp-38h]

  v7 = (char *)a4;
  v8 = *(_QWORD *)(a4 + 40);
  v116 = a1;
  v9 = *(unsigned int *)(*(_QWORD *)(a1 + 80) + 192LL);
  v136 = __readfsqword(0x28u);
  v118 = nullptr;
  v120 = 0;
  v121 = -1;
  v122 = v9;
  if ( !(unsigned __int8)sub_55710(&v118, &v120, a4 + 48, 0) || (v120 & 0xFFFFFFFD) != 0 )
    return v136 - __readfsqword(0x28u);
  v11 = a5 - v8;
  v124 = 0;
  v123 = 0;
  dest = nullptr;
  v126 = 0;
  if ( v118->m128i_i32[0] == 1 )
  {
    sub_97AE0(v118->m128i_i64[1] + 8);
    v32 = v118->m128i_i64[1];
    if ( *(_DWORD *)(v32 + 272) == 2 && v32 )
    {
      if ( (*(_BYTE *)(v32 + 412) & 1) != 0 )
        v112 = *(_QWORD *)(v32 + 416) >> 3;
      else
        v112 = *(_QWORD *)(v32 + 368);
      if ( !*(_QWORD *)(v32 + 312)
        || (src = *(const char **)(v32 + 312), v33 = strlen(src), v34 = src, (v35 = v33) == 0) )
      {
        LODWORD(v123) = 1;
        *((_QWORD *)&v123 + 1) = v32;
        goto LABEL_38;
      }
      v60 = dest;
      v61 = (void *)(v33 + 1);
      if ( *((_QWORD *)&v126 + 1) < v33 + 1 )
      {
        v107 = v33;
        sc = (char *)src;
        srca = (void *)(v33 + 1);
        dest = (void *)qvector_reserve(&dest, dest, v61, 1);
        v35 = v107;
        v60 = dest;
        v34 = sc;
        v61 = srca;
      }
      *(_QWORD *)&v126 = v61;
      srcb = (_BYTE *)v35;
      memmove(v60, v34, v35);
      srcb[(_QWORD)dest] = 0;
      LODWORD(v123) = 1;
      *((_QWORD *)&v123 + 1) = v32;
      if ( v11 >= 8 * v112 || v11 == 0 || (unsigned __int64)v126 <= 1 )
        goto LABEL_38;
      v96 = !sub_33C90(v116, v118, a2, a3, (__int64)&v123, (__int64)&dest, 8 * v112, v11);
LABEL_77:
      if ( !v96 )
        goto LABEL_38;
    }
  }
  else
  {
    if ( v118->m128i_i32[0] != 2 )
      return v136 - __readfsqword(0x28u);
    v105 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 144LL) + 8LL);
    sub_84A60(v134);
    sub_84A60(v135);
    if ( !(unsigned __int8)sub_98E20(v7 + 88, v134)
      || (v131 = sub_95990(v134, 73), v132 = v13, !(unsigned __int8)sub_98E20(&v131, v135))
      || (v96 = sub_97630(v135, 60)) == 0 )
    {
      v129 = nullptr;
      v29 = v118->m128i_i64[1];
      v30 = v118[1].m128i_u32[0];
      LOWORD(v133) = 257;
      v106 = v30;
      v132 = v30;
      if ( v29 )
        v31 = v29;
      else
        v31 = ((__int64 (*)(void))get_idati)();
      v131 = v31;
      if ( (unsigned __int8)create_tinfo(&v129, 61, 189, &v131) )
      {
        tinfo_size = get_tinfo_size(0, v129, 0);
        if ( tinfo_size != -1 )
          tinfo_size *= 8;
        v102 = tinfo_size;
        numbered_type_name = (const char *)get_numbered_type_name(v29, v106);
        if ( numbered_type_name
          && (v98 = numbered_type_name, v56 = strlen(numbered_type_name),
                                        v57 = v98,
                                        v58 = (void *)v102,
                                        (v59 = v56) != 0) )
        {
          v71 = dest;
          v72 = v56 + 1;
          if ( *((_QWORD *)&v126 + 1) < v56 + 1 )
          {
            v95 = v56;
            v97 = (void *)v102;
            v104 = v56 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v72, 1);
            v59 = v95;
            v71 = dest;
            v58 = v97;
            v57 = v98;
            v72 = v104;
          }
          *(_QWORD *)&v126 = v72;
          v99 = v58;
          v103 = v59;
          memmove(v71, v57, v59);
          *((_BYTE *)dest + v103) = 0;
          *((_QWORD *)&v123 + 1) = v29;
          LODWORD(v123) = 2;
          LODWORD(v124) = v106;
          if ( (unsigned __int64)v126 > 1 && v99 != (void *)-1LL && v11 < (unsigned __int64)v99 && v11 )
          {
            v96 = !sub_33C90(v116, v118, a2, a3, (__int64)&v123, (__int64)&dest, (__int64)v99, v11);
            clear_tinfo_t(&v129);
LABEL_76:
            sub_1B750((__int64)v135);
            sub_1B750((__int64)v134);
            goto LABEL_77;
          }
        }
        else
        {
          *((_QWORD *)&v123 + 1) = v29;
          *(_QWORD *)&v126 = 0;
          LODWORD(v123) = 2;
          LODWORD(v124) = v106;
        }
      }
      clear_tinfo_t(&v129);
LABEL_37:
      sub_1B750((__int64)v135);
      sub_1B750((__int64)v134);
      goto LABEL_38;
    }
    s = (char *)get_numbered_type_name(v105, v118[1].m128i_u32[0]);
    v127 = nullptr;
    v100 = -1;
    v128 = 0;
    while ( 1 )
    {
      v129 = nullptr;
      v130 = 0;
      if ( s )
      {
        v28 = strlen(s);
        v129 = (void *)qvector_reserve(&v129, 0, v28 + 1, 1);
        *(_QWORD *)&v130 = v28 + 1;
        memmove(v129, s, v28);
        *((_BYTE *)v129 + v28) = 0;
      }
      if ( v100 >= 0 )
        sub_1F510((__int64 *)&v129, (__int64)"_%d", v100);
      v14 = ::src;
      v119 = 0;
      if ( (_QWORD)v130 )
        v14 = (const char *)v129;
      if ( !v14 )
        break;
      v132 = (__int64)v14;
      LOWORD(v133) = 256;
      v15 = v105;
      if ( !v105 )
        v15 = ((__int64 (*)(void))get_idati)();
      v131 = v15;
      if ( !(unsigned __int8)create_tinfo(&v119, 61, 61, &v131) )
        break;
      v16 = v119;
      if ( (v119 & 0x100) != 0 )
      {
        if ( get_tinfo_property(v119, 4) )
          break;
        v16 = v119;
      }
      v17 = get_tinfo_size(0, v16, 0);
      if ( v17 != -1 )
      {
        v93 = 8 * v17;
        if ( 8 * v17 >= v11 )
        {
          v18 = v128;
          v19 = v128 + 1;
          if ( *((_QWORD *)&v128 + 1) < (unsigned __int64)(v128 + 1) )
          {
            v84 = *((void **)&v128 + 1);
            v20 = qvector_reserve(&v127, 0, v19, 48);
            v62 = (__int64)v127;
            v63 = v20;
            na = *((_QWORD *)&v128 + 1);
            *((_QWORD *)&v128 + 1) = v84;
            if ( (__int64)v128 - 1 >= 0 )
            {
              v85 = (void *)v20;
              v64 = v116;
              v117 = v63;
              v79 = v64;
              v77 = a3;
              v65 = v128 - 1;
              v76 = v7;
              v66 = (__int64)v127;
              do
              {
                *(__m128i *)v117 = _mm_loadu_si128((const __m128i *)v66);
                v67 = *(_QWORD *)(v66 + 16);
                v68 = _mm_loadu_si128((const __m128i *)(v66 + 24));
                *(_QWORD *)(v66 + 16) = 0;
                *(_QWORD *)(v117 + 16) = v67;
                *(__m128i *)(v117 + 24) = v68;
                LODWORD(v67) = *(_DWORD *)(v66 + 40);
                *(_QWORD *)(v66 + 32) = 0;
                *(_DWORD *)(v117 + 40) = v67;
                v69 = *(_QWORD *)(v66 + 16);
                if ( v69 )
                {
                  *(_QWORD *)(v66 + 24) = 0;
                  qfree(v69);
                }
                v117 += 48;
                v66 += 48;
              }
              while ( v65-- != 0 );
              v20 = (__int64)v85;
              a3 = v77;
              v7 = v76;
              v116 = v79;
              v62 = (__int64)v127;
            }
            qfree(v62);
            *((_QWORD *)&v128 + 1) = na;
            v18 = v128;
            v127 = (__m128i *)v20;
            v19 = v128 + 1;
          }
          else
          {
            v20 = (__int64)v127;
          }
          v21 = v119;
          *(_QWORD *)&v128 = v19;
          v22 = v20 + 48 * v18;
          *(_QWORD *)(v22 + 16) = 0;
          *(_OWORD *)(v22 + 24) = 0;
          n = v22;
          tinfo_property = get_tinfo_property(v21, 8);
          v24 = (_QWORD *)n;
          *(_DWORD *)(n + 40) = tinfo_property;
          v25 = n + 16;
          if ( (void **)(n + 16) != &v129 )
          {
            v26 = (char *)v130;
            if ( (_QWORD)v130 && (v27 = v130 - 1, (_QWORD)v130 != 1) )
            {
              nb = v129;
              if ( v24[4] < (unsigned __int64)v130 )
              {
                v78 = v130 - 1;
                v81 = v24;
                v87 = (char *)v130;
                v75 = qvector_reserve(v25, v24[2], v130, 1);
                v24 = v81;
                v27 = v78;
                v26 = v87;
                v81[2] = v75;
              }
              v24[3] = v26;
              v80 = v26;
              v86 = v24;
              memmove((void *)v24[2], nb, v27);
              v24 = v86;
              v80[v86[2] - 1] = 0;
            }
            else
            {
              *(_QWORD *)(n + 24) = 0;
            }
          }
          v24[1] = v11;
          *v24 = v93;
        }
      }
      clear_tinfo_t(&v119);
      if ( v129 )
      {
        *(_QWORD *)&v130 = 0;
        qfree(v129);
      }
      ++v100;
    }
    clear_tinfo_t(&v119);
    if ( v129 )
    {
      *(_QWORD *)&v130 = 0;
      qfree(v129);
    }
    v36 = (__int64)v127;
    v37 = &v127[3 * v128];
    if ( v127 != v37 )
    {
      sa = v127;
      sub_3E690(&v131, (__int64)v127, (__int64)(0xAAAAAAAAAAAAAAABLL * ((48 * (__int64)v128) >> 4) + 1) / 2);
      if ( v131 == v132 )
      {
        sub_4BD60(sa, &sa[3 * v132], v37, (char *)v133, (__int64 (__fastcall *)(__m128 *, __m128i *))sub_27FF0);
      }
      else if ( v133 )
      {
        sub_4BDE0(sa, v37, (char *)v133, v132, (__int64 (__fastcall *)(__m128 *, __m128i *))sub_27FF0);
      }
      else
      {
        sub_46DB0(sa, v37, (__int64 (__fastcall *)(__m128 *, __m128i *))sub_27FF0);
      }
      v38 = v132;
      v39 = (void **)v133;
      if ( v133 != (char *)v133 + 48 * v132 )
      {
        sb = v7;
        v40 = (char *)v133 + 48 * v132;
        v41 = (char *)v133;
        do
        {
          v42 = *((_QWORD *)v41 + 2);
          if ( v42 )
          {
            *((_QWORD *)v41 + 3) = 0;
            qfree(v42);
          }
          v41 += 48;
        }
        while ( v40 != v41 );
        v7 = sb;
        v38 = v132;
        v39 = (void **)v133;
      }
      v43 = 48 * v38;
      operator delete(v39, 48 * v38);
      v46 = (__int64)v127;
      v36 = (__int64)v127;
      v94 = &v127[3 * v128];
      if ( v127 != v94 )
      {
        v101 = -1;
        while ( 1 )
        {
          v129 = nullptr;
          v47 = *(_DWORD *)(v46 + 40);
          LOWORD(v133) = 257;
          v132 = v47;
          idati = v105;
          if ( !v105 )
            idati = get_idati(v39, v43, v44, 0, v45, v36);
          v131 = idati;
          if ( (unsigned __int8)create_tinfo(&v129, 61, 189, &v131) )
          {
            v101 = *(_QWORD *)v46;
            if ( &dest != (void **)(v46 + 16) )
            {
              v73 = *(_QWORD *)(v46 + 24);
              if ( v73 && (nc = v73 - 1, v73 != 1) )
              {
                v88 = *(void **)(v46 + 16);
                if ( *((_QWORD *)&v126 + 1) < v73 )
                {
                  v83 = *(_QWORD *)(v46 + 24);
                  dest = (void *)qvector_reserve(&dest, dest, v73, 1);
                  v73 = v83;
                }
                *(_QWORD *)&v126 = v73;
                v82 = v73;
                memmove(dest, v88, nc);
                *((char *)dest + v82 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v126 = 0;
              }
            }
            v74 = *(_DWORD *)(v46 + 40);
            LODWORD(v123) = 2;
            *((_QWORD *)&v123 + 1) = v105;
            LODWORD(v124) = v74;
          }
          v43 = (__int64)v118;
          if ( (unsigned __int64)v126 <= 1 || v11 >= v101 || v101 == -1 || !v11 )
            break;
          if ( sub_33C90(v116, v118, a2, a3, (__int64)&v123, (__int64)&dest, v101, v11) )
            goto LABEL_68;
          v39 = &v129;
          v46 += 48;
          clear_tinfo_t(&v129);
          if ( (__m128i *)v46 == v94 )
            goto LABEL_116;
        }
        v49 = *(_DWORD *)(v46 + 40);
        v118->m128i_i32[0] = 2;
        *(_QWORD *)(v43 + 8) = v105;
        *(_DWORD *)(v43 + 16) = v49;
LABEL_68:
        clear_tinfo_t(&v129);
        if ( (__m128i *)v46 == v94 )
        {
LABEL_116:
          v36 = (__int64)v127;
          goto LABEL_117;
        }
        v36 = (__int64)v127;
        v96 = 0;
        if ( !v127 )
          goto LABEL_37;
        goto LABEL_70;
      }
    }
LABEL_117:
    if ( v36 )
    {
LABEL_70:
      v50 = v128;
      if ( (_QWORD)v128 )
      {
        v51 = 0;
        do
        {
          v52 = v36 + 48 * v51;
          v53 = *(_QWORD *)(v52 + 16);
          if ( v53 )
          {
            *(_QWORD *)(v52 + 24) = 0;
            qfree(v53);
            v36 = (__int64)v127;
          }
          ++v51;
        }
        while ( v50 != v51 );
      }
      *(_QWORD *)&v128 = 0;
      qfree(v36);
      goto LABEL_76;
    }
    sub_1B750((__int64)v135);
    sub_1B750((__int64)v134);
  }
  v7[72] |= 2u;
  *((_QWORD *)v7 + 10) = v11;
LABEL_38:
  if ( dest )
  {
    *(_QWORD *)&v126 = 0;
    qfree(dest);
  }
  return v136 - __readfsqword(0x28u);
}
