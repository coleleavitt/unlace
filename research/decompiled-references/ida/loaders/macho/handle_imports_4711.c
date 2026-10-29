__int64 __fastcall sub_3E950(char *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  _QWORD *v4; // rbp
  __int64 ph; // r13
  __int64 eah; // rax
  __int64 (__fastcall *v8)(); // rdx
  char *v9; // r14
  int v10; // r15d
  char *v11; // rax
  char *v12; // rbx
  const char *v13; // r14
  size_t v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  size_t v18; // r13
  __int64 (__fastcall *v20)(); // rcx
  _DWORD *v21; // r14
  _DWORD *v22; // r15
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r9d
  int v27; // eax
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // r12
  __int64 (__fastcall *v33)(void *); // rax
  __int64 *v34; // r12
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 i; // rbp
  __int64 *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  int v41; // r9d
  const char *v42; // r8
  const char *v43; // rcx
  const char *v44; // rdx
  const char *v45; // rsi
  const char *v46; // rax
  const char *v47; // rbx
  size_t v48; // rax
  size_t v49; // r12
  void *v50; // rdi
  size_t v51; // rdx
  char v52; // al
  char *v53; // rax
  __m128i si128; // xmm1
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 *v60; // r14
  __int64 v61; // rax
  __int64 v62; // r10
  unsigned __int64 v63; // rbx
  __int64 (__fastcall ***v64)(); // rcx
  unsigned __int64 v65; // r15
  int v66; // r9d
  const char *v67; // r8
  const char *v68; // rcx
  unsigned __int64 v69; // rsi
  const char *v70; // rax
  size_t v71; // rax
  const char *v72; // r8
  size_t v73; // r10
  unsigned int *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  char v77; // al
  int v78; // edx
  int v79; // r9d
  const char *v80; // r8
  const char *v81; // rcx
  const char *v82; // rsi
  const char *v83; // rax
  const char *v84; // rbx
  size_t v85; // rax
  size_t v86; // r12
  void *v87; // rdi
  size_t v88; // r13
  void *v89; // rdi
  void *v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // r15
  char *v94; // rbx
  unsigned int v95; // r12d
  unsigned __int64 v96; // rbp
  unsigned __int64 v97; // r13
  char *v98; // rax
  char *v99; // r10
  __m128i *v100; // rbx
  char *v101; // rsi
  __int64 v102; // r8
  __int64 v103; // rax
  __m128i v104; // xmm0
  __int64 v105; // rax
  __m128i v106; // xmm1
  __int64 v107; // rax
  __m128i *v108; // rax
  __int64 v109; // rdx
  __m128i v110; // xmm1
  __int64 v111; // rdx
  __m128i v112; // xmm1
  __int64 v113; // rdx
  __m128i *v114; // rax
  __int64 (__fastcall ***v115)(); // rdx
  __m128i v116; // xmm0
  __int64 v117; // rdi
  __int64 (__fastcall ***v118)(); // rdx
  __m128i v119; // xmm0
  __int64 v120; // rdi
  char *v121; // rdx
  __m128i *v122; // r15
  __int64 v123; // rdi
  __int64 v124; // rdi
  __int64 v125; // rax
  __int64 v126; // rax
  void *v127; // rdi
  size_t v128; // r13
  const void *v129; // r14
  void *v130; // rdi
  const void *v131; // rbx
  void *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  unsigned __int64 v136; // rsi
  __int64 v137; // rdx
  struct _Unwind_Exception *v138; // rbx
  __int64 (__fastcall *v139)(); // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall *v140)(); // [rsp+8h] [rbp-C0h]
  unsigned int v141; // [rsp+8h] [rbp-C0h]
  size_t v142; // [rsp+8h] [rbp-C0h]
  __int64 v143; // [rsp+8h] [rbp-C0h]
  const char *src; // [rsp+10h] [rbp-B8h]
  unsigned int srca; // [rsp+10h] [rbp-B8h]
  _BYTE *srcd; // [rsp+10h] [rbp-B8h]
  __int64 *srcb; // [rsp+10h] [rbp-B8h]
  char *srce; // [rsp+10h] [rbp-B8h]
  char *srcf; // [rsp+10h] [rbp-B8h]
  void *srcc; // [rsp+10h] [rbp-B8h]
  __m128i *v151; // [rsp+18h] [rbp-B0h]
  __int64 (__fastcall *v152)(); // [rsp+20h] [rbp-A8h]
  _QWORD *v153; // [rsp+20h] [rbp-A8h]
  __int64 v154; // [rsp+28h] [rbp-A0h]
  char *v155; // [rsp+28h] [rbp-A0h]
  char *v156; // [rsp+28h] [rbp-A0h]
  __m128i v157; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall ***v158)(); // [rsp+40h] [rbp-88h]
  size_t v159; // [rsp+48h] [rbp-80h]
  __int64 v160; // [rsp+50h] [rbp-78h] BYREF
  __int128 v161; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall **v162)(); // [rsp+70h] [rbp-58h] BYREF
  __int128 v163; // [rsp+78h] [rbp-50h]
  unsigned __int64 v164; // [rsp+88h] [rbp-40h]

  v3 = (__int64 *)a1;
  v4 = (_QWORD *)a2;
  v164 = __readfsqword(0x28u);
  ph = get_ph();
  eah = get_eah();
  v9 = (char *)qword_66C30;
  if ( !qword_66C30 )
  {
    v20 = (__int64 (__fastcall *)())eah;
    if ( !dword_66C28 )
    {
      v139 = (__int64 (__fastcall *)())eah;
      a2 = 0;
      a1 = (char *)operator new(0x360u);
      *((_QWORD *)a1 + 1) = a3;
      *(_QWORD *)a1 = v139;
      *((_QWORD *)a1 + 66) = 0;
      *((_QWORD *)a1 + 69) = 0;
      *((_QWORD *)a1 + 72) = 0;
      *((_QWORD *)a1 + 75) = 0;
      *((_QWORD *)a1 + 78) = 0;
      *((_QWORD *)a1 + 81) = 0;
      *((_QWORD *)a1 + 84) = 0;
      *((_QWORD *)a1 + 87) = 0;
      *((_QWORD *)a1 + 88) = 0;
      *((_QWORD *)a1 + 91) = 0;
      *((_QWORD *)a1 + 94) = 0;
      *((_QWORD *)a1 + 95) = -1;
      *((_QWORD *)a1 + 96) = 0;
      *((_QWORD *)a1 + 101) = 0;
      *((_QWORD *)a1 + 102) = 0;
      *((_DWORD *)a1 + 214) = 0;
      *(_OWORD *)(a1 + 536) = 0;
      *((_OWORD *)a1 + 35) = 0;
      *(_OWORD *)(a1 + 584) = 0;
      *((_OWORD *)a1 + 38) = 0;
      *(_OWORD *)(a1 + 632) = 0;
      *((_OWORD *)a1 + 41) = 0;
      *(_OWORD *)(a1 + 680) = 0;
      *(_OWORD *)(a1 + 712) = 0;
      *((_OWORD *)a1 + 46) = 0;
      *(_OWORD *)(a1 + 776) = 0;
      *(_OWORD *)(a1 + 792) = 0;
      *(_OWORD *)(a1 + 824) = 0;
      *(_OWORD *)(a1 + 840) = 0;
      a1[860] = 0;
      qword_66C30 = a1;
      v52 = sub_3B7E0(a1, 0);
      v9 = (char *)qword_66C30;
      v20 = v139;
      if ( v52 )
      {
        if ( qword_66C30 )
          goto LABEL_2;
      }
      else
      {
        if ( qword_66C30 )
        {
          sub_1A3D0(qword_66C30);
          a2 = 864;
          a1 = v9;
          operator delete(v9, 0x360u);
          v20 = v139;
        }
        dword_66C28 = 1;
        qword_66C30 = 0;
      }
    }
    v21 = qword_66C20;
    v22 = qword_66C20;
    if ( qword_66C20 )
    {
      a2 = (unsigned int)dword_66C10;
      v23 = *((_QWORD *)qword_66C20 + 10);
      if ( dword_66C10 >= v23 && dword_66C10 )
        goto LABEL_34;
    }
    else
    {
      v140 = v20;
      v53 = (char *)operator new(0x208u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
      a1 = v53;
      v55 = _mm_load_si128((const __m128i *)&xmmword_574B0);
      *(_QWORD *)v53 = &off_62AA0;
      *((__m128i *)v53 + 6) = si128;
      v56 = _mm_load_si128((const __m128i *)&xmmword_574C0);
      *((__m128i *)v53 + 1) = v55;
      *(__m128i *)(v53 + 120) = v56;
      *((_QWORD *)v53 + 1) = v140;
      *((_QWORD *)v53 + 4) = -1;
      *((_DWORD *)v53 + 10) = 8;
      v53[44] = 1;
      *((_QWORD *)v53 + 6) = a3;
      v53[56] = 0;
      *((_QWORD *)v53 + 9) = 0;
      v53[112] = 0;
      *((_QWORD *)v53 + 17) = 0;
      *((_WORD *)v53 + 80) = 0;
      *((_QWORD *)v53 + 25) = 0;
      *((_QWORD *)v53 + 28) = 0;
      *((_QWORD *)v53 + 31) = 0;
      *((_QWORD *)v53 + 34) = 0;
      *((_QWORD *)v53 + 37) = 0;
      *((_QWORD *)v53 + 40) = 0;
      *((_OWORD *)v53 + 5) = 0;
      *((_OWORD *)v53 + 9) = 0;
      *((_OWORD *)v53 + 13) = 0;
      *(_OWORD *)(v53 + 232) = 0;
      *((_OWORD *)v53 + 16) = 0;
      *(_OWORD *)(v53 + 280) = 0;
      *((_OWORD *)v53 + 19) = 0;
      *(_OWORD *)(v53 + 328) = 0;
      *((_QWORD *)v53 + 43) = 0;
      *((_QWORD *)v53 + 46) = 0;
      *((_QWORD *)v53 + 49) = 0;
      *((_QWORD *)v53 + 52) = 0;
      *((_WORD *)v53 + 220) = 0;
      v53[442] = 0;
      *((_DWORD *)v53 + 111) = 0;
      *((_QWORD *)v53 + 58) = 0;
      *((_QWORD *)v53 + 59) = 0;
      *((_DWORD *)v53 + 120) = 0;
      *((_QWORD *)v53 + 61) = 0;
      *((_QWORD *)v53 + 64) = 0;
      *((_OWORD *)v53 + 22) = 0;
      *(_OWORD *)(v53 + 376) = 0;
      *((_OWORD *)v53 + 25) = 0;
      *(_OWORD *)(v53 + 424) = 0;
      *((_OWORD *)v53 + 28) = -1;
      *((_OWORD *)v53 + 31) = 0;
      qword_66C20 = v53;
      v57 = sub_25BB0(v53);
      v21 = qword_66C20;
      v22 = qword_66C20;
      if ( !v57 )
        goto LABEL_33;
      v58 = *((_QWORD *)qword_66C20 + 10);
      a2 = (unsigned int)dword_66C10;
      v23 = v58;
      if ( dword_66C10 )
      {
        if ( dword_66C10 >= (int)v58 )
          goto LABEL_33;
      }
    }
    if ( dword_66C0C <= 0 )
      goto LABEL_18;
    v22 = v21;
    if ( dword_66C0C <= 3 )
    {
LABEL_50:
      if ( *((_QWORD *)v21 + 15) != -1 )
      {
        v160 = 0;
        v162 = 0;
        v161 = 0;
        v163 = 0;
        sub_3CDB0((unsigned int)v21[42], (unsigned int)v21[43], &v160, &v162, 0);
        v42 = "kernel + all kexts";
        if ( dword_66C0C )
        {
          v42 = "kernel only";
          if ( dword_66C0C != 1 )
          {
            v42 = "normal mach-o file";
            if ( dword_66C0C == 2 )
              v42 = "single kext";
          }
        }
        v43 = s1;
        if ( (_QWORD)v163 )
          LODWORD(v43) = (_DWORD)v162;
        v44 = s1;
        if ( (_QWORD)v161 )
          LODWORD(v44) = v160;
        sub_35470(
          (_DWORD)v3,
          (unsigned int)"Apple XNU kernelcache for %s%s (%s)",
          (_DWORD)v44,
          (_DWORD)v43,
          (_DWORD)v42,
          v41);
        v45 = (const char *)(unsigned int)v21[43];
        v46 = (const char *)sub_14790((unsigned int)v21[42], v45, 0, (v21[41] & 0xFEFFFFFF) == -822415874);
        v47 = v46;
        if ( v46 && (v48 = strlen(v46), (v49 = v48) != 0) )
        {
          v87 = (void *)*v4;
          v88 = v48 + 1;
          if ( v4[2] < v48 + 1 )
          {
            v125 = qvector_reserve(v4, *v4, v48 + 1, 1);
            *v4 = v125;
            v87 = (void *)v125;
          }
          v4[1] = v88;
          v45 = v47;
          memmove(v87, v47, v49);
          *(_BYTE *)(*v4 + v49) = 0;
        }
        else
        {
          v4[1] = 0;
        }
        ++dword_66C0C;
        if ( v162 )
        {
          *(_QWORD *)&v163 = 0;
          qfree(v162, v45);
        }
        if ( v160 )
        {
          *(_QWORD *)&v161 = 0;
          qfree(v160, v45);
        }
        return 16409;
      }
      goto LABEL_165;
    }
    while ( 1 )
    {
      dword_66C0C = 0;
      a2 = (unsigned int)(dword_66C10 + 1);
      v24 = *((_QWORD *)v21 + 10);
      dword_66C10 = a2;
      v23 = v24;
      if ( (_DWORD)a2 && (int)a2 >= (int)v24 )
        goto LABEL_33;
LABEL_18:
      if ( (unsigned int)sub_1CB40(v21, a2, 0, v20) == 3 )
        break;
      a2 = (unsigned int)dword_66C10;
      if ( !(unsigned __int8)sub_25EF0(qword_66C20, (unsigned int)dword_66C10, 0, 1) )
        break;
      a1 = (char *)qword_66C20;
      v27 = *((_DWORD *)qword_66C20 + 44);
      if ( v27 != 2 && v27 != 12 )
        break;
      a2 = (__int64)&v162;
      LOBYTE(v163) = 0;
      v162 = off_62D68;
      sub_27280((__int64)qword_66C20, (__m128i *)&v162, v8, v20, v25, v26);
      if ( !(_BYTE)v163 )
        break;
      v21 = qword_66C20;
      v22 = qword_66C20;
      if ( dword_66C0C <= 3 )
        goto LABEL_50;
    }
    if ( v23 )
    {
      v151 = (__m128i *)qword_66C18;
      if ( qword_66C18 )
      {
        v28 = *(_QWORD *)(qword_66C18 + 8);
        goto LABEL_25;
      }
      v152 = (__int64 (__fastcall *)())qword_66C20;
      v59 = qalloc_or_throw(24, a2, v8);
      *(_QWORD *)v59 = 0;
      v60 = (__int64 *)v59;
      *(_OWORD *)(v59 + 8) = 0;
      if ( v23 <= 0 )
      {
        qword_66C18 = v59;
LABEL_83:
        v22 = qword_66C20;
        goto LABEL_33;
      }
      v61 = v23;
      v62 = 0;
      v63 = 0;
      v28 = 0;
      v154 = v61;
      v158 = &v162;
      do
      {
        v20 = v152;
        if ( v63 >= *((_QWORD *)v152 + 10) )
          break;
        v74 = (unsigned int *)(*((_QWORD *)v152 + 9) + 20 * v63);
        v141 = *v74;
        srca = v74[1];
        if ( v60[2] < v28 + 1 )
        {
          v75 = qvector_reserve(v60, v62, v28 + 1, 64);
          v28 = v60[1];
          *v60 = v75;
          v62 = v75;
        }
        v64 = v158;
        v65 = v62 + (v28 << 6);
        *(_QWORD *)v65 = 0;
        *(_QWORD *)(v65 + 24) = 0;
        *(_OWORD *)(v65 + 8) = 0;
        *(_OWORD *)(v65 + 32) = 0;
        ++v60[1];
        v160 = 0;
        v162 = 0;
        v161 = 0;
        v163 = 0;
        sub_3CDB0(v141, srca, &v160, v64, 0);
        v67 = s1;
        if ( (_QWORD)v163 )
          LODWORD(v67) = (_DWORD)v162;
        v68 = s1;
        if ( (_QWORD)v161 )
          LODWORD(v68) = v160;
        sub_35470(v65, (unsigned int)"Fat Mach-O file, %d. %s%s", v63 + 1, (_DWORD)v68, (_DWORD)v67, v66);
        v69 = srca;
        v70 = (const char *)sub_14790(v141, srca, v65 + 48, *((unsigned __int8 *)v152 + 160));
        if ( v70 && (src = v70, v71 = strlen(v70), v72 = src, (v73 = v71) != 0) )
        {
          v89 = *(void **)(v65 + 24);
          v90 = (void *)(v71 + 1);
          if ( *(_QWORD *)(v65 + 40) < v71 + 1 )
          {
            v159 = v71;
            v157.m128i_i64[0] = (__int64)src;
            srcc = (void *)(v71 + 1);
            v126 = qvector_reserve(v65 + 24, v89, v90, 1);
            *(_QWORD *)(v65 + 24) = v126;
            v73 = v159;
            v89 = (void *)v126;
            v72 = (const char *)v157.m128i_i64[0];
            v90 = srcc;
          }
          *(_QWORD *)(v65 + 32) = v90;
          v69 = (unsigned __int64)v72;
          srcd = (_BYTE *)v73;
          memmove(v89, v72, v73);
          srcd[*(_QWORD *)(v65 + 24)] = 0;
        }
        else
        {
          *(_QWORD *)(v65 + 32) = 0;
        }
        *(_DWORD *)(v65 + 52) = v63;
        *(_BYTE *)(v65 + 56) = (v141 & 0x3000000) != 0;
        if ( v162 )
        {
          *(_QWORD *)&v163 = 0;
          qfree(v162, v69);
        }
        if ( v160 )
        {
          *(_QWORD *)&v161 = 0;
          qfree(v160, v69);
        }
        v62 = *v60;
        v28 = v60[1];
        ++v63;
      }
      while ( v154 != v63 );
      v91 = *(unsigned int *)(ph + 4);
      a2 = v62 + (v28 << 6);
      if ( v62 == a2 )
      {
LABEL_143:
        qword_66C18 = (__int64)v60;
        v151 = (__m128i *)v60;
LABEL_25:
        if ( dword_66C10 < v28 )
        {
          v29 = v151->m128i_i64[0] + ((__int64)dword_66C10 << 6);
          v30 = v29;
          if ( (__int64 *)v29 != v3 )
          {
            v31 = *(_QWORD *)(v29 + 8);
            if ( v31 > 1 )
            {
              v129 = *(const void **)v29;
              v130 = (void *)*v3;
              if ( v3[2] < v31 )
              {
                v135 = qvector_reserve(v3, *v3, *(_QWORD *)(v29 + 8), 1);
                *v3 = v135;
                v130 = (void *)v135;
              }
              v3[1] = v31;
              memmove(v130, v129, v31 - 1);
              *(_BYTE *)(*v3 + v31 - 1) = 0;
            }
            else
            {
              v3[1] = 0;
            }
          }
          if ( v4 != (_QWORD *)(v30 + 24) )
          {
            v32 = *(_QWORD *)(v30 + 32);
            if ( v32 > 1 )
            {
              v131 = *(const void **)(v30 + 24);
              v132 = (void *)*v4;
              if ( v4[2] < v32 )
              {
                v134 = qvector_reserve(v4, *v4, v32, 1);
                *v4 = v134;
                v132 = (void *)v134;
              }
              v4[1] = v32;
              memmove(v132, v131, v32 - 1);
              *(_BYTE *)(*v4 + v32 - 1) = 0;
            }
            else
            {
              v4[1] = 0;
            }
          }
          goto LABEL_9;
        }
        goto LABEL_83;
      }
      v92 = ((__int64)(v28 << 6) >> 6) + 1;
      v93 = v92 / 2;
      v143 = v92 / 2;
      if ( v92 <= 1 )
      {
        if ( v143 )
          sub_16090(v62, a2, (unsigned int)v91);
        else
          sub_175D0(v62, v62, v62 + (v28 << 6), 0, v91);
LABEL_155:
        v97 = 0;
        goto LABEL_142;
      }
      srcb = v3;
      v94 = (char *)v62;
      v95 = *(_DWORD *)(ph + 4);
      v153 = v4;
      v96 = v62 + (v28 << 6);
      while ( 1 )
      {
        v97 = v93 << 6;
        v98 = (char *)operator new(v93 << 6, (const std::nothrow_t *)&std::nothrow);
        if ( v98 )
          break;
        if ( v93 == 1 )
        {
          v136 = v96;
          v151 = 0;
          v137 = v95;
          v3 = srcb;
          v4 = v153;
          v97 = 0;
          sub_16090(v94, v136, v137);
          goto LABEL_142;
        }
        v93 = (v93 + 1) >> 1;
      }
      v99 = v94;
      v100 = (__m128i *)&v98[v97];
      v101 = (char *)v96;
      v102 = v95;
      v4 = v153;
      v3 = srcb;
      v151 = (__m128i *)v98;
      if ( v98 == &v98[v97] )
      {
        if ( v143 == v93 )
        {
          sub_175D0(v99, v99, v101, v98, v102);
          goto LABEL_155;
        }
        v97 = 0;
      }
      else
      {
        v103 = *(_QWORD *)v99;
        *(_QWORD *)v99 = 0;
        v104 = _mm_loadu_si128((const __m128i *)(v99 + 8));
        v151->m128i_i64[0] = v103;
        *(__m128i *)((char *)v151 + 8) = v104;
        v105 = *((_QWORD *)v99 + 3);
        v106 = _mm_loadu_si128((const __m128i *)v99 + 2);
        *(_OWORD *)(v99 + 8) = 0;
        v151[1].m128i_i64[1] = v105;
        v151[2] = v106;
        v107 = *((_QWORD *)v99 + 6);
        *((_QWORD *)v99 + 3) = 0;
        *((_OWORD *)v99 + 2) = 0;
        v151[3].m128i_i64[0] = v107;
        v151[3].m128i_i8[8] = v99[56];
        v108 = v151 + 4;
        if ( v97 == 64 )
        {
          v114 = v151;
        }
        else
        {
          do
          {
            v109 = v108[-4].m128i_i64[0];
            v110 = _mm_loadu_si128((__m128i *)((char *)v108 - 56));
            *(__m128i *)((char *)&v108[-4] + 8) = 0;
            v108 += 4;
            v108[-8].m128i_i64[0] = 0;
            v108[-4].m128i_i64[0] = v109;
            v111 = v108[-7].m128i_i64[1];
            *(__m128i *)((char *)v108 - 56) = v110;
            v112 = _mm_loadu_si128(v108 - 6);
            v108[-3].m128i_i64[1] = v111;
            v113 = v108[-5].m128i_i64[0];
            v108[-7].m128i_i64[1] = 0;
            v108[-1].m128i_i64[0] = v113;
            LOBYTE(v113) = v108[-5].m128i_i8[8];
            v108[-2] = v112;
            v108[-6] = 0;
            v108[-1].m128i_i8[8] = v113;
          }
          while ( v108 != v100 );
          v114 = v100 - 4;
        }
        v115 = (__int64 (__fastcall ***)())v114->m128i_i64[0];
        v116 = _mm_loadu_si128((const __m128i *)&v114->m128i_u64[1]);
        v114->m128i_i64[0] = 0;
        *(__m128i *)((char *)v114 + 8) = 0;
        v117 = *(_QWORD *)v99;
        if ( *(_QWORD *)v99 )
        {
          *((_QWORD *)v99 + 1) = 0;
          LODWORD(v159) = v102;
          v158 = v115;
          v155 = (char *)v114;
          srce = v99;
          v157 = v116;
          qfree(v117, v101);
          v102 = (unsigned int)v159;
          v116 = _mm_load_si128(&v157);
          v115 = v158;
          v114 = (__m128i *)v155;
          v99 = srce;
        }
        *(_QWORD *)v99 = v115;
        *(__m128i *)(v99 + 8) = v116;
        v118 = (__int64 (__fastcall ***)())v114[1].m128i_i64[1];
        v119 = _mm_loadu_si128(v114 + 2);
        v114[1].m128i_i64[1] = 0;
        v114[2] = 0;
        v120 = *((_QWORD *)v99 + 3);
        if ( v120 )
        {
          *((_QWORD *)v99 + 4) = 0;
          LODWORD(v159) = v102;
          v158 = v118;
          v156 = (char *)v114;
          srcf = v99;
          v157 = v119;
          qfree(v120, v101);
          v102 = (unsigned int)v159;
          v119 = _mm_load_si128(&v157);
          v118 = v158;
          v114 = (__m128i *)v156;
          v99 = srcf;
        }
        *((_QWORD *)v99 + 3) = v118;
        *((__m128i *)v99 + 2) = v119;
        *((_DWORD *)v99 + 12) = v114[3].m128i_i32[0];
        *((_DWORD *)v99 + 13) = v114[3].m128i_i32[1];
        v99[56] = v114[3].m128i_i8[8];
        if ( v143 == v93 )
        {
          v121 = v101;
          v101 = &v99[v97];
          sub_175D0(v99, &v99[v97], v121, v151, v102);
          goto LABEL_135;
        }
      }
      sub_183F0(v99, v101, v151, v93, v102);
LABEL_135:
      if ( v151 != v100 )
      {
        v122 = v151;
        do
        {
          v123 = v122[1].m128i_i64[1];
          if ( v123 )
          {
            v122[2].m128i_i64[0] = 0;
            qfree(v123, v101);
          }
          v124 = v122->m128i_i64[0];
          if ( v122->m128i_i64[0] )
          {
            v122->m128i_i64[1] = 0;
            qfree(v124, v101);
          }
          v122 += 4;
        }
        while ( v122 != v100 );
      }
LABEL_142:
      a2 = v97;
      operator delete(v151, v97);
      v28 = v60[1];
      goto LABEL_143;
    }
    a2 = (unsigned int)dword_66C10;
    a1 = (char *)qword_66C20;
    v77 = sub_25EF0(qword_66C20, (unsigned int)dword_66C10, 0, 1);
    v22 = qword_66C20;
    if ( v77 )
    {
      if ( *((_QWORD *)qword_66C20 + 15) != -1 )
      {
        v160 = 0;
        v162 = 0;
        v161 = 0;
        v163 = 0;
        sub_3CDB0(*((unsigned int *)qword_66C20 + 42), *((unsigned int *)qword_66C20 + 43), &v160, &v162, 0);
        v78 = sub_117C0((unsigned int)v22[44]);
        v80 = s1;
        if ( (_QWORD)v163 )
          LODWORD(v80) = (_DWORD)v162;
        v81 = s1;
        if ( (_QWORD)v161 )
          LODWORD(v81) = v160;
        sub_35470((_DWORD)v3, (unsigned int)"Mach-O file (%s). %s%s", v78, (_DWORD)v81, (_DWORD)v80, v79);
        v82 = (const char *)(unsigned int)v22[43];
        v83 = (const char *)sub_14790((unsigned int)v22[42], v82, 0, (v22[41] & 0xFEFFFFFF) == -822415874);
        v84 = v83;
        if ( v83 && (v85 = strlen(v83), (v86 = v85) != 0) )
        {
          v127 = (void *)*v4;
          v128 = v85 + 1;
          if ( v4[2] < v85 + 1 )
          {
            v133 = qvector_reserve(v4, *v4, v85 + 1, 1);
            *v4 = v133;
            v127 = (void *)v133;
          }
          v4[1] = v128;
          v82 = v84;
          memmove(v127, v84, v86);
          *(_BYTE *)(*v4 + v86) = 0;
        }
        else
        {
          v4[1] = 0;
        }
        if ( v162 )
        {
          *(_QWORD *)&v163 = 0;
          qfree(v162, v82);
        }
        if ( v160 )
        {
          *(_QWORD *)&v161 = 0;
          qfree(v160, v82);
        }
        goto LABEL_9;
      }
LABEL_165:
      v138 = (struct _Unwind_Exception *)sub_11CF0(a1, a2, v8, v20);
      if ( v162 )
      {
        a2 = 0;
        *(_QWORD *)&v163 = 0;
        qfree(v162, 0);
      }
      if ( v160 )
      {
        *(_QWORD *)&v161 = 0;
        qfree(v160, a2);
      }
      _Unwind_Resume(v138);
    }
LABEL_33:
    if ( !v22 )
    {
LABEL_36:
      v34 = (__int64 *)qword_66C18;
      qword_66C20 = 0;
      if ( qword_66C18 )
      {
        v35 = *(_QWORD *)qword_66C18;
        if ( *(_QWORD *)qword_66C18 )
        {
          v36 = *(_QWORD *)(qword_66C18 + 8);
          if ( v36 )
          {
            for ( i = 0; i != v36; ++i )
            {
              v38 = (__int64 *)(v35 + (i << 6));
              v39 = v38[3];
              if ( v39 )
              {
                v38[4] = 0;
                qfree(v39, a2);
              }
              v40 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                qfree(v40, a2);
              }
              v35 = *v34;
            }
          }
          v34[1] = 0;
          qfree(v35, a2);
        }
        qfree(v34, a2);
      }
      qword_66C18 = 0;
      return 0;
    }
LABEL_34:
    v33 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v22 + 8LL);
    if ( v33 == sub_16550 )
    {
      sub_162E0(v22);
      a2 = 520;
      operator delete(v22, 0x208u);
    }
    else
    {
      ((void (__fastcall *)(_DWORD *, __int64, __int64 (__fastcall *)(void *), __int64 (__fastcall *)()))v33)(
        v22,
        a2,
        sub_16550,
        v20);
    }
    goto LABEL_36;
  }
