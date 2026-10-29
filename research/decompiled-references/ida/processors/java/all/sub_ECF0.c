__int64 __fastcall sub_ECF0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rdi
  __int64 *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  _QWORD *v21; // rdi
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // r12
  _QWORD *v26; // rax
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int *v31; // rdx
  int v32; // esi
  bool v33; // dl
  unsigned int v34; // ecx
  __int64 v35; // rax
  _BOOL8 (__fastcall ***v36)(const char *, __int64); // rax
  char v37; // al
  char v38; // al
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 **v41; // rax
  __int64 *v42; // rbx
  __m128i *v43; // rsi
  __m128i si128; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // eax
  _QWORD **v52; // rdx
  unsigned int v53; // eax
  __int64 *v54; // rdx
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 *v58; // rsi
  __int64 *v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdi
  _QWORD *v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // rsi
  int *v74; // rax
  int v75; // edx
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 *v79; // r12
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rsi
  _QWORD *v84; // rax
  __int64 v85; // rdx
  unsigned int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rsi
  const char *v89; // rdi
  __int64 v90; // rcx
  int v91; // r9d
  __int64 v92; // rsi
  _DWORD *v93; // r10
  __int64 v94; // rcx
  __int64 *v95; // r12
  _DWORD *v96; // rax
  __int64 v97; // rax
  unsigned int v98; // eax
  __int64 *v99; // rdx
  unsigned int v100; // eax
  __int64 *v101; // rdx
  unsigned int v102; // edx
  __int64 v103; // rax
  const char **v104; // rax
  const char *v105; // rdi
  char *v106; // rax
  char *v107; // rbx
  char *v108; // rbp
  char *v109; // r12
  unsigned int v110; // edi
  unsigned int v111; // eax
  _QWORD *v112; // rdx
  unsigned int v113; // eax
  unsigned __int8 **v114; // rdx
  unsigned int v115; // eax
  __int64 *v116; // rdx
  unsigned int v117; // eax
  _QWORD **v118; // rdx
  unsigned int v119; // edx
  __int64 v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rcx
  _QWORD *v123; // rax
  __int64 *v124; // rax
  _QWORD *v125; // rdx
  __int64 *v126; // rdx
  __int64 *v127; // rax
  __int64 v128; // rax
  const char **v129; // rax
  int *v130; // rdx
  _DWORD **v131; // rax
  _QWORD **v132; // rdx
  __int64 *v133; // rdx
  __int64 *v134; // rax
  _DWORD **v135; // rdx
  _DWORD **v136; // rdx
  _QWORD **v137; // rdx
  _QWORD **v138; // rax
  __int64 *v139; // rdx
  _DWORD *v140; // rax
  _DWORD *v141; // rdx
  _QWORD **v142; // rdx
  __int64 *v143; // rax
  __int64 *v144; // rdx
  __int64 **v145; // rdx
  __int64 v146; // rax
  __int64 *v147; // rdx
  __int64 *v148; // rax

  if ( a2 > 95 )
  {
    if ( a2 == 3000 )
    {
      v7 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v8 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v8 + 1;
      }
      else
      {
        v8 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v7);
        *(_DWORD *)a3 = v7 + 8;
      }
      v9 = qlfile(*v8);
      if ( v9 )
      {
        v10 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v11 = *(_DWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v11 + 2;
        }
        else
        {
          v11 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v10);
          *(_DWORD *)a3 = v10 + 8;
        }
        sub_18160(a1, v9, *v11 != 0);
        if ( *(_DWORD *)(a1 + 144) )
          set_target_assembler(1);
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr(10082, 0);
LABEL_206:
        v104 = *(const char ***)(a3 + 8);
LABEL_140:
        *(_QWORD *)(a3 + 8) = v104 + 1;
LABEL_109:
        v105 = *v104;
