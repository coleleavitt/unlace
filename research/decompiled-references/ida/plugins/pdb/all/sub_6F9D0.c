__int64 __fastcall sub_6F9D0(_QWORD *a1, unsigned int *a2, unsigned int a3, __int64 **a4, unsigned __int16 a5, char a6)
{
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // r14
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // r15
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 (*v23)(); // rcx
  void (*v24)(); // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 *v30; // rdi
  __int64 v31; // rax
  void (*v32)(); // rax
  __int64 v33; // rax
  __int64 *v34; // rdi
  __m128i v35; // xmm0
  __int64 v36; // rax
  void (*v37)(); // rax
  unsigned int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // rdi
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 (*v44)(); // rcx
  void (*v45)(); // rax
  __int64 v46; // rax
  __int64 *v47; // rdi
  __m128i si128; // xmm0
  __int64 v49; // rax
  void (*v50)(); // rax
  __int64 v51; // rax
  __int64 *v52; // rdi
  __m128i v53; // xmm0
  __int64 v54; // rax
  void (*v55)(); // rax
  __int64 v56; // rax
  __m128i v57; // xmm1
  __int64 *v58; // rdi
  __int64 v59; // rax
  void (*v60)(); // rax
  __int64 v61; // rax
  __m128i v62; // xmm0
  __int64 *v63; // rdi
  __int64 v64; // rax
  void (*v65)(); // rax
  __int64 v66; // rax
  __int64 *v67; // rdi
  __m128i v68; // xmm0
  __int64 v69; // rax
  void (*v70)(); // rax
  __int64 v71; // rax
  __int64 *v72; // rdi
  __m128i v73; // xmm0
  __int64 v74; // rax
  void (*v75)(); // rax
  __int64 v76; // rax
  __int64 *v77; // rdi
  __m128i v78; // xmm0
  __int64 v79; // rax
  void (*v80)(); // rax
  __int64 v81; // rax
  __int64 *v82; // rdi
  __m128i v83; // xmm0
  __int64 v84; // rax
  void (*v85)(); // rax
  __int64 v86; // rax
  __int64 *v87; // rdi
  __m128i v88; // xmm0
  __int64 v89; // rax
  void (*v90)(); // rax
  __int64 v91; // rax
  __int64 *v92; // rdi
  __m128i v93; // xmm0
  __int64 v94; // rax
  void (*v95)(); // rax
  __int64 v96; // rax
  __m128i v97; // xmm1
  __int64 *v98; // rdi
  __int64 v99; // rax
  void (*v100)(); // rax
  __int64 v101; // rax
  __int64 *v102; // rdi
  __m128i v103; // xmm0
  __int64 v104; // rax
  void (*v105)(); // rax
  __int64 v106; // rax
  __m128i v107; // xmm1
  __int64 *v108; // rdi
  __int64 v109; // rax
  void (*v110)(); // rax
  __int64 v111; // rax
  __m128i v112; // xmm0
  __int64 *v113; // rdi
  __int64 v114; // rax
  void (*v115)(); // rax
  __int64 v116; // rax
  __int64 *v117; // rdi
  __m128i v118; // xmm0
  __int64 v119; // rax
  __int64 (*v120)(); // rcx
  void (*v121)(); // rax
  __int64 v122; // rax
  __int64 *v123; // rdi
  __m128i v124; // xmm0
  __int64 v125; // rax
  __int64 (*v126)(); // rcx
  void (*v127)(); // rax
  int v130; // [rsp+Ch] [rbp-ECh]
  int v131; // [rsp+Ch] [rbp-ECh]
  int v132; // [rsp+Ch] [rbp-ECh]
  int v133; // [rsp+Ch] [rbp-ECh]
  int v134; // [rsp+Ch] [rbp-ECh]
  int v135; // [rsp+Ch] [rbp-ECh]
  int v136; // [rsp+Ch] [rbp-ECh]
  int v137; // [rsp+Ch] [rbp-ECh]
  int v138; // [rsp+Ch] [rbp-ECh]
  int v139; // [rsp+Ch] [rbp-ECh]
  int v140; // [rsp+Ch] [rbp-ECh]
  int v141; // [rsp+Ch] [rbp-ECh]
  int v142; // [rsp+Ch] [rbp-ECh]
  int v143; // [rsp+Ch] [rbp-ECh]
  int v144; // [rsp+Ch] [rbp-ECh]
  int v145; // [rsp+Ch] [rbp-ECh]
  int v146; // [rsp+Ch] [rbp-ECh]
  int v147; // [rsp+Ch] [rbp-ECh]
  int v148; // [rsp+Ch] [rbp-ECh]
  int v149; // [rsp+Ch] [rbp-ECh]
  unsigned __int16 v150; // [rsp+12h] [rbp-E6h] BYREF
  unsigned int v151; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v152; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v153; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v154; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v155; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v156; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v157; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v158; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v159; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v160; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v161; // [rsp+60h] [rbp-98h] BYREF
  __int64 v162; // [rsp+68h] [rbp-90h] BYREF
  __int64 v163; // [rsp+70h] [rbp-88h] BYREF
  __int64 v164; // [rsp+78h] [rbp-80h] BYREF
  __int64 v165; // [rsp+80h] [rbp-78h] BYREF
  __int64 v166; // [rsp+88h] [rbp-70h] BYREF
  __int64 v167; // [rsp+90h] [rbp-68h] BYREF
  __int64 v168; // [rsp+98h] [rbp-60h] BYREF
  __int64 v169; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v170; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v171[9]; // [rsp+B0h] [rbp-48h] BYREF

  v10 = *a4;
  v171[1] = __readfsqword(0x28u);
  v11 = *v10;
  v150 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64 *))(v11 + 32))(v10);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int16 *, __int64))(*v10 + 48))(v10, &v150, 2) )
    return 0;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v10 + 40))(v10, v12);
  if ( !(_BYTE)v13 )
    return 0;
  v14 = (__int64)(a1[1] - *a1) >> 3;
  v151 = v14;
  v15 = sub_72FB0(v150);
  v16 = sub_72E20(v15);
  v17 = sub_732A0(v16);
  if ( v150 > 0x151Du )
  {
    if ( v150 == 5634 )
    {
      v134 = v17;
      v46 = operator new(0x60u);
      v47 = *a4;
      *(_OWORD *)(v46 + 32) = 0;
      v20 = v46;
      si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_DWORD *)(v46 + 20) = v134;
      *(_QWORD *)(v46 + 8) = 0;
      *(_DWORD *)(v46 + 16) = v14;
      *(_QWORD *)(v46 + 24) = 0;
      *(_DWORD *)(v46 + 80) = -1;
      *(_QWORD *)(v46 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v46 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v46 + 84) = -1;
      *(_QWORD *)v46 = off_B2120;
      *(__m128i *)(v46 + 64) = si128;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v47 + 48))(v47, v46 + 86, 10) )
        goto LABEL_19;
      *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
        goto LABEL_19;
      v49 = *(_QWORD *)v20;
      *(_QWORD *)(v20 + 8) = a1;
      v50 = *(void (**)())(v49 + 312);
      if ( v50 != nullsub_15 )
        ((void (__fastcall *)(__int64))v50)(v20);
      if ( !v20 )
        return 0;
      v25 = a1[1];
      if ( v25 == a1[2] )
      {
        v171[0] = v20;
        sub_57F80((__int64)a1, v171);
        v26 = v171[0];
        if ( !v171[0] )
          goto LABEL_35;
        goto LABEL_18;
      }
      goto LABEL_34;
    }
    if ( v150 <= 0x1602u )
    {
      if ( v150 != 5633 )
        goto LABEL_49;
      v132 = v17;
      v33 = operator new(0x60u);
      v34 = *a4;
      *(_OWORD *)(v33 + 32) = 0;
      v20 = v33;
      v35 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_DWORD *)(v33 + 20) = v132;
      *(_QWORD *)(v33 + 8) = 0;
      *(_DWORD *)(v33 + 16) = v14;
      *(_QWORD *)(v33 + 24) = 0;
      *(_WORD *)(v33 + 84) = -1;
      *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v33 + 56) = 0xFFFFFFFFLL;
      *(_DWORD *)(v33 + 80) = -1;
      *(_QWORD *)v33 = off_AEA28;
      *(__m128i *)(v33 + 64) = v35;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v34 + 48))(v34, v33 + 86, 10) )
        goto LABEL_19;
      *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
        goto LABEL_19;
      v36 = *(_QWORD *)v20;
      *(_QWORD *)(v20 + 8) = a1;
      v37 = *(void (**)())(v36 + 312);
      if ( v37 != nullsub_15 )
        ((void (__fastcall *)(__int64))v37)(v20);
      if ( !v20 )
        return 0;
      v25 = a1[1];
      if ( v25 == a1[2] )
      {
        v170 = v20;
        sub_57F80((__int64)a1, &v170);
        v26 = v170;
        if ( !v170 )
          goto LABEL_35;
        goto LABEL_18;
      }
      goto LABEL_34;
    }
    if ( (unsigned __int16)(v150 - 5640) > 3u )
      goto LABEL_49;
