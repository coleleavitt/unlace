unsigned __int64 __fastcall sub_38E2E0(__int64 *a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 *v23; // r15
  char v24; // al
  unsigned __int64 v25; // r14
  size_t v26; // r8
  __int64 v27; // r15
  size_t v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // rsi
  char tinfo_property; // r14
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // r8
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rsi
  _DWORD *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // r13
  unsigned __int64 v72; // r12
  __int64 v73; // rsi
  __m128i si128; // xmm0
  __int64 v75; // rax
  int v76; // r14d
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r14
  unsigned __int64 v83; // r12
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // [rsp+0h] [rbp-80h]
  __int64 v93; // [rsp+0h] [rbp-80h]
  __int64 v94; // [rsp+0h] [rbp-80h]
  __int64 v95; // [rsp+0h] [rbp-80h]
  size_t v96; // [rsp+8h] [rbp-78h]
  __int64 v97; // [rsp+8h] [rbp-78h]
  __int64 v98; // [rsp+8h] [rbp-78h]
  __int64 v99; // [rsp+8h] [rbp-78h]
  __int64 v100; // [rsp+8h] [rbp-78h]
  size_t v101; // [rsp+10h] [rbp-70h]
  unsigned __int64 v102; // [rsp+10h] [rbp-70h]
  unsigned __int64 v103; // [rsp+10h] [rbp-70h]
  unsigned __int64 v104; // [rsp+10h] [rbp-70h]
  unsigned __int64 v105; // [rsp+10h] [rbp-70h]
  __int64 v106; // [rsp+18h] [rbp-68h]
  __int64 v107; // [rsp+18h] [rbp-68h]
  __int64 v108; // [rsp+18h] [rbp-68h]
  __int64 v109; // [rsp+18h] [rbp-68h]
  __int64 v110; // [rsp+18h] [rbp-68h]
  __int64 v111; // [rsp+18h] [rbp-68h]
  __int64 v112; // [rsp+18h] [rbp-68h]
  __int64 v113; // [rsp+18h] [rbp-68h]
  __int64 v114; // [rsp+18h] [rbp-68h]
  __int64 v115; // [rsp+28h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v117; // [rsp+38h] [rbp-48h]
  unsigned __int64 v118; // [rsp+48h] [rbp-38h]

  v3 = a1[1];
  v118 = __readfsqword(0x28u);
  v5 = sub_256D70(*(_QWORD *)(*a1 + 32) + 16LL, *(_QWORD *)(v3 + 8));
  v6 = *(_QWORD *)(a1[1] + 8);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 == 48 )
  {
    sub_387970((__int64)(a1 + 9), 1);
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v6 + 56) & 4) != 0 )
  {
    v8 = a1[10];
    v106 = v8;
    if ( v8 )
    {
      v11 = v8 + 7;
      v10 = v8 + 8;
      v9 = a1[9];
      v106 = v8 - 1;
      if ( a1[11] >= (unsigned __int64)(v8 + 8) )
        goto LABEL_5;
    }
    else
    {
      v9 = a1[9];
      v10 = 9;
      v11 = 8;
      if ( (unsigned __int64)a1[11] >= 9 )
      {
LABEL_5:
        a1[10] = v10;
        *(_BYTE *)(v9 + v11) = 0;
        *(_QWORD *)(a1[9] + v106) = 0x203B706F5F757066LL;
        goto LABEL_6;
      }
    }
    v43 = qvector_reserve((__int64)(a1 + 9), v9, v10, 1);
    a1[9] = v43;
    v9 = v43;
    goto LABEL_5;
  }
  v18 = sub_255000(v7);
  if ( !v18 )
  {
LABEL_6:
    v12 = *(_QWORD *)(a1[1] + 8);
    v13 = *(_DWORD *)(v12 + 8);
    if ( v13 != 61 )
      goto LABEL_7;
    goto LABEL_25;
  }
  if ( v18 == 2 )
  {
    v81 = a1[10];
    v114 = v81;
    if ( v81 )
    {
      v82 = v81 + 1;
      v83 = v81 + 2;
      v114 = v81 - 1;
    }
    else
    {
      v83 = 3;
      v82 = 2;
    }
    v84 = a1[9];
    if ( a1[11] < v83 )
    {
      v91 = qvector_reserve((__int64)(a1 + 9), v84, v83, 1);
      a1[9] = v91;
      v84 = v91;
    }
    a1[10] = v83;
    *(_BYTE *)(v84 + v82) = 0;
    *(_WORD *)(a1[9] + v114) = 28277;
  }
  v19 = a1[10];
  v107 = v19;
  if ( v19 )
  {
    v20 = v19 + 10;
    v21 = v19 + 11;
    v107 = v19 - 1;
  }
  else
  {
    v21 = 12;
    v20 = 11;
  }
  v22 = a1[9];
  if ( a1[11] < v21 )
  {
    v78 = qvector_reserve((__int64)(a1 + 9), v22, v21, 1);
    a1[9] = v78;
    v22 = v78;
  }
  a1[10] = v21;
  *(_BYTE *)(v22 + v20) = 0;
  qmemcpy((void *)(a1[9] + v107), "signed op; ", 11);
  v12 = *(_QWORD *)(a1[1] + 8);
  v13 = *(_DWORD *)(v12 + 8);
  if ( v13 != 61 )
  {
LABEL_7:
    if ( (unsigned int)(v13 - 59) > 1 )
      goto LABEL_8;
    v23 = a1 + 9;
    if ( (*(_BYTE *)(v12 + 57) & 1) != 0 )
    {
      v64 = a1[10];
      v112 = v64;
      if ( v64 )
      {
        v66 = v64 + 8;
        v65 = v64 + 9;
        v112 = v64 - 1;
      }
      else
      {
        v65 = 10;
        v66 = 9;
      }
      v67 = a1[9];
      v23 = a1 + 9;
      if ( a1[11] < v65 )
      {
        v90 = qvector_reserve((__int64)(a1 + 9), v67, v65, 1);
        a1[9] = v90;
        v67 = v90;
      }
      a1[10] = v65;
      *(_BYTE *)(v67 + v66) = 0;
      v68 = a1[9] + v112;
      *(_QWORD *)v68 = 0x3B656C6261746676LL;
      *(_BYTE *)(v68 + 8) = 32;
    }
    v30 = a1[10];
    v109 = v30;
    if ( v30 )
    {
      v32 = v30 + 3;
      v31 = v30 + 4;
      v109 = v30 - 1;
    }
    else
    {
      v31 = 5;
      v32 = 4;
    }
    v33 = a1[9];
    if ( a1[11] < v31 )
    {
      v77 = qvector_reserve((__int64)v23, v33, v31, 1);
      a1[9] = v77;
      v33 = v77;
    }
    a1[10] = v31;
    *(_BYTE *)(v33 + v32) = 0;
    *(_DWORD *)(a1[9] + v109) = 1030121071;
    src = (void *)get_tinfo_property();
    tinfo_property = get_tinfo_property();
    clear_tinfo_t();
    if ( (tinfo_property & 0x3F) == 0x1D )
    {
      v35 = a1[10];
      v110 = v35;
      if ( v35 )
      {
        v36 = v35 + 7;
        v37 = v35 + 8;
        v110 = v35 - 1;
      }
      else
      {
        v37 = 9;
        v36 = 8;
      }
      v38 = a1[9];
      if ( a1[11] < v37 )
      {
        v85 = qvector_reserve((__int64)v23, v38, v37, 1);
        a1[9] = v85;
        v38 = v85;
      }
      a1[10] = v37;
      *(_BYTE *)(v38 + v36) = 0;
      *(_QWORD *)(a1[9] + v110) = 0x296E6F696E752830LL;
    }
    else
    {
      v113 = *(_QWORD *)(a1[1] + 8);
      v76 = *(_DWORD *)(v113 + 32);
      if ( *(_DWORD *)(v113 + 8) == 59 )
      {
        while ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v113 + 24) + 8LL) - 59) <= 1 )
        {
          src = nullptr;
          src = (void *)get_tinfo_property();
          if ( (unsigned int)sub_263270(nullptr, (__int64)&src, *(unsigned int *)(*(_QWORD *)(v113 + 24) + 32LL), 0) )
          {
            clear_tinfo_t();
            break;
          }
          v76 += *(_DWORD *)(*(_QWORD *)(v113 + 24) + 32LL);
          v113 = *(_QWORD *)(v113 + 24);
          clear_tinfo_t();
          if ( *(_DWORD *)(v113 + 8) != 59 )
            break;
        }
      }
      sub_385E90(v23);
    }
    v39 = a1[10];
    v111 = v39;
    if ( v39 )
      goto LABEL_50;
