unsigned __int64 __fastcall sub_40E340(__int64 a1, __int64 a2, _QWORD *a3, double a4, __m128 a5)
{
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 *v13; // rax
  double v14; // xmm0_8
  __int64 v15; // rbp
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rbx
  int v23; // r13d
  int v24; // edx
  unsigned __int16 v25; // si
  int v26; // r15d
  __int64 v27; // rax
  int v28; // ecx
  __int64 ph; // rax
  int v30; // ecx
  int v31; // esi
  int v32; // edx
  bool v33; // cf
  __int64 v34; // rax
  unsigned __int16 v35; // r8
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r9
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r15
  char **func; // rax
  _DWORD *v44; // r15
  char v45; // al
  char *v46; // rdi
  char **v47; // rax
  int v48; // edx
  int v49; // r15d
  __int64 (__fastcall *v50)(__int64, int); // rax
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rbp
  __int64 (__fastcall *v54)(__int64, int, int); // rax
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 i; // rdx
  unsigned __int64 v59; // rbx
  __int64 j; // rax
  int v62; // esi
  __int64 *v63; // r15
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rsi
  __int64 v68; // rdx
  _QWORD *v69; // rsi
  _QWORD *v70; // rsi
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  int v73; // eax
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  char **v78; // rax
  __int64 v79; // rdx
  char **v80; // rsi
  int v81; // edx
  int v82; // ecx
  __int64 v83; // rax
  char **v84; // rax
  char **v85; // rdi
  int v86; // edx
  __int64 v87; // r15
  __int64 v88; // r13
  char **v89; // rbx
  __int64 v90; // rdi
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // [rsp+0h] [rbp-288h]
  unsigned __int64 *v94; // [rsp+8h] [rbp-280h]
  int v95; // [rsp+10h] [rbp-278h]
  char *first_fcref_from; // [rsp+10h] [rbp-278h]
  int v97; // [rsp+10h] [rbp-278h]
  int v98; // [rsp+10h] [rbp-278h]
  int v99; // [rsp+10h] [rbp-278h]
  int v100; // [rsp+10h] [rbp-278h]
  int v101; // [rsp+10h] [rbp-278h]
  int v102; // [rsp+10h] [rbp-278h]
  int v103; // [rsp+10h] [rbp-278h]
  int v104; // [rsp+1Ch] [rbp-26Ch]
  int v106; // [rsp+28h] [rbp-260h]
  int v107; // [rsp+2Ch] [rbp-25Ch]
  __int64 v108; // [rsp+30h] [rbp-258h]
  char *v109; // [rsp+38h] [rbp-250h]
  unsigned __int16 v110; // [rsp+38h] [rbp-250h]
  unsigned __int64 v111; // [rsp+38h] [rbp-250h]
  char v112; // [rsp+4Bh] [rbp-23Dh]
  int v113; // [rsp+4Ch] [rbp-23Ch]
  int v114; // [rsp+50h] [rbp-238h] BYREF
  int v115; // [rsp+54h] [rbp-234h] BYREF
  int v116; // [rsp+58h] [rbp-230h] BYREF
  int v117; // [rsp+5Ch] [rbp-22Ch] BYREF
  char *s2; // [rsp+60h] [rbp-228h] BYREF
  __int128 v119; // [rsp+68h] [rbp-220h]
  char **p_s2; // [rsp+80h] [rbp-208h] BYREF
  __int128 v121; // [rsp+88h] [rbp-200h]
  __int64 v122; // [rsp+98h] [rbp-1F0h]
  __int64 v123; // [rsp+A0h] [rbp-1E8h]
  __int64 v124; // [rsp+A8h] [rbp-1E0h]
  __int128 v125; // [rsp+B0h] [rbp-1D8h]
  __int64 v126; // [rsp+C0h] [rbp-1C8h]
  __int128 v127; // [rsp+C8h] [rbp-1C0h]
  char v128; // [rsp+D8h] [rbp-1B0h]
  __int128 v129; // [rsp+E0h] [rbp-1A8h]
  __int64 v130; // [rsp+F0h] [rbp-198h]
  __int64 v131; // [rsp+F8h] [rbp-190h]
  __int64 v132; // [rsp+100h] [rbp-188h]
  _BYTE v133[6]; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int16 v134; // [rsp+10Eh] [rbp-17Ah]
  char v135; // [rsp+131h] [rbp-157h]
  unsigned __int16 v136; // [rsp+136h] [rbp-152h]
  unsigned __int64 v137; // [rsp+248h] [rbp-40h] BYREF

  v137 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = v7;
  *(_QWORD *)(a1 + 176) = Clp_newModel();
  Clp_registerCallBack();
  Clp_registerCallBack2();
  Clp_setLogLevel();
  v8 = *(_QWORD *)(a1 + 104);
  v9 = *(_QWORD *)(a1 + 112);
  LODWORD(p_s2) = 0;
  v10 = *(_QWORD *)(a1 + 96);
  if ( v9 < v8 + 1 )
  {
    v76 = qvector_reserve(a1 + 96, v10, v8 + 1, 4);
    *(_QWORD *)(a1 + 96) = v76;
    v10 = v76;
    v8 = *(_QWORD *)(a1 + 104);
  }
  *(_DWORD *)(v10 + 4 * v8) = 0;
  v11 = *(_QWORD *)(a1 + 184);
  ++*(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 164) = -1;
  v112 = sub_3F0A40(
           *(_QWORD *)(v11 + 1504),
           *(_QWORD *)(a2 + 40),
           (unsigned __int64)&v114,
           (unsigned __int64)&v115,
           a4,
           a5);
  if ( v112 )
  {
    a5 = 0;
    *(double *)a5.m128_u64 = (double)v114;
    sub_3F4970((__int64 *)a1, 0, *(double *)a5.m128_u64, *(double *)a5.m128_u64);
  }
  v12 = *(int *)(a1 + 156);
  *(_DWORD *)(a1 + 160) = 2 * v12;
  sub_81FC0((__int64 *)(a1 + 128), v12);
  v130 = -1;
  v13 = (unsigned __int64 *)v133;
  v129 = -1;
  v14 = 0.0;
  v131 = 0;
  v132 = 0;
  do
  {
    *(_WORD *)v13 = 0;
    v13 += 5;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *(v13 - 2) = 0;
  }
  while ( &v137 != v13 );
  v15 = 0;
  if ( *(int *)(a1 + 156) <= 0 )
    goto LABEL_71;
  while ( 2 )
  {
    v106 = v15;
    if ( !sub_64930(a3, v15) )
      goto LABEL_9;
    v16 = *(__int64 **)(a1 + 120);
    v17 = v16[1];
    v18 = *v16;
    v108 = v15 << 6;
    v94 = (unsigned __int64 *)(*(_QWORD *)(a2 + 72) + (v15 << 6));
    v19 = v17 + 1;
    v20 = *v94;
    if ( v16[2] < (unsigned __int64)(v17 + 1) )
    {
      v75 = qvector_reserve((__int64)v16, v18, v19, 16);
      *v16 = v75;
      v18 = v75;
      v17 = v16[1];
      v19 = v17 + 1;
    }
    v16[1] = v19;
    v21 = (unsigned __int64 *)(16 * v17 + v18);
    v107 = v15;
    *v21 = v20;
    v21[1] = 0;
    v22 = *v94;
    if ( *v94 >= v94[1] )
    {
      a5 = 0;
      goto LABEL_58;
    }
    v104 = 0;
    v23 = 0;
    while ( (unsigned int)decode_insn() )
    {
      v33 = v130 + (unsigned __int64)WORD1(v131) < v94[1];
      ++*(_DWORD *)(a1 + 152);
      if ( !v33 && (unsigned __int8)is_ret_insn() )
      {
        v24 = *(_DWORD *)(a1 + 164);
        if ( v24 == -1 )
        {
          if ( v112 )
          {
            a5 = 0;
            *(double *)a5.m128_u64 = (double)v115;
            v14 = *(double *)a5.m128_u64;
            sub_3F4970((__int64 *)a1, *(_DWORD *)(a1 + 156) + v15, *(double *)a5.m128_u64, *(double *)a5.m128_u64);
            *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 104) - 2;
          }
          v25 = v131;
          v26 = 0;
          *(_DWORD *)(a1 + 164) = v15;
        }
        else
        {
          a5 = 0;
          v26 = 0;
          v14 = 0.0;
          sub_3F4310((__int64 *)a1, v15 + *(_DWORD *)(a1 + 156), *(_DWORD *)(a1 + 156) + v24, 0.0, 0.0);
          v25 = v131;
        }
        goto LABEL_20;
      }
      if ( (unsigned __int8)is_call_insn() )
      {
        v41 = *(_QWORD *)(a1 + 184);
        v116 = 0;
        v117 = 0;
        v42 = *(_QWORD *)(v41 + 1496);
        if ( (unsigned __int8)netnode_charval() == 1 )
          goto LABEL_79;
        first_fcref_from = (char *)get_first_fcref_from();
        if ( first_fcref_from == (char *)-1LL )
          goto LABEL_84;
        func = (char **)get_func();
        if ( func && first_fcref_from != *func && (int)get_func_chunknum() >= 0 )
        {
LABEL_79:
          v26 = 0;
        }
        else
        {
          v44 = *(_DWORD **)(v42 + 112);
          if ( (get_aflags() & 0x2000000) != 0
            && (unsigned __int8)sub_3F0A40(
                                  (__int64)v44,
                                  (unsigned __int64)first_fcref_from,
                                  (unsigned __int64)&v116,
                                  (unsigned __int64)&v117,
                                  v14,
                                  a5) )
          {
            v26 = v117 - v116;
          }
          else
          {
            v14 = 0.0;
            v119 = 0;
            s2 = nullptr;
            v45 = sub_1D2AB0((__int64 *)&s2, (__int64)first_fcref_from, 2);
            v46 = s2;
            if ( !v45 )
              goto LABEL_82;
            if ( s2 && (v109 = s2, v47 = sub_3EBB10(s2), v46 = v109, v47) )
            {
              v48 = *((_DWORD *)v47 + 2);
              v49 = *((_DWORD *)v47 + 3);
              *(_QWORD *)&v119 = 0;
              v97 = v48;
              qfree((__int64)v109);
              v26 = v49 - v97;
            }
            else
            {
              if ( !sub_333280(v46, 0.0) )
              {
                v46 = s2;
LABEL_82:
                if ( v46 )
                {
                  *(_QWORD *)&v119 = 0;
                  qfree((__int64)v46);
                }
LABEL_84:
                s2 = first_fcref_from;
                if ( v23 < v104 )
                  sub_3F4970((__int64 *)a1, *(_DWORD *)(a1 + 160), (double)(v104 - v23), 8.0);
                v62 = *(_DWORD *)(a1 + 160);
                a5 = 0;
                *(double *)a5.m128_u64 = (double)v104;
                *(_DWORD *)(a1 + 160) = v62 + 1;
                v14 = *(double *)a5.m128_u64;
                sub_3F4310((__int64 *)a1, v62, v107, *(double *)a5.m128_u64, *(double *)a5.m128_u64);
                v63 = *(__int64 **)(a1 + 120);
                v64 = WORD1(v131);
                v107 = *(_DWORD *)(a1 + 160);
                *(_DWORD *)(a1 + 160) = v107 + 1;
                v65 = v63[1];
                v66 = v22 + v64;
                v67 = *v63;
                v68 = v65 + 1;
                if ( v63[2] < (unsigned __int64)(v65 + 1) )
                {
                  v77 = qvector_reserve((__int64)v63, v67, v68, 16);
                  *v63 = v77;
                  v67 = v77;
                  v65 = v63[1];
                  v68 = v65 + 1;
                }
                v63[1] = v68;
                v69 = (_QWORD *)(16 * v65 + v67);
                *v69 = v66;
                v69[1] = 0;
                if ( s2 == (char *)-1LL )
                {
                  v104 = 0;
                  v23 = 0;
                  goto LABEL_32;
                }
                v70 = *(_QWORD **)(a1 + 192);
                if ( !v70 )
                  goto LABEL_102;
                v71 = 24;
                v72 = *v70 & 0xFFFFFFFFFFFFFFFCLL;
                if ( !v72 )
                  goto LABEL_110;
                if ( (*(_BYTE *)(*v70 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                  goto LABEL_102;
                while ( 1 )
                {
                  v74 = *(_QWORD *)(v72 + 24);
                  v71 = v72 + 24;
                  if ( (unsigned __int64)s2 < v74 )
                  {
                    v72 = *(_QWORD *)(v72 + 8);
                  }
                  else
                  {
                    if ( v74 >= (unsigned __int64)s2 )
                    {
                      if ( v70 != (_QWORD *)v72 )
                      {
LABEL_110:
                        v23 = 0;
                        sub_3F4590(
                          (__int64 *)a1,
                          *(_DWORD *)(v71 + 8),
                          *(_DWORD *)(v71 + 8) + 1,
                          *(_DWORD *)(a1 + 160) - 2,
                          *(_DWORD *)(a1 + 160) - 1);
                        v104 = 0;
                        goto LABEL_32;
                      }
LABEL_102:
                      v73 = *(_DWORD *)(a1 + 160);
                      p_s2 = &s2;
                      v104 = 0;
                      *(_DWORD *)(sub_40E070((__m128i *)(a1 + 192), (unsigned __int64 *)&s2, &p_s2) + 32) = v73 - 2;
                      v23 = 0;
                      goto LABEL_32;
                    }
                    v72 = *(_QWORD *)(v72 + 16);
                  }
                  if ( (*(_BYTE *)v72 & 2) != 0 )
                    goto LABEL_102;
                }
              }
              v14 = 0.0;
              p_s2 = nullptr;
              v122 = 0;
              v123 = 0;
              v124 = 0;
              v126 = 0;
              v128 = 16;
              v121 = 0;
              v125 = 0;
              v127 = 0;
              if ( !(unsigned __int8)get_tinfo_details() )
              {
                if ( !under_debugger )
                  sub_383060(0xC796u, 0.0);
                BUG();
              }
              v81 = 0;
              if ( (_QWORD)v121 )
              {
                v82 = 0;
                v81 = 0;
                v83 = 0;
                do
                {
                  v84 = &p_s2[10 * v83];
                  if ( *(_DWORD *)v84 == 3 )
                    v81 += (unsigned int)*((unsigned __int16 *)v84 + 4) - 45 < 8;
                  v83 = ++v82;
                }
                while ( v82 < (unsigned __int64)v121 );
              }
              v116 = v81;
              if ( (_DWORD)v124 == 3 )
              {
                v103 = v81;
                v92 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v44 + 168LL))(
                        v44,
                        (unsigned __int16)v125);
                v81 = v103;
                if ( v92 == v44[130] )
                  v117 = 1;
              }
              if ( v126 )
              {
                v98 = v81;
                *(_QWORD *)&v127 = 0;
                qfree(v126);
                v81 = v98;
              }
              v99 = v81;
              cleanup_argloc();
              clear_tinfo_t();
              v85 = p_s2;
              v86 = v99;
              if ( p_s2 )
              {
                if ( (_QWORD)v121 )
                {
                  v111 = v22;
                  v87 = 0;
                  v113 = v99;
                  v100 = v23;
                  v88 = v121;
                  do
                  {
                    v89 = &v85[10 * v87];
                    clear_tinfo_t();
                    v90 = (__int64)v89[5];
                    if ( v90 )
                    {
                      v89[6] = nullptr;
                      qfree(v90);
                    }
                    v91 = (__int64)v89[2];
                    if ( v91 )
                    {
                      v89[3] = nullptr;
                      qfree(v91);
                    }
                    ++v87;
                    cleanup_argloc();
                    v85 = p_s2;
                  }
                  while ( v88 != v87 );
                  v23 = v100;
                  v22 = v111;
                  v86 = v113;
                }
                v101 = v86;
                *(_QWORD *)&v121 = 0;
                qfree((__int64)v85);
                v86 = v101;
              }
              if ( s2 )
              {
                v102 = v86;
                *(_QWORD *)&v119 = 0;
                qfree((__int64)s2);
                v26 = v117 - v102;
              }
              else
              {
                v26 = v117 - v86;
              }
            }
          }
        }
        v25 = v131;
LABEL_20:
        if ( v25 > 0x155u )
          goto LABEL_37;
        goto LABEL_21;
      }
      v25 = v131;
      v26 = sub_3EBCA0(v131);
      if ( v25 > 0x155u )
      {
LABEL_37:
        v28 = v25 == 604;
        goto LABEL_25;
      }
LABEL_21:
      if ( v25 > 0x117u )
      {
        v34 = 1LL << ((unsigned __int8)v25 - 24);
        if ( (v34 & 0x1F000000002BBF36LL) != 0 )
          v28 = 1;
        else
          v28 = 2 * ((v34 & 0x2080000000D040C9LL) != 0);
      }
      else if ( (unsigned __int16)(v25 - 253) > 0x1Au )
      {
        v28 = 0;
      }
      else
      {
        v27 = 1LL << ((unsigned __int8)v25 + 3);
        v28 = 1;
        if ( (v27 & 0x6DB6DCF) == 0 )
          v28 = 2 * ((v27 & 0x1248000) != 0);
      }
LABEL_25:
      v95 = v28;
      ph = get_ph();
      v30 = v95;
      v31 = *(_DWORD *)(ph + 104);
      if ( (unsigned __int16)v131 >= v31 && (unsigned __int16)v131 < *(int *)(ph + 108) )
      {
        v32 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v131 - v31) + 8);
        if ( v133[1] == 11 && (v32 & 0x100) != 0 && v95 < v134 + 1 )
          v30 = v134 + 1;
        if ( v135 == 11 && (v32 & 0x200) != 0 && v30 < v136 + 1 )
          v30 = v136 + 1;
      }
      if ( v23 > v104 - v30 )
        v23 = v104 - v30;
      if ( v26 )
      {
        v35 = WORD1(v131);
        v36 = *(__int64 **)(a1 + 120);
        v37 = v36[1];
        v38 = *v36;
        v39 = v37 + 1;
        if ( v36[2] < (unsigned __int64)(v37 + 1) )
        {
          v110 = WORD1(v131);
          v56 = qvector_reserve((__int64)v36, v38, v37 + 1, 16);
          v35 = v110;
          v38 = v56;
          *v36 = v56;
          v37 = v36[1];
          v39 = v37 + 1;
        }
        v36[1] = v39;
        v40 = (_QWORD *)(v38 + 16 * v37);
        v104 += v26;
        *v40 = v22 + v35;
        v40[1] = v26;
      }
LABEL_32:
      v22 += WORD1(v131);
      if ( v22 >= v94[1] )
        break;
    }
    if ( v23 < v104 )
      sub_3F4970((__int64 *)a1, *(_DWORD *)(a1 + 156) + v15, (double)(v104 - v23), 8.0);
    a5 = 0;
    *(double *)a5.m128_u64 = (double)v104;
