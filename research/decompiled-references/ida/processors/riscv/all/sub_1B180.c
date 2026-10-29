__int64 __fastcall sub_1B180(struct _Unwind_Exception *a1, int a2)
{
  char private_2; // al
  int v4; // r12d
  char v5; // dl
  unsigned int private_2_high; // eax
  _Unwind_Exception_Class v7; // rbx
  _Unwind_Exception_Class v8; // r14
  char v9; // si
  char v10; // al
  unsigned int v11; // esi
  _Unwind_Word v12; // rbx
  int v13; // ecx
  _Unwind_Exception_Cleanup_Fn v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r12
  __int64 v23; // r9
  char v24; // al
  _Unwind_Word v25; // rdx
  unsigned int v26; // ebx
  _Unwind_Exception_Class v27; // rdi
  __int64 v28; // r13
  int v30; // eax
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // r13d
  __int64 ph; // r13
  __int64 v38; // rax
  char v39; // si
  char v40; // al
  unsigned int v41; // esi
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdx
  _Unwind_Exception_Class exception_class; // rbx
  _Unwind_Word v44; // rax
  _Unwind_Exception_Class v45; // r15
  int v46; // eax
  __int64 tinfo_size; // rax
  unsigned int v48; // r13d
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  _Unwind_Exception_Class v52; // rdi
  _Unwind_Exception_Class v53; // rdi
  _QWORD *v54; // r12
  __int64 v55; // r13
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rbp
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // r12
  __int64 v68; // rbp
  _QWORD *v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // r13
  _DWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rax
  struct _Unwind_Exception *v77; // r12
  _Unwind_Exception_Cleanup_Fn *p_exception_cleanup; // rbp
  int v79; // eax
  __int64 v80; // rdi
  __int64 v81; // r12
  __int64 v82; // rbp
  _QWORD *v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 *v87; // r12
  __int64 v88; // r13
  __int64 v89; // rdi
  __int64 v90; // rbp
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r15
  _DWORD *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // [rsp+8h] [rbp-190h]
  _DWORD *v100; // [rsp+8h] [rbp-190h]
  int v101; // [rsp+10h] [rbp-188h]
  _DWORD *v102; // [rsp+10h] [rbp-188h]
  __int64 v103; // [rsp+10h] [rbp-188h]
  int v104; // [rsp+20h] [rbp-178h]
  __int64 v105; // [rsp+20h] [rbp-178h]
  _Unwind_Exception_Cleanup_Fn v106; // [rsp+28h] [rbp-170h]
  _QWORD *v107; // [rsp+28h] [rbp-170h]
  int v108; // [rsp+30h] [rbp-168h]
  int v109; // [rsp+38h] [rbp-160h]
  unsigned int v110; // [rsp+3Ch] [rbp-15Ch]
  unsigned int v111; // [rsp+3Ch] [rbp-15Ch]
  __int64 v112; // [rsp+40h] [rbp-158h] BYREF
  __int64 *v113; // [rsp+48h] [rbp-150h]
  __int64 v114; // [rsp+50h] [rbp-148h] BYREF
  __int128 v115; // [rsp+58h] [rbp-140h]
  _DWORD v116[4]; // [rsp+70h] [rbp-128h] BYREF
  int v117; // [rsp+80h] [rbp-118h]
  __int64 v118; // [rsp+90h] [rbp-108h] BYREF
  __int128 v119; // [rsp+98h] [rbp-100h]
  __int64 v120; // [rsp+A8h] [rbp-F0h]
  _QWORD *v121; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v122; // [rsp+B8h] [rbp-E0h]
  __int128 v123; // [rsp+C8h] [rbp-D0h]
  __int64 v124; // [rsp+D8h] [rbp-C0h]
  int v125; // [rsp+E0h] [rbp-B8h]
  __int64 v126; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE v127[24]; // [rsp+F8h] [rbp-A0h] BYREF
  int *v128; // [rsp+110h] [rbp-88h]
  __int128 v129; // [rsp+118h] [rbp-80h]
  _Unwind_Word v130; // [rsp+128h] [rbp-70h]
  __m128i si128; // [rsp+130h] [rbp-68h]
  int v132; // [rsp+140h] [rbp-58h]
  int v133; // [rsp+144h] [rbp-54h]
  unsigned int v134; // [rsp+148h] [rbp-50h]
  char v135; // [rsp+14Ch] [rbp-4Ch]
  unsigned __int64 v136; // [rsp+158h] [rbp-40h]

  private_2 = a1[2].private_2;
  v136 = __readfsqword(0x28u);
  v4 = a2;
  v5 = private_2;
  private_2_high = private_2 & 0xF0;
  if ( (v5 & 0xF0) == 0xC0 )
    private_2_high = HIDWORD(a1->private_2);
  if ( private_2_high > 0x10 || (private_2_high = getinf(99), private_2_high > 0x10) )
  {
    if ( private_2_high != 176 )
      goto LABEL_5;
  }
  else if ( (unsigned int)getinf(99) != 176 )
  {
    goto LABEL_5;
  }
  if ( (unsigned __int64)getinf(88) > 0x397
    || (unsigned __int8)getinf_flag(3, 4, v32, v33, v34, v35)
    && (netnode_check(&v126, "$ golang", 0, 0), v48 = netnode_altval(v126, 0, 65), v48 > 0x74)
    && ((v49 = *(_DWORD *)(get_ph() + 4)) == 0
     || (v50 = (unsigned int)(v49 - 13), (unsigned int)v50 <= 0x3B)
     && (v51 = 0x800000000000005LL, _bittest64(&v51, v50))
     && v48 != 117) )
  {
    v36 = a1[2].private_2 & 0xF0;
    if ( (a1[2].private_2 & 0xF0) == 0xC0 )
      v36 = HIDWORD(a1->private_2);
    if ( v36 <= 0x10 )
      v36 = getinf(99);
    v126 = 0;
    memset(v127, 0, sizeof(v127));
    v128 = nullptr;
    v129 = 0;
    sub_15C90(0x7D4u, &v126, 176);
    v130 = 0;
    v132 = a2;
    v133 = 0;
    v134 = v36;
    v135 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2B120);
    if ( !*(_QWORD *)&v127[8] || !(_QWORD)v129 )
      goto LABEL_61;
    LOBYTE(v133) = v127[8];
    BYTE1(v133) = v129;
    ph = get_ph();
    parse_reg_name(&v121, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * (int)**(_DWORD **)v127));
    v38 = SHIDWORD(v121);
    si128.m128i_i64[0] = SHIDWORD(v121);
    if ( !*(_DWORD *)(ph + 4) )
      v38 = 8;
    si128.m128i_i64[0] = v38;
    parse_reg_name(&v121, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * *v128));
    v39 = a1[2].private_2;
    v135 = 1;
    v118 = 32;
    si128.m128i_i64[1] = SHIDWORD(v121);
    v40 = v39;
    v41 = v39 & 0xF0;
    v119 = 0;
    v120 = 0;
    if ( (v40 & 0xF0) == 0xC0 )
      v41 = HIDWORD(a1->private_2);
    if ( v41 <= 0x10 )
      getinf(99);
    get_stkarg_area_info(&v118);
    exception_cleanup = a1->exception_cleanup;
    exception_class = a1->exception_class;
    v44 = v119;
    v130 = v119;
    v45 = exception_class + 80LL * (_QWORD)exception_cleanup;
    if ( exception_class != v45 )
    {
      while ( 1 )
      {
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(exception_class + 64), 0);
        if ( tinfo_size == -1 )
          goto LABEL_61;
        if ( tinfo_size
          && (v46 = sub_1AAF0((__int64)&v126, (_QWORD *)(exception_class + 64), (_DWORD *)exception_class, 0)) != 0 )
        {
          if ( v46 != 1 )
            goto LABEL_61;
          exception_class += 80LL;
          if ( v45 == exception_class )
          {
LABEL_91:
            v44 = v130;
            break;
          }
        }
        else
        {
          sub_15E80((__int64)&v126, (_QWORD *)(exception_class + 64), exception_class);
          exception_class += 80LL;
          if ( v45 == exception_class )
            goto LABEL_91;
        }
      }
    }
    a1[1].private_2 = v44;
    v52 = a1[1].exception_class;
    v130 = (v4 - 1 + v44) & -v4;
    if ( (get_tinfo_property(v52, 2) & 0x3F) == 1 )
    {
LABEL_93:
      v26 = 1;
      goto LABEL_62;
    }
    v53 = a1[1].exception_class;
    HIWORD(v133) = 0;
    v121 = nullptr;
    v124 = 0;
    v125 = 1;
    v122 = 0;
    v123 = 0;
    if ( (unsigned __int8)get_tinfo_details(v53, 13) && (v124 & 0x80000000000LL) != 0 )
    {
      v54 = v121;
      v114 = 0;
      v115 = 0;
      v107 = &v121[18 * v122];
      if ( v121 == v107 )
      {
LABEL_145:
        v86 = qalloc_or_throw(24);
        *(_QWORD *)v86 = 0;
        v87 = (__int64 *)v86;
        *(_OWORD *)(v86 + 8) = 0;
        v88 = v115;
        if ( (_QWORD)v115 )
        {
          v93 = qalloc_or_throw(24 * v115);
          *v87 = v93;
          v94 = v93;
          v95 = 0;
          v87[2] = v88;
          while ( 1 )
          {
            v96 = (_DWORD *)(24 * v95 + v94);
            v97 = v114 + 24 * v95;
            *v96 = 0;
            v103 = v97;
            v100 = v96;
            copy_argloc(v96, v97);
            ++v95;
            v100[4] = *(_DWORD *)(v103 + 16);
            if ( v88 == v95 )
              break;
            v94 = *v87;
          }
          v87[1] = v88;
        }
        cleanup_argloc(&a1[1].exception_cleanup);
        if ( v87 )
        {
          LODWORD(a1[1].exception_cleanup) = 2;
          a1[1].private_1 = (_Unwind_Word)v87;
        }
        v89 = v114;
        if ( v114 )
        {
          v90 = v115;
          v91 = 0;
          if ( (_QWORD)v115 )
          {
            do
            {
              v92 = 3 * v91++;
              cleanup_argloc(v89 + 8 * v92);
              v89 = v114;
            }
            while ( v90 != v91 );
          }
          *(_QWORD *)&v115 = 0;
          qfree(v89);
        }
        goto LABEL_135;
      }
      while ( 1 )
      {
        v112 = 0;
        v113 = nullptr;
        v56 = get_tinfo_size(0, v54[8], 0);
        if ( v56 == -1 )
          break;
        if ( v56 && (v57 = sub_1AAF0((__int64)&v126, v54 + 8, &v112, 0)) != 0 )
        {
          if ( v57 != 1 )
            break;
        }
        else
        {
          sub_15E80((__int64)&v126, v54 + 8, (__int64)&v112);
        }
        v58 = *v54 >> 3;
        if ( (_DWORD)v112 == 2 )
        {
          v72 = *v113;
          v105 = *v113 + 24 * v113[1];
          if ( *v113 != v105 )
          {
            do
            {
              v116[0] = 0;
              copy_argloc(v116, v72);
              v74 = v115;
              v75 = v114;
              v117 = *(_DWORD *)(v72 + 16);
              if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)(v115 + 1) )
              {
                v114 = qvector_reserve(&v114, v114, v115 + 1, 24);
                v74 = v115;
                v75 = v114;
              }
              v73 = (_DWORD *)(v75 + 24 * v74);
              *v73 = 0;
              v102 = v73;
              copy_argloc(v73, v116);
              v72 += 24;
              *(_QWORD *)&v115 = v115 + 1;
              v102[4] = v117;
              cleanup_argloc(v116);
              *(_WORD *)(v114 + 24 * v115 - 8) += v58;
            }
            while ( v105 != v72 );
          }
        }
        else
        {
          v59 = v115;
          v60 = v114;
          if ( (_DWORD)v112 == 1 && (_QWORD)v115 && (v61 = v114 + 24 * v115 - 24, *(_DWORD *)v61 == 1) )
          {
            *(_WORD *)(v61 + 18) = v58 + (v54[1] >> 3) - *(_WORD *)(v61 + 16);
          }
          else
          {
            if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)(v115 + 1) )
            {
              v114 = qvector_reserve(&v114, v114, v115 + 1, 24);
              v60 = v114;
              v59 = v115;
            }
            v55 = v60 + 24 * v59;
            *(_QWORD *)v55 = 0;
            *(_QWORD *)(v55 + 8) = 0;
            *(_DWORD *)(v55 + 16) = 0xFFFF;
            *(_QWORD *)&v115 = v115 + 1;
            copy_argloc(v55, &v112);
            *(_WORD *)(v55 + 16) = v58;
            *(_WORD *)(v55 + 18) = v54[1] >> 3;
          }
        }
        v54 += 18;
        cleanup_argloc(&v112);
        if ( v107 == v54 )
          goto LABEL_145;
      }
      cleanup_argloc(&v112);
      v62 = v114;
      if ( v114 )
      {
        v63 = v115;
        v64 = 0;
        if ( (_QWORD)v115 )
        {
          do
          {
            v65 = 3 * v64++;
            cleanup_argloc(v62 + 8 * v65);
            v62 = v114;
          }
          while ( v63 != v64 );
        }
        *(_QWORD *)&v115 = 0;
        qfree(v62);
      }
