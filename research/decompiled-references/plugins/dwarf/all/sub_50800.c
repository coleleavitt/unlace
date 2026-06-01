unsigned __int64 __fastcall sub_50800(__int64 a1, __int64 *a2, char a3)
{
  const __m128i *v3; // rbx
  __m128i *v5; // r13
  __int64 v6; // rax
  char v7; // r15
  __int64 v8; // rdi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r8
  __m128i *v18; // r10
  __m128i *v19; // r9
  char v20; // r11
  __int64 v21; // rax
  __m128i *v22; // r15
  unsigned __int64 tinfo_size; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // r13
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  int v42; // r8d
  int v43; // r9d
  __m128i *v44; // rax
  __int32 v45; // edx
  __int32 v46; // ecx
  void (__fastcall *v47)(__m128i *); // rcx
  void (__fastcall *v48)(__m128i *); // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rbx
  void *v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdi
  bool v56; // cc
  __m128i *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdi
  int v60; // r15d
  int v61; // eax
  int v62; // r9d
  int v63; // eax
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  const __m128i *v68; // rdi
  __m128i *v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  void (__fastcall *v72)(__m128i *); // rdx
  _QWORD *v73; // rdi
  __m128i *v74; // r15
  _QWORD **v75; // rbx
  __m128i *v76; // r13
  int v77; // eax
  __int64 v78; // rdx
  bool v79; // zf
  int v80; // eax
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  char tinfo_property; // al
  __int64 v85; // rbx
  __m128i *v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rdi
  __int64 idati; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // [rsp+0h] [rbp-150h]
  __m128i *v93; // [rsp+8h] [rbp-148h]
  __m128i *v94; // [rsp+10h] [rbp-140h]
  const __m128i *v95; // [rsp+18h] [rbp-138h]
  char v96; // [rsp+18h] [rbp-138h]
  __m128i *v97; // [rsp+20h] [rbp-130h]
  _QWORD *v98; // [rsp+20h] [rbp-130h]
  char v99; // [rsp+20h] [rbp-130h]
  char v100; // [rsp+20h] [rbp-130h]
  char v101; // [rsp+20h] [rbp-130h]
  const __m128i *v102; // [rsp+20h] [rbp-130h]
  __m128i *v103; // [rsp+28h] [rbp-128h]
  __m128i *v104; // [rsp+28h] [rbp-128h]
  __int64 v105; // [rsp+30h] [rbp-120h]
  char v106; // [rsp+30h] [rbp-120h]
  __m128i *v107; // [rsp+30h] [rbp-120h]
  __m128i *v108; // [rsp+30h] [rbp-120h]
  __m128i *v109; // [rsp+30h] [rbp-120h]
  __int64 v110; // [rsp+30h] [rbp-120h]
  __m128i *v111; // [rsp+30h] [rbp-120h]
  __m128i *v112; // [rsp+30h] [rbp-120h]
  __m128i *v113; // [rsp+30h] [rbp-120h]
  __m128i *v114; // [rsp+30h] [rbp-120h]
  __m128i *v115; // [rsp+30h] [rbp-120h]
  __m128i *v116; // [rsp+30h] [rbp-120h]
  __m128i *v117; // [rsp+38h] [rbp-118h]
  __int64 v118; // [rsp+38h] [rbp-118h]
  __int64 v119; // [rsp+38h] [rbp-118h]
  __int64 v120; // [rsp+38h] [rbp-118h]
  __m128i *v121; // [rsp+38h] [rbp-118h]
  unsigned __int64 v122; // [rsp+40h] [rbp-110h]
  __int64 v123; // [rsp+40h] [rbp-110h]
  char v124; // [rsp+40h] [rbp-110h]
  __int64 v125; // [rsp+40h] [rbp-110h]
  __int64 v126; // [rsp+40h] [rbp-110h]
  __int64 v127; // [rsp+40h] [rbp-110h]
  const char *v128; // [rsp+48h] [rbp-108h]
  unsigned __int64 v129; // [rsp+50h] [rbp-100h]
  unsigned __int64 v130; // [rsp+60h] [rbp-F0h]
  __m128i *v131; // [rsp+68h] [rbp-E8h]
  void *v132; // [rsp+68h] [rbp-E8h]
  _QWORD **v133; // [rsp+68h] [rbp-E8h]
  int v134; // [rsp+74h] [rbp-DCh] BYREF
  __m128i *v135; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v136; // [rsp+80h] [rbp-D0h] BYREF
  const char *v137; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v138; // [rsp+98h] [rbp-B8h]
  __m128i v139; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v140; // [rsp+C0h] [rbp-90h]
  __m128i v141; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v142; // [rsp+E0h] [rbp-70h]
  __int64 v143; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v144; // [rsp+F8h] [rbp-58h]
  __int64 v145; // [rsp+100h] [rbp-50h]
  unsigned __int64 v146; // [rsp+118h] [rbp-38h]

  v3 = (const __m128i *)a2;
  v131 = (__m128i *)a1;
  v146 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_97630(a2, 60) )
    return v146 - __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 408LL) == 3
    || (!*(_BYTE *)(a1 + 65)
      ? ((v143 = 0,
          v141.m128i_i32[0] = 0,
          v36 = *(_QWORD **)(a1 + 40),
          (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))(v36[32] + 112LL))(
            *(_QWORD *)(*v36 + 24LL),
            56,
            &v141,
            &v143))
      || !v141.m128i_i32[0]
      || (v143 = 0,
          v141.m128i_i32[0] = 0,
          !(*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))(v36[32] + 112LL))(
             *(_QWORD *)(*v36 + 24LL),
             107,
             &v141,
             &v143))
      && v141.m128i_i32[0]
       ? (v10 = 0)
       : (v10 = sub_96F90(v36, 0)),
         *(_QWORD *)(a1 + 56) = v10,
         *(_BYTE *)(a1 + 65) = 1)
      : (v10 = *(_QWORD *)(a1 + 56)),
        (v11 = *a2,
         v141.m128i_i32[0] = 0,
         v143 = 0,
         (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))(a2[32] + 112))(
           *(_QWORD *)(v11 + 24),
           56,
           &v141,
           &v143))
     || !v141.m128i_i32[0]
     || (v12 = *a2,
         v141.m128i_i32[0] = 0,
         v143 = 0,
         !(*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))(a2[32] + 112))(
            *(_QWORD *)(v12 + 24),
            107,
            &v141,
            &v143))
     && v141.m128i_i32[0]) )
  {
    v130 = 0;
  }
  else
  {
    v130 = sub_96F90(a2, v10);
    if ( (v130 & 7) != 0 )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80((unsigned int)"Non byte-aligned bit offsets are not handled", v10, v13, v14, v15, v16);
      v130 &= 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  v5 = (__m128i *)&v136;
  v136 = 0;
  if ( !(unsigned __int8)sub_945B0(a2, &v136, 73) )
    goto LABEL_14;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v129 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    v34 = sub_97AE0(*(_QWORD *)(a1 + 40));
    v35 = v34 >> 3;
    *(_BYTE *)(a1 + 64) = 1;
    if ( v34 == -1 )
      v35 = -1;
    v129 = v35;
    *(_QWORD *)(a1 + 48) = v35;
  }
  v137 = nullptr;
  v138 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v139 = 0;
  v140 = 0;
  sub_58F40(&v143, v6 + 24);
  v7 = sub_50530(*(__int64 **)(a1 + 24), a2, (__int64)&v136, (__int64)&v139);
  if ( !v7 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v37 = sub_81C40(a2);
      sub_88B80((unsigned int)"Couldn't resolve type for die %s. Skipping UDT member.\n", v37, v38, v39, v40, v41);
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    sub_20160((__int64 *)&v137, (__int64)"baseclass_%d", *(_DWORD *)(*(_QWORD *)(a1 + 32) + 392LL));
    v128 = v137;
    if ( v129 == -1 || (v18 = (__m128i *)(v130 >> 3), v130 >> 3 < v129) )
    {
      LOBYTE(v117) = 8;
      goto LABEL_37;
    }
    goto LABEL_29;
  }
  if ( (unsigned __int8)sub_84C30(a2) )
  {
    v128 = (const char *)sub_9AC00(a2);
    if ( v129 == -1 )
      goto LABEL_78;
    v18 = (__m128i *)(v130 >> 3);
    if ( v130 >> 3 < v129 )
      goto LABEL_78;
  }
  else
  {
    sub_2F860(*(_QWORD *)(a1 + 32), (__int64 *)&v137);
    v128 = v137;
    if ( v129 == -1 || (v18 = (__m128i *)(v130 >> 3), v130 >> 3 < v129) )
    {
LABEL_78:
      LOBYTE(v117) = 0;
      goto LABEL_37;
    }
  }