LABEL_77:
    v42 = a1[9];
    v41 = 3;
    v40 = 2;
    if ( (unsigned __int64)a1[11] >= 3 )
      goto LABEL_51;
LABEL_78:
    v63 = qvector_reserve((__int64)v23, v42, v41, 1);
    a1[9] = v63;
    v42 = v63;
    goto LABEL_51;
  }
LABEL_25:
  v108 = *(_QWORD *)(v12 + 24);
  v23 = a1 + 9;
  v24 = *(_BYTE *)(v108 + 13);
  if ( (v24 & 1) != 0 )
  {
    v58 = a1[10];
    if ( v58 )
    {
      v60 = v58 + 6;
      v59 = v58 + 7;
      --v58;
    }
    else
    {
      v59 = 8;
      v60 = 7;
    }
    v61 = a1[9];
    if ( a1[11] < v59 )
    {
      v93 = v60;
      v98 = v58;
      v103 = v59;
      v87 = qvector_reserve((__int64)(a1 + 9), v61, v59, 1);
      v60 = v93;
      v58 = v98;
      a1[9] = v87;
      v59 = v103;
      v61 = v87;
    }
    a1[10] = v59;
    *(_BYTE *)(v61 + v60) = 0;
    v62 = (_DWORD *)(a1[9] + v58);
    *v62 = 1702390118;
    *(_DWORD *)((char *)v62 + 3) = 540763237;
    v24 = *(_BYTE *)(v108 + 13);
  }
  if ( (v24 & 8) != 0 )
  {
    v53 = a1[10];
    if ( v53 )
    {
      v54 = v53 + 8;
      v55 = v53 + 9;
      --v53;
    }
    else
    {
      v55 = 10;
      v54 = 9;
    }
    v56 = a1[9];
    if ( a1[11] < v55 )
    {
      v95 = v54;
      v100 = v53;
      v105 = v55;
      v89 = qvector_reserve((__int64)(a1 + 9), v56, v55, 1);
      v54 = v95;
      v53 = v100;
      a1[9] = v89;
      v55 = v105;
      v56 = v89;
    }
    a1[10] = v55;
    *(_BYTE *)(v56 + v54) = 0;
    v57 = a1[9] + v53;
    *(_QWORD *)v57 = 0x3B6465746167656ELL;
    *(_BYTE *)(v57 + 8) = 32;
    v24 = *(_BYTE *)(v108 + 13);
  }
  if ( (v24 & 0x10) != 0 )
  {
    v49 = a1[10];
    if ( v49 )
    {
      v50 = v49 + 7;
      v51 = v49 + 8;
      --v49;
    }
    else
    {
      v51 = 9;
      v50 = 8;
    }
    v52 = a1[9];
    if ( a1[11] < v51 )
    {
      v94 = v50;
      v99 = v49;
      v104 = v51;
      v88 = qvector_reserve((__int64)(a1 + 9), v52, v51, 1);
      v50 = v94;
      v49 = v99;
      a1[9] = v88;
      v51 = v104;
      v52 = v88;
    }
    a1[10] = v51;
    *(_BYTE *)(v52 + v50) = 0;
    *(_QWORD *)(a1[9] + v49) = 0x203B746F6E746962LL;
  }
  if ( (*(_QWORD *)(v108 + 40) & 0x20000) != 0 )
  {
    v44 = a1[10];
    if ( v44 )
    {
      v46 = v44 + 8;
      v45 = v44 + 9;
      --v44;
    }
    else
    {
      v45 = 10;
      v46 = 9;
    }
    v47 = a1[9];
    if ( a1[11] < v45 )
    {
      v92 = v46;
      v97 = v44;
      v102 = v45;
      v86 = qvector_reserve((__int64)(a1 + 9), v47, v45, 1);
      v46 = v92;
      v44 = v97;
      a1[9] = v86;
      v45 = v102;
      v47 = v86;
    }
    a1[10] = v45;
    *(_BYTE *)(v47 + v46) = 0;
    v48 = a1[9] + v44;
    *(_QWORD *)v48 = 0x3B6E676973766E69LL;
    *(_BYTE *)(v48 + 8) = 32;
  }
  if ( !(unsigned __int8)is_enum() )
  {
    v12 = *(_QWORD *)(a1[1] + 8);
    goto LABEL_8;
  }
  sub_385E90(a1 + 9);
  v39 = a1[10];
  v111 = v39;
  if ( !v39 )
    goto LABEL_77;
