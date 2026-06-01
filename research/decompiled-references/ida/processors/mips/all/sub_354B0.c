__int64 __fastcall sub_354B0(__int64 a1, int a2)
{
  char v3; // al
  int v4; // r12d
  char v5; // dl
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r14
  char v9; // si
  char v10; // al
  unsigned int v11; // esi
  struct _Unwind_Exception *v12; // rbx
  int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 v17; // rsi
  int v18; // r12d
  int v19; // r9d
  char v20; // al
  int v21; // r9d
  unsigned __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rdi
  __int64 v25; // r13
  int v27; // eax
  char v28; // al
  unsigned int v29; // r13d
  __int64 ph; // r13
  __int64 v31; // rax
  char v32; // si
  char v33; // al
  unsigned int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r15
  int v39; // eax
  __int64 tinfo_size; // rax
  unsigned int v41; // r13d
  int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdi
  _QWORD *v47; // r12
  __int64 v48; // r13
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rbp
  __int64 v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rbp
  _QWORD *v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // r13
  _DWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  _QWORD *v70; // r12
  _DWORD *v71; // rbp
  int v72; // eax
  _QWORD *v73; // rdi
  __int64 v74; // r12
  __int64 v75; // rbp
  _QWORD *v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 *v80; // r12
  __int64 v81; // r13
  __int64 v82; // rdi
  __int64 v83; // rbp
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r15
  _DWORD *v88; // rax
  __int64 v89; // rbx
  __int64 v90; // [rsp+0h] [rbp-198h]
  _DWORD *v91; // [rsp+0h] [rbp-198h]
  int v92; // [rsp+8h] [rbp-190h]
  int v93; // [rsp+18h] [rbp-180h]
  _DWORD *v94; // [rsp+18h] [rbp-180h]
  __int64 v95; // [rsp+20h] [rbp-178h]
  __int64 v96; // [rsp+20h] [rbp-178h]
  int v97; // [rsp+28h] [rbp-170h]
  _QWORD *v98; // [rsp+28h] [rbp-170h]
  int v99; // [rsp+30h] [rbp-168h]
  int v100; // [rsp+3Ch] [rbp-15Ch]
  int v101; // [rsp+3Ch] [rbp-15Ch]
  __int64 v102; // [rsp+40h] [rbp-158h] BYREF
  __int64 *v103; // [rsp+48h] [rbp-150h]
  __int64 v104; // [rsp+50h] [rbp-148h] BYREF
  __int128 v105; // [rsp+58h] [rbp-140h]
  _DWORD v106[4]; // [rsp+70h] [rbp-128h] BYREF
  int v107; // [rsp+80h] [rbp-118h]
  __int64 v108; // [rsp+90h] [rbp-108h] BYREF
  __int128 v109; // [rsp+98h] [rbp-100h]
  __int64 v110; // [rsp+A8h] [rbp-F0h]
  _QWORD *v111; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v112; // [rsp+B8h] [rbp-E0h]
  __int128 v113; // [rsp+C8h] [rbp-D0h]
  __int64 v114; // [rsp+D8h] [rbp-C0h]
  int v115; // [rsp+E0h] [rbp-B8h]
  __int64 v116; // [rsp+F0h] [rbp-A8h] BYREF
  struct _Unwind_Exception *v117[3]; // [rsp+F8h] [rbp-A0h] BYREF
  int *v118; // [rsp+110h] [rbp-88h]
  __int128 v119; // [rsp+118h] [rbp-80h]
  __int64 v120; // [rsp+128h] [rbp-70h]
  __m128i si128; // [rsp+130h] [rbp-68h]
  int v122; // [rsp+140h] [rbp-58h]
  int v123; // [rsp+144h] [rbp-54h]
  unsigned int v124; // [rsp+148h] [rbp-50h]
  char v125; // [rsp+14Ch] [rbp-4Ch]
  unsigned __int64 v126; // [rsp+158h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 88);
  v126 = __readfsqword(0x28u);
  v4 = a2;
  v5 = v3;
  v6 = v3 & 0xF0;
  if ( (v5 & 0xF0) == 0xC0 )
    v6 = *(_DWORD *)(a1 + 28);
  if ( v6 > 0x10 || (v6 = getinf(99), v6 > 0x10) )
  {
    if ( v6 != 176 )
      goto LABEL_5;
  }
  else if ( (unsigned int)getinf(99) != 176 )
  {
    goto LABEL_5;
  }
  if ( (unsigned __int64)getinf(88) > 0x397
    || (unsigned __int8)getinf_flag(3, 4)
    && (netnode_check(&v116, "$ golang", 0, 0), v41 = netnode_altval(v116, 0, 65), v41 > 0x74)
    && ((v42 = *(_DWORD *)(get_ph() + 4)) == 0
     || (v43 = (unsigned int)(v42 - 13), (unsigned int)v43 <= 0x3B)
     && (v44 = 0x800000000000005LL, _bittest64(&v44, v43))
     && v41 != 117) )
  {
    v29 = *(_BYTE *)(a1 + 88) & 0xF0;
    if ( (*(_BYTE *)(a1 + 88) & 0xF0) == 0xC0 )
      v29 = *(_DWORD *)(a1 + 28);
    if ( v29 <= 0x10 )
      v29 = getinf(99);
    v116 = 0;
    memset(v117, 0, sizeof(v117));
    v118 = nullptr;
    v119 = 0;
    sub_29D90(0x7D4u, &v116, 176);
    v120 = 0;
    v122 = a2;
    v123 = 0;
    v124 = v29;
    v125 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_595F0);
    if ( !v117[1] || !(_QWORD)v119 )
      goto LABEL_61;
    LOBYTE(v123) = v117[1];
    BYTE1(v123) = v119;
    ph = get_ph();
    parse_reg_name(&v111, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * (int)v117[0]->exception_class));
    v31 = SHIDWORD(v111);
    si128.m128i_i64[0] = SHIDWORD(v111);
    if ( !*(_DWORD *)(ph + 4) )
      v31 = 8;
    si128.m128i_i64[0] = v31;
    parse_reg_name(&v111, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * *v118));
    v32 = *(_BYTE *)(a1 + 88);
    v125 = 1;
    v108 = 32;
    si128.m128i_i64[1] = SHIDWORD(v111);
    v33 = v32;
    v34 = v32 & 0xF0;
    v109 = 0;
    v110 = 0;
    if ( (v33 & 0xF0) == 0xC0 )
      v34 = *(_DWORD *)(a1 + 28);
    if ( v34 <= 0x10 )
      getinf(99);
    get_stkarg_area_info(&v108);
    v35 = *(_QWORD *)(a1 + 8);
    v36 = *(_QWORD *)a1;
    v37 = v109;
    v120 = v109;
    v38 = v36 + 80 * v35;
    if ( v36 != v38 )
    {
      while ( 1 )
      {
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v36 + 64), 0);
        if ( tinfo_size == -1 )
          goto LABEL_61;
        if ( tinfo_size && (v39 = sub_34E20((__int64)&v116, (_QWORD *)(v36 + 64), (_DWORD *)v36, 0)) != 0 )
        {
          if ( v39 != 1 )
            goto LABEL_61;
          v36 += 80;
          if ( v38 == v36 )
          {
LABEL_91:
            v37 = v120;
            break;
          }
        }
        else
        {
          sub_2A580((__int64)&v116, (_QWORD *)(v36 + 64), v36);
          v36 += 80;
          if ( v38 == v36 )
            goto LABEL_91;
        }
      }
    }
    *(_QWORD *)(a1 + 56) = v37;
    v45 = *(_QWORD *)(a1 + 32);
    v120 = (v4 - 1 + v37) & -v4;
    if ( (get_tinfo_property(v45, 2) & 0x3F) == 1 )
    {
LABEL_93:
      v23 = 1;
      goto LABEL_62;
    }
    v46 = *(_QWORD *)(a1 + 32);
    HIWORD(v123) = 0;
    v111 = nullptr;
    v114 = 0;
    v115 = 1;
    v112 = 0;
    v113 = 0;
    if ( (unsigned __int8)get_tinfo_details(v46, 13) && (v114 & 0x80000000000LL) != 0 )
    {
      v47 = v111;
      v104 = 0;
      v105 = 0;
      v98 = &v111[18 * v112];
      if ( v111 == v98 )
      {
LABEL_145:
        v79 = qalloc_or_throw(24);
        *(_QWORD *)v79 = 0;
        v80 = (__int64 *)v79;
        *(_OWORD *)(v79 + 8) = 0;
        v81 = v105;
        if ( (_QWORD)v105 )
        {
          v86 = qalloc_or_throw(24 * v105);
          *v80 = v86;
          v87 = 0;
          v80[2] = v81;
          while ( 1 )
          {
            v88 = (_DWORD *)(24 * v87 + v86);
            v89 = v104 + 24 * v87;
            *v88 = 0;
            v91 = v88;
            copy_argloc(v88, v89);
            ++v87;
            v91[4] = *(_DWORD *)(v89 + 16);
            if ( v81 == v87 )
              break;
            v86 = *v80;
          }
          v80[1] = v81;
        }
        cleanup_argloc(a1 + 40);
        if ( v80 )
        {
          *(_DWORD *)(a1 + 40) = 2;
          *(_QWORD *)(a1 + 48) = v80;
        }
        v82 = v104;
        if ( v104 )
        {
          v83 = v105;
          v84 = 0;
          if ( (_QWORD)v105 )
          {
            do
            {
              v85 = 3 * v84++;
              cleanup_argloc(v82 + 8 * v85);
              v82 = v104;
            }
            while ( v83 != v84 );
          }
          *(_QWORD *)&v105 = 0;
          qfree(v82);
        }
        goto LABEL_135;
      }
      while ( 1 )
      {
        v102 = 0;
        v103 = nullptr;
        v49 = get_tinfo_size(0, v47[8], 0);
        if ( v49 == -1 )
          break;
        if ( v49 && (v50 = sub_34E20((__int64)&v116, v47 + 8, &v102, 0)) != 0 )
        {
          if ( v50 != 1 )
            break;
        }
        else
        {
          sub_2A580((__int64)&v116, v47 + 8, (__int64)&v102);
        }
        v51 = *v47 >> 3;
        if ( (_DWORD)v102 == 2 )
        {
          v65 = *v103;
          v96 = *v103 + 24 * v103[1];
          if ( *v103 != v96 )
          {
            do
            {
              v106[0] = 0;
              copy_argloc(v106, v65);
              v67 = v105;
              v68 = v104;
              v107 = *(_DWORD *)(v65 + 16);
              if ( *((_QWORD *)&v105 + 1) < (unsigned __int64)(v105 + 1) )
              {
                v104 = qvector_reserve(&v104, v104, v105 + 1, 24);
                v67 = v105;
                v68 = v104;
              }
              v66 = (_DWORD *)(v68 + 24 * v67);
              *v66 = 0;
              v94 = v66;
              copy_argloc(v66, v106);
              v65 += 24;
              *(_QWORD *)&v105 = v105 + 1;
              v94[4] = v107;
              cleanup_argloc(v106);
              *(_WORD *)(v104 + 24 * v105 - 8) += v51;
            }
            while ( v96 != v65 );
          }
        }
        else
        {
          v52 = v105;
          v53 = v104;
          if ( (_DWORD)v102 == 1 && (_QWORD)v105 && (v54 = v104 + 24 * v105 - 24, *(_DWORD *)v54 == 1) )
          {
            *(_WORD *)(v54 + 18) = v51 + (v47[1] >> 3) - *(_WORD *)(v54 + 16);
          }
          else
          {
            if ( *((_QWORD *)&v105 + 1) < (unsigned __int64)(v105 + 1) )
            {
              v104 = qvector_reserve(&v104, v104, v105 + 1, 24);
              v53 = v104;
              v52 = v105;
            }
            v48 = v53 + 24 * v52;
            *(_QWORD *)v48 = 0;
            *(_QWORD *)(v48 + 8) = 0;
            *(_DWORD *)(v48 + 16) = 0xFFFF;
            *(_QWORD *)&v105 = v105 + 1;
            copy_argloc(v48, &v102);
            *(_WORD *)(v48 + 16) = v51;
            *(_WORD *)(v48 + 18) = v47[1] >> 3;
          }
        }
        v47 += 18;
        cleanup_argloc(&v102);
        if ( v98 == v47 )
          goto LABEL_145;
      }
      cleanup_argloc(&v102);
      v55 = v104;
      if ( v104 )
      {
        v56 = v105;
        v57 = 0;
        if ( (_QWORD)v105 )
        {
          do
          {
            v58 = 3 * v57++;
            cleanup_argloc(v55 + 8 * v58);
            v55 = v104;
          }
          while ( v56 != v57 );
        }
        *(_QWORD *)&v105 = 0;
        qfree(v55);
      }
LABEL_117:
      v59 = v111;
      if ( v111 )
      {
        v60 = v112;
        if ( (_QWORD)v112 )
        {
          v61 = 0;
          do
          {
            v62 = &v59[18 * v61];
            clear_tinfo_t(v62 + 8);
            v63 = v62[5];
            if ( v63 )
            {
              v62[6] = 0;
              qfree(v63);
            }
            v64 = v62[2];
            if ( v64 )
            {
              v62[3] = 0;
              qfree(v64);
            }
            ++v61;
            v59 = v111;
          }
          while ( v60 != v61 );
        }
        *(_QWORD *)&v112 = 0;
        qfree(v59);
      }
LABEL_61:
      v23 = 0;
LABEL_62:
      if ( v118 )
      {
        *(_QWORD *)&v119 = 0;
        qfree(v118);
      }
      if ( v117[0] )
      {
        v117[1] = nullptr;
        qfree(v117[0]);
      }
      return v23;
    }
    v69 = get_tinfo_size(0, *(_QWORD *)(a1 + 32), 0);
    if ( v69 == -1 )
      goto LABEL_117;
    v70 = (_QWORD *)(a1 + 32);
    v71 = (_DWORD *)(a1 + 40);
    if ( v69 && (v72 = sub_34E20((__int64)&v116, v70, v71, 0)) != 0 )
    {
      if ( v72 != 1 )
        goto LABEL_117;
    }
    else
    {
      sub_2A580((__int64)&v116, v70, (__int64)v71);
    }