LABEL_29:
  v19 = &v139;
  v20 = v7;
  while ( v19->m128i_i32[0] == 1 )
  {
    v17 = v19->m128i_i64[1];
    if ( *(_DWORD *)(v17 + 272) != 1 )
      break;
    v19 = (__m128i *)(v17 + 392);
    if ( *(_DWORD *)(v17 + 384) == 6 )
    {
      v103 = v18;
      v106 = v20;
      v117 = (__m128i *)(v17 + 392);
      v123 = v17;
      v33 = sub_57E50(v17);
      LODWORD(v17) = v123;
      v19 = v117;
      v18 = v103;
      if ( !v33 )
        goto LABEL_64;
      v44 = *(__m128i **)(sub_87DA0(v3) + 216);
      v17 = v123;
      v19 = v117;
      v20 = v106;
      v135 = v44;
      v18 = v103;
      v45 = v44[7].m128i_i32[3];
      if ( v44 )
      {
        v46 = v44->m128i_i32[2];
        if ( v45 == 8 )
        {
          v44->m128i_i32[2] = v46 + 1;
LABEL_145:
          v141.m128i_i64[0] = 0;
          v134 = 0;
          v77 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __m128i *))(*(_QWORD *)(v123 + 264) + 112LL))(
                  *(_QWORD *)(*(_QWORD *)(v123 + 8) + 24LL),
                  11,
                  &v134,
                  &v141);
          v17 = v123;
          v19 = v117;
          v20 = v106;
          v18 = v103;
          if ( v77 || !v134 )
          {
            v44 = v135;
            if ( v135 )
              goto LABEL_149;
          }
          else
          {
            v78 = sub_97A10(v123 + 8);
            v17 = v123;
            v44 = v135;
            v19 = v117;
            v20 = v106;
            v18 = v103;
            if ( v78 )
            {
              if ( v135 )
              {
LABEL_149:
                v79 = v44->m128i_i32[2]-- == 1;
                if ( v79 )
                  goto LABEL_92;
              }
            }
            else
            {
              if ( v135 )
              {
                v79 = v135->m128i_i32[2]-- == 1;
                if ( v79 )
                {
                  v124 = v7;
                  goto LABEL_93;
                }
              }
LABEL_111:
              if ( (debug & 0x400000) != 0 )
              {
                v103 = v18;
                v112 = v19;
                v125 = v17;
                LODWORD(v117) = sub_81C40(v3);
                v80 = sub_57E50(v125);
                sub_88B80(
                  (unsigned int)"Array of specified size %d, but 0 bytes at end of structure @ \"%s\". Making 0-sized.\n",
                  v80,
                  (_DWORD)v117,
                  v81,
                  v82,
                  v83);
                v18 = v103;
                v19 = v112;
                v17 = v125;
              }
              v56 = *(_QWORD *)(v17 + 424) <= 1u;
              if ( *(_QWORD *)(v17 + 424) != 1 )
              {
                v57 = *(__m128i **)(v17 + 416);
                LOBYTE(v142) = 0;
                v141 = 0;
                if ( v56 )
                {
                  v58 = *(_QWORD *)(v17 + 432);
                  v59 = v17 + 416;
                  if ( &v141 < v57 || &v141 >= (__m128i *)((char *)v57 + 24 * v58) )
                  {
                    if ( v58
                      || (v115 = v18,
                          v117 = v19,
                          v126 = v17,
                          v90 = qvector_reserve(v59, v57, 1, 24),
                          v17 = v126,
                          v19 = v117,
                          v57 = (__m128i *)v90,
                          v18 = v115,
                          v79 = *(_QWORD *)(v126 + 424) == 0,
                          *(_QWORD *)(v126 + 416) = v90,
                          v79) )
                    {
                      *v57 = _mm_load_si128(&v141);
                      v57[1].m128i_i64[0] = v142;
                    }
                  }
                  else if ( v58
                         || (v116 = v18,
                             v117 = v19,
                             v127 = v17,
                             v91 = qvector_reserve(v59, v57, 1, 24),
                             v17 = v127,
                             v19 = v117,
                             v57 = (__m128i *)v91,
                             v18 = v116,
                             v79 = *(_QWORD *)(v127 + 424) == 0,
                             *(_QWORD *)(v127 + 416) = v91,
                             v79) )
                  {
                    v57[1].m128i_i8[0] = 0;
                    *v57 = 0;
                  }
                }
                *(_QWORD *)(v17 + 424) = 1;
              }
              **(_QWORD **)(v17 + 416) = 0;
              *(_QWORD *)(*(_QWORD *)(v17 + 416) + 8LL) = 0;
              *(_BYTE *)(*(_QWORD *)(v17 + 416) + 16LL) = 1;
LABEL_64:
              v20 = 0;
            }
          }
        }
        else if ( !v46 )
        {
LABEL_92:
          v124 = 0;
LABEL_93:
          v47 = *(void (__fastcall **)(__m128i *))v44->m128i_i64[0];
          if ( (char *)v47 == (char *)sub_15E30 )
          {
            v48 = *(void (__fastcall **)(__m128i *))(v44->m128i_i64[0] + 16);
            if ( (char *)v48 == (char *)sub_15D70 )
            {
              v44->m128i_i64[0] = (__int64)&off_C71D8;
              v49 = (_QWORD *)v44[8].m128i_i64[0];
              if ( v49 )
              {
                if ( v49[2] )
                {
                  v118 = v17;
                  v107 = v19;
                  v104 = v44;
                  v98 = (_QWORD *)v44[8].m128i_i64[0];
                  v96 = v20;
                  v94 = v18;
                  v93 = (__m128i *)v3;
                  v50 = v49[2];
                  do
                  {
                    sub_293E0(*(_QWORD **)(v50 + 24));
                    v51 = (void *)v50;
                    v50 = *(_QWORD *)(v50 + 16);
                    operator delete(v51, 0x30u);
                  }
                  while ( v50 );
                  v17 = v118;
                  v19 = v107;
                  v44 = v104;
                  v49 = v98;
                  v20 = v96;
                  v18 = v94;
                  v3 = v93;
                }
                v95 = v18;
                v99 = v20;
                v103 = v44;
                v108 = v19;
                v119 = v17;
                operator delete(v49, 0x30u);
                v17 = v119;
                v19 = v108;
                v44 = v103;
                v20 = v99;
                v18 = (__m128i *)v95;
              }
              if ( v44[9].m128i_i64[1] )
              {
                v103 = v44;
                v120 = v17;
                v109 = v19;
                v100 = v20;
                v95 = v18;
                v94 = v131;
                v93 = (__m128i *)v3;
                v52 = v44[9].m128i_i64[1];
                do
                {
                  sub_29E10(*(_QWORD **)(v52 + 24));
                  v53 = v52;
                  v132 = (void *)v52;
                  v52 = *(_QWORD *)(v52 + 16);
                  v54 = *(_QWORD *)(v53 + 32);
                  if ( v54 )
                  {
                    *(_QWORD *)(v53 + 40) = 0;
                    qfree(v54);
                  }
                  operator delete(v132, 0x48u);
                }
                while ( v52 );
                v17 = v120;
                v19 = v109;
                v44 = v103;
                v131 = v94;
                v20 = v100;
                v18 = (__m128i *)v95;
                v3 = v93;
              }
              v55 = v44[6].m128i_i64[0];
              if ( v55 )
              {
                v95 = v18;
                v44[6].m128i_i64[1] = 0;
                v101 = v20;
                v103 = v19;
                v110 = v17;
                v121 = v44;
                qfree(v55);
                v18 = (__m128i *)v95;
                v20 = v101;
                v19 = v103;
                v17 = v110;
                v44 = v121;
              }
              v97 = v18;
              LOBYTE(v103) = v20;
              v111 = v19;
              v117 = (__m128i *)v17;
              operator delete(v44, 0xC0u);
              v17 = (__int64)v117;
              v19 = v111;
              v20 = (char)v103;
              v18 = v97;
            }
            else
            {
              v97 = v18;
              LOBYTE(v103) = v20;
              v114 = v19;
              v117 = (__m128i *)v17;
              v48(v44);
              v17 = (__int64)v117;
              v19 = v114;
              v20 = (char)v103;
              v18 = v97;
            }
          }
          else
          {
            v97 = v18;
            LOBYTE(v103) = v20;
            v113 = v19;
            v117 = (__m128i *)v17;
            v47(v44);
            v18 = v97;
            v19 = v113;
            v20 = (char)v103;
            v17 = (__int64)v117;
          }
          if ( v124 )
            goto LABEL_111;
        }
      }
      else if ( v45 == 8 )
      {
        goto LABEL_145;
      }
    }
  }
  if ( v20 )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80(
        (unsigned int)"Dropping member \"%s\", at offset %u (layout already full (%llu bytes)).\n",
        (_DWORD)v128,
        (_DWORD)v18,
        v129,
        v17,
        (_DWORD)v19);
    sub_58FD0(&v143);