LABEL_66:
    LODWORD(v25) = sub_688E0(a1, &v151, a3, a6);
    v13 = v25;
  }
  else
  {
    if ( v150 > 0x1501u )
    {
      switch ( v150 )
      {
        case 0x1502u:
          v143 = v17;
          v91 = operator new(0x68u);
          v92 = *a4;
          *(_OWORD *)(v91 + 32) = 0;
          v20 = v91;
          v93 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v91 + 20) = v143;
          *(_QWORD *)(v91 + 8) = 0;
          *(_DWORD *)(v91 + 16) = v14;
          *(_QWORD *)(v91 + 24) = 0;
          *(_DWORD *)(v91 + 80) = -1;
          *(_QWORD *)(v91 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v91 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v91 + 84) = -1;
          *(_QWORD *)v91 = off_B1910;
          *(_QWORD *)(v91 + 96) = 0;
          *(__m128i *)(v91 + 64) = v93;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v92 + 48))(v92, v91 + 86, 4) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v94 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v95 = *(void (**)())(v94 + 312);
          if ( v95 != nullsub_15 )
            ((void (__fastcall *)(__int64))v95)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v161 = v20;
          sub_57F80((__int64)a1, &v161);
          v26 = v161;
          if ( !v161 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x1503u:
          v141 = v17;
          v81 = operator new(0x68u);
          v82 = *a4;
          *(_DWORD *)(v81 + 16) = v14;
          v20 = v81;
          *(_DWORD *)(v81 + 20) = v141;
          *(_OWORD *)(v81 + 32) = 0;
          v83 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_QWORD *)(v81 + 8) = 0;
          *(_QWORD *)(v81 + 24) = 0;
          *(_DWORD *)(v81 + 80) = -1;
          *(_QWORD *)(v81 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v81 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v81 + 84) = -1;
          *(_QWORD *)v81 = off_B1258;
          *(_QWORD *)(v81 + 96) = 0;
          *(__m128i *)(v81 + 64) = v83;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v82 + 48))(v82, v81 + 86, 10) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v84 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v85 = *(void (**)())(v84 + 312);
          if ( v85 != nullsub_15 )
            ((void (__fastcall *)(__int64))v85)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v162 = v20;
          sub_57F80((__int64)a1, &v162);
          v26 = v162;
          if ( !v162 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x1504u:
        case 0x1505u:
        case 0x1506u:
        case 0x1507u:
        case 0x1519u:
          goto LABEL_66;
        case 0x150Du:
          v135 = v17;
          v51 = operator new(0x68u);
          v52 = *a4;
          *(_OWORD *)(v51 + 32) = 0;
          v20 = v51;
          v53 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v51 + 20) = v135;
          *(_QWORD *)(v51 + 8) = 0;
          *(_DWORD *)(v51 + 16) = v14;
          *(_QWORD *)(v51 + 24) = 0;
          *(_DWORD *)(v51 + 80) = -1;
          *(_QWORD *)(v51 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v51 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v51 + 84) = -1;
          *(_QWORD *)v51 = off_B1660;
          *(_QWORD *)(v51 + 96) = 0;
          *(__m128i *)(v51 + 64) = v53;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v52 + 48))(v52, v51 + 86, 8) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v54 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v55 = *(void (**)())(v54 + 312);
          if ( v55 != nullsub_15 )
            ((void (__fastcall *)(__int64))v55)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v163 = v20;
          sub_57F80((__int64)a1, &v163);
          v26 = v163;
          if ( !v163 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x150Eu:
          v139 = v17;
          v71 = operator new(0x60u);
          v72 = *a4;
          *(_OWORD *)(v71 + 32) = 0;
          v20 = v71;
          v73 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v71 + 20) = v139;
          *(_QWORD *)(v71 + 8) = 0;
          *(_DWORD *)(v71 + 16) = v14;
          *(_QWORD *)(v71 + 24) = 0;
          *(_DWORD *)(v71 + 80) = -1;
          *(_QWORD *)(v71 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v71 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v71 + 84) = -1;
          *(_QWORD *)v71 = off_B17B8;
          *(__m128i *)(v71 + 64) = v73;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v72 + 48))(v72, v71 + 86, 8) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v74 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v75 = *(void (**)())(v74 + 312);
          if ( v75 != nullsub_15 )
            ((void (__fastcall *)(__int64))v75)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v164 = v20;
          sub_57F80((__int64)a1, &v164);
          v26 = v164;
          if ( !v164 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x1510u:
          v138 = v17;
          v66 = operator new(0x60u);
          v67 = *a4;
          *(_OWORD *)(v66 + 32) = 0;
          v20 = v66;
          v68 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v66 + 20) = v138;
          *(_QWORD *)(v66 + 8) = 0;
          *(_DWORD *)(v66 + 16) = v14;
          *(_QWORD *)(v66 + 24) = 0;
          *(_DWORD *)(v66 + 80) = -1;
          *(_QWORD *)(v66 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v66 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v66 + 84) = -1;
          *(_QWORD *)v66 = off_B1FC8;
          *(__m128i *)(v66 + 64) = v68;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v67 + 48))(v67, v66 + 86, 8) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v69 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v70 = *(void (**)())(v69 + 312);
          if ( v70 != nullsub_15 )
            ((void (__fastcall *)(__int64))v70)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v165 = v20;
          sub_57F80((__int64)a1, &v165);
          v26 = v165;
          if ( !v165 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x1511u:
          v142 = v17;
          v86 = operator new(0x68u);
          v87 = *a4;
          *(_OWORD *)(v86 + 32) = 0;
          v20 = v86;
          v88 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v86 + 20) = v142;
          *(_QWORD *)(v86 + 8) = 0;
          *(_DWORD *)(v86 + 16) = v14;
          *(_QWORD *)(v86 + 24) = 0;
          *(_DWORD *)(v86 + 80) = -1;
          *(_QWORD *)(v86 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v86 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v86 + 84) = -1;
          *(_QWORD *)v86 = off_B1100;
          *(_DWORD *)(v86 + 96) = 0;
          *(__m128i *)(v86 + 64) = v88;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v87 + 48))(v87, v86 + 86, 8) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v89 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v90 = *(void (**)())(v89 + 312);
          if ( v90 != nullsub_15 )
            ((void (__fastcall *)(__int64))v90)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v166 = v20;
          sub_57F80((__int64)a1, &v166);
          v26 = v166;
          if ( !v166 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x1515u:
          v137 = v17;
          v61 = operator new(0x70u);
          *(_OWORD *)(v61 + 32) = 0;
          v20 = v61;
          v62 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v61 + 20) = v137;
          *(_QWORD *)(v61 + 8) = 0;
          *(_DWORD *)(v61 + 16) = v14;
          *(_QWORD *)(v61 + 24) = 0;
          *(_WORD *)(v61 + 84) = -1;
          v63 = *a4;
          *(_QWORD *)(v61 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v61 + 56) = 0xFFFFFFFFLL;
          *(_DWORD *)(v61 + 80) = -1;
          *(_QWORD *)v61 = off_AEB80;
          *(__m128i *)(v61 + 64) = v62;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v63 + 48))(v63, v61 + 86, 22) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v64 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v65 = *(void (**)())(v64 + 312);
          if ( v65 != nullsub_15 )
            ((void (__fastcall *)(__int64))v65)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v167 = v20;
          sub_57F80((__int64)a1, &v167);
          v26 = v167;
          if ( !v167 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x151Au:
          v140 = v17;
          v76 = operator new(0x68u);
          v77 = *a4;
          *(_OWORD *)(v76 + 32) = 0;
          v20 = v76;
          v78 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v76 + 20) = v140;
          *(_QWORD *)(v76 + 8) = 0;
          *(_DWORD *)(v76 + 16) = v14;
          *(_QWORD *)(v76 + 24) = 0;
          *(_WORD *)(v76 + 84) = -1;
          *(_QWORD *)(v76 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v76 + 56) = 0xFFFFFFFFLL;
          *(_DWORD *)(v76 + 80) = -1;
          *(_QWORD *)v76 = off_B13B0;
          *(_QWORD *)(v76 + 96) = 0;
          *(__m128i *)(v76 + 64) = v78;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v77 + 48))(v77, v76 + 86, 8) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v79 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v80 = *(void (**)())(v79 + 312);
          if ( v80 != nullsub_15 )
            ((void (__fastcall *)(__int64))v80)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v168 = v20;
          sub_57F80((__int64)a1, &v168);
          v26 = v168;
          if ( !v168 )
            goto LABEL_35;
          goto LABEL_18;
        case 0x151Du:
          v136 = v17;
          v56 = operator new(0x80u);
          v57 = _mm_load_si128((const __m128i *)&xmmword_94160);
          *(_DWORD *)(v56 + 16) = v14;
          v20 = v56;
          v58 = *a4;
          *(_DWORD *)(v56 + 20) = v136;
          *(_QWORD *)(v56 + 8) = 0;
          *(_QWORD *)(v56 + 24) = 0;
          *(_OWORD *)(v56 + 32) = 0;
          *(_DWORD *)(v56 + 80) = -1;
          *(_QWORD *)(v56 + 48) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)(v56 + 56) = 0xFFFFFFFFLL;
          *(_WORD *)(v56 + 84) = -1;
          *(_QWORD *)v56 = off_AECD8;
          *(_QWORD *)(v56 + 104) = 0;
          *(__m128i *)(v56 + 64) = v57;
          *(_OWORD *)(v56 + 112) = 0;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v58 + 48))(v58, v56 + 86, 18) )
            goto LABEL_19;
          *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
            goto LABEL_19;
          v59 = *(_QWORD *)v20;
          *(_QWORD *)(v20 + 8) = a1;
          v60 = *(void (**)())(v59 + 312);
          if ( v60 != nullsub_15 )
            ((void (__fastcall *)(__int64))v60)(v20);
          if ( !v20 )
            return 0;
          v25 = a1[1];
          if ( v25 != a1[2] )
            goto LABEL_34;
          v169 = v20;
          sub_57F80((__int64)a1, &v169);
          v26 = v169;
          if ( !v169 )
            goto LABEL_35;
          goto LABEL_18;
        default:
          goto LABEL_49;
      }
    }
    if ( v150 == 4613 )
    {
      v148 = v17;
      v116 = operator new(0x60u);
      v117 = *a4;
      *(_OWORD *)(v116 + 32) = 0;
      v20 = v116;
      v118 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_DWORD *)(v116 + 20) = v148;
      *(_QWORD *)(v116 + 8) = 0;
      *(_DWORD *)(v116 + 16) = v14;
      *(_QWORD *)(v116 + 24) = 0;
      *(_WORD *)(v116 + 84) = -1;
      *(_QWORD *)(v116 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v116 + 56) = 0xFFFFFFFFLL;
      *(_DWORD *)(v116 + 80) = -1;
      *(_QWORD *)v116 = off_B1BC0;
      *(__m128i *)(v116 + 64) = v118;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v117 + 48))(v117, v116 + 86, 8) )
        goto LABEL_19;
      *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
      v119 = *(_QWORD *)v20;
      v120 = *(__int64 (**)())(*(_QWORD *)v20 + 320LL);
      if ( v120 != sub_5E620 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, __int64 **, _QWORD))v120)(v20, a4, a5) )
          goto LABEL_19;
        v119 = *(_QWORD *)v20;
      }
      *(_QWORD *)(v20 + 8) = a1;
      v121 = *(void (**)())(v119 + 312);
      if ( v121 != nullsub_15 )
        ((void (__fastcall *)(__int64))v121)(v20);
      if ( !v20 )
        return 0;
      v25 = a1[1];
      if ( v25 == a1[2] )
      {
        v156 = v20;
        sub_57F80((__int64)a1, &v156);
        v26 = v156;
        if ( !v156 )
          goto LABEL_35;
        goto LABEL_18;
      }
