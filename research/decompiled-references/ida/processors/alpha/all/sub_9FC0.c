__int64 __fastcall sub_9FC0(__int64 a1, __int64 a2, __int64 a3, double a4, __int64 a5, int a6, int a7)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 i; // r15
  _QWORD *v15; // r13
  unsigned int v17; // edx
  _QWORD **v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int *v22; // rbx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 *v33; // rcx
  unsigned int v34; // edx
  __int64 *v35; // rcx
  unsigned int v36; // edx
  __int64 *v37; // rcx
  unsigned int v38; // edx
  _DWORD *v39; // rcx
  unsigned int v40; // edx
  _DWORD *v41; // rcx
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rsi
  _QWORD *v45; // rdi
  __int64 *v46; // rdx
  unsigned int v47; // edx
  unsigned int **v48; // rcx
  unsigned int v49; // edx
  _QWORD **v50; // rcx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rdi
  unsigned int v54; // ecx
  unsigned int v55; // edx
  __int64 *v56; // rcx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rsi
  _QWORD *v60; // rdi
  __int64 **v61; // rdx
  unsigned int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rsi
  _DWORD *v65; // rbx
  _QWORD *v66; // rdx
  unsigned int v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // rsi
  _DWORD *v70; // rdi
  _QWORD **v71; // rdx
  unsigned int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rdi
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rdi
  unsigned int v78; // edx
  __int64 v79; // rcx
  int v80; // edx
  _QWORD *v81; // rcx
  unsigned int v82; // edx
  _QWORD *v83; // rcx
  unsigned int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rdi
  const char *v87; // r9
  __int64 v88; // rsi
  int v89; // r10d
  __int64 v90; // rdi
  _DWORD *v91; // r11
  __int64 v92; // rsi
  __int64 *v93; // rbp
  _DWORD *v94; // rdx
  __int64 v95; // rax
  unsigned int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // rdi
  _DWORD *v99; // rbx
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 *v102; // rdx
  unsigned int v103; // edx
  __int64 *v104; // rcx
  unsigned int v105; // edx
  __int64 *v106; // rcx
  unsigned int v107; // edx
  const char **v108; // rcx
  unsigned int v109; // ecx
  __int64 v110; // rdx
  __int64 v111; // rdi
  _DWORD *v112; // rbp
  __int64 v113; // rsi
  __int64 v114; // rdi
  _QWORD **v115; // rdx
  _DWORD **v116; // rcx
  _DWORD **v117; // rdx
  __int64 *v118; // rcx
  __int64 *v119; // rcx
  __int64 *v120; // rdx
  _DWORD **v121; // rdx
  __int64 *v122; // rcx
  _QWORD **v123; // rcx
  const char **v124; // rdx
  int *v125; // rcx
  _DWORD **v126; // rdx
  _QWORD **v127; // rcx
  _QWORD **v128; // rcx
  __int64 *v129; // rcx
  __int64 *v130; // rdx
  unsigned int **v131; // rcx
  _DWORD **v132; // rcx
  __int64 *v133; // rcx
  __int64 *v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // [rsp+0h] [rbp-58h]
  __int64 v137; // [rsp+8h] [rbp-50h]

  if ( a2 <= 95 )
  {
    if ( a2 >= 0 )
    {
      switch ( a2 )
      {
        case 0LL:
          netnode_check();
          hook_event_listener();
          *(_DWORD *)(a1 + 212) = register_custom_refinfo();
          return 0;
        case 1LL:
          unregister_custom_refinfo();
          v9 = *(_QWORD *)(a1 + 152);
          if ( v9 )
          {
            v137 = *(_QWORD *)(a1 + 160);
            if ( v137 )
            {
              v136 = 0;
              v10 = 0;
              do
              {
                v11 = (_QWORD *)(v9 + v10);
                v12 = *(_QWORD *)(v9 + v10 + 56);
                if ( v12 )
                {
                  v13 = v11[8];
                  if ( v13 )
                  {
                    for ( i = 0; i != v13; ++i )
                    {
                      v15 = (_QWORD *)(v12 + 48 * i);
                      if ( v15[3] )
                      {
                        v15[4] = 0;
                        qfree();
                      }
                      if ( *v15 )
                      {
                        v15[1] = 0;
                        qfree();
                      }
                      v12 = v11[7];
                    }
                  }
                  v11[8] = 0;
                  qfree();
                }
                if ( v11[4] )
                {
                  v11[5] = 0;
                  qfree();
                }
                if ( v11[1] )
                {
                  v11[2] = 0;
                  qfree();
                }
                ++v136;
                v9 = *(_QWORD *)(a1 + 152);
                v10 += 88;
              }
              while ( v137 != v136 );
            }
            *(_QWORD *)(a1 + 160) = 0;
            qfree();
            *(_QWORD *)(a1 + 152) = 0;
            *(_QWORD *)(a1 + 168) = 0;
          }
          unhook_event_listener();
          clr_module_data();
          return 0;
        case 2LL:
          v38 = *(_DWORD *)a3;
          if ( v38 > 0x2F )
          {
            v39 = *(_DWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v39 + 2;
          }
          else
          {
            v39 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v38);
            *(_DWORD *)a3 = v38 + 8;
          }
          *(_DWORD *)(a1 + 208) = *v39;
          v40 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v41 = *(_DWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v41 + 2;
          }
          else
          {
            v41 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v40);
            *(_DWORD *)a3 = v40 + 8;
          }
          if ( !*v41 )
            setinf_flag();
          return 0;
        case 4LL:
          netnode_supset();
          sub_9720((_QWORD *)a1, nullptr);
          netnode_supset();
          sub_9A30(a1, a4);
          if ( (unsigned int)getinf() == 11 )
            copy_sreg_ranges();
          if ( get_first_seg() )
          {
            do
              set_default_sreg_value();
            while ( get_next_seg() );
          }
          if ( (unsigned int)getinf() != 11 )
            add_til();
          return 0;
        case 5LL:
        case 86LL:
          sub_9D80(a1);
          if ( a2 == 5 )
          {
            sub_9A30(a1, a4);
          }
          else
          {
            netnode_check();
            v30 = netnode_exist();
            v31 = -1;
            if ( v30 )
            {
              netnode_altval();
              v31 = node2ea();
            }
            *(_QWORD *)(a1 + 200) = v31;
          }
          return 0;
        case 8LL:
          v84 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v124 = *(const char ***)(a3 + 8);
            v125 = (int *)(v124 + 1);
            *(_QWORD *)(a3 + 8) = v124 + 1;
            v87 = *v124;
          }
          else
          {
            v85 = *(_QWORD *)(a3 + 16);
            v86 = v84 + 8;
            *(_DWORD *)a3 = v86;
            v87 = *(const char **)(v85 + v84);
            if ( (unsigned int)v86 <= 0x2F )
            {
              v88 = v84 + 16;
              *(_DWORD *)a3 = v88;
              v89 = *(_DWORD *)(v85 + v86);
              if ( (unsigned int)v88 <= 0x2F )
              {
                v90 = v84 + 24;
                *(_DWORD *)a3 = v90;
                v91 = *(_DWORD **)(v85 + v88);
                if ( (unsigned int)v90 <= 0x2F )
                {
                  v92 = v84 + 32;
                  *(_DWORD *)a3 = v92;
                  v93 = *(__int64 **)(v85 + v90);
                  if ( (unsigned int)v92 <= 0x2F )
                  {
                    v94 = (_DWORD *)(v92 + v85);
                    *(_DWORD *)a3 = v84 + 40;
                    goto LABEL_126;
                  }
                  v94 = *(_DWORD **)(a3 + 8);
LABEL_171:
                  *(_QWORD *)(a3 + 8) = v94 + 2;
LABEL_126:
                  v95 = sub_9BA0(a1, v87, v89, v91, *v94 != 0);
                  if ( v95 )
                  {
                    if ( v93 )
                      *v93 = v95;
                    return -1;
                  }
                  return 1;
                }
                v127 = *(_QWORD ***)(a3 + 8);
LABEL_170:
                v94 = v127 + 1;
                *(_QWORD *)(a3 + 8) = v127 + 1;
                v93 = *v127;
                goto LABEL_171;
              }
              v126 = *(_DWORD ***)(a3 + 8);
LABEL_169:
              v127 = (_QWORD **)(v126 + 1);
              *(_QWORD *)(a3 + 8) = v126 + 1;
              v91 = *v126;
              goto LABEL_170;
            }
            v125 = *(int **)(a3 + 8);
          }
          v126 = (_DWORD **)(v125 + 2);
          *(_QWORD *)(a3 + 8) = v125 + 2;
          v89 = *v125;
          goto LABEL_169;
        case 10LL:
          v36 = *(_DWORD *)a3;
          if ( v36 > 0x2F )
          {
            v37 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v37 + 1;
          }
          else
          {
            v37 = (__int64 *)(*(_QWORD *)(a3 + 16) + v36);
            *(_DWORD *)a3 = v36 + 8;
          }
          return (int)sub_5B80(a1, *v37);
        case 11LL:
          v103 = *(_DWORD *)a3;
          if ( v103 > 0x2F )
          {
            v104 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v104 + 1;
          }
          else
          {
            v104 = (__int64 *)(*(_QWORD *)(a3 + 16) + v103);
            *(_DWORD *)a3 = v103 + 8;
          }
          if ( !(unsigned int)sub_6EE0(a1, *v104, a4) )
            return -1;
          return 1;
        case 12LL:
          v32 = *(_DWORD *)a3;
          if ( v32 > 0x2F )
          {
            v33 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v33 + 1;
          }
          else
          {
            v33 = (__int64 *)(*(_QWORD *)(a3 + 16) + v32);
            *(_DWORD *)a3 = v32 + 8;
          }
          sub_8DD0(*v33);
          return 1;
        case 13LL:
          v55 = *(_DWORD *)a3;
          if ( v55 > 0x2F )
          {
            v56 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v56 + 1;
          }
          else
          {
            v56 = (__int64 *)(*(_QWORD *)(a3 + 16) + v55);
            *(_DWORD *)a3 = v55 + 8;
          }
          sub_8DF0(a1, *v56);
          return 1;
        case 14LL:
          v51 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v133 = *(__int64 **)(a3 + 8);
            v134 = v133 + 1;
            *(_QWORD *)(a3 + 8) = v133 + 1;
            v53 = *v133;
          }
          else
          {
            v52 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v51 + 8;
            v53 = *(_QWORD *)(v52 + v51);
            if ( v51 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v51 + 16;
              goto LABEL_85;
            }
            v134 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v134 + 1;
LABEL_85:
          sub_8AF0(a1, v53);
          return 1;
        case 15LL:
          v54 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v135 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v135;
          }
          else
          {
            *(_DWORD *)a3 = v54 + 8;
            if ( v54 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v54 + 16;
              goto LABEL_89;
            }
            v135 = *(_QWORD *)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v135 + 8;
LABEL_89:
          nullsub_1();
          return 1;
        case 16LL:
          v34 = *(_DWORD *)a3;
          if ( v34 > 0x2F )
          {
            v35 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v35 + 1;
          }
          else
          {
            v35 = (__int64 *)(*(_QWORD *)(a3 + 16) + v34);
            *(_DWORD *)a3 = v34 + 8;
          }
          sub_8CE0((_QWORD *)a1, *v35);
          return 1;
        case 17LL:
          v49 = *(_DWORD *)a3;
          if ( v49 > 0x2F )
          {
            v50 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v50 + 1;
          }
          else
          {
            v50 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v49);
            *(_DWORD *)a3 = v49 + 8;
          }
          sub_8AE0(*v50);
          return 1;
        case 18LL:
          v47 = *(_DWORD *)a3;
          if ( v47 > 0x2F )
          {
            v48 = *(unsigned int ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v48 + 1;
          }
          else
          {
            v48 = (unsigned int **)(*(_QWORD *)(a3 + 16) + v47);
            *(_DWORD *)a3 = v47 + 8;
          }
          sub_8480(*v48);
          return 1;
        case 19LL:
          v42 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v123 = *(_QWORD ***)(a3 + 8);
            v46 = (__int64 *)(v123 + 1);
            *(_QWORD *)(a3 + 8) = v123 + 1;
            v45 = *v123;
          }
          else
          {
            v43 = *(_QWORD *)(a3 + 16);
            v44 = v42 + 8;
            *(_DWORD *)a3 = v44;
            v45 = *(_QWORD **)(v43 + v42);
            if ( (unsigned int)v44 <= 0x2F )
            {
              v46 = (__int64 *)(v44 + v43);
              *(_DWORD *)a3 = v42 + 16;
              goto LABEL_74;
            }
            v46 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v46 + 1;
LABEL_74:
          if ( !(unsigned __int8)sub_86B0(v45, *v46, a4) )
            return -1;
          return 1;
        case 30LL:
          v75 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v129 = *(__int64 **)(a3 + 8);
            v130 = v129 + 1;
            *(_QWORD *)(a3 + 8) = v129 + 1;
            v77 = *v129;
          }
          else
          {
            v76 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v75 + 8;
            v77 = *(_QWORD *)(v76 + v75);
            if ( v75 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v75 + 16;
              goto LABEL_113;
            }
            v130 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v130 + 1;
LABEL_113:
          sub_7A10(v77);
          return 0;
        case 32LL:
          v72 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v119 = *(__int64 **)(a3 + 8);
            v120 = v119 + 1;
            *(_QWORD *)(a3 + 8) = v119 + 1;
            v74 = *v119;
          }
          else
          {
            v73 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v72 + 8;
            v74 = *(_QWORD *)(v73 + v72);
            if ( v72 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v72 + 16;
              goto LABEL_108;
            }
            v120 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v120 + 1;
LABEL_108:
          if ( (unsigned int)sub_76C0(v74) != 1 )
            return -1;
          return 1;
        case 36LL:
          v105 = *(_DWORD *)a3;
          if ( v105 > 0x2F )
          {
            v106 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v106 + 1;
          }
          else
          {
            v106 = (__int64 *)(*(_QWORD *)(a3 + 16) + v105);
            *(_DWORD *)a3 = v105 + 8;
          }
          if ( !*v106 )
            return 0;
          return (int)sub_76A0(*v106);
        case 43LL:
          v82 = *(_DWORD *)a3;
          if ( v82 > 0x2F )
          {
            v83 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v83 + 1;
          }
          else
          {
            v83 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v82);
            *(_DWORD *)a3 = v82 + 8;
          }
          return (int)sub_7700(*v83);
        case 46LL:
          v96 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v121 = *(_DWORD ***)(a3 + 8);
            v122 = (__int64 *)(v121 + 1);
            *(_QWORD *)(a3 + 8) = v121 + 1;
            v99 = *v121;
          }
          else
          {
            v97 = *(_QWORD *)(a3 + 16);
            v98 = v96 + 8;
            *(_DWORD *)a3 = v98;
            v99 = *(_DWORD **)(v97 + v96);
            if ( (unsigned int)v98 <= 0x2F )
            {
              v100 = v96 + 16;
              *(_DWORD *)a3 = v100;
              v101 = *(_QWORD *)(v97 + v98);
              if ( (unsigned int)v100 <= 0x2F )
              {
                v102 = (__int64 *)(v100 + v97);
                *(_DWORD *)a3 = v96 + 24;
                goto LABEL_133;
              }
              v102 = *(__int64 **)(a3 + 8);
LABEL_163:
              *(_QWORD *)(a3 + 8) = v102 + 1;
LABEL_133:
              *v99 = sub_67A0(v101, *v102);
              return 1;
            }
            v122 = *(__int64 **)(a3 + 8);
          }
          v102 = v122 + 1;
          *(_QWORD *)(a3 + 8) = v122 + 1;
          v101 = *v122;
          goto LABEL_163;
        case 55LL:
          v57 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v128 = *(_QWORD ***)(a3 + 8);
            v61 = v128 + 1;
            *(_QWORD *)(a3 + 8) = v128 + 1;
            v60 = *v128;
          }
          else
          {
            v58 = *(_QWORD *)(a3 + 16);
            v59 = v57 + 8;
            *(_DWORD *)a3 = v59;
            v60 = *(_QWORD **)(v58 + v57);
            if ( (unsigned int)v59 <= 0x2F )
            {
              v61 = (__int64 **)(v59 + v58);
              *(_DWORD *)a3 = v57 + 16;
              return sub_7680(a1, v60, *v61);
            }
            v61 = *(__int64 ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v61 + 1;
          return sub_7680(a1, v60, *v61);
        case 56LL:
          v67 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v116 = *(_DWORD ***)(a3 + 8);
            v71 = (_QWORD **)(v116 + 1);
            *(_QWORD *)(a3 + 8) = v116 + 1;
            v70 = *v116;
          }
          else
          {
            v68 = *(_QWORD *)(a3 + 16);
            v69 = v67 + 8;
            *(_DWORD *)a3 = v69;
            v70 = *(_DWORD **)(v68 + v67);
            if ( (unsigned int)v69 <= 0x2F )
            {
              v71 = (_QWORD **)(v69 + v68);
              *(_DWORD *)a3 = v67 + 16;
              goto LABEL_104;
            }
            v71 = *(_QWORD ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v71 + 1;
LABEL_104:
          sub_7820(v70, *v71);
          return 0;
        case 60LL:
          v62 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v132 = *(_DWORD ***)(a3 + 8);
            v66 = v132 + 1;
            *(_QWORD *)(a3 + 8) = v132 + 1;
            v65 = *v132;
          }
          else
          {
            v63 = *(_QWORD *)(a3 + 16);
            v64 = v62 + 8;
            *(_DWORD *)a3 = v64;
            v65 = *(_DWORD **)(v63 + v62);
            if ( (unsigned int)v64 <= 0x2F )
            {
              v66 = (_QWORD *)(v64 + v63);
              *(_DWORD *)a3 = v62 + 16;
              goto LABEL_100;
            }
            v66 = *(_QWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v66 + 1;
LABEL_100:
          *v65 = sub_7810(*v66);
          return 1;
        case 94LL:
          v78 = *(_DWORD *)a3;
          if ( v78 > 0x2F )
          {
            v81 = *(_QWORD **)(a3 + 8);
            v80 = (_DWORD)v81 + 8;
            *(_QWORD *)(a3 + 8) = v81 + 1;
          }
          else
          {
            v79 = v78;
            v80 = v78 + 8;
            v81 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v79);
            *(_DWORD *)a3 = v80;
          }
          sub_AE10(*v81, a2, v80, (_DWORD)v81, a6, a7);
          return 0;
        case 95LL:
          netnode_check();
          return 0;
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 == 2015 )
  {
    v109 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v117 = *(_DWORD ***)(a3 + 8);
      v118 = (__int64 *)(v117 + 1);
      *(_QWORD *)(a3 + 8) = v117 + 1;
      v112 = *v117;
    }
    else
    {
      v110 = *(_QWORD *)(a3 + 16);
      v111 = v109 + 8;
      *(_DWORD *)a3 = v111;
      v112 = *(_DWORD **)(v110 + v109);
      if ( (unsigned int)v111 <= 0x2F )
      {
        v113 = v109 + 16;
        *(_DWORD *)a3 = v113;
        v114 = *(_QWORD *)(v110 + v111);
        if ( (unsigned int)v113 <= 0x2F )
        {
          v115 = (_QWORD **)(v113 + v110);
          *(_DWORD *)a3 = v109 + 24;
LABEL_150:
          *v112 = sub_8000(a1, v114, *v115);
          return 1;
        }
        v115 = *(_QWORD ***)(a3 + 8);
LABEL_155:
        *(_QWORD *)(a3 + 8) = v115 + 1;
        goto LABEL_150;
      }
      v118 = *(__int64 **)(a3 + 8);
    }
    v115 = (_QWORD **)(v118 + 1);
    *(_QWORD *)(a3 + 8) = v118 + 1;
    v114 = *v118;
    goto LABEL_155;
  }
  if ( a2 > 2015 )
  {
    if ( a2 == 3000 )
    {
      v107 = *(_DWORD *)a3;
      if ( v107 > 0x2F )
      {
        v108 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v108 + 1;
      }
      else
      {
        v108 = (const char **)(*(_QWORD *)(a3 + 16) + v107);
        *(_DWORD *)a3 = v107 + 8;
      }
      sub_98D0((_QWORD *)a1, *v108);
    }
    return 0;
  }
  if ( a2 == 2004 )
  {
    v19 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v131 = *(unsigned int ***)(a3 + 8);
      v23 = v131 + 1;
      *(_QWORD *)(a3 + 8) = v131 + 1;
      v22 = *v131;
    }
    else
    {
      v20 = *(_QWORD *)(a3 + 16);
      v21 = v19 + 8;
      *(_DWORD *)a3 = v21;
      v22 = *(unsigned int **)(v20 + v19);
      if ( (unsigned int)v21 <= 0x2F )
      {
        v23 = (_DWORD *)(v21 + v20);
        *(_DWORD *)a3 = v19 + 16;
LABEL_35:
        v24 = (unsigned int)(*v23 - 112);
        if ( (unsigned int)v24 <= 0x20 )
        {
          v25 = 0x100010001LL;
          if ( _bittest64(&v25, v24) )
          {
            v26 = *((_QWORD *)v22 + 1);
            *v22 = 0;
            if ( v26 )
            {
              *((_QWORD *)v22 + 2) = 0;
              qfree();
              *((_QWORD *)v22 + 1) = 0;
              *((_QWORD *)v22 + 3) = 0;
            }
            if ( *((_QWORD *)v22 + 4) )
            {
              *((_QWORD *)v22 + 5) = 0;
              qfree();
              *((_QWORD *)v22 + 4) = 0;
              *((_QWORD *)v22 + 6) = 0;
            }
            v27 = *((_QWORD *)v22 + 2);
            v28 = *v22;
            v22[1] = v27;
            if ( (unsigned int)v28 <= 6 )
            {
              v29 = 84;
              if ( _bittest64(&v29, v28) )
                v22[1] = v22[10] + v27;
            }
            return 1;
          }
        }
        return 0;
      }
      v23 = *(_DWORD **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v23 + 2;
    goto LABEL_35;
  }
  if ( a2 != 2009 )
    return 0;
  v17 = *(_DWORD *)a3;
  if ( v17 > 0x2F )
  {
    v18 = *(_QWORD ***)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v18 + 1;
  }
  else
  {
    v18 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v17);
    *(_DWORD *)a3 = v17 + 8;
  }
  if ( (unsigned __int8)sub_7A90(*v18) )
    return 1;
  return -1;
}