LABEL_117:
      v66 = (__int64)v121;
      if ( v121 )
      {
        v67 = v122;
        if ( (_QWORD)v122 )
        {
          v68 = 0;
          do
          {
            v69 = (_QWORD *)(v66 + 144 * v68);
            clear_tinfo_t(v69 + 8);
            v70 = v69[5];
            if ( v70 )
            {
              v69[6] = 0;
              qfree(v70);
            }
            v71 = v69[2];
            if ( v71 )
            {
              v69[3] = 0;
              qfree(v71);
            }
            ++v68;
            v66 = (__int64)v121;
          }
          while ( v67 != v68 );
        }
        *(_QWORD *)&v122 = 0;
        qfree(v66);
      }
LABEL_61:
      v26 = 0;
LABEL_62:
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree(v128);
      }
      if ( *(_QWORD *)v127 )
      {
        *(_QWORD *)&v127[8] = 0;
        qfree(*(_QWORD *)v127);
      }
      return v26;
    }
    v76 = get_tinfo_size(0, a1[1].exception_class, 0);
    if ( v76 == -1 )
      goto LABEL_117;
    v77 = a1 + 1;
    p_exception_cleanup = &a1[1].exception_cleanup;
    if ( v76 && (v79 = sub_1AAF0((__int64)&v126, v77, p_exception_cleanup, 0)) != 0 )
    {
      if ( v79 != 1 )
        goto LABEL_117;
    }
    else
    {
      sub_15E80((__int64)&v126, v77, (__int64)p_exception_cleanup);
    }