LABEL_58:
    v14 = *(double *)a5.m128_u64;
    sub_3F4310((__int64 *)a1, *(_DWORD *)(a1 + 156) + v15, v107, *(double *)a5.m128_u64, *(double *)a5.m128_u64);
    v50 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v50 == sub_134250 )
      v51 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + v108 + 24);
    else
      v51 = v50(a2, v15);
    v52 = 0;
    if ( v51 > 0 )
    {
      v93 = v15;
      v53 = v51;
      do
      {
        while ( 1 )
        {
          v54 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
          v55 = v54 == sub_134270
              ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + v108 + 16) + 4 * v52)
              : v54(a2, v106, v52);
          if ( *(_DWORD *)(a2 + 96) > v55 )
            break;
          if ( ++v52 == v53 )
            goto LABEL_67;
        }
        a5 = 0;
        ++v52;
        v14 = 0.0;
        sub_3F4310((__int64 *)a1, v106 + *(_DWORD *)(a1 + 156), v55, 0.0, 0.0);
      }
      while ( v52 != v53 );
LABEL_67:
      v15 = v93;
    }
    if ( *(_QWORD *)(a2 + 40) == v94[1] )
    {
      a5 = 0;
      v14 = 0.0;
      sub_3F4310((__int64 *)a1, *(_DWORD *)(a1 + 156) + v106, 0, 0.0, 0.0);
    }
