__int64 __fastcall sub_29D80(__int64 *a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64 *, _QWORD *, _QWORD, __int64, __int64); // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r15
  unsigned int (__fastcall *v10)(__int64, __int64, _BYTE *); // rax
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // r14
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int128 v21; // xmm0
  __int64 *v22; // rbx
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 *v25; // r14
  __int64 v26; // r12
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  __int64 v28; // r12
  __int64 (__fastcall *v29)(__int64, __int64); // rax
  __int64 v30; // rbx
  void *v31; // rdi
  __int64 *v32; // rax
  __int64 v33; // r14
  __int64 (__fastcall *v34)(__int64, __int64); // rax
  __int64 v35; // rax
  char *v36; // rdx
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // r14
  _QWORD *v42; // rbx
  unsigned int v43; // ebx
  char *v44; // rax
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64, __int64); // rax
  __int64 v47; // rdi
  __int64 v48; // r12
  __int64 v49; // r15
  _QWORD *v50; // rbx
  __int64 v51; // r14
  __int64 (__fastcall *v52)(__int64, __int64); // rax
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // r15
  _QWORD *v56; // rbx
  void (__fastcall *v57)(__int64, _QWORD *); // rax
  __int64 v59; // rax
  char v60; // dl
  unsigned __int8 (__fastcall *v61)(__int64, __int64 *, const char *); // rax
  unsigned __int8 (__fastcall *v62)(__int64, __int64 *, const char *); // rax
  char *v63; // rax
  char v64; // cl
  _BYTE *v65; // rax
  char *v66; // rdx
  __int64 *v67; // rax
  __int64 v68; // rbx
  __int64 (__fastcall *v69)(__int64, __int64); // rax
  char *v70; // rax
  __int64 *v71; // rbx
  __int64 v72; // r13
  __int64 (__fastcall *v73)(__int64, __int64); // rax
  __int64 v74; // rax
  int v75; // esi
  char v76; // dl
  __int64 v77; // rax
  __int64 v78; // r13
  const char *v79; // rdx
  void (__fastcall *v80)(__int64, _BYTE *, _QWORD *); // rax
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 *v83; // rax
  int v84; // r13d
  __int64 v85; // r14
  __int64 v86; // r13
  __int64 (__fastcall *v87)(__int64, __int64); // rax
  __int64 v88; // r14
  __int64 (__fastcall *v89)(__int64, __int64); // rax
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // r13
  __int64 v94; // rbx
  _QWORD *v95; // r14
  void (__fastcall *v96)(__int64, __int64 *, _QWORD *, __int64); // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  _QWORD *v99; // [rsp+38h] [rbp-2F8h]
  __int64 v100; // [rsp+40h] [rbp-2F0h]
  __int64 v102; // [rsp+70h] [rbp-2C0h]
  __int64 *v103; // [rsp+78h] [rbp-2B8h]
  char *v104; // [rsp+78h] [rbp-2B8h]
  __int64 v105; // [rsp+80h] [rbp-2B0h]
  char v106; // [rsp+8Fh] [rbp-2A1h]
  __int64 *v107; // [rsp+90h] [rbp-2A0h]
  int v108; // [rsp+A8h] [rbp-288h]
  __int64 *v109; // [rsp+B8h] [rbp-278h]
  _QWORD v110[2]; // [rsp+C8h] [rbp-268h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-258h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-250h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-248h]
  void *src; // [rsp+F0h] [rbp-240h] BYREF
  __int128 v115; // [rsp+F8h] [rbp-238h]
  _QWORD v116[4]; // [rsp+110h] [rbp-220h] BYREF
  const char *v117; // [rsp+130h] [rbp-200h] BYREF
  __int128 v118; // [rsp+138h] [rbp-1F8h]
  __m128i p_src; // [rsp+150h] [rbp-1E0h] BYREF
  __int64 v120; // [rsp+160h] [rbp-1D0h]
  __int64 v121; // [rsp+170h] [rbp-1C0h] BYREF
  __int64 v122; // [rsp+178h] [rbp-1B8h]
  __int128 v123; // [rsp+180h] [rbp-1B0h]
  _QWORD v124[2]; // [rsp+190h] [rbp-1A0h] BYREF
  __int64 v125; // [rsp+1A0h] [rbp-190h]
  __int128 v126; // [rsp+1A8h] [rbp-188h]
  __int64 v127; // [rsp+1C0h] [rbp-170h]
  __int128 v128; // [rsp+1C8h] [rbp-168h]
  __int128 v129; // [rsp+1D8h] [rbp-158h]
  __int64 v130; // [rsp+1E8h] [rbp-148h]
  int v131; // [rsp+1F0h] [rbp-140h]
  __int64 v132; // [rsp+200h] [rbp-130h] BYREF
  __int128 v133; // [rsp+208h] [rbp-128h]
  __int64 v134; // [rsp+218h] [rbp-118h]
  __int64 v135; // [rsp+220h] [rbp-110h]
  __int64 v136; // [rsp+228h] [rbp-108h]
  __int128 v137; // [rsp+230h] [rbp-100h]
  __int64 v138; // [rsp+240h] [rbp-F0h]
  __int128 v139; // [rsp+248h] [rbp-E8h]
  char v140; // [rsp+258h] [rbp-D8h]
  _BYTE v141[24]; // [rsp+260h] [rbp-D0h] BYREF
  __int128 v142; // [rsp+278h] [rbp-B8h]
  __int64 v143; // [rsp+288h] [rbp-A8h]
  __int128 v144; // [rsp+290h] [rbp-A0h]
  __int128 v145; // [rsp+2A0h] [rbp-90h]
  __int64 v146; // [rsp+2D0h] [rbp-60h]
  int v147; // [rsp+2D8h] [rbp-58h]
  __int64 v148; // [rsp+2E0h] [rbp-50h]
  char v149; // [rsp+2E8h] [rbp-48h]
  unsigned __int64 v150; // [rsp+2F8h] [rbp-38h]

  v150 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*a1 + 2216) )
  {
    memset(v141, 0, sizeof(v141));
    get_ea_name();
    sub_EC40();
  }
  v122 = 0;
  v124[0] = 0;
  v121 = a2;
  v124[1] = -1;
  v125 = 0;
  v123 = 0;
  v126 = 0;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD *, _QWORD, __int64, __int64))get_hexdsp();
  v99 = (_QWORD *)hexdsp(567, &v121, v124, 0, 1, 8);
  if ( !v99 )
  {
    memset(v141, 0, sizeof(v141));
    v80 = (void (__fastcall *)(__int64, _BYTE *, _QWORD *))get_hexdsp();
    v80(440, v141, v124);
    sub_EC40();
    if ( *(_QWORD *)v141 )
    {
      *(_QWORD *)&v141[8] = 0;
      qfree();
    }
    v43 = 0;
    goto LABEL_95;
  }
  sub_283D0(a1, &v121);
  v100 = v99[65];
  if ( !v100 )
  {
LABEL_63:
    v43 = 1;
    goto LABEL_94;
  }
  while ( 1 )
  {
    v105 = *(_QWORD *)(v100 + 48);
    if ( v105 )
      break;
LABEL_62:
    v100 = *(_QWORD *)(v100 + 8);
    if ( !v100 )
      goto LABEL_63;
  }
  while ( !(unsigned __int8)sub_27470(v110, v105) )
  {
LABEL_61:
    v105 = *(_QWORD *)(v105 + 8);
    if ( !v105 )
      goto LABEL_62;
  }
  v3 = v110[0];
  v4 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  v102 = *(_QWORD *)(v3 + 8) + *(_QWORD *)(v4(268, v3) + 8);
  if ( *(_BYTE *)(*a1 + 2216) )
    sub_EC40();
  v132 = netnode_altval() | 1;
  netnode_supset();
  v110[1] = 0;
  v127 = 0;
  *(_WORD *)&v141[16] = 256;
  *(_QWORD *)&v141[8] = "Block_layout";
  v130 = 0;
  v131 = 1;
  v128 = 0;
  v129 = 0;
  *(_QWORD *)v141 = get_idati();
  if ( (unsigned __int8)create_tinfo() && (unsigned __int8)get_tinfo_details() )
  {
    v115 = 0;
    src = 0;
    src = (void *)qvector_reserve();
    *((_QWORD *)src + v115) = v105;
    v8 = v115 + 1;
    *(_QWORD *)&v115 = v115 + 1;
    v9 = *(_QWORD *)(v105 + 8);
    if ( v9 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v141[8] = 0;
        *(_QWORD *)&v141[16] = 0;
        v142 = 0u;
        LOBYTE(v143) = 0;
        *(_QWORD *)v141 = off_3C878;
        *(_QWORD *)&v144 = v3;
        v10 = (unsigned int (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp();
        if ( v10(341, v9, v141) )
          break;
        v106 = sub_27470(&v132, v9);
        if ( v106 )
          goto LABEL_23;
        if ( (unsigned int)(*(_DWORD *)v9 - 2) <= 2
          && *(_BYTE *)(v9 + 64) == 9
          && (v11 = *(_QWORD *)(v9 + 72),
              v12 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(),
              *(_DWORD *)v12(268, v11) == 1)
          && (v132 = *(_QWORD *)(v9 + 72),
              v13 = v132,
              v14 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(),
              v102 < *(_QWORD *)(v13 + 8) + *(_QWORD *)(v14(268, v13) + 8)) )
        {
          v15 = v115;
          v16 = src;
          if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)(v115 + 1) )
          {
            src = (void *)qvector_reserve();
            v16 = src;
            v15 = v115;
          }
          v16[v15] = v9;
          *(_QWORD *)&v115 = v115 + 1;
          v9 = *(_QWORD *)(v9 + 8);
          if ( !v9 )
            goto LABEL_23;
        }
        else
        {
          v9 = *(_QWORD *)(v9 + 8);
          if ( !v9 )
            goto LABEL_23;
        }
      }
      v106 = 0;
LABEL_23:
      v8 = v115;
    }
    else
    {
      v106 = 0;
    }
    if ( *(_BYTE *)(*a1 + 2216) )
    {
      sub_EC40();
      v8 = v115;
    }
    v17 = 8 * v8;
    v116[0] = &src;
    v18 = (__int64 *)src;
    v103 = (__int64 *)((char *)src + 8 * v8);
    if ( src != v103 )
    {
      v19 = -2;
      if ( v17 >> 3 )
      {
        _BitScanReverse64(&v20, v17 >> 3);
        v19 = 2LL * (int)v20;
      }
      p_src = (__m128i)(unsigned __int64)&src;
      v21 = (__int128)_mm_load_si128(&p_src);
      v120 = -1;
      sub_296B0((__m128i *)src, v103, v19, (__m128i)v21, v5, v6, v7, v21, -1);
      *(_OWORD *)v141 = (unsigned __int64)&src;
      *(_QWORD *)&v141[16] = -1;
      if ( v17 <= 128 )
      {
        sub_29180(v18, v103);
      }
      else
      {
        v107 = v18 + 16;
        sub_29180(v18, v18 + 16);
        while ( 2 )
        {
          v22 = v107;
          v23 = *v107;
          while ( 1 )
          {
            v24 = *(v22 - 1);
            v25 = v22;
            if ( !(unsigned __int8)sub_27400(&v117, v23) || !(unsigned __int8)sub_27400(&v132, v24) )
            {
              if ( under_debugger )
                BUG();
              interr();
              goto LABEL_137;
            }
            v26 = (__int64)v117;
            v27 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
            v109 = (__int64 *)(*(_QWORD *)(v27(268, v26) + 8) + *(_QWORD *)(v26 + 8));
            v28 = v132;
            v29 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
            --v22;
            if ( (__int64)v109 >= *(_QWORD *)(v29(268, v28) + 8) + *(_QWORD *)(v28 + 8) )
              break;
            v22[1] = *v22;
          }
          ++v107;
          *v25 = v23;
          if ( v103 != v107 )
            continue;
          break;
        }
      }
      v103 = (__int64 *)src;
    }
    v30 = -1;
    if ( (unsigned __int8)sub_27400(v141, *v103) )
    {
      v51 = *(_QWORD *)v141;
      v52 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v30 = *(_QWORD *)(v52(268, v51) + 8) + *(_QWORD *)(v51 + 8) + *(int *)(*v103 + 68);
    }
    v31 = src;
    v32 = (__int64 *)((char *)src + 8 * v115);
    if ( v32 == v103 || (v24 = (__int64)(v103 + 1), v32 == v103 + 1) )
    {
LABEL_45:
      if ( !v9 )
        goto LABEL_70;
LABEL_46:
      if ( v106 && *(_QWORD *)(v9 + 16) )
        v9 = *(_QWORD *)(v9 + 16);
      if ( v31 )
      {
        *(_QWORD *)&v115 = 0;
        qfree();
      }
      v39 = v127;
      if ( v127 )
      {
        v40 = v128;
        if ( (_QWORD)v128 )
        {
          v41 = 0;
          do
          {
            v42 = (_QWORD *)(v39 + 144 * v41);
            clear_tinfo_t();
            if ( v42[5] )
            {
              v42[6] = 0;
              qfree();
            }
            if ( v42[2] )
            {
              v42[3] = 0;
              qfree();
            }
            v39 = v127;
            ++v41;
          }
          while ( v40 != v41 );
        }
        *(_QWORD *)&v128 = 0;
        qfree();
      }
      clear_tinfo_t();
      v105 = v9;
      goto LABEL_61;
    }
    if ( !(unsigned __int8)sub_27400(v141, v103[1]) )
      goto LABEL_69;
    v33 = *(_QWORD *)v141;
    v34 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
    v35 = v34(268, v33);
    v36 = (char *)src;
    v31 = src;
    if ( v30 != *(_QWORD *)(v35 + 8) + *(_QWORD *)(v33 + 8) )
      goto LABEL_45;
    v37 = v103[1];
    v38 = *(_DWORD *)(v37 + 68);
    if ( *(_BYTE *)(v37 + 32) != 2 )
      goto LABEL_45;
    v109 = (__int64 *)(v38 + v30);
    v25 = *(__int64 **)(*(_QWORD *)(v37 + 40) + 16LL);
    if ( v38 == 4 )
    {
      v67 = (__int64 *)((char *)src + 8 * v115);
      if ( (__int64 *)v24 == v67 )
        goto LABEL_45;
      v24 = (__int64)(v103 + 2);
      if ( v103 + 2 == v67 )
        goto LABEL_45;
      if ( !(unsigned __int8)sub_27400(v141, v103[2]) )
        goto LABEL_69;
      v68 = *(_QWORD *)v141;
      v69 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      if ( v109 != (__int64 *)(*(_QWORD *)(v69(268, v68) + 8) + *(_QWORD *)(v68 + 8)) )
        goto LABEL_69;
      v36 = (char *)src;
      v109 = (__int64 *)((char *)v109 + *(int *)(v103[2] + 68));
    }
    v31 = v36;
    v44 = &v36[8 * v115];
    if ( (char *)v24 == v44 )
      goto LABEL_45;
    v23 = v24 + 8;
    if ( v44 == (char *)(v24 + 8) )
      goto LABEL_45;
    if ( !(unsigned __int8)sub_27400(v141, *(_QWORD *)(v24 + 8)) )
      goto LABEL_69;
    v45 = *(_QWORD *)v141;
    v46 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
    if ( (__int64 *)(*(_QWORD *)(v46(268, v45) + 8) + *(_QWORD *)(v45 + 8)) != v109 )
      goto LABEL_69;
    v59 = *(_QWORD *)(v24 + 8);
    v60 = *(_BYTE *)(v59 + 32);
    LODWORD(v107) = *(_DWORD *)(v59 + 68);
    v22 = *(__int64 **)(v59 + 40);
    if ( v60 == 6 )
    {
      v66 = (char *)src;
    }
    else if ( v60 == 10 )
    {
LABEL_137:
      if ( *(_BYTE *)v22 != 6 )
        goto LABEL_69;
      v66 = (char *)src;
    }
    else
    {
      if ( !v59 || *(_DWORD *)v59 != 4 && (*(_DWORD *)v59 != 67 || (_DWORD)v107 != *(_DWORD *)(v59 + 36)) )
        goto LABEL_69;
      if ( v60 != 4 )
        goto LABEL_69;
      v61 = (unsigned __int8 (__fastcall *)(__int64, __int64 *, const char *))get_hexdsp();
      if ( !v61(347, v22, "ptrauth_sign_constant") )
      {
        v62 = (unsigned __int8 (__fastcall *)(__int64, __int64 *, const char *))get_hexdsp();
        if ( !v62(347, v22, "ptrauth_sign_unauthenticated") )
          goto LABEL_69;
      }
      v63 = *(char **)(v22[9] + 24);
      v64 = *v63;
      v65 = (_BYTE *)*((_QWORD *)v63 + 1);
      if ( v64 == 6 )
      {
        v66 = (char *)src;
      }
      else
      {
        v66 = (char *)src;
        v31 = src;
        if ( v64 != 10 || *v65 != 6 )
          goto LABEL_45;
      }
    }
    v31 = v66;
    v70 = &v66[8 * v115];
    if ( (char *)v23 == v70 )
      goto LABEL_45;
    v71 = (__int64 *)(v24 + 16);
    if ( v70 == (char *)(v24 + 16) )
      goto LABEL_45;
    if ( !(unsigned __int8)sub_27400(v141, *(_QWORD *)(v24 + 16))
      || (v72 = *(_QWORD *)v141,
          v73 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(),
          v104 = (char *)v109 + (int)v107,
          v104 != (char *)(*(_QWORD *)(v73(268, v72) + 8) + *(_QWORD *)(v72 + 8))) )
    {
LABEL_69:
      v31 = src;
      if ( !v9 )
      {
LABEL_70:
        if ( v31 )
        {
          *(_QWORD *)&v115 = 0;
          qfree();
        }
        v47 = v127;
        if ( v127 )
        {
          v48 = v128;
          if ( (_QWORD)v128 )
          {
            v49 = 0;
            do
            {
              v50 = (_QWORD *)(v47 + 144 * v49);
              clear_tinfo_t();
              if ( v50[5] )
              {
                v50[6] = 0;
                qfree();
              }
              if ( v50[2] )
              {
                v50[3] = 0;
                qfree();
              }
              v47 = v127;
              ++v49;
            }
            while ( v48 != v49 );
          }
          *(_QWORD *)&v128 = 0;
          qfree();
        }
        clear_tinfo_t();
        goto LABEL_62;
      }
      goto LABEL_46;
    }
    v74 = *(_QWORD *)(v24 + 16);
    v75 = *(_DWORD *)(v74 + 68);
    v76 = *(_BYTE *)(v74 + 32);
    v77 = *(_QWORD *)(v74 + 40);
    if ( v76 == 6 )
    {
      v78 = v77;
    }
    else
    {
      if ( v76 != 10 || *(_BYTE *)v77 != 6 )
        goto LABEL_69;
      v78 = *(_QWORD *)(v77 + 8);
    }
    v117 = 0;
    v118 = 0;
    sub_D6A0((__int64 *)&v117);
    if ( (_QWORD)v118 )
    {
      v98 = (__int64)v117;
      v79 = v117;
      if ( !v117 )
        goto LABEL_190;
    }
    else
    {
      v79 = ::src;
      if ( !::src )
      {
LABEL_141:
        v109 = (__int64 *)::src;
        goto LABEL_142;
      }
    }
    *(_QWORD *)&v141[8] = v79;
    *(_WORD *)&v141[16] = 256;
    *(_QWORD *)v141 = get_idati();
    if ( (unsigned __int8)create_tinfo() )
      goto LABEL_130;
    if ( !(_QWORD)v118 )
      goto LABEL_141;
    v98 = (__int64)v117;