LABEL_110:
        v106 = strchr(v105, 92);
        if ( v106 )
        {
          v107 = v106 + 1;
          if ( v106[1] == 117 )
          {
            v108 = v106 + 5;
            while ( 1 )
            {
              v109 = v107;
              v110 = *++v107;
              if ( v110 > 0x7F || !isxdigit(v110) )
                break;
              if ( v107 == v108 )
              {
                v105 = v109 + 2;
                goto LABEL_110;
              }
            }
          }
          sub_6E90((__int64)"Backslash is accepted only as a unicode escape sequence in names");
          return -1;
        }
      }
    }
  }
  else if ( a2 >= 0 )
  {
    switch ( a2 )
    {
      case 0LL:
        hook_event_listener(3, a1 + 120, &LPH, 0);
        setinf_flag(3, 32, 1);
        return 0;
      case 1LL:
        unhook_event_listener(3, a1 + 120);
        qfree(*(_QWORD *)(a1 + 33352), a1 + 120, v45, v46);
        qfree(*(_QWORD *)(a1 + 33360), a1 + 120, v47, v48);
        qfree(*(_QWORD *)(a1 + 33368), a1 + 120, v49, v50);
        clr_module_data((unsigned int)dword_2D4F4);
        return 0;
      case 4LL:
        if ( (unsigned int)getinf(5) != 17 )
        {
          set_database_flag(1, 1);
          sub_E450((__int64)"The input file does not have a supported Java file format");
        }
        v12 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v13 = *(_QWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v13 + 1;
        }
        else
        {
          v13 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v12);
          *(_DWORD *)a3 = v12 + 8;
        }
        sub_13140(a1, *v13);
        setinf(23, -1);
        setinf(24, -1);
        return 0;
      case 5LL:
      case 86LL:
        sub_13140(a1, 0);
        return 0;
      case 8LL:
        v86 = *(_DWORD *)a3;
        if ( v86 > 0x2F )
        {
          v129 = *(const char ***)(a3 + 8);
          v130 = (int *)(v129 + 1);
          *(_QWORD *)(a3 + 8) = v129 + 1;
          v89 = *v129;
        }
        else
        {
          v87 = *(_QWORD *)(a3 + 16);
          v88 = v86 + 8;
          *(_DWORD *)a3 = v88;
          v89 = *(const char **)(v87 + v86);
          if ( (unsigned int)v88 <= 0x2F )
          {
            v90 = v86 + 16;
            *(_DWORD *)a3 = v90;
            v91 = *(_DWORD *)(v87 + v88);
            if ( (unsigned int)v90 <= 0x2F )
            {
              v92 = v86 + 24;
              *(_DWORD *)a3 = v92;
              v93 = *(_DWORD **)(v87 + v90);
              if ( (unsigned int)v92 <= 0x2F )
              {
                v94 = v86 + 32;
                *(_DWORD *)a3 = v94;
                v95 = *(__int64 **)(v87 + v92);
                if ( (unsigned int)v94 <= 0x2F )
                {
                  v96 = (_DWORD *)(v94 + v87);
                  *(_DWORD *)a3 = v86 + 40;
                  goto LABEL_97;
                }
                v96 = *(_DWORD **)(a3 + 8);
LABEL_153:
                *(_QWORD *)(a3 + 8) = v96 + 2;
LABEL_97:
                v97 = sub_EB40(a1, v89, v91, v93, *v96 != 0);
                if ( v97 )
                {
                  if ( v95 )
                    *v95 = v97;
                  return -1;
                }
                return 1;
              }
              v132 = *(_QWORD ***)(a3 + 8);
LABEL_152:
              v96 = v132 + 1;
              *(_QWORD *)(a3 + 8) = v132 + 1;
              v95 = *v132;
              goto LABEL_153;
            }
            v131 = *(_DWORD ***)(a3 + 8);
LABEL_151:
            v132 = (_QWORD **)(v131 + 1);
            *(_QWORD *)(a3 + 8) = v131 + 1;
            v93 = *v131;
            goto LABEL_152;
          }
          v130 = *(int **)(a3 + 8);
        }
        v131 = (_DWORD **)(v130 + 2);
        *(_QWORD *)(a3 + 8) = v130 + 2;
        v91 = *v130;
        goto LABEL_151;
      case 10LL:
        v100 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v101 = *(__int64 **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v101 + 1;
        }
        else
        {
          v101 = (__int64 *)(*(_QWORD *)(a3 + 16) + v100);
          *(_DWORD *)a3 = v100 + 8;
        }
        return (int)sub_7250(a1, *v101);
      case 11LL:
        v53 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v54 = *(__int64 **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v54 + 1;
        }
        else
        {
          v54 = (__int64 *)(*(_QWORD *)(a3 + 16) + v53);
          *(_DWORD *)a3 = v53 + 8;
        }
        if ( !(unsigned int)sub_7FA0(a1, *v54, a4) )
          return -1;
        return 1;
      case 12LL:
        v51 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v52 = *(_QWORD ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v52 + 1;
        }
        else
        {
          v52 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v51);
          *(_DWORD *)a3 = v51 + 8;
        }
        sub_DC10(*v52);
        return 1;
      case 13LL:
        v111 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v112 = *(_QWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v112 + 1;
        }
        else
        {
          v112 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v111);
          *(_DWORD *)a3 = v111 + 8;
        }
        sub_11D60(a1, *v112);
        return 1;
      case 14LL:
        v19 = *(_DWORD *)a3;
        if ( v19 > 0x2F )
        {
          v137 = *(_QWORD ***)(a3 + 8);
          v138 = v137 + 1;
          *(_QWORD *)(a3 + 8) = v137 + 1;
          v21 = *v137;
        }
        else
        {
          v20 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)a3 = v19 + 8;
          v21 = *(_QWORD **)(v20 + v19);
          if ( v19 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v19 + 16;
            goto LABEL_28;
          }
          v138 = *(_QWORD ***)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v138 + 1;