LABEL_135:
    v80 = (__int64)v121;
    if ( v121 )
    {
      v81 = v122;
      if ( (_QWORD)v122 )
      {
        v82 = 0;
        do
        {
          v83 = (_QWORD *)(v80 + 144 * v82);
          clear_tinfo_t(v83 + 8);
          v84 = v83[5];
          if ( v84 )
          {
            v83[6] = 0;
            qfree(v84);
          }
          v85 = v83[2];
          if ( v85 )
          {
            v83[3] = 0;
            qfree(v85);
          }
          ++v82;
          v80 = (__int64)v121;
        }
        while ( v81 != v82 );
      }
      *(_QWORD *)&v122 = 0;
      qfree(v80);
    }
    goto LABEL_93;
  }
LABEL_5:
  getinf(59);
  v7 = a1->exception_class;
  v8 = a1->exception_class + 80 * (__int64)a1->exception_cleanup;
  if ( a1->exception_class == v8 )
  {
LABEL_6:
    v9 = a1[2].private_2;
    v126 = 32;
    v10 = v9;
    memset(v127, 0, sizeof(v127));
    v11 = v9 & 0xF0;
    if ( (v10 & 0xF0) == 0xC0 )
      v11 = HIDWORD(a1->private_2);
    if ( v11 <= 0x10 )
      getinf(99);
    get_stkarg_area_info(&v126);
    v12 = *(_QWORD *)v127;
    if ( a1->exception_cleanup )
    {
      v106 = a1->exception_cleanup;
      v13 = 2 * v4;
      v104 = 2 * v4;
      if ( v4 <= 2 * v4 )
        v13 = v4;
      v101 = v4;
      v14 = nullptr;
      v109 = v13;
      v108 = v4 - 1;
      while ( 1 )
      {
        v15 = (_QWORD *)(a1->exception_class + 80LL * (_QWORD)v14);
        v16 = a1[2].private_2 & 0xF0;
        v99 = v15[1];
        if ( (a1[2].private_2 & 0xF0) == 0xC0 )
          v16 = HIDWORD(a1->private_2);
        if ( (unsigned int)v16 <= 0x10 )
          v16 = (unsigned int)getinf(99);
        v17 = v15[8];
        v18 = (__int64 *)&v121;
        LODWORD(v121) = 0;
        get_tinfo_size(&v121, v17, 0);
        v22 = (unsigned int)v121;
        v23 = (unsigned int)((_DWORD)v121 - 1);
        if ( ((unsigned int)v23 & (unsigned int)v121) != 0 )
        {
          sub_15390();
          do
          {
            v98 = 3 * v16++;
            cleanup_argloc(&v18[v98]);
            v18 = (__int64 *)v114;
          }
          while ( v22 != v16 );
          *(_QWORD *)&v115 = 0;
          qfree(v114);
          sub_1AA50((__int64 *)&v121);
          sub_15E40(v15);
          _Unwind_Resume(a1);
        }
        if ( (int)v121 <= v104 )
          break;
        if ( (unsigned int)v16 <= 0x10 )
        {
          v110 = (_DWORD)v121 - 1;
          v30 = getinf(99);
          if ( v30 == 176 || v30 == 256 )
          {
            if ( v101 <= v104 )
              goto LABEL_67;
LABEL_49:
            LODWORD(v22) = v104;
LABEL_50:
            LODWORD(v16) = getinf(99);
            if ( (_DWORD)v16 == 176 )
            {
LABEL_51:
              LODWORD(v23) = v22 - 1;
              goto LABEL_25;
            }
LABEL_23:
            if ( (_DWORD)v16 == 256 )
              goto LABEL_51;
            goto LABEL_24;
          }
          v23 = v110;
        }
        else if ( (_DWORD)v16 == 256 || (_DWORD)v16 == 176 )
        {
          LODWORD(v22) = v109;
          LODWORD(v23) = v109 - 1;
          goto LABEL_25;
        }
        v111 = v23;
        v31 = getinf_flag(67, 512, v19, v20, v21, v23);
        v23 = v111;
        if ( v31 )
          goto LABEL_25;
        LODWORD(v22) = v104;
        if ( v101 <= v104 )
        {
          if ( (unsigned int)v16 > 0x10 )
          {
            LODWORD(v22) = v104;
LABEL_37:
            if ( (unsigned __int8)getinf_flag(67, 4, v19, v20, v21, v23) )
              goto LABEL_51;
LABEL_38:
            LODWORD(v23) = v108;
            LODWORD(v22) = v101;
            goto LABEL_25;
          }
LABEL_67:
          LODWORD(v22) = v104;
LABEL_68:
          LODWORD(v16) = getinf(99);
LABEL_35:
          if ( (_DWORD)v16 != 176 && (_DWORD)v16 != 256 )
            goto LABEL_37;
          goto LABEL_38;
        }
        if ( (unsigned int)v16 <= 0x10 )
          goto LABEL_49;
LABEL_24:
        v24 = getinf_flag(67, 2, v19, v20, v21, v23);
        LODWORD(v23) = v22 - 1;
        if ( !v24 )
          goto LABEL_38;
LABEL_25:
        *(_DWORD *)v15 = 1;
        v14 = (_Unwind_Exception_Cleanup_Fn)((char *)v14 + 1);
        v25 = (v12 + (int)v23) & -(int)v22;
        v15[1] = v25;
        v12 = v25 + (unsigned int)v99;
        if ( v106 == v14 )
        {
          v4 = v101;
          goto LABEL_27;
        }
      }
      if ( v101 <= (int)v121 )
      {
        if ( (unsigned int)v16 <= 0x10 )
          goto LABEL_68;
        goto LABEL_35;
      }
      if ( (unsigned int)v16 <= 0x10 )
        goto LABEL_50;
      if ( (_DWORD)v16 == 176 )
        goto LABEL_51;
      goto LABEL_23;
    }
LABEL_27:
    a1[1].private_2 = v12;
    if ( (get_tinfo_property(a1[1].exception_class, 2) & 0x3F) != 1 )
    {
      LODWORD(a1[1].exception_cleanup) = 1;
      a1[1].private_1 = (v12 + v4 - 1) & -v4;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v28 = get_tinfo_size(0, *(_QWORD *)(v7 + 64), 0);
      if ( v28 == -1 )
        return 0;
      v27 = v7;
      v7 += 80LL;
      cleanup_argloc(v27);
      *(_DWORD *)(v7 - 80) = 1;
      *(_QWORD *)(v7 - 72) = v28;
      if ( v8 == v7 )
        goto LABEL_6;
    }
  }
}