LABEL_50:
  v40 = v39 + 1;
  v41 = v39 + 2;
  v42 = a1[9];
  v111 = v39 - 1;
  if ( a1[11] < (unsigned __int64)(v39 + 2) )
    goto LABEL_78;
LABEL_51:
  a1[10] = v41;
  *(_BYTE *)(v42 + v40) = 0;
  *(_WORD *)(a1[9] + v111) = 8251;
  v12 = *(_QWORD *)(a1[1] + 8);
LABEL_8:
  v14 = *a1;
  v115 = 0;
  sub_386760(*(_QWORD *)(v14 + 128), v12, &v115, a2, a3);
  src = nullptr;
  v117 = 0;
  if ( (unsigned __int8)print_tinfo() )
  {
    v25 = v117;
    if ( (_QWORD)v117 )
    {
      v26 = v117 - 1;
      if ( (_QWORD)v117 != 1 )
      {
        v27 = a1[10];
        v28 = v117 - 1;
        if ( v27 )
        {
          --v27;
          v28 = v26 + v27;
          v25 = v117 + v27;
        }
        v29 = a1[9];
        if ( a1[11] < v25 )
        {
          v96 = v28;
          v101 = v117 - 1;
          v79 = qvector_reserve((__int64)(a1 + 9), v29, v25, 1);
          v28 = v96;
          v26 = v101;
          a1[9] = v79;
          v29 = v79;
        }
        a1[10] = v25;
        *(_BYTE *)(v29 + v28) = 0;
        memcpy((void *)(v27 + a1[9]), src, v26);
      }
    }
  }
  if ( src )
  {
    *(_QWORD *)&v117 = 0;
    qfree((__int64)src);
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 8) + 8LL) != 68 )
  {
    src = nullptr;
    copy_tinfo_t();
    sub_38DD50();
    clear_tinfo_t();
  }
  clear_tinfo_t();