LABEL_135:
    v73 = v111;
    if ( v111 )
    {
      v74 = v112;
      if ( (_QWORD)v112 )
      {
        v75 = 0;
        do
        {
          v76 = &v73[18 * v75];
          clear_tinfo_t(v76 + 8);
          v77 = v76[5];
          if ( v77 )
          {
            v76[6] = 0;
            qfree(v77);
          }
          v78 = v76[2];
          if ( v78 )
          {
            v76[3] = 0;
            qfree(v78);
          }
          ++v75;
          v73 = v111;
        }
        while ( v74 != v75 );
      }
      *(_QWORD *)&v112 = 0;
      qfree(v73);
    }
    goto LABEL_93;
  }
LABEL_5:
  getinf(59);
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)a1 + 80LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v8 )
  {
LABEL_6:
    v9 = *(_BYTE *)(a1 + 88);
    v116 = 32;
    v10 = v9;
    memset(v117, 0, sizeof(v117));
    v11 = v9 & 0xF0;
    if ( (v10 & 0xF0) == 0xC0 )
      v11 = *(_DWORD *)(a1 + 28);
    if ( v11 <= 0x10 )
      getinf(99);
    get_stkarg_area_info(&v116);
    v12 = v117[0];
    if ( *(_QWORD *)(a1 + 8) )
    {
      v95 = *(_QWORD *)(a1 + 8);
      v13 = 2 * v4;
      v93 = 2 * v4;
      if ( v4 <= 2 * v4 )
        v13 = v4;
      v92 = v4;
      v14 = 0;
      v99 = v13;
      v97 = v4 - 1;
      while ( 1 )
      {
        v15 = *(_QWORD *)a1 + 80 * v14;
        v16 = *(_BYTE *)(a1 + 88) & 0xF0;
        v90 = *(_QWORD *)(v15 + 8);
        if ( (*(_BYTE *)(a1 + 88) & 0xF0) == 0xC0 )
          v16 = *(_DWORD *)(a1 + 28);
        if ( v16 <= 0x10 )
          v16 = getinf(99);
        v17 = *(_QWORD *)(v15 + 64);
        LODWORD(v111) = 0;
        get_tinfo_size(&v111, v17, 0);
        v18 = (int)v111;
        v19 = (_DWORD)v111 - 1;
        if ( (((_DWORD)v111 - 1) & (unsigned int)v111) != 0 )
        {
          sub_28E50();
          if ( v118 )
          {
            *(_QWORD *)&v119 = 0;
            qfree(v118);
          }
          if ( v117[0] )
          {
            v117[1] = nullptr;
            qfree(v117[0]);
          }
          _Unwind_Resume(v12);
        }
        if ( (int)v111 <= v93 )
          break;
        if ( v16 <= 0x10 )
        {
          v100 = (_DWORD)v111 - 1;
          v27 = getinf(99);
          if ( v27 == 176 || v27 == 256 )
          {
            if ( v92 <= v93 )
              goto LABEL_67;
LABEL_49:
            v18 = v93;
LABEL_50:
            v16 = getinf(99);
            if ( v16 == 176 )
            {
LABEL_51:
              v21 = v18 - 1;
              goto LABEL_25;
            }
LABEL_23:
            if ( v16 == 256 )
              goto LABEL_51;
            goto LABEL_24;
          }
          v19 = v100;
        }
        else if ( v16 == 256 || v16 == 176 )
        {
          v18 = v99;
          v21 = v99 - 1;
          goto LABEL_25;
        }
        v101 = v19;
        v28 = getinf_flag(67, 512);
        v21 = v101;
        if ( v28 )
          goto LABEL_25;
        v18 = v93;
        if ( v92 <= v93 )
        {
          if ( v16 > 0x10 )
          {
            v18 = v93;
LABEL_37:
            if ( (unsigned __int8)getinf_flag(67, 4) )
              goto LABEL_51;
LABEL_38:
            v21 = v97;
            v18 = v92;
            goto LABEL_25;
          }
LABEL_67:
          v18 = v93;
LABEL_68:
          v16 = getinf(99);
LABEL_35:
          if ( v16 != 176 && v16 != 256 )
            goto LABEL_37;
          goto LABEL_38;
        }
        if ( v16 <= 0x10 )
          goto LABEL_49;
LABEL_24:
        v20 = getinf_flag(67, 2);
        v21 = v18 - 1;
        if ( !v20 )
          goto LABEL_38;
LABEL_25:
        *(_DWORD *)v15 = 1;
        ++v14;
        v22 = ((unsigned __int64)v12 + v21) & -v18;
        *(_QWORD *)(v15 + 8) = v22;
        v12 = (struct _Unwind_Exception *)(v22 + (unsigned int)v90);
        if ( v95 == v14 )
        {
          v4 = v92;
          goto LABEL_27;
        }
      }
      if ( v92 <= (int)v111 )
      {
        if ( v16 <= 0x10 )
          goto LABEL_68;
        goto LABEL_35;
      }
      if ( v16 <= 0x10 )
        goto LABEL_50;
      if ( v16 == 176 )
        goto LABEL_51;
      goto LABEL_23;
    }
LABEL_27:
    *(_QWORD *)(a1 + 56) = v12;
    if ( (get_tinfo_property(*(_QWORD *)(a1 + 32), 2) & 0x3F) != 1 )
    {
      *(_DWORD *)(a1 + 40) = 1;
      *(_QWORD *)(a1 + 48) = ((unsigned __int64)v12 + v4 - 1) & -v4;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v25 = get_tinfo_size(0, *(_QWORD *)(v7 + 64), 0);
      if ( v25 == -1 )
        return 0;
      v24 = v7;
      v7 += 80;
      cleanup_argloc(v24);
      *(_DWORD *)(v7 - 80) = 1;
      *(_QWORD *)(v7 - 72) = v25;
      if ( v8 == v7 )
        goto LABEL_6;
    }
  }
}