LABEL_34:
      *(_QWORD *)v25 = v20;
      a1[1] += 8LL;
      goto LABEL_35;
    }
    if ( v150 <= 0x1205u )
    {
      if ( v150 == 4098 )
      {
        v147 = v17;
        v111 = operator new(0x70u);
        *(_OWORD *)(v111 + 32) = 0;
        v20 = v111;
        v112 = _mm_load_si128((const __m128i *)&xmmword_94160);
        *(_DWORD *)(v111 + 20) = v147;
        *(_QWORD *)(v111 + 8) = 0;
        *(_DWORD *)(v111 + 16) = v14;
        *(_QWORD *)(v111 + 24) = 0;
        *(_WORD *)(v111 + 84) = -1;
        v113 = *a4;
        *(_QWORD *)(v111 + 48) = 0xFFFFFFFF00000001LL;
        *(_QWORD *)(v111 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v111 + 80) = -1;
        *(_QWORD *)v111 = off_B1A68;
        *(_QWORD *)(v111 + 104) = 0;
        *(__m128i *)(v111 + 64) = v112;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v113 + 48))(v113, v111 + 86, 16) )
          goto LABEL_19;
        *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
          goto LABEL_19;
        v114 = *(_QWORD *)v20;
        *(_QWORD *)(v20 + 8) = a1;
        v115 = *(void (**)())(v114 + 312);
        if ( v115 != nullsub_15 )
          ((void (__fastcall *)(__int64))v115)(v20);
        if ( !v20 )
          return 0;
        v25 = a1[1];
        if ( v25 == a1[2] )
        {
          v153 = v20;
          sub_57F80((__int64)a1, &v153);
          v26 = v153;
          if ( !v153 )
            goto LABEL_35;
          goto LABEL_18;
        }
      }
      else if ( v150 <= 0x1002u )
      {
        if ( v150 != 10 )
        {
          if ( v150 == 4097 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(**a4 + 48))(*a4, v171, 8) )
            {
              v38 = *(_DWORD *)((char *)v171 + 2);
              if ( *(_DWORD *)((char *)v171 + 2) > 0xFFFu && !sub_5F700(a1 + 21, *(unsigned int *)((char *)v171 + 2)) )
                v38 = 0;
              if ( a3 != v38 && (unsigned __int8)sub_6F820(a1, &v151, v38, 1) )
              {
                v39 = *a1 + 8LL * v151;
                LODWORD(v25) = BYTE6(v171[0]);
                if ( (v171[0] & 0x1000000000000LL) != 0 )
                  *(_DWORD *)(*(_QWORD *)v39 + 48LL) |= 0x10u;
                if ( (v25 & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)v39 + 48LL) |= 0x20u;
                if ( (v25 & 4) != 0 )
                {
                  v25 = *(_QWORD *)v39;
                  *(_DWORD *)(*(_QWORD *)v39 + 48LL) |= 0x40u;
                }
                goto LABEL_35;
              }
            }
            return 0;
          }
          goto LABEL_49;
        }
        v144 = v17;
        v96 = operator new(0x78u);
        v97 = _mm_load_si128((const __m128i *)&xmmword_94160);
        *(_QWORD *)(v96 + 8) = 0;
        v20 = v96;
        v98 = *a4;
        *(_DWORD *)(v96 + 20) = v144;
        *(_DWORD *)(v96 + 16) = v14;
        *(_QWORD *)(v96 + 24) = 0;
        *(_OWORD *)(v96 + 32) = 0;
        *(_DWORD *)(v96 + 80) = -1;
        *(_QWORD *)(v96 + 48) = 0xFFFFFFFF00000001LL;
        *(_QWORD *)(v96 + 56) = 0xFFFFFFFFLL;
        *(_WORD *)(v96 + 84) = -1;
        *(_QWORD *)v96 = off_AE8D0;
        *(_QWORD *)(v96 + 96) = 0;
        *(__m128i *)(v96 + 64) = v97;
        *(_OWORD *)(v96 + 104) = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v98 + 48))(v98, v96 + 86, 4) )
          goto LABEL_19;
        *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
          goto LABEL_19;
        v99 = *(_QWORD *)v20;
        *(_QWORD *)(v20 + 8) = a1;
        v100 = *(void (**)())(v99 + 312);
        if ( v100 != nullsub_15 )
          ((void (__fastcall *)(__int64))v100)(v20);
        if ( !v20 )
          return 0;
        v25 = a1[1];
        if ( v25 == a1[2] )
        {
          v152 = v20;
          sub_57F80((__int64)a1, &v152);
          v26 = v152;
          if ( !v152 )
            goto LABEL_35;
          goto LABEL_18;
        }
      }
      else
      {
        if ( v150 != 4104 )
        {
          if ( v150 == 4105 )
          {
            v130 = v17;
            v18 = operator new(0x70u);
            v19 = *a4;
            *(_OWORD *)(v18 + 32) = 0;
            v20 = v18;
            v21 = _mm_load_si128((const __m128i *)&xmmword_94160);
            *(_DWORD *)(v18 + 20) = v130;
            *(_QWORD *)(v18 + 8) = 0;
            *(_DWORD *)(v18 + 16) = v14;
            *(_QWORD *)(v18 + 24) = 0;
            *(_DWORD *)(v18 + 80) = -1;
            *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000001LL;
            *(_QWORD *)(v18 + 56) = 0xFFFFFFFFLL;
            *(_WORD *)(v18 + 84) = -1;
            *(_QWORD *)v18 = off_B0FA8;
            *(__m128i *)(v18 + 64) = v21;
            if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v19 + 48))(v19, v18 + 86, 26) )
            {
              *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
              v22 = *(_QWORD *)v20;
              v23 = *(__int64 (**)())(*(_QWORD *)v20 + 320LL);
              if ( v23 == sub_5E610 )
                goto LABEL_13;
              if ( ((unsigned __int8 (__fastcall *)(__int64, __int64 **, _QWORD))v23)(v20, a4, a5) )
              {
                v22 = *(_QWORD *)v20;
LABEL_13:
                *(_QWORD *)(v20 + 8) = a1;
                v24 = *(void (**)())(v22 + 312);
                if ( v24 != nullsub_15 )
                  ((void (__fastcall *)(__int64))v24)(v20);
                if ( v20 )
                {
                  v25 = a1[1];
                  if ( v25 == a1[2] )
                  {
                    v155 = v20;
                    sub_57F80((__int64)a1, &v155);
                    v26 = v155;
                    if ( !v155 )
                      goto LABEL_35;
                    goto LABEL_18;
                  }
                  goto LABEL_34;
                }
                return 0;
              }
            }