LABEL_2:
  v10 = dword_66C10;
  v11 = v9 + 23;
  v12 = v9 + 32;
  if ( dword_66C10 > 1 )
  {
    sub_1A3D0(v9);
    operator delete(v9, 0x360u);
    dword_66C28 = 1;
    qword_66C30 = 0;
    return 0;
  }
  else
  {
    while ( *v11 == 32 )
    {
      if ( ++v11 == v12 )
        goto LABEL_5;
    }
    v12 = v11;
LABEL_5:
    v13 = (const char *)sub_11C10(v12);
    v14 = strlen(v13);
    v18 = v14;
    if ( v14 )
    {
      v50 = (void *)*v4;
      v51 = v14 + 1;
      if ( v4[2] < v14 + 1 )
      {
        v142 = v14 + 1;
        v76 = qvector_reserve(v4, *v4, v51, 1);
        v10 = dword_66C10;
        v51 = v142;
        *v4 = v76;
        v50 = (void *)v76;
      }
      v4[1] = v51;
      memmove(v50, v13, v18);
      *(_BYTE *)(*v4 + v18) = 0;
    }
    else
    {
      v4[1] = 0;
    }
    if ( !v10 )
    {
      sub_35470((_DWORD)v3, (unsigned int)"Apple DYLD cache for %s (complete image)", (_DWORD)v12, v15, v16, v17);
LABEL_9:
      ++dword_66C10;
      return 16409;
    }
    sub_35470((_DWORD)v3, (unsigned int)"Apple DYLD cache for %s (select module(s))", (_DWORD)v12, v15, v16, v17);
    ++dword_66C10;
    return 49177;
  }
}