LABEL_14:
  v15 = *(_QWORD *)(a1[1] + 8);
  if ( (unsigned int)(*(_DWORD *)(v15 + 8) - 38) <= 3 )
  {
    v16 = *(_DWORD *)(v5 + 8);
    if ( v16 == 72 || v16 == 1 && v15 == *(_QWORD *)(v5 + 24) )
    {
      v69 = a1[10];
      v70 = v69;
      if ( v69 )
      {
        v71 = v69 + 70;
        v72 = v69 + 71;
        v70 = v69 - 1;
      }
      else
      {
        v72 = 72;
        v71 = 71;
      }
      v73 = a1[9];
      if ( a1[11] < v72 )
      {
        v80 = qvector_reserve((__int64)(a1 + 9), v73, v72, 1);
        a1[9] = v80;
        v73 = v80;
      }
      a1[10] = v72;
      si128 = _mm_load_si128((const __m128i *)&xmmword_4249E0);
      *(_BYTE *)(v73 + v71) = 0;
      v75 = v70 + a1[9];
      *(__m128i *)v75 = si128;
      *(__m128i *)(v75 + 16) = _mm_load_si128((const __m128i *)&xmmword_4249F0);
      *(__m128i *)(v75 + 32) = _mm_load_si128((const __m128i *)&xmmword_424A00);
      *(__m128i *)(v75 + 48) = _mm_load_si128((const __m128i *)&xmmword_424A10);
      *(_QWORD *)(v75 + 63) = 0x305649445F4C4149LL;
    }
  }
  return v118 - __readfsqword(0x28u);
}

