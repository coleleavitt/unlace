__int64 __fastcall sub_44030(struct _Unwind_Exception *a1, int a2)
{
  char private_2; // al
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
  __int64 v19; // r12
  int v20; // r9d
  char v21; // al
  int v22; // r9d
  _Unwind_Word v23; // rdx
  unsigned int v24; // ebx
  _Unwind_Exception_Class v25; // rdi
  __int64 v26; // r13
  int v28; // eax
  char v29; // al
  unsigned int v30; // r13d
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __m128i si128; // xmm0
  __int64 ph; // r13
  __int64 v35; // rax
  char v36; // si
  char v37; // al
  unsigned int v38; // esi
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdx
  _Unwind_Exception_Class exception_class; // rbx
  _Unwind_Word v41; // rax
  _Unwind_Exception_Class v42; // r15
  int v43; // eax
  __int64 tinfo_size; // rax
  unsigned int v45; // r13d
  int v46; // eax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  _Unwind_Exception_Class v49; // rdi
  _Unwind_Exception_Class v50; // rdi
  _QWORD *v51; // r12
  __int64 *v52; // r13
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rbp
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r12
  __int64 v64; // rbp
  _QWORD *v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // r13
  _DWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rax
  struct _Unwind_Exception *v73; // r12
  _Unwind_Exception_Cleanup_Fn *p_exception_cleanup; // rbp
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 v78; // rbp
  _QWORD *v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 *v83; // r12
  __int64 v84; // r13
  __int64 v85; // rdi
  __int64 v86; // rbp
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r15
  _DWORD *v92; // rdx
  __int64 *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // [rsp+8h] [rbp-190h]
  _DWORD *v98; // [rsp+8h] [rbp-190h]
  int v99; // [rsp+10h] [rbp-188h]
  _DWORD *v100; // [rsp+10h] [rbp-188h]
  __int64 *v101; // [rsp+10h] [rbp-188h]
  int v102; // [rsp+20h] [rbp-178h]
  __int64 v103; // [rsp+20h] [rbp-178h]
  _Unwind_Exception_Cleanup_Fn v104; // [rsp+28h] [rbp-170h]
  _QWORD *v105; // [rsp+28h] [rbp-170h]
  int v106; // [rsp+30h] [rbp-168h]
  int v107; // [rsp+38h] [rbp-160h]
  int v108; // [rsp+3Ch] [rbp-15Ch]
  int v109; // [rsp+3Ch] [rbp-15Ch]
  __int64 v110; // [rsp+40h] [rbp-158h] BYREF
  __int64 *v111; // [rsp+48h] [rbp-150h]
  __int64 v112; // [rsp+50h] [rbp-148h] BYREF
  __int128 v113; // [rsp+58h] [rbp-140h]
  _DWORD v114[4]; // [rsp+70h] [rbp-128h] BYREF
  int v115; // [rsp+80h] [rbp-118h]
  __int64 v116; // [rsp+90h] [rbp-108h] BYREF
  __int128 v117; // [rsp+98h] [rbp-100h]
  __int64 v118; // [rsp+A8h] [rbp-F0h]
  _QWORD *v119; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v120; // [rsp+B8h] [rbp-E0h]
  __int128 v121; // [rsp+C8h] [rbp-D0h]
  __int64 v122; // [rsp+D8h] [rbp-C0h]
  int v123; // [rsp+E0h] [rbp-B8h]
  __int64 v124; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE v125[24]; // [rsp+F8h] [rbp-A0h] BYREF
  int *v126; // [rsp+110h] [rbp-88h]
  __int128 v127; // [rsp+118h] [rbp-80h]
  _Unwind_Word v128; // [rsp+128h] [rbp-70h]
  __m128i v129; // [rsp+130h] [rbp-68h]
  int v130; // [rsp+140h] [rbp-58h]
  int v131; // [rsp+144h] [rbp-54h]
  unsigned int v132; // [rsp+148h] [rbp-50h]
  char v133; // [rsp+14Ch] [rbp-4Ch]
  unsigned __int64 v134; // [rsp+158h] [rbp-40h]

  private_2 = a1[2].private_2;
  v134 = __readfsqword(0x28u);
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
    || (unsigned __int8)getinf_flag(3, 4)
    && (netnode_check(&v124, "$ golang", 0, 0), v45 = netnode_altval(v124, 0, 65), v45 > 0x74)
    && ((v46 = *(_DWORD *)(get_ph() + 4)) == 0
     || (v47 = (unsigned int)(v46 - 13), (unsigned int)v47 <= 0x3B)
     && (v48 = 0x800000000000005LL, _bittest64(&v48, v47))
     && v45 != 117) )
  {
    v30 = a1[2].private_2 & 0xF0;
    if ( (a1[2].private_2 & 0xF0) == 0xC0 )
      v30 = HIDWORD(a1->private_2);
    if ( v30 <= 0x10 )
      v30 = getinf(99);
    v31 = &v124;
    v124 = 0;
    memset(v125, 0, sizeof(v125));
    v126 = nullptr;
    v127 = 0;
    sub_338A0(0x7D4u, &v124, 176);
    si128 = _mm_load_si128((const __m128i *)&xmmword_77D90);
    v128 = 0;
    v130 = a2;
    v131 = 0;
    v132 = v30;
    v133 = 0;
    v129 = si128;
    if ( !*(_QWORD *)&v125[8] )
      goto LABEL_61;
    v32 = v127;
    if ( !(_QWORD)v127 )
      goto LABEL_61;
    LOBYTE(v131) = v125[8];
    BYTE1(v131) = v127;
    ph = get_ph();
    parse_reg_name(&v119, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * (int)**(_DWORD **)v125));
    v35 = SHIDWORD(v119);
    v129.m128i_i64[0] = SHIDWORD(v119);
    if ( !*(_DWORD *)(ph + 4) )
      v35 = 8;
    v129.m128i_i64[0] = v35;
    parse_reg_name(&v119, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * *v126));
    v36 = a1[2].private_2;
    si128.m128i_i64[0] = 0;
    v133 = 1;
    v116 = 32;
    v129.m128i_i64[1] = SHIDWORD(v119);
    v37 = v36;
    v38 = v36 & 0xF0;
    v117 = 0;
    v118 = 0;
    if ( (v37 & 0xF0) == 0xC0 )
      v38 = HIDWORD(a1->private_2);
    if ( v38 <= 0x10 )
      getinf(99);
    get_stkarg_area_info(&v116);
    exception_cleanup = a1->exception_cleanup;
    exception_class = a1->exception_class;
    v41 = v117;
    v128 = v117;
    v42 = exception_class + 80LL * (_QWORD)exception_cleanup;
    if ( exception_class != v42 )
    {
      while ( 1 )
      {
        v31 = *(__int64 **)(exception_class + 64);
        tinfo_size = get_tinfo_size(0, v31, 0);
        if ( tinfo_size == -1 )
          goto LABEL_61;
        if ( tinfo_size
          && (v31 = (__int64 *)(exception_class + 64),
              (v43 = sub_439A0(
                       (__int64)&v124,
                       (_QWORD *)(exception_class + 64),
                       (_DWORD *)exception_class,
                       nullptr,
                       0,
                       0.0)) != 0) )
        {
          if ( v43 != 1 )
            goto LABEL_61;
          exception_class += 80LL;
          if ( v42 == exception_class )
          {
LABEL_91:
            v41 = v128;
            break;
          }
        }
        else
        {
          sub_34540((__int64)&v124, (_QWORD *)(exception_class + 64), exception_class);
          exception_class += 80LL;
          if ( v42 == exception_class )
            goto LABEL_91;
        }
      }
    }
    a1[1].private_2 = v41;
    v49 = a1[1].exception_class;
    v31 = (_QWORD *)(&dword_0 + 2);
    v128 = (a2 - 1 + v41) & -a2;
    if ( (get_tinfo_property(v49, 2) & 0x3F) == 1 )
    {
LABEL_93:
      v24 = 1;
      goto LABEL_62;
    }
    v50 = a1[1].exception_class;
    si128.m128i_i64[0] = 0;
    v31 = (_QWORD *)(byte_9 + 4);
    HIWORD(v131) = 0;
    v119 = nullptr;
    v122 = 0;
    v123 = 1;
    v120 = 0;
    v121 = 0;
    if ( (unsigned __int8)get_tinfo_details(v50, 13, &v119) && (v122 & 0x80000000000LL) != 0 )
    {
      si128.m128i_i64[0] = 0;
      v51 = v119;
      v112 = 0;
      v113 = 0;
      v105 = &v119[18 * v120];
      if ( v119 == v105 )
      {
LABEL_145:
        v82 = qalloc_or_throw(24);
        si128.m128i_i64[0] = 0;
        *(_QWORD *)v82 = 0;
        v83 = (__int64 *)v82;
        *(_OWORD *)(v82 + 8) = 0;
        v84 = v113;
        if ( (_QWORD)v113 )
        {
          v89 = qalloc_or_throw(24 * v113);
          *v83 = v89;
          v90 = v89;
          v91 = 0;
          v83[2] = v84;
          while ( 1 )
          {
            v92 = (_DWORD *)(24 * v91 + v90);
            v93 = (__int64 *)(v112 + 24 * v91);
            *v92 = 0;
            v31 = v93;
            v101 = v93;
            v98 = v92;
            copy_argloc(v92, v93);
            ++v91;
            v98[4] = *((_DWORD *)v101 + 4);
            if ( v84 == v91 )
              break;
            v90 = *v83;
          }
          v83[1] = v84;
        }
        cleanup_argloc(&a1[1].exception_cleanup);
        if ( v83 )
        {
          LODWORD(a1[1].exception_cleanup) = 2;
          a1[1].private_1 = (_Unwind_Word)v83;
        }
        v85 = v112;
        if ( v112 )
        {
          v86 = v113;
          v87 = 0;
          if ( (_QWORD)v113 )
          {
            do
            {
              v88 = 3 * v87++;
              cleanup_argloc(v85 + 8 * v88);
              v85 = v112;
            }
            while ( v86 != v87 );
          }
          *(_QWORD *)&v113 = 0;
          qfree(v85, v31, v32, 0.0);
        }
        goto LABEL_135;
      }
      while ( 1 )
      {
        v110 = 0;
        v111 = nullptr;
        v31 = (__int64 *)v51[8];
        v53 = get_tinfo_size(0, v31, 0);
        if ( v53 == -1 )
          break;
        if ( v53 && (v31 = v51 + 8, (v54 = sub_439A0((__int64)&v124, v51 + 8, &v110, nullptr, 0, 0.0)) != 0) )
        {
          if ( v54 != 1 )
            break;
        }
        else
        {
          v31 = v51 + 8;
          sub_34540((__int64)&v124, v51 + 8, (__int64)&v110);
        }
        v55 = *v51 >> 3;
        if ( (_DWORD)v110 == 2 )
        {
          v68 = *v111;
          v103 = *v111 + 24 * v111[1];
          if ( *v111 != v103 )
          {
            do
            {
              v114[0] = 0;
              copy_argloc(v114, v68);
              v70 = v113;
              v71 = v112;
              v115 = *(_DWORD *)(v68 + 16);
              if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
              {
                v112 = qvector_reserve(&v112, v112, v113 + 1, 24);
                v70 = v113;
                v71 = v112;
              }
              v69 = (_DWORD *)(v71 + 24 * v70);
              v31 = (__int64 *)v114;
              *v69 = 0;
              v100 = v69;
              copy_argloc(v69, v114);
              v68 += 24;
              *(_QWORD *)&v113 = v113 + 1;
              v100[4] = v115;
              cleanup_argloc(v114);
              *(_WORD *)(v112 + 24 * v113 - 8) += v55;
            }
            while ( v103 != v68 );
          }
        }
        else
        {
          v56 = v113;
          v31 = (__int64 *)v112;
          if ( (_DWORD)v110 == 1 && (_QWORD)v113 && (v57 = v112 + 24 * v113 - 24, *(_DWORD *)v57 == 1) )
          {
            *(_WORD *)(v57 + 18) = v55 + (v51[1] >> 3) - *(_WORD *)(v57 + 16);
          }
          else
          {
            if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
            {
              v112 = qvector_reserve(&v112, v112, v113 + 1, 24);
              v31 = (__int64 *)v112;
              v56 = v113;
            }
            v52 = &v31[3 * v56];
            v31 = &v110;
            *v52 = 0;
            v52[1] = 0;
            *((_DWORD *)v52 + 4) = 0xFFFF;
            *(_QWORD *)&v113 = v113 + 1;
            copy_argloc(v52, &v110);
            *((_WORD *)v52 + 8) = v55;
            *((_WORD *)v52 + 9) = v51[1] >> 3;
          }
        }
        v51 += 18;
        cleanup_argloc(&v110);
        if ( v105 == v51 )
          goto LABEL_145;
      }
      cleanup_argloc(&v110);
      v58 = v112;
      if ( v112 )
      {
        v59 = v113;
        v60 = 0;
        if ( (_QWORD)v113 )
        {
          do
          {
            v61 = 3 * v60++;
            cleanup_argloc(v58 + 8 * v61);
            v58 = v112;
          }
          while ( v59 != v60 );
        }
        *(_QWORD *)&v113 = 0;
        qfree(v58, v31, v32, 0.0);
      }
LABEL_117:
      v62 = (__int64)v119;
      if ( v119 )
      {
        v63 = v120;
        if ( (_QWORD)v120 )
        {
          v64 = 0;
          do
          {
            v65 = (_QWORD *)(v62 + 144 * v64);
            clear_tinfo_t(v65 + 8);
            v66 = v65[5];
            if ( v66 )
            {
              v65[6] = 0;
              qfree(v66, v31, v32, 0.0);
            }
            v67 = v65[2];
            if ( v67 )
            {
              v65[3] = 0;
              qfree(v67, v31, v32, 0.0);
            }
            ++v64;
            v62 = (__int64)v119;
          }
          while ( v63 != v64 );
        }
        *(_QWORD *)&v120 = 0;
        qfree(v62, v31, v32, 0.0);
      }
LABEL_61:
      v24 = 0;
LABEL_62:
      if ( v126 )
      {
        *(_QWORD *)&v127 = 0;
        qfree(v126, v31, v32, *(double *)si128.m128i_i64);
      }
      if ( *(_QWORD *)v125 )
      {
        *(_QWORD *)&v125[8] = 0;
        qfree(*(_QWORD *)v125, v31, v32, *(double *)si128.m128i_i64);
      }
      return v24;
    }
    v31 = (__int64 *)a1[1].exception_class;
    v72 = get_tinfo_size(0, v31, 0);
    if ( v72 == -1 )
      goto LABEL_117;
    v73 = a1 + 1;
    p_exception_cleanup = &a1[1].exception_cleanup;
    if ( v72
      && (v31 = (__int64 *)v73, (v75 = sub_439A0((__int64)&v124, v73, p_exception_cleanup, nullptr, 0, 0.0)) != 0) )
    {
      if ( v75 != 1 )
        goto LABEL_117;
    }
    else
    {
      v31 = (__int64 *)v73;
      sub_34540((__int64)&v124, v73, (__int64)p_exception_cleanup);
    }