LABEL_19:
            if ( v20 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 272LL))(v20);
            return 0;
          }
LABEL_49:
          if ( (*(_DWORD *)debug & 0x400000) != 0 )
            sub_29350();
          sub_244A0();
          return 0;
        }
        v149 = v17;
        v122 = operator new(0x68u);
        v123 = *a4;
        *(_OWORD *)(v122 + 32) = 0;
        v20 = v122;
        v124 = _mm_load_si128((const __m128i *)&xmmword_94160);
        *(_DWORD *)(v122 + 20) = v149;
        *(_QWORD *)(v122 + 8) = 0;
        *(_DWORD *)(v122 + 16) = v14;
        *(_QWORD *)(v122 + 24) = 0;
        *(_WORD *)(v122 + 84) = -1;
        *(_QWORD *)(v122 + 48) = 0xFFFFFFFF00000001LL;
        *(_QWORD *)(v122 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v122 + 80) = -1;
        *(_QWORD *)v122 = off_B0E50;
        *(__m128i *)(v122 + 64) = v124;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v123 + 48))(v123, v122 + 86, 14) )
          goto LABEL_19;
        *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
        v125 = *(_QWORD *)v20;
        v126 = *(__int64 (**)())(*(_QWORD *)v20 + 320LL);
        if ( v126 != sub_5E600 )
        {
          if ( !((unsigned __int8 (__fastcall *)(__int64, __int64 **, _QWORD))v126)(v20, a4, a5) )
            goto LABEL_19;
          v125 = *(_QWORD *)v20;
        }
        *(_QWORD *)(v20 + 8) = a1;
        v127 = *(void (**)())(v125 + 312);
        if ( v127 != nullsub_15 )
          ((void (__fastcall *)(__int64))v127)(v20);
        if ( !v20 )
          return 0;
        v25 = a1[1];
        if ( v25 == a1[2] )
        {
          v154 = v20;
          sub_57F80((__int64)a1, &v154);
          v26 = v154;
          if ( !v154 )
            goto LABEL_35;
LABEL_18:
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 272LL))(v26);
          goto LABEL_35;
        }
      }
      goto LABEL_34;
    }
    if ( v150 == 5122 )
    {
      v146 = v17;
      v106 = operator new(0x78u);
      v107 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_QWORD *)(v106 + 8) = 0;
      v20 = v106;
      v108 = *a4;
      *(_DWORD *)(v106 + 20) = v146;
      *(_DWORD *)(v106 + 16) = v14;
      *(_QWORD *)(v106 + 24) = 0;
      *(_OWORD *)(v106 + 32) = 0;
      *(_DWORD *)(v106 + 80) = -1;
      *(_QWORD *)(v106 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v106 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v106 + 84) = -1;
      *(_QWORD *)v106 = off_B1508;
      *(__m128i *)(v106 + 64) = v107;
      *(_OWORD *)(v106 + 104) = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v108 + 48))(v108, v106 + 86, 12) )
        goto LABEL_19;
      *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
        goto LABEL_19;
      v109 = *(_QWORD *)v20;
      *(_QWORD *)(v20 + 8) = a1;
      v110 = *(void (**)())(v109 + 312);
      if ( v110 != nullsub_15 )
        ((void (__fastcall *)(__int64))v110)(v20);
      if ( !v20 )
        return 0;
      v25 = a1[1];
      if ( v25 == a1[2] )
      {
        v159 = v20;
        sub_57F80((__int64)a1, &v159);
        v26 = v159;
        if ( !v159 )
          goto LABEL_35;
        goto LABEL_18;
      }
      goto LABEL_34;
    }
    if ( v150 > 0x1402u )
    {
      if ( v150 != 5129 )
        goto LABEL_49;
      v133 = v17;
      v40 = operator new(0x60u);
      v41 = *a4;
      *(_OWORD *)(v40 + 32) = 0;
      v20 = v40;
      v42 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_DWORD *)(v40 + 20) = v133;
      *(_QWORD *)(v40 + 8) = 0;
      *(_DWORD *)(v40 + 16) = v14;
      *(_QWORD *)(v40 + 24) = 0;
      *(_DWORD *)(v40 + 80) = -1;
      *(_QWORD *)(v40 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v40 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v40 + 84) = -1;
      *(_QWORD *)v40 = off_B1E70;
      *(__m128i *)(v40 + 64) = v42;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v41 + 48))(v41, v40 + 86, 8) )
        goto LABEL_19;
      *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
      v43 = *(_QWORD *)v20;
      v44 = *(__int64 (**)())(*(_QWORD *)v20 + 320LL);
      if ( v44 != sub_5E630 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, __int64 **, _QWORD))v44)(v20, a4, a5) )
          goto LABEL_19;
        v43 = *(_QWORD *)v20;
      }
      *(_QWORD *)(v20 + 8) = a1;
      v45 = *(void (**)())(v43 + 312);
      if ( v45 != nullsub_15 )
        ((void (__fastcall *)(__int64))v45)(v20);
      if ( !v20 )
        return 0;
      v25 = a1[1];
      if ( v25 == a1[2] )
      {
        v160 = v20;
        sub_57F80((__int64)a1, &v160);
        v26 = v160;
        if ( !v160 )
          goto LABEL_35;
        goto LABEL_18;
      }
      goto LABEL_34;
    }
    if ( v150 == 5120 )
    {
      v145 = v17;
      v101 = operator new(0x68u);
      v102 = *a4;
      *(_OWORD *)(v101 + 32) = 0;
      v20 = v101;
      v103 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_DWORD *)(v101 + 20) = v145;
      *(_QWORD *)(v101 + 8) = 0;
      *(_DWORD *)(v101 + 16) = v14;
      *(_QWORD *)(v101 + 24) = 0;
      *(_DWORD *)(v101 + 80) = -1;
      *(_QWORD *)(v101 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v101 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v101 + 84) = -1;
      *(_QWORD *)v101 = off_B13B0;
      *(_QWORD *)(v101 + 96) = 0;
      *(__m128i *)(v101 + 64) = v103;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v102 + 48))(v102, v101 + 86, 8) )
        goto LABEL_19;
      *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
        goto LABEL_19;
      v104 = *(_QWORD *)v20;
      *(_QWORD *)(v20 + 8) = a1;
      v105 = *(void (**)())(v104 + 312);
      if ( v105 != nullsub_15 )
        ((void (__fastcall *)(__int64))v105)(v20);
      if ( !v20 )
        return 0;
      v25 = a1[1];
      if ( v25 == a1[2] )
      {
        v157 = v20;
        sub_57F80((__int64)a1, &v157);
        v26 = v157;
        if ( !v157 )
          goto LABEL_35;
        goto LABEL_18;
      }
      goto LABEL_34;
    }
    if ( v150 != 5121 )
      goto LABEL_49;
    v131 = v17;
    v28 = operator new(0x78u);
    v29 = _mm_load_si128((const __m128i *)&xmmword_94160);
    *(_QWORD *)(v28 + 8) = 0;
    v20 = v28;
    v30 = *a4;
    *(_DWORD *)(v28 + 20) = v131;
    *(_DWORD *)(v28 + 16) = v14;
    *(_QWORD *)(v28 + 24) = 0;
    *(_OWORD *)(v28 + 32) = 0;
    *(_DWORD *)(v28 + 80) = -1;
    *(_QWORD *)(v28 + 48) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v28 + 56) = 0xFFFFFFFFLL;
    *(_WORD *)(v28 + 84) = -1;
    *(_QWORD *)v28 = off_B1508;
    *(__m128i *)(v28 + 64) = v29;
    *(_OWORD *)(v28 + 104) = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v30 + 48))(v30, v28 + 86, 12) )
      goto LABEL_19;
    *(_WORD *)(v20 + 84) = *(_WORD *)(v20 + 86);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v20 + 320LL))(v20, a4, a5) )
      goto LABEL_19;
    v31 = *(_QWORD *)v20;
    *(_QWORD *)(v20 + 8) = a1;
    v32 = *(void (**)())(v31 + 312);
    if ( v32 != nullsub_15 )
      ((void (__fastcall *)(__int64))v32)(v20);
    if ( !v20 )
      return 0;
    v25 = a1[1];
    if ( v25 != a1[2] )
      goto LABEL_34;
    v158 = v20;
    sub_57F80((__int64)a1, &v158);
    v26 = v158;
    if ( v158 )
      goto LABEL_18;
  }
LABEL_35:
  if ( ((unsigned __int8)v13 & (a2 != nullptr)) != 0 )
  {
    LOBYTE(v25) = v13 & (a2 != nullptr);
    v13 = v25;
    *a2 = v151;
  }
  return v13;
}