LABEL_28:
        sub_BA50(v21);
        return 1;
      case 15LL:
        v14 = *(_DWORD *)a3;
        if ( v14 > 0x2F )
        {
          v135 = *(_DWORD ***)(a3 + 8);
          v18 = (__int64 *)(v135 + 1);
          *(_QWORD *)(a3 + 8) = v135 + 1;
          v17 = *v135;
        }
        else
        {
          v15 = *(_QWORD *)(a3 + 16);
          v16 = v14 + 8;
          *(_DWORD *)a3 = v16;
          v17 = *(_DWORD **)(v15 + v14);
          if ( (unsigned int)v16 <= 0x2F )
          {
            v18 = (__int64 *)(v16 + v15);
            *(_DWORD *)a3 = v14 + 16;
            goto LABEL_23;
          }
          v18 = *(__int64 **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v18 + 1;
LABEL_23:
        sub_BF50(v17, *v18);
        return 1;
      case 17LL:
        v117 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v118 = *(_QWORD ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v118 + 1;
        }
        else
        {
          v118 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v117);
          *(_DWORD *)a3 = v117 + 8;
        }
        sub_9B80(*v118);
        return 1;
      case 18LL:
        v113 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v114 = *(unsigned __int8 ***)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v114 + 1;
        }
        else
        {
          v114 = (unsigned __int8 **)(*(_QWORD *)(a3 + 16) + v113);
          *(_DWORD *)a3 = v113 + 8;
        }
        sub_8970(*v114);
        return 1;
      case 19LL:
        v63 = *(_DWORD *)a3;
        if ( v63 > 0x2F )
        {
          v139 = *(__int64 **)(a3 + 8);
          v67 = v139 + 1;
          *(_QWORD *)(a3 + 8) = v139 + 1;
          v66 = *v139;
        }
        else
        {
          v64 = *(_QWORD *)(a3 + 16);
          v65 = v63 + 8;
          *(_DWORD *)a3 = v65;
          v66 = *(_QWORD *)(v64 + v63);
          if ( (unsigned int)v65 <= 0x2F )
          {
            v67 = (_QWORD *)(v65 + v64);
            *(_DWORD *)a3 = v63 + 16;
            goto LABEL_76;
          }
          v67 = *(_QWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v67 + 1;
LABEL_76:
        if ( !(unsigned __int8)sub_8960(v66, *v67) )
          return -1;
        return 1;
      case 20LL:
        v60 = *(_DWORD *)a3;
        if ( v60 > 0x2F )
        {
          v126 = *(__int64 **)(a3 + 8);
          v127 = v126 + 1;
          *(_QWORD *)(a3 + 8) = v126 + 1;
          v62 = *v126;
        }
        else
        {
          v61 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)a3 = v60 + 8;
          v62 = *(_QWORD *)(v61 + v60);
          if ( v60 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v60 + 16;
            goto LABEL_72;
          }
          v127 = *(__int64 **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v127 + 1;
        goto LABEL_72;
      case 22LL:
        v98 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v133 = *(__int64 **)(a3 + 8);
          v134 = v133 + 1;
          *(_QWORD *)(a3 + 8) = v133 + 1;
          v62 = *v133;
        }
        else
        {
          v99 = (__int64 *)(*(_QWORD *)(a3 + 16) + v98);
          *(_DWORD *)a3 = v98 + 8;
          v62 = *v99;
          if ( v98 + 8 <= 0x2F )
          {
            *(_DWORD *)a3 = v98 + 16;
            goto LABEL_72;
          }
          v134 = *(__int64 **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v134 + 1;
LABEL_72:
        sub_D1D0(v62);
        return 1;
      case 24LL:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) == 0 )
          return 0;
        v119 = *(_DWORD *)a3;
        if ( v119 > 0x2F )
        {
          v147 = *(__int64 **)(a3 + 8);
          v148 = v147 + 1;
          *(_QWORD *)(a3 + 8) = v147 + 1;
          v121 = *v147;
        }
        else
        {
          v120 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)a3 = v119 + 8;
          v121 = *(_QWORD *)(v120 + v119);
          if ( v119 + 8 <= 0x2F )
          {
            v122 = v119 + 16;
            *(_DWORD *)a3 = v122;
            if ( (unsigned int)v122 <= 0x2F )
            {
              v123 = (_QWORD *)(v122 + v120);
              *(_DWORD *)a3 = v119 + 24;
              goto LABEL_133;
            }
            v123 = *(_QWORD **)(a3 + 8);
LABEL_185:
            *(_QWORD *)(a3 + 8) = v123 + 1;
LABEL_133:
            sub_88B0(v121, 2, (__int64)&unk_22C51, *v123);
            return 1;
          }
          v148 = *(__int64 **)(a3 + 8);
        }
        v123 = v148 + 1;
        goto LABEL_185;
      case 30LL:
        v102 = *(_DWORD *)a3;
        if ( v102 > 0x2F )
        {
          v104 = (const char **)(*(_QWORD *)(a3 + 8) + 8LL);
          goto LABEL_140;
        }
        v103 = v102 + 8;
        *(_DWORD *)a3 = v103;
        if ( (unsigned int)v103 > 0x2F )
          goto LABEL_206;
        v104 = (const char **)(*(_QWORD *)(a3 + 16) + v103);
        *(_DWORD *)a3 = v102 + 16;
        goto LABEL_109;
      case 47LL:
        v115 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v116 = *(__int64 **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v116 + 1;
        }
        else
        {
          v116 = (__int64 *)(*(_QWORD *)(a3 + 16) + v115);
          *(_DWORD *)a3 = v115 + 8;
        }
        if ( !(unsigned __int8)sub_7960(*v116, a2, (unsigned int)v116) )
          return -1;
        return 1;
      case 53LL:
        v55 = *(_DWORD *)a3;
        if ( v55 > 0x2F )
        {
          v145 = *(__int64 ***)(a3 + 8);
          v59 = (__int64 *)(v145 + 1);
          *(_QWORD *)(a3 + 8) = v145 + 1;
          v58 = *v145;
        }
        else
        {
          v56 = *(_QWORD *)(a3 + 16);
          v57 = v55 + 8;
          *(_DWORD *)a3 = v57;
          v58 = *(__int64 **)(v56 + v55);
          if ( (unsigned int)v57 <= 0x2F )
          {
            v59 = (__int64 *)(v57 + v56);
            *(_DWORD *)a3 = v55 + 16;
            return sub_8510(a1, v58, *v59) != 0;
          }
          v59 = *(__int64 **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v59 + 1;
        return sub_8510(a1, v58, *v59) != 0;
      case 74LL:
        v76 = *(_DWORD *)a3;
        if ( v76 > 0x2F )
        {
          v142 = *(_QWORD ***)(a3 + 8);
          v143 = (__int64 *)(v142 + 1);
          *(_QWORD *)(a3 + 8) = v142 + 1;
          v79 = *v142;
LABEL_175:
          v144 = v143 + 1;
          *(_QWORD *)(a3 + 8) = v143 + 1;
          v81 = *v143;
LABEL_176:
          v84 = v144 + 1;
          *(_QWORD *)(a3 + 8) = v144 + 1;
          v83 = *v144;
          goto LABEL_177;
        }
        v77 = *(_QWORD *)(a3 + 16);
        v78 = v76 + 8;
        *(_DWORD *)a3 = v78;
        v79 = *(__int64 **)(v77 + v76);
        if ( (unsigned int)v78 > 0x2F )
        {
          v143 = *(__int64 **)(a3 + 8);
          goto LABEL_175;
        }
        v80 = v76 + 16;
        *(_DWORD *)a3 = v80;
        v81 = *(_QWORD *)(v77 + v78);
        if ( (unsigned int)v80 > 0x2F )
        {
          v144 = *(__int64 **)(a3 + 8);
          goto LABEL_176;
        }
        v82 = v76 + 24;
        *(_DWORD *)a3 = v82;
        v83 = *(_QWORD *)(v77 + v80);
        if ( (unsigned int)v82 <= 0x2F )
        {
          v84 = (_QWORD *)(v82 + v77);
          *(_DWORD *)a3 = v76 + 32;
          goto LABEL_88;
        }
        v84 = *(_QWORD **)(a3 + 8);
LABEL_177:
        *(_QWORD *)(a3 + 8) = v84 + 1;
LABEL_88:
        v85 = sub_1B780(a1, v81, v83, *v84);
        if ( v85 == -1 )
          return -1;
        result = 0;
        if ( v85 != -2 )
        {
          *v79 = v85;
          return 1;
        }
        return result;
      case 75LL:
        v68 = *(_DWORD *)a3;
        if ( v68 > 0x2F )
        {
          v124 = *(__int64 **)(a3 + 8);
          v125 = v124 + 1;
          *(_QWORD *)(a3 + 8) = v124 + 1;
          v71 = *v124;
        }
        else
        {
          v69 = *(_QWORD *)(a3 + 16);
          v70 = v68 + 8;
          *(_DWORD *)a3 = v70;
          v71 = *(_QWORD *)(v69 + v68);
          if ( (unsigned int)v70 <= 0x2F )
          {
            v72 = v68 + 16;
            *(_DWORD *)a3 = v72;
            v73 = *(_QWORD *)(v69 + v70);
            if ( (unsigned int)v72 <= 0x2F )
            {
              v74 = (int *)(v72 + v69);
              *(_DWORD *)a3 = v68 + 24;
              goto LABEL_82;
            }
            v74 = *(int **)(a3 + 8);
LABEL_143:
            *(_QWORD *)(a3 + 8) = v74 + 2;
LABEL_82:
            v75 = *v74;
            LOBYTE(v75) = *v74 | 0x80;
            return (int)ieee_realcvt(v71, v73, (unsigned __int16)v75);
          }
          v125 = *(_QWORD **)(a3 + 8);
        }
        v74 = (int *)(v125 + 1);
        *(_QWORD *)(a3 + 8) = v125 + 1;
        v73 = *v125;
        goto LABEL_143;
      case 76LL:
        v28 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v140 = *(_DWORD **)(a3 + 8);
          v141 = v140 + 2;
          *(_QWORD *)(a3 + 8) = v140 + 2;
          if ( *v140 )
            goto LABEL_172;
        }
        else
        {
          v29 = *(_QWORD *)(a3 + 16);
          *(_DWORD *)a3 = v28 + 8;
          if ( *(_DWORD *)(v29 + v28) )
          {
            if ( v28 + 8 <= 0x2F )
            {
              v30 = v28 + 16;
              *(_DWORD *)a3 = v30;
              if ( (unsigned int)v30 <= 0x2F )
              {
                v31 = (int *)(v30 + v29);
                *(_DWORD *)a3 = v28 + 24;
LABEL_39:
                v32 = *v31;
                v33 = *v31 != 0;
                if ( !v32 || (*(_BYTE *)(a1 + 148) & 8) == 0 )
                  goto LABEL_45;
                v34 = *(_DWORD *)a3;
                if ( *(_DWORD *)a3 > 0x2Fu )
                {
                  v36 = (_BOOL8 (__fastcall ***)(const char *, __int64))(*(_QWORD *)(a3 + 8) + 8LL);
                }
                else
                {
                  v35 = v34 + 8;
                  *(_DWORD *)a3 = v35;
                  if ( (unsigned int)v35 <= 0x2F )
                  {
                    v36 = (_BOOL8 (__fastcall ***)(const char *, __int64))(*(_QWORD *)(a3 + 16) + v35);
                    *(_DWORD *)a3 = v34 + 16;
LABEL_44:
                    **v36 = sub_DF50;
                    *(_DWORD *)(a1 + 148) |= 0x80000000;
LABEL_45:
                    if ( v33 == (*(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) )
                      return 0;
                    v37 = *(_BYTE *)(a1 + 152);
                    goto LABEL_47;
                  }
                  v36 = *(_BOOL8 (__fastcall ****)(const char *, __int64))(a3 + 8);
                }
                *(_QWORD *)(a3 + 8) = v36 + 1;
                goto LABEL_44;
              }
              v31 = *(int **)(a3 + 8);
LABEL_173:
              *(_QWORD *)(a3 + 8) = v31 + 2;
              goto LABEL_39;
            }
            v141 = *(_DWORD **)(a3 + 8);
LABEL_172:
            v31 = v141 + 2;
            goto LABEL_173;
          }
        }
        v37 = *(_BYTE *)(a1 + 152);
        *(_DWORD *)(a1 + 148) &= ~0x80000000;
        if ( v37 )
        {
LABEL_47:
          *(_BYTE *)(a1 + 152) = v37 ^ 1;
          v38 = getinf(8);
          set_target_assembler(v38 == 0);
          return 0;
        }
        break;
      case 77LL:
        v22 = *(_DWORD *)a3;
        if ( v22 > 0x2F )
        {
          v136 = *(_DWORD ***)(a3 + 8);
          v26 = v136 + 1;
          *(_QWORD *)(a3 + 8) = v136 + 1;
          v25 = *v136;
        }
        else
        {
          v23 = *(_QWORD *)(a3 + 16);
          v24 = v22 + 8;
          *(_DWORD *)a3 = v24;
          v25 = *(_DWORD **)(v23 + v22);
          if ( (unsigned int)v24 <= 0x2F )
          {
            v26 = (_QWORD *)(v24 + v23);
            *(_DWORD *)a3 = v22 + 16;
            goto LABEL_32;
          }
          v26 = *(_QWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v26 + 1;
LABEL_32:
        v27 = sub_12350(a1, *v26);
        if ( v27 == -1 )
          return -1;
        *v25 = v27;
        return 1;
      case 95LL:
        v39 = *(_DWORD *)a3;
        if ( v39 > 0x2F )
        {
          v128 = *(_QWORD *)(a3 + 8) + 8LL;
        }
        else
        {
          *(_DWORD *)a3 = v39 + 8;
          if ( v39 + 8 <= 0x2F )
          {
            v40 = v39 + 16;
            *(_DWORD *)a3 = v40;
            if ( (unsigned int)v40 <= 0x2F )
            {
              v41 = (__int64 **)(*(_QWORD *)(a3 + 16) + v40);
              *(_DWORD *)a3 = v39 + 24;
              goto LABEL_52;
            }
            v41 = *(__int64 ***)(a3 + 8);
LABEL_148:
            *(_QWORD *)(a3 + 8) = v41 + 1;
LABEL_52:
            v42 = *v41;
            if ( *v41 )
            {
              v43 = (__m128i *)*v42;
              if ( (unsigned __int64)v42[2] <= 0x32 )
              {
                v146 = qvector_reserve(*v41, v43, 51, 1);
                *v42 = v146;
                v43 = (__m128i *)v146;
              }
              si128 = _mm_load_si128((const __m128i *)&xmmword_24E30);
              v42[1] = 51;
              v43[3].m128i_i16[0] = 25701;
              *v43 = si128;
              v43[1] = _mm_load_si128((const __m128i *)&xmmword_24E40);
              v43[2] = _mm_load_si128((const __m128i *)&xmmword_24E50);
              *(_BYTE *)(*v42 + 50) = 0;
            }
            return -1;
          }
          v128 = *(_QWORD *)(a3 + 8);
        }
        v41 = (__int64 **)(v128 + 8);
        goto LABEL_148;
      default:
        return 0;
    }
  }
  return 0;
}