LABEL_10:
    if ( v144 )
    {
      v145 = 0;
      qfree(v144);
    }
    v8 = (__int64)v137;
    if ( v137 )
      goto LABEL_13;
    goto LABEL_14;
  }
  LOBYTE(v117) = 8 * a3;
LABEL_37:
  v21 = v3->m128i_i64[0];
  v141.m128i_i64[0] = 0;
  v22 = &v141;
  LODWORD(v135) = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i **, __m128i *))(v3[16].m128i_i64[0] + 112))(
          *(_QWORD *)(v21 + 24),
          11,
          &v135,
          &v141)
    && (_DWORD)v135 )
  {
    goto LABEL_61;
  }
  tinfo_size = 0;
  while ( 2 )
  {
    v24 = v3->m128i_i64[0];
    v141.m128i_i64[0] = 0;
    LODWORD(v135) = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i **, __m128i *))(v3[16].m128i_i64[0] + 112))(
           *(_QWORD *)(v24 + 24),
           13,
           &v135,
           v22)
      || !(_DWORD)v135 )
    {
      goto LABEL_55;
    }
    v122 = sub_97960(v3);
    if ( tinfo_size - 1 > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_47;
    if ( v122 != -1 )
    {
      v25 = 8 * tinfo_size;
      if ( v122 <= 8 * tinfo_size )
        v25 = v122;
      v122 = v25;
LABEL_47:
      if ( !v122 )
      {
LABEL_55:
        v31 = v131[2].m128i_i64[0];
        v32 = 8 * tinfo_size;
LABEL_56:
        v122 = v32;
        goto LABEL_57;
      }
    }
    v26 = v3->m128i_i64[0];
    v141.m128i_i64[0] = 0;
    LODWORD(v135) = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i **, __m128i *))(v3[16].m128i_i64[0] + 112))(
           *(_QWORD *)(v26 + 24),
           12,
           &v135,
           v22)
      || !(_DWORD)v135 )
    {
      v27 = v3->m128i_i64[0];
      v141.m128i_i64[0] = 0;
      LODWORD(v135) = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i **, __m128i *))(v3[16].m128i_i64[0] + 112))(
             *(_QWORD *)(v27 + 24),
             107,
             &v135,
             v22)
        || !(_DWORD)v135 )
      {
LABEL_54:
        v31 = v131[2].m128i_i64[0];
        goto LABEL_57;
      }
    }
    v105 = sub_84B50(v3, &v134);
    if ( (_WORD)v134 == 12 )
    {
      v68 = v3;
      v69 = *(__m128i **)(sub_87DA0(v3) + 216);
      if ( v69 )
      {
        v71 = v69->m128i_u32[2];
        LODWORD(v103) = v69[7].m128i_i32[3];
        if ( !(_DWORD)v71 )
        {
          v72 = *(void (__fastcall **)(__m128i *))v69->m128i_i64[0];
          if ( (char *)v72 == (char *)sub_15E30
            && (v72 = *(void (__fastcall **)(__m128i *))(v69->m128i_i64[0] + 16), (char *)v72 == (char *)sub_15D70) )
          {
            v73 = (_QWORD *)v69[8].m128i_i64[0];
            v69->m128i_i64[0] = (__int64)&off_C71D8;
            if ( v73 )
            {
              if ( v73[2] )
              {
                v93 = v22;
                v74 = v131;
                v102 = v3;
                v75 = (_QWORD **)v73[2];
                v95 = (const __m128i *)&v135;
                v94 = v5;
                v76 = v69;
                while ( 1 )
                {
                  sub_293E0(v75[3]);
                  v133 = (_QWORD **)v75[2];
                  operator delete(v75, 0x30u);
                  if ( !v133 )
                    break;
                  v75 = v133;
                }
                v131 = v74;
                v69 = v76;
                v3 = v102;
                v5 = v94;
                v22 = v93;
              }
              v97 = v69;
              operator delete(v73, 0x30u);
              v69 = v97;
            }
            if ( v69[9].m128i_i64[1] )
            {
              v97 = v69;
              v95 = v3;
              v85 = v69[9].m128i_i64[1];
              do
              {
                sub_29E10(*(_QWORD **)(v85 + 24));
                v86 = (__m128i *)v85;
                v85 = *(_QWORD *)(v85 + 16);
                v87 = v86[2].m128i_i64[0];
                if ( v87 )
                {
                  v86[2].m128i_i64[1] = 0;
                  v94 = v86;
                  qfree(v87);
                  v86 = v94;
                }
                operator delete(v86, 0x48u);
              }
              while ( v85 );
              v69 = v97;
              v3 = v95;
            }
            v88 = v69[6].m128i_i64[0];
            if ( v88 )
            {
              v97 = v69;
              v69[6].m128i_i64[1] = 0;
              qfree(v88);
              v69 = v97;
            }
            v68 = v69;
            operator delete(v69, 0xC0u);
          }
          else
          {
            v68 = v69;
            v72(v69);
          }
        }
      }
      else
      {
        LODWORD(v103) = 5;
      }
      if ( (_DWORD)v103 != 6 )
      {
LABEL_128:
        LOBYTE(v117) = (unsigned __int8)v117 | 1;
        if ( (unsigned __int8)getinf_flag(3, 32) )
        {
          v28 = v105;
          v130 += v105;
        }
        else
        {
          v28 = v105;
          v130 = v130 + 8 * tinfo_size - v122 - v105;
        }
        if ( tinfo_size )
          goto LABEL_122;
LABEL_131:
        tinfo_size = sub_5E020(
                       (unsigned int)&v139,
                       1,
                       *(_QWORD *)v131[1].m128i_i64[1],
                       v28,
                       v29,
                       v30,
                       v92,
                       (_DWORD)v93,
                       (_DWORD)v94,
                       (_DWORD)v95,
                       (_DWORD)v97,
                       (_DWORD)v103,
                       v105,
                       (_DWORD)v117,
                       v122,
                       (_DWORD)v128,
                       v129);
        if ( tinfo_size - 1 > 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (debug & 0x400000) != 0 )
          {
            v63 = sub_81C40(v3);
            sub_88B80(
              (unsigned int)"Couldn't determine byte size of bitfield @ %s. Trying with natural int.\n",
              v63,
              v64,
              v65,
              v66,
              v67);
          }
          v141.m128i_i64[0] = 7;
          tinfo_size = get_tinfo_size(0, 7, 1);
          clear_tinfo_t(v22);
        }
        goto LABEL_122;
      }
      if ( v139.m128i_i32[0] != 1 )
      {
        if ( v139.m128i_i32[0] != 2 )
          goto LABEL_157;
        LOWORD(v142) = 257;
        idati = v139.m128i_i64[1];
        v135 = nullptr;
        v141.m128i_i64[1] = (unsigned int)v140;
        if ( !v139.m128i_i64[1] )
          idati = get_idati(v68, 0, (unsigned int)v140, 0, v70, v71);
        v141.m128i_i64[0] = idati;
        if ( !(unsigned __int8)create_tinfo(&v135, 61, 189, v22)
          || (tinfo_property = get_tinfo_property(v135, 2), (tinfo_property & 0xFu) <= 9)
          || (tinfo_property & 0x3F) == 0x2D )
        {
          clear_tinfo_t(&v135);
LABEL_157:
          if ( !tinfo_size )
            goto LABEL_128;
          goto LABEL_158;
        }
        clear_tinfo_t(&v135);
      }
      if ( !tinfo_size )
      {
        v130 += v122 + v105;
        v32 = 8LL * *(unsigned __int16 *)(*(_QWORD *)(sub_87DA0(v3) + 216) + 40LL);
        v122 = v32;
LABEL_160:
        v31 = v131[2].m128i_i64[0];
        if ( v32 )
          goto LABEL_57;
        goto LABEL_56;
      }