LABEL_135:
    v76 = (__int64)v119;
    if ( v119 )
    {
      v77 = v120;
      if ( (_QWORD)v120 )
      {
        v78 = 0;
        do
        {
          v79 = (_QWORD *)(v76 + 144 * v78);
          clear_tinfo_t(v79 + 8);
          v80 = v79[5];
          if ( v80 )
          {
            v79[6] = 0;
            qfree(v80, v31, v32, 0.0);
          }
          v81 = v79[2];
          if ( v81 )
          {
            v79[3] = 0;
            qfree(v81, v31, v32, 0.0);
          }
          ++v78;
          v76 = (__int64)v119;
        }
        while ( v77 != v78 );
      }
      *(_QWORD *)&v120 = 0;
      qfree(v76, v31, v32, 0.0);
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
    v124 = 32;
    v10 = v9;
    memset(v125, 0, sizeof(v125));
    v11 = v9 & 0xF0;
    if ( (v10 & 0xF0) == 0xC0 )
      v11 = HIDWORD(a1->private_2);
    if ( v11 <= 0x10 )
      getinf(99);
    get_stkarg_area_info(&v124);
    v12 = *(_QWORD *)v125;
    if ( a1->exception_cleanup )
    {
      v104 = a1->exception_cleanup;
      v13 = 2 * a2;
      v102 = 2 * a2;
      if ( a2 <= 2 * a2 )
        v13 = a2;
      v99 = a2;
      v14 = nullptr;
      v107 = v13;
      v106 = a2 - 1;
      while ( 1 )
      {
        v15 = (_QWORD *)(a1->exception_class + 80LL * (_QWORD)v14);
        v16 = a1[2].private_2 & 0xF0;
        v97 = v15[1];
        if ( (a1[2].private_2 & 0xF0) == 0xC0 )
          v16 = HIDWORD(a1->private_2);
        if ( (unsigned int)v16 <= 0x10 )
          v16 = (unsigned int)getinf(99);
        v17 = v15[8];
        v18 = (__int64 *)&v119;
        LODWORD(v119) = 0;
        get_tinfo_size(&v119, v17, 0);
        v19 = (unsigned int)v119;
        v20 = (_DWORD)v119 - 1;
        if ( (((_DWORD)v119 - 1) & (unsigned int)v119) != 0 )
        {
          sub_31A20();
          do
          {
            v94 = 3 * v16++;
            cleanup_argloc(&v18[v94]);
            v18 = (__int64 *)v112;
          }
          while ( v19 != v16 );
          *(_QWORD *)&v113 = 0;
          qfree(v112, v17, v95, 0.0);
          sub_42BB0((__int64 *)&v119, v17, v96, 0.0);
          sub_33C20(v15);
          _Unwind_Resume(a1);
        }
        if ( (int)v119 <= v102 )
          break;
        if ( (unsigned int)v16 <= 0x10 )
        {
          v108 = (_DWORD)v119 - 1;
          v28 = getinf(99);
          if ( v28 == 176 || v28 == 256 )
          {
            if ( v99 <= v102 )
              goto LABEL_67;
LABEL_49:
            LODWORD(v19) = v102;
LABEL_50:
            LODWORD(v16) = getinf(99);
            if ( (_DWORD)v16 == 176 )
            {
LABEL_51:
              v22 = v19 - 1;
              goto LABEL_25;
            }
LABEL_23:
            if ( (_DWORD)v16 == 256 )
              goto LABEL_51;
            goto LABEL_24;
          }
          v20 = v108;
        }
        else if ( (_DWORD)v16 == 256 || (_DWORD)v16 == 176 )
        {
          LODWORD(v19) = v107;
          v22 = v107 - 1;
          goto LABEL_25;
        }
        v109 = v20;
        v29 = getinf_flag(67, 512);
        v22 = v109;
        if ( v29 )
          goto LABEL_25;
        LODWORD(v19) = v102;
        if ( v99 <= v102 )
        {
          if ( (unsigned int)v16 > 0x10 )
          {
            LODWORD(v19) = v102;
LABEL_37:
            if ( (unsigned __int8)getinf_flag(67, 4) )
              goto LABEL_51;
LABEL_38:
            v22 = v106;
            LODWORD(v19) = v99;
            goto LABEL_25;
          }
LABEL_67:
          LODWORD(v19) = v102;
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
        v21 = getinf_flag(67, 2);
        v22 = v19 - 1;
        if ( !v21 )
          goto LABEL_38;
LABEL_25:
        *(_DWORD *)v15 = 1;
        v14 = (_Unwind_Exception_Cleanup_Fn)((char *)v14 + 1);
        v23 = (v12 + v22) & -(int)v19;
        v15[1] = v23;
        v12 = v23 + (unsigned int)v97;
        if ( v104 == v14 )
        {
          a2 = v99;
          goto LABEL_27;
        }
      }
      if ( v99 <= (int)v119 )
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
      a1[1].private_1 = (v12 + a2 - 1) & -a2;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v26 = get_tinfo_size(0, *(_QWORD *)(v7 + 64), 0);
      if ( v26 == -1 )
        return 0;
      v25 = v7;
      v7 += 80LL;
      cleanup_argloc(v25);
      *(_DWORD *)(v7 - 80) = 1;
      *(_QWORD *)(v7 - 72) = v26;
      if ( v8 == v7 )
        goto LABEL_6;
    }
  }
}

