__int64 __fastcall sub_6EF0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 i; // r15
  _QWORD *v15; // r13
  __int64 result; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rbp
  __int64 *v21; // rax
  unsigned int v22; // eax
  unsigned __int64 **v23; // rdx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rsi
  _DWORD *v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 *v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  _QWORD **v35; // rax
  unsigned int v36; // eax
  _QWORD *v37; // rdx
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 *v42; // rdx
  __int64 v43; // rdx
  unsigned __int8 v44; // al
  unsigned int v45; // eax
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 *v48; // rdx
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 *v51; // rdx
  unsigned int v52; // eax
  _QWORD **v53; // rdx
  unsigned int v54; // eax
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  _DWORD **v57; // rdx
  unsigned int v58; // eax
  unsigned __int64 *v59; // rdx
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 *v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rdi
  __int64 *v69; // rax
  unsigned int v70; // eax
  __int64 *v71; // rdx
  unsigned int v72; // edx
  unsigned int v73; // eax
  __int64 *v74; // rdx
  unsigned int v75; // eax
  __int64 *v76; // rdx
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 *v80; // rbp
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rcx
  const char *v84; // rsi
  size_t *v85; // rax
  __int64 v86; // rax
  unsigned int v87; // edx
  __int64 v88; // rax
  __int64 v89; // rsi
  const char *v90; // rdi
  __int64 v91; // rcx
  int v92; // r9d
  __int64 v93; // rsi
  _DWORD *v94; // r10
  __int64 v95; // rcx
  __int64 *v96; // r12
  _DWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  const char **v100; // rax
  int *v101; // rdx
  _DWORD **v102; // rax
  _QWORD **v103; // rdx
  _DWORD **v104; // rax
  __int64 *v105; // rdx
  __int64 *v106; // rdx
  __int64 *v107; // rax
  _DWORD **v108; // rdx
  __int64 *v109; // rdx
  _QWORD **v110; // rdx
  __int64 *v111; // rdx
  _QWORD **v112; // rdx
  __int64 *v113; // rax
  const char **v114; // rdx
  __int64 v115; // [rsp+0h] [rbp-58h]
  __int64 v116; // [rsp+8h] [rbp-50h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      sub_6BC0((_QWORD *)a1);
      return 0;
    case 1LL:
      v9 = *(_QWORD *)(a1 + 128);
      if ( v9 )
      {
        v116 = *(_QWORD *)(a1 + 136);
        if ( v116 )
        {
          v115 = 0;
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
            ++v115;
            v9 = *(_QWORD *)(a1 + 128);
            v10 += 88;
          }
          while ( v116 != v115 );
        }
        *(_QWORD *)(a1 + 136) = 0;
        qfree();
        *(_QWORD *)(a1 + 128) = 0;
        *(_QWORD *)(a1 + 144) = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      netnode_supset();
      return 0;
    case 5LL:
    case 86LL:
      *(_WORD *)(a1 + 152) = netnode_altval() != 0;
      return 0;
    case 8LL:
      v87 = *(_DWORD *)a3;
      if ( v87 > 0x2F )
      {
        v100 = *(const char ***)(a3 + 8);
        v101 = (int *)(v100 + 1);
        *(_QWORD *)(a3 + 8) = v100 + 1;
        v90 = *v100;
LABEL_125:
        v102 = (_DWORD **)(v101 + 2);
        *(_QWORD *)(a3 + 8) = v101 + 2;
        v92 = *v101;
LABEL_126:
        v103 = (_QWORD **)(v102 + 1);
        *(_QWORD *)(a3 + 8) = v102 + 1;
        v94 = *v102;
LABEL_127:
        v97 = v103 + 1;
        *(_QWORD *)(a3 + 8) = v103 + 1;
        v96 = *v103;
        goto LABEL_128;
      }
      v88 = *(_QWORD *)(a3 + 16);
      v89 = v87 + 8;
      *(_DWORD *)a3 = v89;
      v90 = *(const char **)(v88 + v87);
      if ( (unsigned int)v89 > 0x2F )
      {
        v101 = *(int **)(a3 + 8);
        goto LABEL_125;
      }
      v91 = v87 + 16;
      *(_DWORD *)a3 = v91;
      v92 = *(_DWORD *)(v88 + v89);
      if ( (unsigned int)v91 > 0x2F )
      {
        v102 = *(_DWORD ***)(a3 + 8);
        goto LABEL_126;
      }
      v93 = v87 + 24;
      *(_DWORD *)a3 = v93;
      v94 = *(_DWORD **)(v88 + v91);
      if ( (unsigned int)v93 > 0x2F )
      {
        v103 = *(_QWORD ***)(a3 + 8);
        goto LABEL_127;
      }
      v95 = v87 + 32;
      *(_DWORD *)a3 = v95;
      v96 = *(__int64 **)(v88 + v93);
      if ( (unsigned int)v95 <= 0x2F )
      {
        v97 = (_DWORD *)(v95 + v88);
        *(_DWORD *)a3 = v87 + 40;
        goto LABEL_117;
      }
      v97 = *(_DWORD **)(a3 + 8);
