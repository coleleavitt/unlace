__int64 __fastcall sub_10B30(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, double a7)
{
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 result; // rax
  int v14; // eax
  unsigned int v15; // eax
  __int64 *v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int *v20; // rbp
  _DWORD *v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  _QWORD *v30; // rdx
  _BYTE *v31; // rbx
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 *v34; // rdx
  unsigned int v35; // eax
  _QWORD **v36; // rdx
  unsigned int v37; // eax
  __int64 *v38; // rdx
  unsigned int v39; // eax
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 *v42; // rdx
  unsigned int v43; // eax
  __int64 *v44; // rdx
  unsigned int v45; // eax
  __int64 *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // r14
  _QWORD *v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 i; // r15
  __int64 *v54; // r13
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  unsigned int v59; // edx
  __int64 v60; // rax
  __int64 v61; // rcx
  _DWORD *v62; // rbp
  _QWORD *v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rdx
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rsi
  _DWORD *v69; // rbp
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 *v72; // rax
  unsigned int v73; // eax
  const void **v74; // rdx
  __int64 v75; // rdx
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdi
  _DWORD *v80; // rax
  unsigned int v81; // eax
  __int64 *v82; // rdx
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdi
  _QWORD **v87; // rax
  unsigned int v88; // eax
  _DWORD *v89; // rdx
  unsigned int v90; // eax
  _DWORD *v91; // rdx
  unsigned int v92; // edx
  __int64 v93; // rax
  __int64 v94; // rsi
  const char *v95; // rdi
  __int64 v96; // rcx
  unsigned int v97; // r9d
  __int64 v98; // rsi
  __int64 v99; // r10
  __int64 v100; // rcx
  __int64 *v101; // r12
  _DWORD *v102; // rax
  __int64 v103; // rax
  unsigned int v104; // edx
  unsigned int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rsi
  unsigned int v108; // edx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdi
  unsigned __int8 **v112; // rax
  unsigned int v113; // edx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rsi
  __int64 *v117; // rax
  unsigned int v118; // eax
  __int64 *v119; // rdx
  unsigned int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rsi
  _DWORD *v123; // r12
  __int64 v124; // rcx
  __int64 v125; // rsi
  _QWORD **v126; // rax
  __int64 *v127; // rdx
  __int64 *v128; // rdx
  __int64 *v129; // rax
  _DWORD **v130; // rax
  __int64 *v131; // rdx
  unsigned int **v132; // rdx
  _DWORD **v133; // rdx
  _DWORD **v134; // rax
  __int64 *v135; // rdx
  const char **v136; // rax
  unsigned int *v137; // rdx
  __int64 *v138; // rax
  _QWORD **v139; // rdx
  __int64 *v140; // rdx
  __int64 *v141; // rdx
  __int64 *v142; // rdx
  __int64 v143; // rax
  __int64 v144; // [rsp+0h] [rbp-58h]
  __int64 v145; // [rsp+8h] [rbp-50h]
  _QWORD v146[9]; // [rsp+10h] [rbp-48h] BYREF

  v146[1] = __readfsqword(0x28u);
  if ( a2 <= 96 )
  {
    if ( a2 >= 0 )
    {
      switch ( a2 )
      {
        case 0LL:
          netnode_check(a1 + 120, "$ sparc", 0, 1);
          sub_109E0(a1);
          return 0;
        case 1LL:
          *(_DWORD *)(a1 + 256) = 64;
          *(_DWORD *)(a1 + 200) = 64;
          unregister_custom_refinfo(*(unsigned int *)(a1 + 296));
          unregister_custom_refinfo(*(unsigned int *)(a1 + 292));
          unregister_custom_fixup(*(unsigned __int16 *)(a1 + 290));
          unregister_custom_fixup(*(unsigned __int16 *)(a1 + 288));
          v48 = *(_QWORD *)(a1 + 128);
          if ( v48 )
          {
            v145 = *(_QWORD *)(a1 + 136);
            if ( v145 )
            {
              v144 = 0;
              v49 = 0;
              do
              {
                v50 = (_QWORD *)(v48 + v49);
                v51 = *(_QWORD *)(v48 + v49 + 56);
                if ( v51 )
                {
                  v52 = v50[8];
                  if ( v52 )
                  {
                    for ( i = 0; i != v52; ++i )
                    {
                      v54 = (__int64 *)(v51 + 48 * i);
                      v55 = v54[3];
                      if ( v55 )
                      {
                        v54[4] = 0;
                        qfree(v55, a2, v47, a7);
                      }
                      v56 = *v54;
                      if ( *v54 )
                      {
                        v54[1] = 0;
                        qfree(v56, a2, v47, a7);
                      }
                      v51 = v50[7];
                    }
                  }
                  v50[8] = 0;
                  qfree(v51, a2, v47, a7);
                }
                v57 = v50[4];
                if ( v57 )
                {
                  v50[5] = 0;
                  qfree(v57, a2, v47, a7);
                }
                v58 = v50[1];
                if ( v58 )
                {
                  v50[2] = 0;
                  qfree(v58, a2, v47, a7);
                }
                ++v144;
                v48 = *(_QWORD *)(a1 + 128);
                v49 += 88;
              }
              while ( v145 != v144 );
            }
            *(_QWORD *)(a1 + 136) = 0;
            qfree(v48, a2, v47, a7);
            *(_QWORD *)(a1 + 128) = 0;
            *(_QWORD *)(a1 + 144) = 0;
          }
          clr_module_data((unsigned int)dword_194F0);
          return 0;
        case 2LL:
          v88 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v89 = *(_DWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v89 + 2;
          }
          else
          {
            v89 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v88);
            *(_DWORD *)a3 = v88 + 8;
          }
          *(_DWORD *)(a1 + 172) = *v89;
          v90 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v91 = *(_DWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v91 + 2;
          }
          else
          {
            v91 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v90);
            *(_DWORD *)a3 = v90 + 8;
          }
          if ( !*v91 )
            setinf_flag(3, 32, *(_DWORD *)(a1 + 172) != 0);
          return 0;
        case 4LL:
          sub_10730(a1);
          v11 = *(unsigned __int16 *)(a1 + 160);
          goto LABEL_11;
        case 5LL:
          goto LABEL_14;
        case 8LL:
          v92 = *(_DWORD *)a3;
          if ( v92 > 0x2F )
          {
            v136 = *(const char ***)(a3 + 8);
            v137 = (unsigned int *)(v136 + 1);
            *(_QWORD *)(a3 + 8) = v136 + 1;
            v95 = *v136;
          }
          else
          {
            v93 = *(_QWORD *)(a3 + 16);
            v94 = v92 + 8;
            *(_DWORD *)a3 = v94;
            v95 = *(const char **)(v93 + v92);
            if ( (unsigned int)v94 <= 0x2F )
            {
              v96 = v92 + 16;
              *(_DWORD *)a3 = v96;
              v97 = *(_DWORD *)(v93 + v94);
              if ( (unsigned int)v96 <= 0x2F )
              {
                v98 = v92 + 24;
                *(_DWORD *)a3 = v98;
                v99 = *(_QWORD *)(v93 + v96);
                if ( (unsigned int)v98 <= 0x2F )
                {
                  v100 = v92 + 32;
                  *(_DWORD *)a3 = v100;
                  v101 = *(__int64 **)(v93 + v98);
                  if ( (unsigned int)v100 <= 0x2F )
                  {
                    v102 = (_DWORD *)(v100 + v93);
                    *(_DWORD *)a3 = v92 + 40;
                    goto LABEL_124;
                  }
                  v102 = *(_DWORD **)(a3 + 8);
LABEL_184:
                  *(_QWORD *)(a3 + 8) = v102 + 2;
LABEL_124:
                  v103 = sub_10800(a1, v95, v97, v99, *v102 != 0);
                  if ( v103 )
                  {
                    if ( v101 )
                      *v101 = v103;
                    return -1;
                  }
                  return 1;
                }
                v139 = *(_QWORD ***)(a3 + 8);
LABEL_183:
                v102 = v139 + 1;
                *(_QWORD *)(a3 + 8) = v139 + 1;
                v101 = *v139;
                goto LABEL_184;
              }
              v138 = *(__int64 **)(a3 + 8);
LABEL_182:
              v139 = (_QWORD **)(v138 + 1);
              *(_QWORD *)(a3 + 8) = v138 + 1;
              v99 = *v138;
              goto LABEL_183;
            }
            v137 = *(unsigned int **)(a3 + 8);
          }
          v138 = (__int64 *)(v137 + 2);
          *(_QWORD *)(a3 + 8) = v137 + 2;
          v97 = *v137;
          goto LABEL_182;
        case 10LL:
          v118 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v119 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v119 + 1;
          }
          else
          {
            v119 = (__int64 *)(*(_QWORD *)(a3 + 16) + v118);
            *(_DWORD *)a3 = v118 + 8;
          }
          return (int)sub_A150(a1, *v119, a7);
        case 11LL:
          v37 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v38 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v38 + 1;
          }
          else
          {
            v38 = (__int64 *)(*(_QWORD *)(a3 + 16) + v37);
            *(_DWORD *)a3 = v37 + 8;
          }
          if ( !(unsigned int)sub_BAA0(a1, *v38) )
            return -1;
          return 1;
        case 12LL:
          v81 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v82 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v82 + 1;
          }
          else
          {
            v82 = (__int64 *)(*(_QWORD *)(a3 + 16) + v81);
            *(_DWORD *)a3 = v81 + 8;
          }
          sub_FBF0(*v82);
          return 1;
        case 13LL:
          v33 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v34 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v34 + 1;
          }
          else
          {
            v34 = (__int64 *)(*(_QWORD *)(a3 + 16) + v33);
            *(_DWORD *)a3 = v33 + 8;
          }
          sub_FC10(a1, *v34);
          return 1;
        case 14LL:
          v113 = *(_DWORD *)a3;
          if ( v113 > 0x2F )
          {
            v142 = *(__int64 **)(a3 + 8);
            v117 = v142 + 1;
            *(_QWORD *)(a3 + 8) = v142 + 1;
            v116 = *v142;
          }
          else
          {
            v114 = *(_QWORD *)(a3 + 16);
            v115 = v113 + 8;
            *(_DWORD *)a3 = v115;
            v116 = *(_QWORD *)(v114 + v113);
            if ( (unsigned int)v115 <= 0x2F )
            {
              v117 = (__int64 *)(v115 + v114);
              *(_DWORD *)a3 = v113 + 16;
              goto LABEL_144;
            }
            v117 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v117 + 1;
LABEL_144:
          sub_FA50(a1, v116, *v117);
          return 1;
        case 15LL:
          v104 = *(_DWORD *)a3;
          if ( v104 > 0x2F )
          {
            v143 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v143;
          }
          else
          {
            *(_DWORD *)a3 = v104 + 8;
            if ( v104 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v104 + 16;
              goto LABEL_130;
            }
            v143 = *(_QWORD *)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v143 + 8;
LABEL_130:
          nullsub_3();
          return 1;
        case 17LL:
          v43 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v44 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v44 + 1;
          }
          else
          {
            v44 = (__int64 *)(*(_QWORD *)(a3 + 16) + v43);
            *(_DWORD *)a3 = v43 + 8;
          }
          sub_FA40(*v44);
          return 1;
        case 18LL:
          v41 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v42 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v42 + 1;
          }
          else
          {
            v42 = (__int64 *)(*(_QWORD *)(a3 + 16) + v41);
            *(_DWORD *)a3 = v41 + 8;
          }
          sub_F850(*v42);
          return 1;
        case 19LL:
          v108 = *(_DWORD *)a3;
          if ( v108 > 0x2F )
          {
            v140 = *(__int64 **)(a3 + 8);
            v112 = (unsigned __int8 **)(v140 + 1);
            *(_QWORD *)(a3 + 8) = v140 + 1;
            v111 = *v140;
          }
          else
          {
            v109 = *(_QWORD *)(a3 + 16);
            v110 = v108 + 8;
            *(_DWORD *)a3 = v110;
            v111 = *(_QWORD *)(v109 + v108);
            if ( (unsigned int)v110 <= 0x2F )
            {
              v112 = (unsigned __int8 **)(v110 + v109);
              *(_DWORD *)a3 = v108 + 16;
              goto LABEL_139;
            }
            v112 = *(unsigned __int8 ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v112 + 1;
LABEL_139:
          if ( !(unsigned __int8)sub_F2F0(v111, *v112, a7) )
            return -1;
          return 1;
        case 32LL:
          v105 = *(_DWORD *)a3;
          if ( v105 > 0x2F )
          {
            v128 = *(__int64 **)(a3 + 8);
            v129 = v128 + 1;
            *(_QWORD *)(a3 + 8) = v128 + 1;
            v107 = *v128;
          }
          else
          {
            v106 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v105 + 8;
            v107 = *(_QWORD *)(v106 + v105);
            if ( v105 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v105 + 16;
              goto LABEL_134;
            }
            v129 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v129 + 1;
LABEL_134:
          if ( (unsigned int)sub_C6E0(a1, v107) != 1 )
            return -1;
          return 1;
        case 36LL:
          v73 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v74 = *(const void ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v74 + 1;
          }
          else
          {
            v74 = (const void **)(*(_QWORD *)(a3 + 16) + v73);
            *(_DWORD *)a3 = v73 + 8;
          }
          v75 = sub_C920(*v74);
          result = 100;
          if ( v75 <= 0 )
            return 0;
          return result;
        case 37LL:
          v76 = *(_DWORD *)a3;
          if ( v76 > 0x2F )
          {
            v127 = *(__int64 **)(a3 + 8);
            v80 = v127 + 1;
            *(_QWORD *)(a3 + 8) = v127 + 1;
            v79 = *v127;
          }
          else
          {
            v77 = *(_QWORD *)(a3 + 16);
            v78 = v76 + 8;
            *(_DWORD *)a3 = v78;
            v79 = *(_QWORD *)(v77 + v76);
            if ( (unsigned int)v78 <= 0x2F )
            {
              v80 = (_DWORD *)(v78 + v77);
              *(_DWORD *)a3 = v76 + 16;
              goto LABEL_102;
            }
            v80 = *(_DWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v80 + 2;
LABEL_102:
          if ( !sub_BA10(v79, *v80 != 0) )
            return -1;
          return 1;
        case 43LL:
          v45 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v46 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v46 + 1;
          }
          else
          {
            v46 = (__int64 *)(*(_QWORD *)(a3 + 16) + v45);
            *(_DWORD *)a3 = v45 + 8;
          }
          return (int)sub_C7C0(*v46);
        case 46LL:
          v66 = *(_DWORD *)a3;
          if ( v66 > 0x2F )
          {
            v134 = *(_DWORD ***)(a3 + 8);
            v135 = (__int64 *)(v134 + 1);
            *(_QWORD *)(a3 + 8) = v134 + 1;
            v69 = *v134;
          }
          else
          {
            v67 = *(_QWORD *)(a3 + 16);
            v68 = v66 + 8;
            *(_DWORD *)a3 = v68;
            v69 = *(_DWORD **)(v67 + v66);
            if ( (unsigned int)v68 <= 0x2F )
            {
              v70 = v66 + 16;
              *(_DWORD *)a3 = v70;
              v71 = *(_QWORD *)(v67 + v68);
              if ( (unsigned int)v70 <= 0x2F )
              {
                v72 = (__int64 *)(v70 + v67);
                *(_DWORD *)a3 = v66 + 24;
                goto LABEL_94;
              }
              v72 = *(__int64 **)(a3 + 8);
LABEL_177:
              *(_QWORD *)(a3 + 8) = v72 + 1;
LABEL_94:
              *v69 = sub_ABD0(v71, *v72);
              return 1;
            }
            v135 = *(__int64 **)(a3 + 8);
          }
          v72 = v135 + 1;
          *(_QWORD *)(a3 + 8) = v135 + 1;
          v71 = *v135;
          goto LABEL_177;
        case 47LL:
          v64 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v65 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v65 + 8;
          }
          else
          {
            v65 = *(_QWORD *)(a3 + 16) + v64;
            *(_DWORD *)a3 = v64 + 8;
          }
          if ( *(_BYTE *)(*(_QWORD *)v65 + 1LL) <= 1u )
            return -1;
          return 1;
        case 55LL:
          v83 = *(_DWORD *)a3;
          if ( v83 > 0x2F )
          {
            v141 = *(__int64 **)(a3 + 8);
            v87 = (_QWORD **)(v141 + 1);
            *(_QWORD *)(a3 + 8) = v141 + 1;
            v86 = *v141;
          }
          else
          {
            v84 = *(_QWORD *)(a3 + 16);
            v85 = v83 + 8;
            *(_DWORD *)a3 = v85;
            v86 = *(_QWORD *)(v84 + v83);
            if ( (unsigned int)v85 <= 0x2F )
            {
              v87 = (_QWORD **)(v85 + v84);
              *(_DWORD *)a3 = v83 + 16;
              return (int)sub_C6D0(v86, *v87);
            }
            v87 = *(_QWORD ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v87 + 1;
          return (int)sub_C6D0(v86, *v87);
        case 59LL:
          v35 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v36 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v36 + 1;
          }
          else
          {
            v36 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v35);
            *(_DWORD *)a3 = v35 + 8;
          }
          sub_CA40(*v36);
          return 1;
        case 60LL:
          v59 = *(_DWORD *)a3;
          if ( v59 > 0x2F )
          {
            v133 = *(_DWORD ***)(a3 + 8);
            v63 = v133 + 1;
            *(_QWORD *)(a3 + 8) = v133 + 1;
            v62 = *v133;
          }
          else
          {
            v60 = *(_QWORD *)(a3 + 16);
            v61 = v59 + 8;
            *(_DWORD *)a3 = v61;
            v62 = *(_DWORD **)(v60 + v59);
            if ( (unsigned int)v61 <= 0x2F )
            {
              v63 = (_QWORD *)(v61 + v60);
              *(_DWORD *)a3 = v59 + 16;
              goto LABEL_85;
            }
            v63 = *(_QWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v63 + 1;
LABEL_85:
          *v62 = sub_C910(*v63);
          return 1;
        case 86LL:
          v14 = sub_103E0(*(_QWORD *)(a1 + 16));
          *(_DWORD *)(a1 + 172) = v14;
          setinf_flag(3, 32, v14 != 0);
LABEL_14:
          sub_10A50(a1);
          return 0;
        case 94LL:
          v39 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v40 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v40 + 1;
          }
          else
          {
            v40 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v39);
            *(_DWORD *)a3 = v39 + 8;
          }
          sub_11B00(*v40, a2, (_DWORD)v40, a4, a5, a6);
          return 0;
        case 95LL:
          netnode_check(a1 + 120, "$ sparc", 0, 1);
          return 0;
        case 96LL:
          if ( !(_BYTE)byte_194E8 && __cxa_guard_acquire(&byte_194E8) )
          {
            qword_194A0 = *(_QWORD *)(a1 + 120);
            qword_194B8 = qword_194A0;
            __cxa_guard_release(&byte_194E8);
          }
          return (int)cvt64_node_supval_for_event(a3, &qword_194A0, 2);
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 == 2015 )
  {
    v120 = *(_DWORD *)a3;
    if ( v120 > 0x2F )
    {
      v130 = *(_DWORD ***)(a3 + 8);
      v131 = (__int64 *)(v130 + 1);
      *(_QWORD *)(a3 + 8) = v130 + 1;
      v123 = *v130;
    }
    else
    {
      v121 = *(_QWORD *)(a3 + 16);
      v122 = v120 + 8;
      *(_DWORD *)a3 = v122;
      v123 = *(_DWORD **)(v121 + v120);
      if ( (unsigned int)v122 <= 0x2F )
      {
        v124 = v120 + 16;
        *(_DWORD *)a3 = v124;
        v125 = *(_QWORD *)(v121 + v122);
        if ( (unsigned int)v124 <= 0x2F )
        {
          v126 = (_QWORD **)(v124 + v121);
          *(_DWORD *)a3 = v120 + 24;
LABEL_153:
          *v123 = sub_D040(a1, v125, *v126);
          return 1;
        }
        v126 = *(_QWORD ***)(a3 + 8);
LABEL_162:
        *(_QWORD *)(a3 + 8) = v126 + 1;
        goto LABEL_153;
      }
      v131 = *(__int64 **)(a3 + 8);
    }
    v126 = (_QWORD **)(v131 + 1);
    *(_QWORD *)(a3 + 8) = v131 + 1;
    v125 = *v131;
    goto LABEL_162;
  }
  if ( a2 > 2015 )
  {
    if ( a2 == 3000 )
    {
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      v31 = (_BYTE *)*v30;
      netnode_supset(*(_QWORD *)(a1 + 120), -1, *v30, 0, 83, a6);
      sub_10570((_QWORD *)a1, v31, v32, a7);
    }
    else if ( a2 == 3001 )
    {
      v9 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v10 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v10 + 2;
      }
      else
      {
        v10 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v9);
        *(_DWORD *)a3 = v9 + 8;
      }
      LOWORD(v11) = *(_WORD *)(a1 + 160) & 0xFFF7;
      if ( *v10 )
        LOWORD(v11) = *(_WORD *)(a1 + 160) | 8;
      *(_WORD *)(a1 + 160) = v11;
      v11 = (unsigned __int16)v11;
LABEL_11:
      v12 = *(_QWORD *)(a1 + 120);
      v146[0] = v11;
      netnode_supset(v12, -1, v146, 8, 65, a6);
    }
    return 0;
  }
  if ( a2 == 2004 )
  {
    v17 = *(_DWORD *)a3;
    if ( v17 > 0x2F )
    {
      v132 = *(unsigned int ***)(a3 + 8);
      v21 = v132 + 1;
      *(_QWORD *)(a3 + 8) = v132 + 1;
      v20 = *v132;
    }
    else
    {
      v18 = *(_QWORD *)(a3 + 16);
      v19 = v17 + 8;
      a2 = v17;
      *(_DWORD *)a3 = v19;
      v20 = *(unsigned int **)(v18 + v17);
      if ( (unsigned int)v19 <= 0x2F )
      {
        v21 = (_DWORD *)(v19 + v18);
        *(_DWORD *)a3 = v17 + 16;
LABEL_26:
        v22 = (unsigned int)(*v21 - 112);
        if ( (unsigned int)v22 <= 0x20 )
        {
          v23 = 0x100010001LL;
          if ( _bittest64(&v23, v22) )
          {
            v24 = *((_QWORD *)v20 + 1);
            *v20 = 0;
            if ( v24 )
            {
              *((_QWORD *)v20 + 2) = 0;
              qfree(v24, a2, 0x100010001LL, a7);
              *((_QWORD *)v20 + 1) = 0;
              *((_QWORD *)v20 + 3) = 0;
            }
            v25 = *((_QWORD *)v20 + 4);
            if ( v25 )
            {
              *((_QWORD *)v20 + 5) = 0;
              qfree(v25, a2, v23, a7);
              *((_QWORD *)v20 + 4) = 0;
              *((_QWORD *)v20 + 6) = 0;
            }
            v26 = *((_QWORD *)v20 + 2);
            v27 = *v20;
            v20[1] = v26;
            if ( (unsigned int)v27 <= 6 )
            {
              v28 = 84;
              if ( _bittest64(&v28, v27) )
                v20[1] = v20[10] + v26;
            }
            return 1;
          }
        }
        return 0;
      }
      v21 = *(_DWORD **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v21 + 2;
    goto LABEL_26;
  }
  if ( a2 != 2009 )
    return 0;
  v15 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v16 = *(__int64 **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v16 + 1;
  }
  else
  {
    v16 = (__int64 *)(*(_QWORD *)(a3 + 16) + v15);
    *(_DWORD *)a3 = v15 + 8;
  }
  if ( (unsigned __int8)sub_CB70(*v16) )
    return 1;
  return -1;
}
