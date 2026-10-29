unsigned __int64 __fastcall sub_389060(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // r13
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  char v21; // al
  unsigned __int64 v22; // r14
  size_t v23; // r8
  __int64 v24; // r15
  size_t v25; // r9
  __int64 v26; // rsi
  __int64 *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // rsi
  char tinfo_property; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r8
  unsigned __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rsi
  _DWORD *v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // r12
  __int64 v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // r13
  unsigned __int64 v70; // r12
  __int64 v71; // rsi
  __m128i si128; // xmm0
  __int64 v73; // rax
  int v74; // r14d
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r14
  unsigned __int64 v81; // r12
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // [rsp+0h] [rbp-80h]
  __int64 v91; // [rsp+0h] [rbp-80h]
  __int64 v92; // [rsp+0h] [rbp-80h]
  __int64 v93; // [rsp+0h] [rbp-80h]
  size_t v94; // [rsp+8h] [rbp-78h]
  __int64 v95; // [rsp+8h] [rbp-78h]
  __int64 v96; // [rsp+8h] [rbp-78h]
  __int64 v97; // [rsp+8h] [rbp-78h]
  __int64 v98; // [rsp+8h] [rbp-78h]
  size_t v99; // [rsp+10h] [rbp-70h]
  unsigned __int64 v100; // [rsp+10h] [rbp-70h]
  unsigned __int64 v101; // [rsp+10h] [rbp-70h]
  unsigned __int64 v102; // [rsp+10h] [rbp-70h]
  unsigned __int64 v103; // [rsp+10h] [rbp-70h]
  __int64 v104; // [rsp+18h] [rbp-68h]
  __int64 v105; // [rsp+18h] [rbp-68h]
  __int64 v106; // [rsp+18h] [rbp-68h]
  __int64 v107; // [rsp+18h] [rbp-68h]
  __int64 v108; // [rsp+18h] [rbp-68h]
  __int64 v109; // [rsp+18h] [rbp-68h]
  __int64 v110; // [rsp+18h] [rbp-68h]
  __int64 v111; // [rsp+18h] [rbp-68h]
  __int64 v112; // [rsp+18h] [rbp-68h]
  __int64 v113; // [rsp+28h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v115; // [rsp+38h] [rbp-48h]
  unsigned __int64 v116; // [rsp+48h] [rbp-38h]

  v1 = a1[1];
  v116 = __readfsqword(0x28u);
  v3 = sub_252170(*(_QWORD *)(*a1 + 32) + 16LL, *(_QWORD *)(v1 + 8));
  v4 = *(_QWORD *)(a1[1] + 8);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 == 48 )
  {
    sub_3826F0((__int64)(a1 + 9), 1);
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v4 + 56) & 4) != 0 )
  {
    v6 = a1[10];
    v104 = v6;
    if ( v6 )
    {
      v9 = v6 + 7;
      v8 = v6 + 8;
      v7 = a1[9];
      v104 = v6 - 1;
      if ( a1[11] >= (unsigned __int64)(v6 + 8) )
        goto LABEL_5;
    }
    else
    {
      v7 = a1[9];
      v8 = 9;
      v9 = 8;
      if ( (unsigned __int64)a1[11] >= 9 )
      {
LABEL_5:
        a1[10] = v8;
        *(_BYTE *)(v7 + v9) = 0;
        *(_QWORD *)(a1[9] + v104) = 0x203B706F5F757066LL;
        goto LABEL_6;
      }
    }
    v41 = qvector_reserve();
    a1[9] = v41;
    v7 = v41;
    goto LABEL_5;
  }
  v16 = sub_250400(v5);
  if ( !v16 )
  {
LABEL_6:
    v10 = *(_QWORD *)(a1[1] + 8);
    v11 = *(_DWORD *)(v10 + 8);
    if ( v11 != 61 )
      goto LABEL_7;
    goto LABEL_25;
  }
  if ( v16 == 2 )
  {
    v79 = a1[10];
    v112 = v79;
    if ( v79 )
    {
      v80 = v79 + 1;
      v81 = v79 + 2;
      v112 = v79 - 1;
    }
    else
    {
      v81 = 3;
      v80 = 2;
    }
    v82 = a1[9];
    if ( a1[11] < v81 )
    {
      v89 = qvector_reserve();
      a1[9] = v89;
      v82 = v89;
    }
    a1[10] = v81;
    *(_BYTE *)(v82 + v80) = 0;
    *(_WORD *)(a1[9] + v112) = 28277;
  }
  v17 = a1[10];
  v105 = v17;
  if ( v17 )
  {
    v18 = v17 + 10;
    v19 = v17 + 11;
    v105 = v17 - 1;
  }
  else
  {
    v19 = 12;
    v18 = 11;
  }
  v20 = a1[9];
  if ( a1[11] < v19 )
  {
    v76 = qvector_reserve();
    a1[9] = v76;
    v20 = v76;
  }
  a1[10] = v19;
  *(_BYTE *)(v20 + v18) = 0;
  qmemcpy((void *)(a1[9] + v105), "signed op; ", 11);
  v10 = *(_QWORD *)(a1[1] + 8);
  v11 = *(_DWORD *)(v10 + 8);
  if ( v11 != 61 )
  {
LABEL_7:
    if ( (unsigned int)(v11 - 59) > 1 )
      goto LABEL_8;
    v27 = a1 + 9;
    if ( (*(_BYTE *)(v10 + 57) & 1) != 0 )
    {
      v62 = a1[10];
      v110 = v62;
      if ( v62 )
      {
        v64 = v62 + 8;
        v63 = v62 + 9;
        v110 = v62 - 1;
      }
      else
      {
        v63 = 10;
        v64 = 9;
      }
      v65 = a1[9];
      v27 = a1 + 9;
      if ( a1[11] < v63 )
      {
        v88 = qvector_reserve();
        a1[9] = v88;
        v65 = v88;
      }
      a1[10] = v63;
      *(_BYTE *)(v65 + v64) = 0;
      v66 = a1[9] + v110;
      *(_QWORD *)v66 = 0x3B656C6261746676LL;
      *(_BYTE *)(v66 + 8) = 32;
    }
    v28 = a1[10];
    v107 = v28;
    if ( v28 )
    {
      v30 = v28 + 3;
      v29 = v28 + 4;
      v107 = v28 - 1;
    }
    else
    {
      v29 = 5;
      v30 = 4;
    }
    v31 = a1[9];
    if ( a1[11] < v29 )
    {
      v75 = qvector_reserve();
      a1[9] = v75;
      v31 = v75;
    }
    a1[10] = v29;
    *(_BYTE *)(v31 + v30) = 0;
    *(_DWORD *)(a1[9] + v107) = 1030121071;
    src = (void *)get_tinfo_property();
    tinfo_property = get_tinfo_property();
    clear_tinfo_t();
    if ( (tinfo_property & 0x3F) == 0x1D )
    {
      v33 = a1[10];
      v108 = v33;
      if ( v33 )
      {
        v34 = v33 + 7;
        v35 = v33 + 8;
        v108 = v33 - 1;
      }
      else
      {
        v35 = 9;
        v34 = 8;
      }
      v36 = a1[9];
      if ( a1[11] < v35 )
      {
        v83 = qvector_reserve();
        a1[9] = v83;
        v36 = v83;
      }
      a1[10] = v35;
      *(_BYTE *)(v36 + v34) = 0;
      *(_QWORD *)(a1[9] + v108) = 0x296E6F696E752830LL;
    }
    else
    {
      v111 = *(_QWORD *)(a1[1] + 8);
      v74 = *(_DWORD *)(v111 + 32);
      if ( *(_DWORD *)(v111 + 8) == 59 )
      {
        while ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v111 + 24) + 8LL) - 59) <= 1 )
        {
          src = nullptr;
          src = (void *)get_tinfo_property();
          if ( (unsigned int)sub_25E670(nullptr, (__int64)&src, *(unsigned int *)(*(_QWORD *)(v111 + 24) + 32LL), 0) )
          {
            clear_tinfo_t();
            break;
          }
          v74 += *(_DWORD *)(*(_QWORD *)(v111 + 24) + 32LL);
          v111 = *(_QWORD *)(v111 + 24);
          clear_tinfo_t();
          if ( *(_DWORD *)(v111 + 8) != 59 )
            break;
        }
      }
      sub_380C10(v27);
    }
    v37 = a1[10];
    v109 = v37;
    if ( v37 )
      goto LABEL_50;