LABEL_128:
      *(_QWORD *)(a3 + 8) = v97 + 2;
LABEL_117:
      v98 = sub_6DE0(a1, v90, v92, v94, *v97 != 0);
      if ( !v98 )
        return 1;
      if ( v96 )
        *v96 = v98;
      return -1;
    case 10LL:
      v58 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v59 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v59 + 1;
      }
      else
      {
        v59 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v58);
        *(_DWORD *)a3 = v58 + 8;
      }
      LOBYTE(result) = sub_37A0(a1, *v59);
      return (int)result;
    case 11LL:
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
      if ( !(unsigned int)sub_4B40(a1, *v74, a7) )
        return -1;
      return 1;
    case 12LL:
      v50 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v51 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v51 + 1;
      }
      else
      {
        v51 = (__int64 *)(*(_QWORD *)(a3 + 16) + v50);
        *(_DWORD *)a3 = v50 + 8;
      }
      sub_64B0(*v51);
      return 1;
    case 13LL:
      v75 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v76 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v76 + 1;
      }
      else
      {
        v76 = (__int64 *)(*(_QWORD *)(a3 + 16) + v75);
        *(_DWORD *)a3 = v75 + 8;
      }
      sub_64E0(a1, *v76);
      return 1;
    case 14LL:
      v60 = *(_DWORD *)a3;
      if ( v60 > 0x2F )
      {
        v111 = *(__int64 **)(a3 + 8);
        v64 = v111 + 1;
        *(_QWORD *)(a3 + 8) = v111 + 1;
        v63 = *v111;
      }
      else
      {
        v61 = *(_QWORD *)(a3 + 16);
        v62 = v60 + 8;
        *(_DWORD *)a3 = v62;
        v63 = *(_QWORD *)(v61 + v60);
        if ( (unsigned int)v62 <= 0x2F )
        {
          v64 = (__int64 *)(v62 + v61);
          *(_DWORD *)a3 = v60 + 16;
          goto LABEL_82;
        }
        v64 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v64 + 1;
LABEL_82:
      sub_5EE0(a1, v63, *v64);
      return 1;
    case 15LL:
      v72 = *(_DWORD *)a3;
      if ( v72 > 0x2F )
      {
        v99 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v99;
      }
      else
      {
        *(_DWORD *)a3 = v72 + 8;
        if ( v72 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v72 + 16;
          goto LABEL_95;
        }
        v99 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v99 + 8;
LABEL_95:
      nullsub_1();
      return 1;
    case 16LL:
      v52 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v53 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v53 + 1;
      }
      else
      {
        v53 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v52);
        *(_DWORD *)a3 = v52 + 8;
      }
      sub_61D0(a1, *v53);
      return 1;
    case 17LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v71 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v71 + 1;
      }
      else
      {
        v71 = (__int64 *)(*(_QWORD *)(a3 + 16) + v70);
        *(_DWORD *)a3 = v70 + 8;
      }
      sub_5ED0(*v71);
      return 1;
    case 18LL:
      v56 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v57 = *(_DWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v57 + 1;
      }
      else
      {
        v57 = (_DWORD **)(*(_QWORD *)(a3 + 16) + v56);
        *(_DWORD *)a3 = v56 + 8;
      }
      sub_5650(*v57);
      return 1;
    case 19LL:
      v65 = *(_DWORD *)a3;
      if ( v65 > 0x2F )
      {
        v110 = *(_QWORD ***)(a3 + 8);
        v69 = (__int64 *)(v110 + 1);
        *(_QWORD *)(a3 + 8) = v110 + 1;
        v68 = *v110;
      }
      else
      {
        v66 = *(_QWORD *)(a3 + 16);
        v67 = v65 + 8;
        *(_DWORD *)a3 = v67;
        v68 = *(_QWORD **)(v66 + v65);
        if ( (unsigned int)v67 <= 0x2F )
        {
          v69 = (__int64 *)(v67 + v66);
          *(_DWORD *)a3 = v65 + 16;
          goto LABEL_87;
        }
        v69 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v69 + 1;
LABEL_87:
      if ( !(unsigned __int8)sub_5DC0(v68, *v69, a7) )
        return -1;
      return 1;
    case 25LL:
      v47 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v48 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v48 + 1;
      }
      else
      {
        v48 = (__int64 *)(*(_QWORD *)(a3 + 16) + v47);
        *(_DWORD *)a3 = v47 + 8;
      }
      v49 = *v48;
      *(_QWORD *)(v49 + 8LL * (11 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v49 + 8LL * (13 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      return 0;
    case 32LL:
      v38 = *(_DWORD *)a3;
      if ( v38 > 0x2F )
      {
        v106 = *(__int64 **)(a3 + 8);
        v107 = v106 + 1;
        *(_QWORD *)(a3 + 8) = v106 + 1;
        v40 = *v106;
      }
      else
      {
        v39 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v38 + 8;
        v40 = *(_QWORD *)(v39 + v38);
        if ( v38 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v38 + 16;
          goto LABEL_48;
        }
        v107 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v107 + 1;
LABEL_48:
      if ( (unsigned int)sub_5300(v40) != 1 )
        return -1;
      return 1;
    case 36LL:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v37 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v37 + 1;
      }
      else
      {
        v37 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v36);
        *(_DWORD *)a3 = v36 + 8;
      }
      return (int)sub_52F0(*v37);
    case 43LL:
      v45 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v46 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v46 + 1;
      }
      else
      {
        v46 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v45);
        *(_DWORD *)a3 = v45 + 8;
      }
      return (int)sub_5380(*v46);
    case 46LL:
      v24 = *(_DWORD *)a3;
      if ( v24 > 0x2F )
      {
        v104 = *(_DWORD ***)(a3 + 8);
        v105 = (__int64 *)(v104 + 1);
        *(_QWORD *)(a3 + 8) = v104 + 1;
        v27 = *v104;
      }
      else
      {
        v25 = *(_QWORD *)(a3 + 16);
        v26 = v24 + 8;
        *(_DWORD *)a3 = v26;
        v27 = *(_DWORD **)(v25 + v24);
        if ( (unsigned int)v26 <= 0x2F )
        {
          v28 = v24 + 16;
          *(_DWORD *)a3 = v28;
          v29 = *(_QWORD *)(v25 + v26);
          if ( (unsigned int)v28 <= 0x2F )
          {
            v30 = (__int64 *)(v28 + v25);
            *(_DWORD *)a3 = v24 + 24;
            goto LABEL_37;
          }
          v30 = *(__int64 **)(a3 + 8);
LABEL_131:
          *(_QWORD *)(a3 + 8) = v30 + 1;
LABEL_37:
          *v27 = sub_4870(v29, *v30);
          return 1;
        }
        v105 = *(__int64 **)(a3 + 8);
      }
      v30 = v105 + 1;
      *(_QWORD *)(a3 + 8) = v105 + 1;
      v29 = *v105;
      goto LABEL_131;
    case 47LL:
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
      v43 = *v42;
      v44 = *(_BYTE *)(v43 + 1);
      if ( v44 == 3 )
      {
        if ( !*(_BYTE *)(v43 + 32) )
          return 1;
        return -1;
      }
      if ( v44 <= 3u )
      {
        if ( v44 == 2 )
          return 1;
        return -1;
      }
      if ( v44 == 8 )
        return -1;
      return 1;
    case 55LL:
      v31 = *(_DWORD *)a3;
      if ( v31 > 0x2F )
      {
        v109 = *(__int64 **)(a3 + 8);
        v35 = (_QWORD **)(v109 + 1);
        *(_QWORD *)(a3 + 8) = v109 + 1;
        v34 = *v109;
      }
      else
      {
        v32 = *(_QWORD *)(a3 + 16);
        v33 = v31 + 8;
        *(_DWORD *)a3 = v33;
        v34 = *(_QWORD *)(v32 + v31);
        if ( (unsigned int)v33 <= 0x2F )
        {
          v35 = (_QWORD **)(v33 + v32);
          *(_DWORD *)a3 = v31 + 16;
          return (int)sub_52E0(v34, *v35);
        }
        v35 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v35 + 1;
      return (int)sub_52E0(v34, *v35);
    case 59LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v23 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v23 + 1;
      }
      else
      {
        v23 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v22);
        *(_DWORD *)a3 = v22 + 8;
      }
      sub_54E0(*v23);
      return 1;
    case 60LL:
      v17 = *(_DWORD *)a3;
      if ( v17 > 0x2F )
      {
        v108 = *(_DWORD ***)(a3 + 8);
        v21 = (__int64 *)(v108 + 1);
        *(_QWORD *)(a3 + 8) = v108 + 1;
        v20 = *v108;
      }
      else
      {
        v18 = *(_QWORD *)(a3 + 16);
        v19 = v17 + 8;
        *(_DWORD *)a3 = v19;
        v20 = *(_DWORD **)(v18 + v17);
        if ( (unsigned int)v19 <= 0x2F )
        {
          v21 = (__int64 *)(v19 + v18);
          *(_DWORD *)a3 = v17 + 16;
          goto LABEL_28;
        }
        v21 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v21 + 1;
LABEL_28:
      *v20 = sub_54C0(*v21);
      return 1;
    case 74LL:
      v77 = *(_DWORD *)a3;
      if ( v77 > 0x2F )
      {
        v112 = *(_QWORD ***)(a3 + 8);
        v113 = (__int64 *)(v112 + 1);
        *(_QWORD *)(a3 + 8) = v112 + 1;
        v80 = *v112;
      }
      else
      {
        v78 = *(_QWORD *)(a3 + 16);
        v79 = v77 + 8;
        *(_DWORD *)a3 = v79;
        v80 = *(__int64 **)(v78 + v77);
        if ( (unsigned int)v79 <= 0x2F )
        {
          v81 = v77 + 16;
          *(_DWORD *)a3 = v81;
          v82 = *(_QWORD *)(v78 + v79);
          if ( (unsigned int)v81 <= 0x2F )
          {
            v83 = v77 + 24;
            *(_DWORD *)a3 = v83;
            v84 = *(const char **)(v78 + v81);
            if ( (unsigned int)v83 <= 0x2F )
            {
              v85 = (size_t *)(v83 + v78);
              *(_DWORD *)a3 = v77 + 32;
              goto LABEL_108;
            }
            v85 = *(size_t **)(a3 + 8);
LABEL_156:
            *(_QWORD *)(a3 + 8) = v85 + 1;
LABEL_108:
            v86 = sub_6690(v82, v84, *v85);
            if ( v86 == -1 )
              return -1;
            if ( v86 == -2 )
              return 0;
            *v80 = v86;
            return 1;
          }
          v114 = *(const char ***)(a3 + 8);
LABEL_155:
          v85 = (size_t *)(v114 + 1);
          *(_QWORD *)(a3 + 8) = v114 + 1;
          v84 = *v114;
          goto LABEL_156;
        }
        v113 = *(__int64 **)(a3 + 8);
      }
      v114 = (const char **)(v113 + 1);
      *(_QWORD *)(a3 + 8) = v113 + 1;
      v82 = *v113;
      goto LABEL_155;
    case 94LL:
      v54 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v55 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v55 + 1;
      }
      else
      {
        v55 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v54);
        *(_DWORD *)a3 = v54 + 8;
      }
      sub_7AC0(*v55, a2, (_DWORD)v55, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_B3A8 && __cxa_guard_acquire(&byte_B3A8) )
      {
        qword_B370 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_B3A8);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