LABEL_158:
      v32 = 8 * tinfo_size;
      if ( 8 * tinfo_size >= v122 )
        goto LABEL_128;
      v122 = 8 * tinfo_size;
      goto LABEL_160;
    }
    if ( (_WORD)v134 != 107 )
      goto LABEL_54;
    LOBYTE(v117) = (unsigned __int8)v117 | 1;
    v130 = v105;
    if ( !tinfo_size )
      goto LABEL_131;
LABEL_122:
    v31 = v131[2].m128i_i64[0];
    if ( *(_DWORD *)(v31 + 408) == 3 && v129 < tinfo_size )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v60 = sub_81C40(v31 + 8);
        v61 = sub_81C40(v3);
        sub_88B80(
          (unsigned int)"Dropping bitfield member %s (sizeof=%zu) from union %s (sizeof=%zu)\n",
          v61,
          tinfo_size,
          v60,
          v129,
          v62);
      }
      goto LABEL_10;
    }
LABEL_57:
    if ( (v3[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v3[14].m128i_i64[0] == -1 )
    {
      if ( under_debugger )
        BUG();
      interr(30478);
LABEL_61:
      tinfo_size = sub_97A10(v3);
      continue;
    }
    break;
  }
  sub_2FD40(
    v31,
    v131[1].m128i_i64[1] + 24,
    *(_QWORD *)v131[1].m128i_i64[1],
    nullptr,
    v128,
    v3 + 14,
    &v139,
    v130,
    (char)v117,
    v122);
  if ( unk_CC8D0 )
    sub_66090(
      v131[1].m128i_i64[1] + 24,
      *(_QWORD *)v131[1].m128i_i64[1],
      (unsigned int)"after_complex_add_member_on_node_%p",
      v131[2].m128i_i64[0],
      v42,
      v43,
      v92);
  if ( v144 )
  {
    v145 = 0;
    qfree(v144);
  }
  v8 = (__int64)v137;
  if ( !v137 )
    goto LABEL_14;
LABEL_13:
  *(_QWORD *)&v138 = 0;
  qfree(v8);
LABEL_14:
  sub_84A10(v5);
  return v146 - __readfsqword(0x28u);
}