LABEL_77:
    v40 = a1[9];
    v39 = 3;
    v38 = 2;
    if ( (unsigned __int64)a1[11] >= 3 )
      goto LABEL_51;
LABEL_78:
    v61 = qvector_reserve();
    a1[9] = v61;
    v40 = v61;
    goto LABEL_51;
  }
LABEL_25:
  v106 = *(_QWORD *)(v10 + 24);
  v21 = *(_BYTE *)(v106 + 13);
  if ( (v21 & 1) != 0 )
  {
    v56 = a1[10];
    if ( v56 )
    {
      v58 = v56 + 6;
      v57 = v56 + 7;
      --v56;
    }
    else
    {
      v57 = 8;
      v58 = 7;
    }
    v59 = a1[9];
    if ( a1[11] < v57 )
    {
      v91 = v58;
      v96 = v56;
      v101 = v57;
      v85 = qvector_reserve();
      v58 = v91;
      v56 = v96;
      a1[9] = v85;
      v57 = v101;
      v59 = v85;
    }
    a1[10] = v57;
    *(_BYTE *)(v59 + v58) = 0;
    v60 = (_DWORD *)(a1[9] + v56);
    *v60 = 1702390118;
    *(_DWORD *)((char *)v60 + 3) = 540763237;
    v21 = *(_BYTE *)(v106 + 13);
  }
  if ( (v21 & 8) != 0 )
  {
    v51 = a1[10];
    if ( v51 )
    {
      v52 = v51 + 8;
      v53 = v51 + 9;
      --v51;
    }
    else
    {
      v53 = 10;
      v52 = 9;
    }
    v54 = a1[9];
    if ( a1[11] < v53 )
    {
      v93 = v52;
      v98 = v51;
      v103 = v53;
      v87 = qvector_reserve();
      v52 = v93;
      v51 = v98;
      a1[9] = v87;
      v53 = v103;
      v54 = v87;
    }
    a1[10] = v53;
    *(_BYTE *)(v54 + v52) = 0;
    v55 = a1[9] + v51;
    *(_QWORD *)v55 = 0x3B6465746167656ELL;
    *(_BYTE *)(v55 + 8) = 32;
    v21 = *(_BYTE *)(v106 + 13);
  }
  if ( (v21 & 0x10) != 0 )
  {
    v47 = a1[10];
    if ( v47 )
    {
      v48 = v47 + 7;
      v49 = v47 + 8;
      --v47;
    }
    else
    {
      v49 = 9;
      v48 = 8;
    }
    v50 = a1[9];
    if ( a1[11] < v49 )
    {
      v92 = v48;
      v97 = v47;
      v102 = v49;
      v86 = qvector_reserve();
      v48 = v92;
      v47 = v97;
      a1[9] = v86;
      v49 = v102;
      v50 = v86;
    }
    a1[10] = v49;
    *(_BYTE *)(v50 + v48) = 0;
    *(_QWORD *)(a1[9] + v47) = 0x203B746F6E746962LL;
  }
  if ( (*(_QWORD *)(v106 + 40) & 0x20000) != 0 )
  {
    v42 = a1[10];
    if ( v42 )
    {
      v44 = v42 + 8;
      v43 = v42 + 9;
      --v42;
    }
    else
    {
      v43 = 10;
      v44 = 9;
    }
    v45 = a1[9];
    if ( a1[11] < v43 )
    {
      v90 = v44;
      v95 = v42;
      v100 = v43;
      v84 = qvector_reserve();
      v44 = v90;
      v42 = v95;
      a1[9] = v84;
      v43 = v100;
      v45 = v84;
    }
    a1[10] = v43;
    *(_BYTE *)(v45 + v44) = 0;
    v46 = a1[9] + v42;
    *(_QWORD *)v46 = 0x3B6E676973766E69LL;
    *(_BYTE *)(v46 + 8) = 32;
  }
  if ( !(unsigned __int8)is_enum() )
  {
    v10 = *(_QWORD *)(a1[1] + 8);
    goto LABEL_8;
  }
  sub_380C10(a1 + 9);
  v37 = a1[10];
  v109 = v37;
  if ( !v37 )
    goto LABEL_77;