LABEL_9:
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v15++) = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL);
    if ( *(_DWORD *)(a1 + 156) > (int)v15 )
      continue;
    break;
  }
LABEL_71:
  Clp_resize();
  v57 = Clp_objective();
  for ( i = 0; *(_DWORD *)(a1 + 160) > (int)i; ++i )
    *(_QWORD *)(v57 + 8 * i) = 0x3FF0000000000000LL;
  Clp_addRows();
  v59 = *(int *)(a1 + 160);
  p_s2 = nullptr;
  v121 = 0;
  if ( v59 )
  {
    v78 = (char **)qvector_reserve((__int64)&p_s2, 0, v59, 8);
    v79 = v121;
    p_s2 = v78;
    v80 = v78;
    if ( (unsigned __int64)v121 < v59 )
    {
      do
      {
        v80[v79++] = nullptr;
        v80 = p_s2;
      }
      while ( v59 != v79 );
    }
    *(_QWORD *)&v121 = v59;
  }
  Clp_chgColumnLower();
  for ( j = 0; *(_DWORD *)(a1 + 160) > (int)j; ++j )
    p_s2[j] = (char *)0x4020000000000000LL;
  Clp_chgColumnUpper();
  if ( p_s2 )
  {
    *(_QWORD *)&v121 = 0;
    qfree((__int64)p_s2);
  }
  return v137 - __readfsqword(0x28u);
}

