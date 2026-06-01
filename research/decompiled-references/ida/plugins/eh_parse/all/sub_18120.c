__int64 __fastcall sub_18120(__int64 a1, _QWORD **a2, _DWORD *a3, char a4)
{
  unsigned int v5; // edi
  bool (__fastcall *v9)(__int64, _DWORD *, unsigned int); // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm1
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int16 v19; // dx
  unsigned __int16 v20; // dx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // dl
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  _DWORD *v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int16 v38; // dx
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // eax
  unsigned __int64 byte; // rdx
  __int64 v59; // r8
  unsigned __int64 v60; // r13
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rsi
  _DWORD *v65; // rax
  _QWORD *v66; // r13
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 i; // rax
  __int64 v70; // rdi
  __int64 v71; // rbp
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 *v74; // rax
  __int64 v75; // rdi
  bool (__fastcall *v76)(__int64, _DWORD *, unsigned int); // rax
  __int64 v77; // rsi
  __int64 v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rbx
  char v81; // al
  unsigned __int64 **v82; // rbp
  unsigned __int64 v83; // r12
  __int64 v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  char v88; // al
  __int64 v89; // rdi
  __int64 *v90; // r14
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // r13
  __int64 v95; // rdi
  __int64 v96; // rax
  int v97; // eax
  unsigned int v98; // esi
  unsigned __int64 v99; // r13
  __int64 v100; // rax
  _QWORD *v101; // rsi
  bool v102; // al
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // [rsp+0h] [rbp-178h]
  unsigned __int64 v106; // [rsp+0h] [rbp-178h]
  __int64 v107; // [rsp+0h] [rbp-178h]
  unsigned int v108; // [rsp+8h] [rbp-170h]
  __int64 func; // [rsp+8h] [rbp-170h]
  unsigned int v110; // [rsp+10h] [rbp-168h]
  __int64 v111; // [rsp+10h] [rbp-168h]
  __int64 v112; // [rsp+18h] [rbp-160h]
  __int64 v113; // [rsp+18h] [rbp-160h]
  __int64 v114; // [rsp+20h] [rbp-158h]
  unsigned int v115; // [rsp+28h] [rbp-150h]
  __int64 v116; // [rsp+30h] [rbp-148h]
  __int64 v117; // [rsp+38h] [rbp-140h]
  __int64 v118; // [rsp+40h] [rbp-138h]
  unsigned __int64 v119; // [rsp+48h] [rbp-130h]
  int v120; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v121; // [rsp+54h] [rbp-124h] BYREF
  __int64 v122; // [rsp+58h] [rbp-120h]
  __int64 v123; // [rsp+60h] [rbp-118h] BYREF
  __int128 v124; // [rsp+68h] [rbp-110h]
  __int64 v125; // [rsp+78h] [rbp-100h]
  __int64 v126; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v127; // [rsp+88h] [rbp-F0h]
  __m256i v128; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v129; // [rsp+C0h] [rbp-B8h]
  __int16 v130; // [rsp+C8h] [rbp-B0h]
  __int128 v131; // [rsp+D0h] [rbp-A8h]
  __int64 v132; // [rsp+E0h] [rbp-98h]
  __int64 v133; // [rsp+E8h] [rbp-90h]
  int v134; // [rsp+F0h] [rbp-88h]
  __int64 v135; // [rsp+F8h] [rbp-80h]
  int v136; // [rsp+100h] [rbp-78h]
  __int64 v137; // [rsp+108h] [rbp-70h]
  int v138; // [rsp+110h] [rbp-68h]
  __int64 v139; // [rsp+118h] [rbp-60h]
  int v140; // [rsp+120h] [rbp-58h]
  __int64 v141; // [rsp+128h] [rbp-50h]
  unsigned __int64 v142; // [rsp+138h] [rbp-40h]

  v142 = __readfsqword(0x28u);
  v5 = *((_DWORD *)a2 + 54);
  if ( !v5 || !*((_DWORD *)a2 + 55) )
    return v142 - __readfsqword(0x28u);
  v9 = (bool (__fastcall *)(__int64, _DWORD *, unsigned int))**a2;
  if ( v9 == sub_16E00 )
  {
    if ( !a3 || (v10 = v5, *a3 != 3) )
    {
      v11 = (__int64)a2[2] - 1;
      if ( v11 < 0 )
        goto LABEL_11;
      v12 = &a2[1][4 * (_QWORD)a2[2] - 4];
      while ( (unsigned __int64)v5 < *v12 || (unsigned __int64)v5 >= v12[1] )
      {
        --v11;
        v12 -= 4;
        if ( v11 == -1 )
          goto LABEL_11;
      }
      v10 = v5 + v12[2] - *v12;
      if ( v10 == -1 )
      {
LABEL_11:
        v10 = v5;
        if ( v5 >= (__int64)a2[74] + *((unsigned int *)a2 + 39) )
        {
          if ( *((_BYTE *)a2 + 985)
            || (int)sub_16C70(
                      1u,
                      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                      v5) > 0 )
          {
            *((_BYTE *)a2 + 985) = 1;
            return qlseek(a3, v5, 0);
          }
          goto LABEL_14;
        }
      }
    }
    if ( qlseek(a3, v10, 0) == -1 )
      return v142 - __readfsqword(0x28u);
  }
  else if ( !v9((__int64)a2, a3, v5) )
  {
    return v142 - __readfsqword(0x28u);
  }
  if ( a4 && !(unsigned int)sub_16C70(1u, (__int64)"HIDECANCEL\nDo you want to process the .pdata section?") )
    return v142 - __readfsqword(0x28u);
  sub_9510((__int64)"Reading exception directory (.pdata)...\n");
  v14 = *(_QWORD *)(a1 + 32) + *((unsigned int *)a2 + 54);
  *(_QWORD *)(a1 + 40) = v14;
  *(_QWORD *)(a1 + 48) = *((unsigned int *)a2 + 55);
  v15 = getseg(v14);
  if ( !v15 )
    return v142 - __readfsqword(0x28u);
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v17 = *(_QWORD *)(v15 + 8);
  if ( v17 < _mm_add_epi64(_mm_srli_si128(v16, 8), v16).m128i_u64[0] )
    *(_QWORD *)(a1 + 48) = v17 - v16.m128i_i64[0];
  v18 = *((unsigned __int16 *)a2 + 38);
  if ( (_WORD)v18 != 0x8664 )
  {
    if ( (unsigned __int16)v18 > 0x8664u )
    {
      if ( (_WORD)v18 == 0xAA64 )
      {
        if ( *((_WORD *)a2 + 48) != 523 )
          return v142 - __readfsqword(0x28u);
        v20 = -21916;
        return sub_17C40(a1, (__int64)a3, v20);
      }
      goto LABEL_31;
    }
    if ( (_WORD)v18 != 496 )
    {
      if ( (unsigned __int16)v18 <= 0x1F0u )
      {
        v21 = (unsigned int)(v18 - 354);
        if ( (unsigned __int16)(v18 - 354) <= 0x22u )
        {
          v22 = 0x4000000D3LL;
          if ( _bittest64(&v22, v21) )
          {
            if ( (unsigned __int16)(v18 - 354) > 7u )
            {
              v24 = 0;
            }
            else
            {
              v23 = 211;
              v24 = _bittest64(&v23, (unsigned __int16)v21);
            }
            return sub_18020(a1, (__int64)a3, v24);
          }
        }
        goto LABEL_31;
      }
      if ( (_WORD)v18 != 498 )
      {
        if ( (_WORD)v18 != 497 )
        {
          LOBYTE(v19) = *((_WORD *)a2 + 38);
          HIBYTE(v19) = BYTE1(v18) & 0xFE;
          if ( v19 == 614 )
          {
            if ( (_WORD)v18 != 614 )
            {
              v24 = (((_WORD)v18 - 870) & 0xFEFF) == 0;
              return sub_18020(a1, (__int64)a3, v24);
            }
          }
          else if ( (_WORD)v18 != 1126 )
          {
            goto LABEL_31;
          }
          v24 = 1;
          return sub_18020(a1, (__int64)a3, v24);
        }
LABEL_31:
        if ( *((_WORD *)a2 + 82) != 9 && (_WORD)v18 != 452 )
          return sub_9510((__int64)".pdata parsing not yet supported for this processor\n");
        goto LABEL_46;
      }
    }
    v38 = *((_WORD *)a2 + 82);
    if ( v38 == 9 || v38 == 14 )
    {
LABEL_46:
      v20 = *((_WORD *)a2 + 38);
      return sub_17C40(a1, (__int64)a3, v20);
    }
    v24 = 0;
    return sub_18020(a1, (__int64)a3, v24);
  }
  if ( *((_WORD *)a2 + 48) != 523 )
    return v142 - __readfsqword(0x28u);
  v108 = *((_DWORD *)a2 + 54);
  v112 = *(_QWORD *)(a1 + 8);
  v25 = *((unsigned int *)a2 + 55) / 0xCuLL;
  v26 = qlseek(a3, 0, 1);
  v27 = qlsize(a3) - v26;
  if ( ((v27 | v26) & 0x8000000000000000LL) != 0LL )
  {
    if ( (unsigned int)sub_16C70(
                         1u,
                         (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                         ".pdata section size",
                         v25,
                         0,
                         ". Do you want to continue with the new value?") == 1 )
      return v142 - __readfsqword(0x28u);
    goto LABEL_14;
  }
  if ( v27 >= 12 * v25 )
  {
    v28 = v25;
    goto LABEL_51;
  }
  v28 = v27 / 0xC;
  if ( (unsigned int)sub_16C70(
                       1u,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       ".pdata section size",
                       v25,
                       v27 / 0xC,
                       ". Do you want to continue with the new value?") != 1 )
LABEL_14:
    sub_16D50(0);
LABEL_51:
  if ( !v28 )
    return v142 - __readfsqword(0x28u);
  v124 = 0;
  v123 = 0;
  v123 = qvector_reserve(&v123, 0, v28, 12);
  memset((void *)(v123 + 12 * v124), 0, 12 * (v28 - v124));
  *(_QWORD *)&v124 = v28;
  lread(a3, v123, 12 * v28);
  v29 = v123;
  v30 = (_DWORD *)(v123 + 12 * v28 - 12);
  while ( 1 )
  {
    v31 = v28--;
    if ( *v30 )
      break;
    v30 -= 3;
    if ( !v28 )
    {
      if ( (_QWORD)v124 )
        *(_QWORD *)&v124 = 0;
      v126 = 0;
      v127 = 0;
      getinf(93);
LABEL_58:
      if ( v126 )
      {
        v32 = v127;
        if ( (_QWORD)v127 )
        {
          v33 = v126;
          v34 = 0;
          do
          {
            v35 = (__int64 *)(v33 + 24 * v34);
            v36 = *v35;
            if ( *v35 )
            {
              v35[1] = 0;
              qfree(v36);
              v33 = v126;
            }
            ++v34;
          }
          while ( v32 != v34 );
        }
        else
        {
          v33 = v126;
        }
        *(_QWORD *)&v127 = 0;
        qfree(v33);
      }
      v37 = v123;
      if ( v123 )
        goto LABEL_66;
      return v142 - __readfsqword(0x28u);
    }
  }
  v39 = v124;
  if ( (unsigned __int64)v124 >= v31 )
  {
    v40.m128i_i64[0] = 0;
    if ( (_QWORD)v124 != v31 )
      *(_QWORD *)&v124 = v31;
    v126 = 0;
    v127 = 0;
  }
  else
  {
    if ( *((_QWORD *)&v124 + 1) < v31 )
    {
      v123 = qvector_reserve(&v123, v123, v31, 12);
      v29 = v123;
      v39 = v124;
    }
    memset((void *)(v29 + 12 * v39), 0, 12 * (v31 - v39));
    *(_QWORD *)&v124 = v31;
    v40.m128i_i64[0] = 0;
    v126 = 0;
    v127 = 0;
  }
  v41 = qvector_reserve(&v126, 0, v31, 24);
  v42 = v126;
  v43 = v41;
  v44 = *((_QWORD *)&v127 + 1);
  v45 = v41;
  *((_QWORD *)&v127 + 1) = 0;
  v46 = (__int64 *)v126;
  v47 = v127 - 1;
  if ( (__int64)v127 - 1 >= 0 )
  {
    do
    {
      v48 = *v46;
      v40 = _mm_loadu_si128((const __m128i *)(v46 + 1));
      v45 += 24;
      v46 += 3;
      *(v46 - 3) = 0;
      *(_QWORD *)(v45 - 24) = v48;
      *(__m128i *)(v45 - 16) = v40;
      *(v46 - 1) = 0;
    }
    while ( v47-- != 0 );
    v42 = v126;
  }
  qfree(v42);
  v126 = v43;
  *((_QWORD *)&v127 + 1) = v44;
  if ( (unsigned __int64)v127 < v31 )
  {
    v50 = 24 * v127;
    v40.m128i_i64[0] = 0;
    do
    {
      v51 = v50 + v126;
      v50 += 24;
      *(_QWORD *)v51 = 0;
      *(_OWORD *)(v51 + 8) = 0;
    }
    while ( v50 != 24 * v31 );
  }
  *(_QWORD *)&v127 = v31;
  v118 = getinf(93);
  v52 = 0;
  v57 = callui(27, &callui, v53, v54, v55, v56, v118 + v108, v108, v110, v112);
LABEL_95:
  v61 = v57;
  if ( !(_BYTE)v57 )
  {
    v63 = v123;
    v65 = (_DWORD *)(v123 + 12 * v52);
    if ( *v65 >= v65[1] )
      goto LABEL_93;
    LODWORD(byte) = v65[2];
    if ( (byte & 1) != 0 )
    {
      byte = (((unsigned int)byte ^ 1) - (unsigned int)func) / 0xCuLL;
      v60 = byte;
      if ( byte >= v31 )
        goto LABEL_93;
      v61 = 1;
      byte = *(unsigned int *)(v123 + 12 * byte + 8);
      if ( (byte & 1) != 0 )
        goto LABEL_93;
    }
    else
    {
      v60 = -1;
    }
    LODWORD(v119) = v65[1];
    LODWORD(v117) = *v65;
    LOBYTE(v116) = v61;
    v115 = byte;
    v114 = *(_QWORD *)(*(_QWORD *)(v113 + 24) + 16LL);
    v62 = sub_16EE0((unsigned __int8 (***)(void))a2, a3, byte, (__int64)&v121, 0);
    v59 = (unsigned int)v62;
    if ( v62 < 0 )
      goto LABEL_93;
    v64 = v114;
    v114 &= v118 + (unsigned int)v117;
    v117 = v64 & (v118 + (unsigned int)v119);
    if ( v62 == 1 )
    {
      v59 = v123;
      v63 = v123;
      v61 = v123 + 12 * v124;
      for ( i = 0xAAAAAAAAAAAAAAABLL * ((12 * (__int64)v124) >> 2); i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          byte = v63 + 4 * ((i >> 1) + (i & 0xFFFFFFFFFFFFFFFELL));
          if ( *(_DWORD *)byte >= v121 )
            break;
          v63 = byte + 12;
          i = i - 1 - (i >> 1);
          if ( i <= 0 )
            goto LABEL_106;
        }
      }
LABEL_106:
      if ( v63 == v61 || *(_DWORD *)v63 != v121 || *(_QWORD *)(v63 + 4) != v122 )
        goto LABEL_93;
      v63 -= v123;
      v60 = 0xAAAAAAAAAAAAAAABLL * (v63 >> 2);
    }
    else
    {
      v61 = (unsigned __int8)v116;
      byte = v115;
      if ( !(_BYTE)v116 )
      {
        if ( v62 )
          goto LABEL_93;
        v76 = (bool (__fastcall *)(__int64, _DWORD *, unsigned int))**a2;
        if ( v76 == sub_16E00 )
        {
          v77 = v115;
          if ( !a3 || *a3 != 3 )
          {
            v78 = (__int64)a2[2] - 1;
            if ( v78 < 0 )
              goto LABEL_129;
            v79 = &a2[1][4 * (_QWORD)a2[2] - 4];
            while ( (unsigned __int64)v115 < *v79 || (unsigned __int64)v115 >= v79[1] )
            {
              --v78;
              v79 -= 4;
              if ( v78 == -1 )
                goto LABEL_129;
            }
            v92 = v115 + v79[2] - *v79;
            if ( v92 == -1 )
            {
LABEL_129:
              if ( v115 >= (__int64)a2[74] + *((unsigned int *)a2 + 39) )
              {
                if ( !*((_BYTE *)a2 + 985)
                  && (int)sub_16C70(
                            1u,
                            (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                            v115) <= 0 )
                {
                  sub_16D50(0);
                }
                *((_BYTE *)a2 + 985) = 1;
                qlseek(a3, v115, 0);
                goto LABEL_133;
              }
            }
            else
            {
              v77 = v92;
            }
          }
          v115 = 0;
          v93 = qlseek(a3, v77, 0);
          v59 = 0;
          if ( v93 == -1 )
            goto LABEL_133;
        }
        else
        {
          v115 = 0;
          v102 = v76((__int64)a2, a3, byte);
          v59 = 0;
          if ( !v102 )
            goto LABEL_133;
        }
        v115 = 0;
        lread(a3, &v120, 4);
        if ( (unsigned __int8)((v120 & 7) - 1) > 1u )
          goto LABEL_133;
        if ( !BYTE2(v120) )
        {
LABEL_186:
          v99 = v126 + 24 * v52;
          v100 = *(_QWORD *)(v99 + 8);
          v101 = *(_QWORD **)v99;
          if ( *(_QWORD *)(v99 + 16) < (unsigned __int64)(v100 + 1) )
          {
            v104 = qvector_reserve(v126 + 24 * v52, v101, v100 + 1, 16);
            *(_QWORD *)v99 = v104;
            v101 = (_QWORD *)v104;
            v100 = *(_QWORD *)(v99 + 8);
          }
          v115 = (unsigned int)v101;
          memmove(v101 + 2, v101, 16 * v100);
          *v101 = v114;
          v101[1] = v117;
          ++*(_QWORD *)(v99 + 8);
          goto LABEL_93;
        }
        v94 = BYTE2(v120);
        v40.m128i_i64[0] = 0;
        memset(&v128, 0, 24);
        v128.m256i_i64[0] = qvector_reserve(&v128, 0, BYTE2(v120), 2);
        memset((void *)(v128.m256i_i64[0] + 2 * v128.m256i_i64[1]), 0, 2 * (v94 - v128.m256i_i64[1]));
        v128.m256i_i64[1] = v94;
        lread(a3, v128.m256i_i64[0], 2 * v94);
        v95 = v128.m256i_i64[0];
        v59 = 0;
        v96 = 0;
        while ( 1 )
        {
          v97 = *(unsigned __int16 *)(v95 + 2 * v96);
          byte = BYTE1(v120);
          v63 = BYTE1(v97) & 0xF;
          if ( BYTE1(v120) < (unsigned __int8)v97 )
          {
            if ( (BYTE1(v97) & 0xF) != 6 )
              goto LABEL_182;
LABEL_167:
            v59 = (unsigned int)(v59 + 1);
            goto LABEL_168;
          }
          HIWORD(v98) = HIWORD(v97);
          LOWORD(v98) = (unsigned __int16)v97 >> 12;
          if ( (v97 & 0xF00) == 0 )
          {
            if ( (_BYTE)v97 )
            {
              v119 = __PAIR64__(v98, v59);
              v116 = (unsigned __int8)v97 + v114;
              LOBYTE(v115) = get_byte(v116 - 1);
              byte = (unsigned int)get_byte(v116 - 2);
              v63 = (unsigned __int8)v115;
              v59 = (unsigned int)v119;
              v103 = (unsigned __int8)((v98 & 7) + 80);
              if ( (unsigned __int8)v115 == v103 && (unsigned __int16)v98 > 7u )
              {
                if ( (_BYTE)byte != 65 )
                  goto LABEL_208;
              }
              else
              {
                LOBYTE(v61) = (unsigned __int8)v115 != v103;
                if ( (((unsigned __int16)v98 <= 7u) & (unsigned __int8)v61) != 0
                  && (LOBYTE(byte) = byte + 1, !(_BYTE)byte) )
                {
                  if ( (unsigned __int8)v115 != (unsigned __int16)(v98 + 240) )
                  {
LABEL_208:
                    v95 = v128.m256i_i64[0];
LABEL_182:
                    if ( v95 )
                    {
                      v128.m256i_i64[1] = 0;
                      qfree(v95);
                    }
LABEL_133:
                    ++HIDWORD(v111);
                    if ( SHIDWORD(v111) <= 9 )
                    {
                      sub_9510(
                        (__int64)"%a: function entry has invalid unwind data, ignoring.\n",
                        *(double *)v40.m128i_i64);
                    }
                    else if ( HIDWORD(v111) == 10 )
                    {
                      sub_9510((__int64)"too many function entries with invalid unwind data, skipping the rest.\n");
                    }
LABEL_93:
                    ++v52;
                    v106 = v105 + 12;
                    if ( v52 < v31 )
                    {
                      v57 = callui(27, &callui, byte, v63, v59, v61, v106, func, v111, v113);
                      goto LABEL_95;
                    }
                    if ( SHIDWORD(v111) > 0 )
                      sub_9510(
                        (__int64)"%d out of %zu function entries had invalid unwind data and were skipped.\n",
                        HIDWORD(v111),
                        v31);
                    if ( v31 > 0x2710 )
                      sub_9510((__int64)"Parsing .pdata and creating %zu functions...\n", v31);
                    v80 = 0;
                    while ( 1 )
                    {
                      v81 = callui(27, &callui, byte, v63, v59, v61, v106, func, v111, v113);
                      v70 = v126;
                      if ( v81 )
                        goto LABEL_112;
                      v82 = (unsigned __int64 **)(v126 + 24 * v80);
                      if ( v82[1] )
                      {
                        v83 = **v82;
                        v84 = (*v82)[1];
                        if ( !get_fchunk(v83) )
                        {
                          if ( (unsigned int)create_insn(v83, 0) )
                          {
                            show_auto(v83, 0);
                            v129 = 0;
                            *(__m128i *)v128.m256i_i8 = _mm_unpacklo_epi64((__m128i)v83, (__m128i)(unsigned __int64)v84);
                            v130 = 0;
                            *(__m128i *)&v128.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_250D0);
                            v132 = 0xFFFFFFFFLL;
                            v133 = 0;
                            v134 = 0;
                            v135 = 0;
                            v136 = 0;
                            v137 = 0;
                            v138 = 0;
                            v139 = 0;
                            v140 = 0;
                            v141 = 0;
                            v131 = 0;
                            if ( (unsigned __int8)add_func_ex(
                                                    &v128,
                                                    0,
                                                    v85,
                                                    v86,
                                                    v87,
                                                    0,
                                                    v106,
                                                    func,
                                                    v111,
                                                    v113,
                                                    v114,
                                                    v115,
                                                    v116,
                                                    v117,
                                                    v118,
                                                    v119,
                                                    v120,
                                                    v122,
                                                    v123,
                                                    v124,
                                                    DWORD2(v124),
                                                    v125,
                                                    v126,
                                                    v127) )
                            {
                              sub_15FA0(v84);
                              func = get_func(v83);
                              if ( func )
                              {
                                if ( (unsigned __int64)v82[1] > 1 )
                                  break;
                              }
                            }
                          }
                        }
                      }
LABEL_141:
                      if ( ++v80 >= v31 )
                        goto LABEL_58;
                    }
                    v88 = callui(27, &callui, byte, v63, v59, v61, 1, func, v111, v113);
                    while ( 2 )
                    {
                      if ( v88 )
                        goto LABEL_111;
                      v90 = (__int64 *)&(*v82)[2 * v107];
                      if ( (int)get_func_chunknum(func, *v90) < 0 )
                      {
                        v91 = *v90;
                        if ( *v90 != v84 )
                          goto LABEL_150;
                        if ( get_fchunk(v84) )
                        {
                          v91 = *v90;
LABEL_150:
                          append_func_tail(func, v91, v90[1]);
                          v89 = v90[1];
                        }
                        else
                        {
                          set_func_end(v83, v90[1]);
                          v89 = v90[1];
                          v84 = v89;
                        }
                        sub_15FA0(v89);
                      }
                      v106 = v107 + 1;
                      if ( v106 >= (unsigned __int64)v82[1] )
                        goto LABEL_141;
                      v88 = callui(27, &callui, byte, v63, v59, v61, v106, func, v111, v113);
                      continue;
                    }
                  }
                }
                else if ( (unsigned __int8)v115 != v103 )
                {
                  goto LABEL_208;
                }
              }
              v95 = v128.m256i_i64[0];
            }
            else if ( BYTE1(v120) && (_WORD)v98 != 5 )
            {
              goto LABEL_182;
            }
            goto LABEL_167;
          }
          if ( (unsigned __int8)((BYTE1(v97) & 0xF) - 1) > 8u )
            goto LABEL_167;
          if ( ((1LL << (BYTE1(v97) & 0xF)) & 0x2A0) != 0 )
            goto LABEL_178;
          if ( ((1LL << (BYTE1(v97) & 0xF)) & 0x110) == 0 )
          {
            LOBYTE(v63) = (BYTE1(v97) & 0xF) - 1;
            if ( (BYTE1(v97) & 0xF) != 1 )
              goto LABEL_167;
            if ( (_WORD)v98 )
              break;
          }
          v59 = (unsigned int)(v59 + 2);
LABEL_168:
          v96 = (int)v59;
          if ( v94 < (int)v59 )
            goto LABEL_182;
          if ( (int)v59 >= v94 )
          {
            if ( v95 )
            {
              v128.m256i_i64[1] = 0;
              qfree(v95);
            }
            goto LABEL_186;
          }
        }
        if ( (_WORD)v98 != 1 )
          goto LABEL_182;
LABEL_178:
        v59 = (unsigned int)(v59 + 3);
        goto LABEL_168;
      }
    }
    v66 = (_QWORD *)(v126 + 24 * v60);
    v67 = v66[1];
    byte = v67 + 1;
    if ( v66[2] < (unsigned __int64)(v67 + 1) )
    {
      *v66 = qvector_reserve(v66, *v66, byte, 16);
      v67 = v66[1];
    }
    v68 = (_QWORD *)(*v66 + 16 * v67);
    *v68 = v114;
    v68[1] = v117;
    ++v66[1];
    goto LABEL_93;
  }
LABEL_111:
  v70 = v126;
LABEL_112:
  if ( v70 )
  {
    v71 = v127;
    v72 = 0;
    v73 = v70;
    if ( (_QWORD)v127 )
    {
      do
      {
        v74 = (__int64 *)(v73 + 24 * v72);
        v75 = *v74;
        if ( *v74 )
        {
          v74[1] = 0;
          qfree(v75);
          v73 = v126;
        }
        ++v72;
      }
      while ( v71 != v72 );
      v70 = v73;
    }
    *(_QWORD *)&v127 = 0;
    qfree(v70);
  }
  v37 = v123;
  if ( v123 )
  {
LABEL_66:
    *(_QWORD *)&v124 = 0;
    qfree(v37);
  }
  return v142 - __readfsqword(0x28u);
}