LABEL_50:
  v38 = v37 + 1;
  v39 = v37 + 2;
  v40 = a1[9];
  v109 = v37 - 1;
  if ( a1[11] < (unsigned __int64)(v37 + 2) )
    goto LABEL_78;
LABEL_51:
  a1[10] = v39;
  *(_BYTE *)(v40 + v38) = 0;
  *(_WORD *)(a1[9] + v109) = 8251;
  v10 = *(_QWORD *)(a1[1] + 8);
LABEL_8:
  v12 = *a1;
  v113 = 0;
  sub_3814E0(*(_QWORD *)(v12 + 128), v10, &v113);
  src = nullptr;
  v115 = 0;
  if ( (unsigned __int8)print_tinfo() )
  {
    v22 = v115;
    if ( (_QWORD)v115 )
    {
      v23 = v115 - 1;
      if ( (_QWORD)v115 != 1 )
      {
        v24 = a1[10];
        v25 = v115 - 1;
        if ( v24 )
        {
          --v24;
          v25 = v23 + v24;
          v22 = v115 + v24;
        }
        v26 = a1[9];
        if ( a1[11] < v22 )
        {
          v94 = v25;
          v99 = v115 - 1;
          v77 = qvector_reserve();
          v25 = v94;
          v23 = v99;
          a1[9] = v77;
          v26 = v77;
        }
        a1[10] = v22;
        *(_BYTE *)(v26 + v25) = 0;
        memcpy((void *)(v24 + a1[9]), src, v23);
      }
    }
  }
  if ( src )
  {
    *(_QWORD *)&v115 = 0;
    qfree();
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 8) + 8LL) != 68 )
  {
    src = nullptr;
    copy_tinfo_t();
    sub_388AD0();
    clear_tinfo_t();
  }
  clear_tinfo_t();
