__int64 __fastcall sub_EC00(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  unsigned int v9; // eax
  _QWORD *v10; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // edx
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rsi
  _DWORD *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdi
  _QWORD **v21; // rax
  unsigned int v22; // eax
  _QWORD **v23; // rdx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int *v27; // rbp
  int *v28; // rax
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // eax
  _QWORD *v38; // rdx
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rsi
  _DWORD *v42; // rbp
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 *v45; // rax
  unsigned int v46; // eax
  __int64 *v47; // rdx
  unsigned int v48; // eax
  __int64 *v49; // rdx
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rsi
  const char *v53; // rdi
  __int64 v54; // rcx
  int v55; // r9d
  __int64 v56; // rsi
  _DWORD *v57; // r10
  __int64 v58; // rcx
  __int64 *v59; // r12
  _DWORD *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rcx
  _DWORD *v65; // rbp
  _QWORD *v66; // rax
  unsigned int v67; // eax
  __int64 *v68; // rdx
  unsigned int v69; // eax
  _QWORD *v70; // rdx
  unsigned int v71; // eax
  _QWORD *v72; // rdx
  unsigned int v73; // eax
  __int64 *v74; // rdx
  unsigned int v75; // eax
  __int64 **v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // r14
  _QWORD *v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // r12
  __int64 i; // r15
  _QWORD *v83; // r13
  unsigned int v84; // eax
  _QWORD **v85; // rdx
  unsigned int v86; // eax
  _QWORD **v87; // rdx
  unsigned int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 *v92; // rax
  unsigned int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rsi
  unsigned int v96; // eax
  __int64 *v97; // rdx
  unsigned int v98; // eax
  __int64 *v99; // rdx
  unsigned int v100; // edx
  char **v101; // rax
  __int64 *v102; // rdx
  __int64 *v103; // rax
  unsigned int **v104; // rdx
  _DWORD **v105; // rdx
  __int64 *v106; // rdx
  __int64 v107; // rax
  _DWORD **v108; // rax
  __int64 *v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rax
  _DWORD **v112; // rax
  __int64 *v113; // rdx
  const char **v114; // rax
  int *v115; // rdx
  _DWORD **v116; // rax
  _QWORD **v117; // rdx
  __int64 *v118; // rdx
  __int64 *v119; // rax
  __int64 v120; // rdi
  unsigned __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rsi
  int v124; // r13d
  __int64 *v125; // rbx
  __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // [rsp+0h] [rbp-58h]
  __int64 v130; // [rsp+8h] [rbp-50h]

  if ( a2 <= 96 )
  {
    if ( a2 >= 0 )
    {
      switch ( a2 )
      {
        case 0LL:
          netnode_check();
          setinf_flag();
          read_ioports();
          if ( !*(_QWORD *)(a1 + 168) )
            sub_E180(a1);
          return 0;
        case 1LL:
          sub_E800(a1);
          v77 = *(_QWORD *)(a1 + 128);
          if ( v77 )
          {
            v130 = *(_QWORD *)(a1 + 136);
            if ( v130 )
            {
              v129 = 0;
              v78 = 0;
              do
              {
                v79 = (_QWORD *)(v77 + v78);
                v80 = *(_QWORD *)(v77 + v78 + 56);
                if ( v80 )
                {
                  v81 = v79[8];
                  if ( v81 )
                  {
                    for ( i = 0; i != v81; ++i )
                    {
                      v83 = (_QWORD *)(v80 + 48 * i);
                      if ( v83[3] )
                      {
                        v83[4] = 0;
                        qfree();
                      }
                      if ( *v83 )
                      {
                        v83[1] = 0;
                        qfree();
                      }
                      v80 = v79[7];
                    }
                  }
                  v79[8] = 0;
                  qfree();
                }
                if ( v79[4] )
                {
                  v79[5] = 0;
                  qfree();
                }
                if ( v79[1] )
                {
                  v79[2] = 0;
                  qfree();
                }
                ++v129;
                v77 = *(_QWORD *)(a1 + 128);
                v78 += 88;
              }
              while ( v130 != v129 );
            }
            *(_QWORD *)(a1 + 136) = 0;
            qfree();
            *(_QWORD *)(a1 + 128) = 0;
            *(_QWORD *)(a1 + 144) = 0;
          }
          clr_module_data();
          return 0;
        case 4LL:
          v101 = off_16220;
          if ( (*(_BYTE *)(a1 + 152) & 4) == 0 )
            v101 = off_166C0;
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v101;
          netnode_supset();
          sub_E8E0(a1, a7);
          return 0;
        case 5LL:
        case 86LL:
          sub_E8A0(a1);
          sub_E8E0(a1, a7);
          return 0;
        case 8LL:
          v50 = *(_DWORD *)a3;
          if ( v50 > 0x2F )
          {
            v114 = *(const char ***)(a3 + 8);
            v115 = (int *)(v114 + 1);
            *(_QWORD *)(a3 + 8) = v114 + 1;
            v53 = *v114;
          }
          else
          {
            v51 = *(_QWORD *)(a3 + 16);
            v52 = v50 + 8;
            *(_DWORD *)a3 = v52;
            v53 = *(const char **)(v51 + v50);
            if ( (unsigned int)v52 <= 0x2F )
            {
              v54 = v50 + 16;
              *(_DWORD *)a3 = v54;
              v55 = *(_DWORD *)(v51 + v52);
              if ( (unsigned int)v54 <= 0x2F )
              {
                v56 = v50 + 24;
                *(_DWORD *)a3 = v56;
                v57 = *(_DWORD **)(v51 + v54);
                if ( (unsigned int)v56 <= 0x2F )
                {
                  v58 = v50 + 32;
                  *(_DWORD *)a3 = v58;
                  v59 = *(__int64 **)(v51 + v56);
                  if ( (unsigned int)v58 <= 0x2F )
                  {
                    v60 = (_DWORD *)(v58 + v51);
                    *(_DWORD *)a3 = v50 + 40;
                    goto LABEL_70;
                  }
                  v60 = *(_DWORD **)(a3 + 8);
LABEL_183:
                  *(_QWORD *)(a3 + 8) = v60 + 2;
LABEL_70:
                  v61 = sub_EA20(a1, v53, v55, v57, *v60 != 0);
                  if ( v61 )
                  {
                    if ( v59 )
                      *v59 = v61;
                    return -1;
                  }
                  return 1;
                }
                v117 = *(_QWORD ***)(a3 + 8);
LABEL_182:
                v60 = v117 + 1;
                *(_QWORD *)(a3 + 8) = v117 + 1;
                v59 = *v117;
                goto LABEL_183;
              }
              v116 = *(_DWORD ***)(a3 + 8);
LABEL_181:
              v117 = (_QWORD **)(v116 + 1);
              *(_QWORD *)(a3 + 8) = v116 + 1;
              v57 = *v116;
              goto LABEL_182;
            }
            v115 = *(int **)(a3 + 8);
          }
          v116 = (_DWORD **)(v115 + 2);
          *(_QWORD *)(a3 + 8) = v115 + 2;
          v55 = *v115;
          goto LABEL_181;
        case 10LL:
          v48 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v49 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v49 + 1;
          }
          else
          {
            v49 = (__int64 *)(*(_QWORD *)(a3 + 16) + v48);
            *(_DWORD *)a3 = v48 + 8;
          }
          return (int)sub_6B40(a1, *v49);
        case 11LL:
          v98 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v99 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v99 + 1;
          }
          else
          {
            v99 = (__int64 *)(*(_QWORD *)(a3 + 16) + v98);
            *(_DWORD *)a3 = v98 + 8;
          }
          if ( !(unsigned int)sub_A9D0(a1, *v99, a7) )
            return -1;
          return 1;
        case 12LL:
          v46 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v47 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v47 + 1;
          }
          else
          {
            v47 = (__int64 *)(*(_QWORD *)(a3 + 16) + v46);
            *(_DWORD *)a3 = v46 + 8;
          }
          sub_DD80(*v47);
          return 1;
        case 13LL:
          v96 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v97 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v97 + 1;
          }
          else
          {
            v97 = (__int64 *)(*(_QWORD *)(a3 + 16) + v96);
            *(_DWORD *)a3 = v96 + 8;
          }
          sub_DDA0(a1, *v97);
          return 1;
        case 14LL:
          v93 = *(_DWORD *)a3;
          if ( v93 > 0x2F )
          {
            v102 = *(__int64 **)(a3 + 8);
            v103 = v102 + 1;
            *(_QWORD *)(a3 + 8) = v102 + 1;
            v95 = *v102;
          }
          else
          {
            v94 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v93 + 8;
            v95 = *(_QWORD *)(v94 + v93);
            if ( v93 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v93 + 16;
              goto LABEL_126;
            }
            v103 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v103 + 1;
LABEL_126:
          sub_DA90(a1, v95);
          return 1;
        case 15LL:
          v100 = *(_DWORD *)a3;
          if ( v100 > 0x2F )
          {
            v107 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v107;
          }
          else
          {
            *(_DWORD *)a3 = v100 + 8;
            if ( v100 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v100 + 16;
              goto LABEL_137;
            }
            v107 = *(_QWORD *)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v107 + 8;
LABEL_137:
          nullsub_5();
          return 1;
        case 16LL:
          v73 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v74 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v74 + 1;
          }
          else
          {
            v74 = (__int64 *)(*(_QWORD *)(a3 + 16) + v73);
            *(_DWORD *)a3 = v73 + 8;
          }
          sub_DC80((_QWORD *)a1, *v74);
          return 1;
        case 17LL:
          v86 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v87 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v87 + 1;
          }
          else
          {
            v87 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v86);
            *(_DWORD *)a3 = v86 + 8;
          }
          sub_DA80(*v87, a7);
          return 1;
        case 18LL:
          v84 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v85 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v85 + 1;
          }
          else
          {
            v85 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v84);
            *(_DWORD *)a3 = v84 + 8;
          }
          sub_D8B0(*v85);
          return 1;
        case 19LL:
          v88 = *(_DWORD *)a3;
          if ( v88 > 0x2F )
          {
            v106 = *(__int64 **)(a3 + 8);
            v92 = v106 + 1;
            *(_QWORD *)(a3 + 8) = v106 + 1;
            v91 = *v106;
          }
          else
          {
            v89 = *(_QWORD *)(a3 + 16);
            v90 = v88 + 8;
            *(_DWORD *)a3 = v90;
            v91 = *(_QWORD *)(v89 + v88);
            if ( (unsigned int)v90 <= 0x2F )
            {
              v92 = (__int64 *)(v90 + v89);
              *(_DWORD *)a3 = v88 + 16;
              goto LABEL_121;
            }
            v92 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v92 + 1;
LABEL_121:
          if ( !(unsigned __int8)sub_D5B0(v91, *v92, a7) )
            return -1;
          return 1;
        case 25LL:
          v9 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v10 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v10 + 1;
          }
          else
          {
            v10 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v9);
            *(_DWORD *)a3 = v9 + 8;
          }
          *(_QWORD *)(*v10 + 8LL * (143 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
          return 0;
        case 32LL:
          v34 = *(_DWORD *)a3;
          if ( v34 > 0x2F )
          {
            v118 = *(__int64 **)(a3 + 8);
            v119 = v118 + 1;
            *(_QWORD *)(a3 + 8) = v118 + 1;
            v36 = *v118;
          }
          else
          {
            v35 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v34 + 8;
            v36 = *(_QWORD *)(v35 + v34);
            if ( v34 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v34 + 16;
              goto LABEL_47;
            }
            v119 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v119 + 1;
LABEL_47:
          if ( !sub_AC50(v36) )
            return -1;
          return 1;
        case 36LL:
          v69 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v70 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v70 + 1;
          }
          else
          {
            v70 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v69);
            *(_DWORD *)a3 = v69 + 8;
          }
          return (int)sub_AC40(*v70);
        case 37LL:
          v67 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v68 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v68 + 1;
          }
          else
          {
            v68 = (__int64 *)(*(_QWORD *)(a3 + 16) + v67);
            *(_DWORD *)a3 = v67 + 8;
          }
          if ( !sub_AF80(*v68) )
            return -1;
          return 1;
        case 43LL:
          v71 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v72 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v72 + 1;
          }
          else
          {
            v72 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v71);
            *(_DWORD *)a3 = v71 + 8;
          }
          return (int)sub_ACC0(*v72);
        case 46LL:
          v39 = *(_DWORD *)a3;
          if ( v39 > 0x2F )
          {
            v108 = *(_DWORD ***)(a3 + 8);
            v109 = (__int64 *)(v108 + 1);
            *(_QWORD *)(a3 + 8) = v108 + 1;
            v42 = *v108;
          }
          else
          {
            v40 = *(_QWORD *)(a3 + 16);
            v41 = v39 + 8;
            *(_DWORD *)a3 = v41;
            v42 = *(_DWORD **)(v40 + v39);
            if ( (unsigned int)v41 <= 0x2F )
            {
              v43 = v39 + 16;
              *(_DWORD *)a3 = v43;
              v44 = *(_QWORD *)(v40 + v41);
              if ( (unsigned int)v43 <= 0x2F )
              {
                v45 = (__int64 *)(v43 + v40);
                *(_DWORD *)a3 = v39 + 24;
                goto LABEL_57;
              }
              v45 = *(__int64 **)(a3 + 8);
LABEL_169:
              *(_QWORD *)(a3 + 8) = v45 + 1;
LABEL_57:
              *v42 = sub_A150(v44, *v45);
              return 1;
            }
            v109 = *(__int64 **)(a3 + 8);
          }
          v45 = v109 + 1;
          *(_QWORD *)(a3 + 8) = v109 + 1;
          v44 = *v109;
          goto LABEL_169;
        case 59LL:
          v75 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v76 = *(__int64 ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v76 + 1;
          }
          else
          {
            v76 = (__int64 **)(*(_QWORD *)(a3 + 16) + v75);
            *(_DWORD *)a3 = v75 + 8;
          }
          sub_AE00(a1, *v76);
          return 1;
        case 60LL:
          v62 = *(_DWORD *)a3;
          if ( v62 > 0x2F )
          {
            v105 = *(_DWORD ***)(a3 + 8);
            v66 = v105 + 1;
            *(_QWORD *)(a3 + 8) = v105 + 1;
            v65 = *v105;
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
              goto LABEL_76;
            }
            v66 = *(_QWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v66 + 1;
LABEL_76:
          *v65 = sub_ADE0(*v66);
          return 1;
        case 94LL:
          v37 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v38 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v38 + 1;
          }
          else
          {
            v38 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v37);
            *(_DWORD *)a3 = v37 + 8;
          }
          sub_FA50(*v38, a2, (_DWORD)v38, a4, a5, a6);
          return 0;
        case 95LL:
          netnode_check();
          return 0;
        case 96LL:
          if ( !(_BYTE)byte_17428 && __cxa_guard_acquire(&byte_17428) )
          {
            qword_173F0 = *(_QWORD *)(a1 + 120);
            __cxa_guard_release(&byte_17428);
          }
          return (int)cvt64_node_supval_for_event();
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 <= 2020 )
  {
    if ( a2 > 2003 )
    {
      switch ( a2 )
      {
        case 2004LL:
          v24 = *(_DWORD *)a3;
          if ( v24 > 0x2F )
          {
            v104 = *(unsigned int ***)(a3 + 8);
            v28 = (int *)(v104 + 1);
            *(_QWORD *)(a3 + 8) = v104 + 1;
            v27 = *v104;
          }
          else
          {
            v25 = *(_QWORD *)(a3 + 16);
            v26 = v24 + 8;
            *(_DWORD *)a3 = v26;
            v27 = *(unsigned int **)(v25 + v24);
            if ( (unsigned int)v26 <= 0x2F )
            {
              v28 = (int *)(v26 + v25);
              *(_DWORD *)a3 = v24 + 16;
              goto LABEL_33;
            }
            v28 = *(int **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v28 + 2;
LABEL_33:
          v29 = *v28;
          if ( v29 == 112 )
          {
            v120 = *((_QWORD *)v27 + 1);
            *v27 = 2;
            if ( v120 )
            {
              *((_QWORD *)v27 + 2) = 0;
              qfree();
              *((_QWORD *)v27 + 1) = 0;
              v121 = 0;
              *((_QWORD *)v27 + 3) = 0;
            }
            else
            {
              v121 = *((_QWORD *)v27 + 3);
            }
            v122 = *((_QWORD *)v27 + 2);
            v123 = 0;
            v124 = 26;
            v125 = qword_11750;
            while ( 1 )
            {
              v125 = (__int64 *)((char *)v125 + 4);
              if ( v121 < v122 + 1 )
              {
                v126 = qvector_reserve();
                v122 = *((_QWORD *)v27 + 2);
                *((_QWORD *)v27 + 1) = v126;
                v123 = v126;
              }
              *(_DWORD *)(v123 + 4 * v122) = v124;
              v122 = *((_QWORD *)v27 + 2) + 1LL;
              *((_QWORD *)v27 + 2) = v122;
              v124 = *(_DWORD *)v125;
              if ( *(_DWORD *)v125 == -1 )
                break;
              v121 = *((_QWORD *)v27 + 3);
              v123 = *((_QWORD *)v27 + 1);
            }
            if ( *((_QWORD *)v27 + 4) )
            {
              *((_QWORD *)v27 + 5) = 0;
              qfree();
              *((_QWORD *)v27 + 4) = 0;
              v122 = *((_QWORD *)v27 + 2);
              *((_QWORD *)v27 + 6) = 0;
            }
            v127 = *v27;
            v27[1] = v122;
            if ( (unsigned int)v127 <= 6 )
            {
              v128 = 84;
              if ( _bittest64(&v128, v127) )
                v27[1] = v27[10] + v122;
            }
          }
          else
          {
            if ( (v29 & 0xFFFFFFEF) != 0x80 )
              return 0;
            v30 = *((_QWORD *)v27 + 1);
            *v27 = 0;
            if ( v30 )
            {
              *((_QWORD *)v27 + 2) = 0;
              qfree();
              *((_QWORD *)v27 + 1) = 0;
              *((_QWORD *)v27 + 3) = 0;
            }
            if ( *((_QWORD *)v27 + 4) )
            {
              *((_QWORD *)v27 + 5) = 0;
              qfree();
              *((_QWORD *)v27 + 4) = 0;
              *((_QWORD *)v27 + 6) = 0;
            }
            v31 = *((_QWORD *)v27 + 2);
            v32 = *v27;
            v27[1] = v31;
            if ( (unsigned int)v32 <= 6 )
            {
              v33 = 84;
              if ( _bittest64(&v33, v32) )
                v27[1] = v27[10] + v31;
            }
          }
          return 1;
        case 2009LL:
          v22 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v23 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v23 + 1;
          }
          else
          {
            v23 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v22);
            *(_DWORD *)a3 = v22 + 8;
          }
          if ( !(unsigned __int8)sub_AFC0(*v23) )
            return -1;
          return 1;
        case 2015LL:
          v15 = *(_DWORD *)a3;
          if ( v15 > 0x2F )
          {
            v112 = *(_DWORD ***)(a3 + 8);
            v113 = (__int64 *)(v112 + 1);
            *(_QWORD *)(a3 + 8) = v112 + 1;
            v18 = *v112;
          }
          else
          {
            v16 = *(_QWORD *)(a3 + 16);
            v17 = v15 + 8;
            *(_DWORD *)a3 = v17;
            v18 = *(_DWORD **)(v16 + v15);
            if ( (unsigned int)v17 <= 0x2F )
            {
              v19 = v15 + 16;
              *(_DWORD *)a3 = v19;
              v20 = *(_QWORD *)(v16 + v17);
              if ( (unsigned int)v19 <= 0x2F )
              {
                v21 = (_QWORD **)(v19 + v16);
                *(_DWORD *)a3 = v15 + 24;
                goto LABEL_25;
              }
              v21 = *(_QWORD ***)(a3 + 8);
LABEL_177:
              *(_QWORD *)(a3 + 8) = v21 + 1;
LABEL_25:
              *v18 = sub_B100(v20, *v21);
              return 1;
            }
            v113 = *(__int64 **)(a3 + 8);
          }
          v21 = (_QWORD **)(v113 + 1);
          *(_QWORD *)(a3 + 8) = v113 + 1;
          v20 = *v113;
          goto LABEL_177;
        case 2016LL:
          v14 = *(_DWORD *)a3;
          if ( v14 > 0x2F )
          {
            v110 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v110;
          }
          else
          {
            *(_DWORD *)a3 = v14 + 8;
            if ( v14 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v14 + 16;
              if ( v14 + 16 <= 0x2F )
              {
                *(_DWORD *)a3 = v14 + 24;
                goto LABEL_20;
              }
              v111 = *(_QWORD *)(a3 + 8);
LABEL_174:
              *(_QWORD *)(a3 + 8) = v111 + 8;
LABEL_20:
              sub_B430();
              return 1;
            }
            v110 = *(_QWORD *)(a3 + 8);
          }
          v111 = v110 + 8;
          *(_QWORD *)(a3 + 8) = v110 + 8;
          goto LABEL_174;
        case 2020LL:
          v12 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v13 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v13 + 8;
          }
          else
          {
            v13 = *(_QWORD *)(a3 + 16) + v12;
            *(_DWORD *)a3 = v12 + 8;
          }
          *(_QWORD *)(*(_QWORD *)v13 + 8LL) = -52;
          return 1;
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 != 3001 )
    return 0;
  if ( (*(_BYTE *)(a1 + 152) & 2) != 0 )
    return 1;
  return -1;
}