LABEL_190:
    v109 = (__int64 *)v98;
LABEL_142:
    *(_WORD *)&v141[16] = 0;
    *(_QWORD *)&v141[8] = "";
    *(_QWORD *)v141 = get_idati();
    create_tinfo();
    if ( !(unsigned int)save_tinfo() )
    {
      v111 = 0;
      sub_27980(a1, v78, (int)v25, (__int64)&v111);
      v132 = 0;
      v134 = 0;
      v135 = 0;
      v136 = 0;
      v138 = 0;
      v140 = 16;
      v133 = 0;
      v137 = 0;
      v139 = 0;
      if ( (unsigned __int8)get_tinfo_details() && (_QWORD)v133 )
      {
        v81 = v132;
        if ( *(_QWORD *)(v132 + 32) <= 5u )
          *(_QWORD *)(v81 + 16) = qvector_reserve();
        v82 = *(_QWORD *)(v81 + 16);
        *(_QWORD *)(v81 + 24) = 6;
        *(_DWORD *)v82 = 1668246626;
        *(_BYTE *)(v82 + 4) = 107;
        *(_BYTE *)(*(_QWORD *)(v81 + 16) + 5LL) = 0;
        v112 = 0;
        *(_OWORD *)v141 = 0;
        v113 = 0;
        copy_tinfo_t();
        *(_QWORD *)&v141[16] = 0;
        v109 = &v112;
        copy_tinfo_t();
        LODWORD(v142) = 0;
        WORD2(v142) = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        LOBYTE(v109) = create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        if ( (_BYTE)v109 && (unsigned __int8)create_tinfo() )
        {
          sub_275B0(v127 + 496, &v111, 0, 10);
          apply_tinfo();
        }
      }
      v83 = (__int64 *)((char *)src + 8 * v115);
      if ( v71 != v83 )
      {
        v84 = 1;
        v109 = (__int64 *)&v104[v75];
        while ( v83 != ++v71 )
        {
          if ( !(unsigned __int8)sub_27400(v141, *v71) )
            break;
          v88 = *(_QWORD *)v141;
          v89 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          if ( v109 != (__int64 *)(*(_QWORD *)(v89(268, v88) + 8) + *(_QWORD *)(v88 + 8)) )
            break;
          v90 = v128;
          v109 = (__int64 *)((char *)v109 + *(int *)(*v71 + 68));
          v91 = v127;
          if ( *((_QWORD *)&v128 + 1) < (unsigned __int64)(v128 + 1) )
          {
            v127 = qvector_reserve();
            v91 = v127;
            v90 = v128;
          }
          v85 = v91 + 144 * v90;
          *(_QWORD *)(v85 + 16) = 0;
          *(_QWORD *)(v85 + 112) = 1;
          *(_QWORD *)(v85 + 40) = 0;
          *(_DWORD *)(v85 + 120) = -1;
          *(_QWORD *)(v85 + 128) = 0;
          *(_BYTE *)(v85 + 136) = 0;
          v108 = v84 + 1;
          *(_OWORD *)v85 = 0;
          *(_OWORD *)(v85 + 24) = 0;
          *(_OWORD *)(v85 + 48) = 0;
          *(_OWORD *)(v85 + 64) = 0;
          *(_QWORD *)&v128 = v128 + 1;
          sub_D6A0((__int64 *)(v85 + 16));
          v116[1] = v71;
          v116[2] = v109;
          sub_27B50(v141, (__int64)v116);
          copy_tinfo_t();
          clear_tinfo_t();
          v86 = *(_QWORD *)(*v71 + 72);
          v87 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
          *(_QWORD *)v85 = 8 * (*(_QWORD *)(v87(268, v86) + 8) + *(_QWORD *)(v86 + 8) - v102);
          v83 = (__int64 *)((char *)src + 8 * v115);
          if ( v83 == v71 )
            break;
          v84 = v108;
        }
      }
      BYTE2(v131) = 1;
      if ( (unsigned __int8)create_tinfo() )
      {
        if ( !(unsigned int)save_tinfo() )
        {
          v96 = (void (__fastcall *)(__int64, __int64 *, _QWORD *, __int64))get_hexdsp();
          v109 = &v112;
          v96(385, &v112, v99, v102);
          v97 = v112;
          if ( v112 >= 0 )
          {
            v112 = 0;
            get_func_frame();
            if ( (_BYTE)v112 )
            {
              *(_QWORD *)&v141[16] = 0;
              v143 = 0;
              v146 = 1;
              v147 = -1;
              v148 = 0;
              v149 = 0;
              *(_OWORD *)v141 = (unsigned __int64)(8 * v97);
              v142 = 0;
              v144 = 0;
              v145 = 0;
              if ( (unsigned int)find_tinfo_udt_member() == -1 )
              {
                get_tinfo_size();
                if ( (unsigned __int8)delete_frame_members() )
                {
                  if ( (unsigned __int8)add_frame_member() )
                  {
LABEL_176:
                    if ( *(_BYTE *)(*a1 + 2216) )
                      sub_EC40();
                    v113 = netnode_altval() | 2;
                    netnode_supset();
                    sub_11DF0(v141);
                    clear_tinfo_t();
                    sub_12840(&v132);
                    clear_tinfo_t();
                    if ( v117 )
                    {
LABEL_131:
                      *(_QWORD *)&v118 = 0;
                      qfree();
                      goto LABEL_69;
                    }
                    goto LABEL_69;
                  }
                  if ( *(_BYTE *)(*a1 + 2216) )
                    sub_EC40();
                }
              }
              else
              {
                if ( (int)set_tinfo_property4() >= 0 )
                  goto LABEL_176;
                if ( *(_BYTE *)(*a1 + 2216) )
                {
                  tinfo_errstr();
                  sub_EC40();
                }
              }
              sub_11DF0(v141);
            }
            clear_tinfo_t();
          }
        }
      }
      if ( v138 )
      {
        *(_QWORD *)&v139 = 0;
        qfree();
      }
      cleanup_argloc();
      clear_tinfo_t();
      v92 = v132;
      if ( v132 )
      {
        v93 = v133;
        v94 = 0;
        if ( (_QWORD)v133 )
        {
          do
          {
            v95 = (_QWORD *)(v92 + 80 * v94);
            clear_tinfo_t();
            if ( v95[5] )
            {
              v95[6] = 0;
              qfree();
            }
            if ( v95[2] )
            {
              v95[3] = 0;
              qfree();
            }
            ++v94;
            cleanup_argloc();
            v92 = v132;
          }
          while ( v93 != v94 );
        }
        *(_QWORD *)&v133 = 0;
        qfree();
      }
      clear_tinfo_t();
    }
LABEL_130:
    if ( !v117 )
      goto LABEL_69;
    goto LABEL_131;
  }
  v53 = v127;
  if ( v127 )
  {
    v54 = v128;
    if ( (_QWORD)v128 )
    {
      v55 = 0;
      do
      {
        v56 = (_QWORD *)(v53 + 144 * v55);
        clear_tinfo_t();
        if ( v56[5] )
        {
          v56[6] = 0;
          qfree();
        }
        if ( v56[2] )
        {
          v56[3] = 0;
          qfree();
        }
        v53 = v127;
        ++v55;
      }
      while ( v54 != v55 );
    }
    *(_QWORD *)&v128 = 0;
    qfree();
  }
  v43 = 0;
  clear_tinfo_t();
LABEL_94:
  sub_27720(v99);
  v57 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp();
  v57(130, v99);
LABEL_95:
  if ( v125 )
  {
    *(_QWORD *)&v126 = 0;
    qfree();
  }
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree();
  }
  return v43;
}