LABEL_14:
  v13 = *(_QWORD *)(a1[1] + 8);
  if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 38) <= 3 )
  {
    v14 = *(_DWORD *)(v3 + 8);
    if ( v14 == 72 || v14 == 1 && v13 == *(_QWORD *)(v3 + 24) )
    {
      v67 = a1[10];
      v68 = v67;
      if ( v67 )
      {
        v69 = v67 + 70;
        v70 = v67 + 71;
        v68 = v67 - 1;
      }
      else
      {
        v70 = 72;
        v69 = 71;
      }
      v71 = a1[9];
      if ( a1[11] < v70 )
      {
        v78 = qvector_reserve();
        a1[9] = v78;
        v71 = v78;
      }
      a1[10] = v70;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FE440);
      *(_BYTE *)(v71 + v69) = 0;
      v73 = v68 + a1[9];
      *(__m128i *)v73 = si128;
      *(__m128i *)(v73 + 16) = _mm_load_si128((const __m128i *)&xmmword_3FE450);
      *(__m128i *)(v73 + 32) = _mm_load_si128((const __m128i *)&xmmword_3FE460);
      *(__m128i *)(v73 + 48) = _mm_load_si128((const __m128i *)&xmmword_3FE470);
      *(_QWORD *)(v73 + 63) = 0x305649445F4C4149LL;
    }
  }
  return v116 - __readfsqword(0x28u);
}

