__int64 __fastcall sub_AC90(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  __int64 result; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 *v12; // rbx
  __int64 *v13; // rdx
  unsigned int v14; // edx
  int *v15; // rcx
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rdx
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned int v24; // esi
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 **v27; // rdx
  __int64 *v28; // rbx
  __m128i *v29; // rsi
  __m128i si128; // xmm0
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 *v35; // rdx
  __int64 v36; // rbp
  _BYTE *v37; // rsi
  const char *v38; // r12
  const char *v39; // rbp
  unsigned int v40; // edx
  __int64 v41; // rcx
  unsigned int v42; // edx
  int v43; // eax
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned int v47; // edx
  __int64 *v48; // rcx
  __int64 v49; // rbx
  __int64 ph; // rax
  int v51; // esi
  int v52; // ecx
  __int64 v53; // rdx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 *v58; // rbx
  int v59; // edx
  int v60; // edx
  unsigned int v61; // edx
  __int64 v62; // rcx
  unsigned int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  _QWORD *v67; // rdx
  unsigned int v68; // edx
  __int64 *v69; // rcx
  unsigned int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rsi
  _QWORD *v73; // rdi
  __int64 **v74; // rdx
  unsigned int v75; // edx
  __int64 *v76; // rcx
  unsigned int v77; // edx
  unsigned __int64 *v78; // rcx
  unsigned int v79; // edx
  __int64 *v80; // rcx
  __int64 v81; // rbp
  const char *v82; // rcx
  unsigned int v83; // edx
  __int64 *v84; // rcx
  unsigned int v85; // edx
  __int64 *v86; // rcx
  unsigned int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // rdi
  _QWORD *v90; // r8
  __int64 v91; // rsi
  _DWORD *v92; // rdi
  _QWORD *v93; // rdx
  _BYTE *v94; // rax
  unsigned int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 *v98; // r8
  __int64 v99; // rsi
  __int64 v100; // rdi
  _DWORD *v101; // rdx
  __int64 **v102; // rdx
  __int64 *v103; // rcx
  _QWORD *v104; // rcx
  int *v105; // rdx
  _DWORD *v106; // rcx
  _DWORD *v107; // rcx
  __int64 *v108; // rcx
  _QWORD **v109; // rcx
  _QWORD **v110; // rcx
  _QWORD **v111; // rdx
  _DWORD **v112; // rcx
  __int64 v113; // rdx
  __int64 *v114; // rcx
  _QWORD **v115; // rcx
  __int64 *v116; // rdx
  unsigned int *v117; // rcx
  unsigned int *v118; // rdx
  unsigned int *v119; // rdx
  __int64 v120; // rax
  __int64 v121; // [rsp+8h] [rbp-50h]
  int v122; // [rsp+18h] [rbp-40h] BYREF
  int v123; // [rsp+1Ch] [rbp-3Ch] BYREF
  _BYTE v124[24]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v125; // [rsp+38h] [rbp-20h]

  v4 = (_QWORD *)a1;
  v125 = __readfsqword(0x28u);
  v5 = a3;
  if ( a2 > 95 )
  {
    if ( a2 == 2000 )
    {
      if ( (getinf(57) & 0xF) == 0 )
      {
        *(_OWORD *)v124 = 0;
        v124[0] = 6;
        set_compiler(v124, 2, 0);
      }
      return 0;
    }
    if ( a2 > 2000 )
    {
      if ( a2 != 3001 )
      {
        if ( a2 > 3001 )
        {
          if ( a2 == 3002 )
          {
            v6 = *(_DWORD *)a3;
            if ( v6 > 0x2F )
            {
              v7 = *(_DWORD **)(v5 + 8);
              *(_QWORD *)(v5 + 8) = v7 + 2;
            }
            else
            {
              v7 = (_DWORD *)(*(_QWORD *)(v5 + 16) + v6);
              *(_DWORD *)v5 = v6 + 8;
            }
            *(_DWORD *)(a1 + 128) = *v7;
          }
          return 0;
        }
        if ( a2 == 2002 )
          return 8;
        if ( a2 != 3000 )
          return 0;
        v14 = *(_DWORD *)a3;
        if ( v14 > 0x2F )
        {
          v15 = *(int **)(v5 + 8);
          *(_QWORD *)(v5 + 8) = v15 + 2;
        }
        else
        {
          v15 = (int *)(*(_QWORD *)(v5 + 16) + v14);
          *(_DWORD *)v5 = v14 + 8;
        }
        v16 = *v15;
        v122 = v16;
        if ( v16 != 8
          && (int)sub_AB00(
                    0,
                    (__int64)"HIDECANCEL\n"
                             "The DEX loader and DEX module are compiled with different interface versions (Loader: %u, M"
                             "odule: %u).\n"
                             "Using this combination is likely to corrupt data and/or lead to a crash. Do you want to continue anyway?",
                    v16,
                    8) <= 0 )
        {
LABEL_203:
          v5 = qexit(1);
          goto LABEL_204;
        }
        netnode_check(v124, "$ dex_meta", 0, 0);
        netnode_hashset(*(_QWORD *)v124, "version", &v122, 4, 72);
        *(_BYTE *)(a1 + 208) = 1;
        return 0;
      }
      if ( (unsigned __int8)sub_FA00(a1 + 120) )
        return 0;
      if ( under_debugger )
LABEL_215:
        BUG();
      v5 = interr(10278);
    }
    else if ( a2 != 1002 )
    {
      if ( a2 <= 1002 )
      {
        if ( a2 == 1000 )
        {
          v19 = *(_DWORD *)a3;
          if ( v19 > 0x2F )
          {
            v115 = *(_QWORD ***)(v5 + 8);
            v116 = (__int64 *)(v115 + 1);
            *(_QWORD *)(v5 + 8) = v115 + 1;
            v4 = *v115;
LABEL_188:
            v117 = (unsigned int *)(v116 + 1);
            *(_QWORD *)(v5 + 8) = v116 + 1;
            v23 = *v116;
            goto LABEL_189;
          }
          v20 = *(_QWORD *)(v5 + 16);
          v21 = v19 + 8;
          *(_DWORD *)v5 = v21;
          v4 = *(_QWORD **)(v20 + v19);
          if ( (unsigned int)v21 <= 0x2F )
          {
            v22 = v19 + 16;
            *(_DWORD *)v5 = v22;
            v23 = *(_QWORD *)(v20 + v21);
            if ( (unsigned int)v22 <= 0x2F )
            {
              *(_DWORD *)v5 = v19 + 24;
              v24 = *(_DWORD *)(v20 + v22);
              if ( v19 + 24 <= 0x2F )
              {
                *(_DWORD *)v5 = v19 + 32;
                if ( v19 + 32 <= 0x2F )
                {
                  *(_DWORD *)v5 = v19 + 40;
LABEL_42:
                  *v4 = sub_7D00(v23, v24);
                  return 1;
                }
                v119 = *(unsigned int **)(v5 + 8);
LABEL_191:
                *(_QWORD *)(v5 + 8) = v119 + 2;
                goto LABEL_42;
              }
              v118 = *(unsigned int **)(v5 + 8);
LABEL_190:
              v119 = v118 + 2;
              goto LABEL_191;
            }
            v117 = *(unsigned int **)(v5 + 8);
LABEL_189:
            v118 = v117 + 2;
            *(_QWORD *)(v5 + 8) = v117 + 2;
            v24 = *v117;
            goto LABEL_190;
          }
LABEL_204:
          v116 = *(__int64 **)(v5 + 8);
          goto LABEL_188;
        }
        if ( a2 != 1001 )
          return 0;
        v9 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v110 = *(_QWORD ***)(a3 + 8);
          v13 = (__int64 *)(v110 + 1);
          *(_QWORD *)(v5 + 8) = v110 + 1;
          v12 = *v110;
        }
        else
        {
          v10 = *(_QWORD *)(a3 + 16);
          v11 = v9 + 8;
          *(_DWORD *)v5 = v11;
          v12 = *(__int64 **)(v10 + v9);
          if ( (unsigned int)v11 <= 0x2F )
          {
            v13 = (__int64 *)(v11 + v10);
            *(_DWORD *)v5 = v9 + 16;
LABEL_19:
            *v12 = sub_7A40(*v13);
            return 1;
          }
          v13 = *(__int64 **)(v5 + 8);
        }
        *(_QWORD *)(v5 + 8) = v13 + 1;
        goto LABEL_19;
      }
      if ( a2 != 1008 )
        return 0;
      v87 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v111 = *(_QWORD ***)(a3 + 8);
        v112 = (_DWORD **)(v111 + 1);
        *(_QWORD *)(v5 + 8) = v111 + 1;
        v90 = *v111;
      }
      else
      {
        v88 = *(_QWORD *)(a3 + 16);
        v89 = v87 + 8;
        *(_DWORD *)v5 = v89;
        v90 = *(_QWORD **)(v88 + v87);
        if ( (unsigned int)v89 <= 0x2F )
        {
          v91 = v87 + 16;
          *(_DWORD *)v5 = v91;
          v92 = *(_DWORD **)(v88 + v89);
          if ( (unsigned int)v91 <= 0x2F )
          {
            v93 = (_QWORD *)(v91 + v88);
            *(_DWORD *)v5 = v87 + 24;
LABEL_138:
            v94 = (_BYTE *)*v93;
            if ( *(_BYTE *)*v93 == 73 && v94[1] == 80 && !v94[2] )
            {
              *v90 = &unk_1475D;
              if ( v92 )
                *v92 = 0;
              return 1;
            }
            return -1;
          }
          v93 = *(_QWORD **)(v5 + 8);
LABEL_174:
          *(_QWORD *)(v5 + 8) = v93 + 1;
          goto LABEL_138;
        }
        v112 = *(_DWORD ***)(v5 + 8);
      }
      v93 = v112 + 1;
      *(_QWORD *)(v5 + 8) = v112 + 1;
      v92 = *v112;
      goto LABEL_174;
    }
    v95 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 > 0x2Fu )
    {
      v102 = *(__int64 ***)(v5 + 8);
      v103 = (__int64 *)(v102 + 1);
      *(_QWORD *)(v5 + 8) = v102 + 1;
      v98 = *v102;
    }
    else
    {
      v96 = *(_QWORD *)(v5 + 16);
      v97 = v95 + 8;
      *(_DWORD *)v5 = v97;
      v98 = *(__int64 **)(v96 + v95);
      if ( (unsigned int)v97 <= 0x2F )
      {
        v99 = v95 + 16;
        *(_DWORD *)v5 = v99;
        v100 = *(_QWORD *)(v96 + v97);
        if ( (unsigned int)v99 <= 0x2F )
        {
          v101 = (_DWORD *)(v99 + v96);
          *(_DWORD *)v5 = v95 + 24;
          return (int)sub_7BB0(v98, v100, *v101 != 0);
        }
        v101 = *(_DWORD **)(v5 + 8);
LABEL_156:
        *(_QWORD *)(v5 + 8) = v101 + 2;
        return (int)sub_7BB0(v98, v100, *v101 != 0);
      }
      v103 = *(__int64 **)(v5 + 8);
    }
    v101 = v103 + 1;
    *(_QWORD *)(v5 + 8) = v103 + 1;
    v100 = *v103;
    goto LABEL_156;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      sub_117C0();
      setinf_flag(3, 32, 0);
      v43 = getinf(10);
      setinf(10, v43 & 0xDF9FFFFF);
      set_cp_validity(8, 46, 0xFFFFFFFFLL, 1);
      return 0;
    case 1LL:
      sub_11A20();
      clr_module_data((unsigned int)dword_1A374);
      return 0;
    case 4LL:
      if ( !*(_BYTE *)(a1 + 208) )
        goto LABEL_214;
      if ( (unsigned __int8)sub_FA00(a1 + 120) )
        return 0;
      if ( under_debugger )
        goto LABEL_215;
      interr(10277);
LABEL_71:
      sub_A170();
      if ( (unsigned __int8)sub_FA00(a1 + 120) )
      {
        if ( !*(_BYTE *)(a1 + 208) )
        {
          netnode_check(v124, "$ dex_meta", 0, 0);
          if ( netnode_hashval(*(_QWORD *)v124, "version", &v123, 4, 72) != 4 )
            sub_AA50((__int64)"This database was created using a too old DEX Module");
          if ( v123 == 8
            || (int)sub_AB00(
                      0,
                      (__int64)"This database was created using a DEX module with a different interface version (Database"
                               ": %u, Module: %u).\n"
                               "Using this combination is likely to corrupt data and/or lead to a crash. Do you want to continue anyway?",
                      v123,
                      8) > 0 )
          {
            *(_BYTE *)(a1 + 208) = 1;
            return 0;
          }
          goto LABEL_203;
        }
        return 0;
      }
      if ( !under_debugger )
      {
        interr(10279);
LABEL_214:
        sub_AA50((__int64)"The loader did not provide a magic version code.");
      }
      goto LABEL_215;
    case 5LL:
      goto LABEL_71;
    case 10LL:
      v77 = *(_DWORD *)a3;
      if ( v77 > 0x2F )
      {
        v78 = *(unsigned __int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v78 + 1;
      }
      else
      {
        v78 = (unsigned __int64 *)(*(_QWORD *)(v5 + 16) + v77);
        *(_DWORD *)v5 = v77 + 8;
      }
      return (int)sub_6F90(a1, *v78);
    case 11LL:
      v83 = *(_DWORD *)a3;
      if ( v83 > 0x2F )
      {
        v84 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v84 + 1;
      }
      else
      {
        v84 = (__int64 *)(*(_QWORD *)(v5 + 16) + v83);
        *(_DWORD *)v5 = v83 + 8;
      }
      if ( !(unsigned int)sub_7340(*v84, a4) )
        return -1;
      return 1;
    case 12LL:
      v79 = *(_DWORD *)a3;
      if ( v79 > 0x2F )
      {
        v80 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v80 + 1;
      }
      else
      {
        v80 = (__int64 *)(*(_QWORD *)(v5 + 16) + v79);
        *(_DWORD *)v5 = v79 + 8;
      }
      v81 = *v80;
      sub_ABE0(*v80, 0xFFFFFFFFLL, (__int64)"DEX Module, Interface version %u", 8);
      v82 = "";
      if ( *(_BYTE *)(a1 + 132) )
        v82 = "Optimized ";
      sub_ABE0(v81, 0xFFFFFFFFLL, (__int64)"Input %sDex File version %u", v82, *(_DWORD *)(a1 + 128));
      return 1;
    case 13LL:
      v42 = *(_DWORD *)a3;
      if ( v42 > 0x2F )
        *(_QWORD *)(v5 + 8) += 8LL;
      else
        *(_DWORD *)v5 = v42 + 8;
      return 1;
    case 14LL:
    case 15LL:
      v17 = *(_DWORD *)a3;
      if ( v17 > 0x2F )
      {
        v18 = *(_QWORD *)(v5 + 8) + 8LL;
LABEL_32:
        *(_QWORD *)(v5 + 8) = v18 + 8;
        return 1;
      }
      *(_DWORD *)v5 = v17 + 8;
      if ( v17 + 8 > 0x2F )
      {
        v18 = *(_QWORD *)(v5 + 8);
        goto LABEL_32;
      }
      *(_DWORD *)v5 = v17 + 16;
      return 1;
    case 17LL:
      v75 = *(_DWORD *)a3;
      if ( v75 > 0x2F )
      {
        v76 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v76 + 1;
      }
      else
      {
        v76 = (__int64 *)(*(_QWORD *)(v5 + 16) + v75);
        *(_DWORD *)v5 = v75 + 8;
      }
      sub_9B70(*v76);
      return 1;
    case 18LL:
      v68 = *(_DWORD *)a3;
      if ( v68 > 0x2F )
      {
        v69 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v69 + 1;
      }
      else
      {
        v69 = (__int64 *)(*(_QWORD *)(v5 + 16) + v68);
        *(_DWORD *)v5 = v68 + 8;
      }
      sub_80B0(*v69);
      return 1;
    case 19LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v109 = *(_QWORD ***)(a3 + 8);
        v74 = v109 + 1;
        *(_QWORD *)(v5 + 8) = v109 + 1;
        v73 = *v109;
      }
      else
      {
        v71 = *(_QWORD *)(a3 + 16);
        v72 = v70 + 8;
        *(_DWORD *)v5 = v72;
        v73 = *(_QWORD **)(v71 + v70);
        if ( (unsigned int)v72 <= 0x2F )
        {
          v74 = (__int64 **)(v72 + v71);
          *(_DWORD *)v5 = v70 + 16;
          goto LABEL_112;
        }
        v74 = *(__int64 ***)(v5 + 8);
      }
      *(_QWORD *)(v5 + 8) = v74 + 1;
LABEL_112:
      if ( !(unsigned __int8)sub_95B0(v73, *v74) )
        return -1;
      return 1;
    case 23LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v114 = *(__int64 **)(a3 + 8);
        v35 = v114 + 1;
        *(_QWORD *)(v5 + 8) = v114 + 1;
        v34 = *v114;
      }
      else
      {
        v32 = *(_QWORD *)(a3 + 16);
        v33 = v31 + 8;
        *(_DWORD *)v5 = v33;
        v34 = *(_QWORD *)(v32 + v31);
        if ( (unsigned int)v33 <= 0x2F )
        {
          v35 = (__int64 *)(v33 + v32);
          *(_DWORD *)v5 = v31 + 16;
          goto LABEL_55;
        }
        v35 = *(__int64 **)(v5 + 8);
      }
      *(_QWORD *)(v5 + 8) = v35 + 1;
LABEL_55:
      v36 = *v35;
      v37 = *(_BYTE **)(*v35 + 32);
      if ( v37 && *v37 )
        (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v34 + 136LL))(v34, v37, 0);
      v38 = *(const char **)(v36 + 24);
      v39 = *(const char **)(v36 + 16);
      if ( strcasecmp(v39, v38) )
        sub_ABE0(v34, 0, (__int64)&unk_14751, v38, v39);
      return 1;
    case 32LL:
      v40 = *(_DWORD *)a3;
      if ( v40 > 0x2F )
      {
        v41 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v41 + 8;
      }
      else
      {
        v41 = *(_QWORD *)(v5 + 16) + v40;
        *(_DWORD *)v5 = v40 + 8;
      }
      return -(__int64)(*(_WORD *)(*(_QWORD *)v41 + 24LL) == 0);
    case 35LL:
      v85 = *(_DWORD *)a3;
      if ( v85 > 0x2F )
      {
        v86 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v86 + 1;
      }
      else
      {
        v86 = (__int64 *)(*(_QWORD *)(v5 + 16) + v85);
        *(_DWORD *)v5 = v85 + 8;
      }
      if ( !(unsigned __int8)sub_7B90(*v86) )
        return -1;
      return 1;
    case 36LL:
      v44 = *(_DWORD *)a3;
      if ( v44 > 0x2F )
      {
        v45 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v45 + 8;
      }
      else
      {
        v45 = *(_QWORD *)(v5 + 16) + v44;
        *(_DWORD *)v5 = v44 + 8;
      }
      v46 = netnode_supval(*(_QWORD *)(a1 + 160), *(_QWORD *)(*(_QWORD *)v45 + 16LL), v124, 4, 333);
      result = 100;
      if ( v46 > 3 )
        return result;
      return 0;
    case 37LL:
      v47 = *(_DWORD *)a3;
      if ( v47 > 0x2F )
      {
        v48 = *(__int64 **)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v48 + 1;
      }
      else
      {
        v48 = (__int64 *)(*(_QWORD *)(v5 + 16) + v47);
        *(_DWORD *)v5 = v47 + 8;
      }
      v49 = *v48;
      ph = get_ph();
      v51 = *(_DWORD *)(ph + 104);
      v52 = *(unsigned __int16 *)(v49 + 24);
      v53 = ph;
      if ( v52 < v51 )
        return 0;
      result = 0;
      if ( v52 >= *(_DWORD *)(v53 + 108) )
        return result;
      v54 = *(_DWORD *)(*(_QWORD *)(v53 + 112) + 16LL * (v52 - v51) + 8);
      if ( (v54 & 2) != 0 )
        return -1;
      result = (v54 >> 14) & 1;
      if ( (v54 & 1) != 0 )
        return 1;
      return result;
    case 51LL:
      v55 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v104 = *(_QWORD **)(a3 + 8);
        v105 = (int *)(v104 + 1);
        *(_QWORD *)(v5 + 8) = v104 + 1;
        v58 = (__int64 *)*v104;
LABEL_161:
        v106 = v105 + 2;
        *(_QWORD *)(v5 + 8) = v105 + 2;
        v59 = *v105;
LABEL_162:
        v107 = v106 + 2;
        goto LABEL_163;
      }
      v56 = *(_QWORD *)(a3 + 16);
      v57 = v55 + 8;
      *(_DWORD *)v5 = v57;
      v58 = *(__int64 **)(v56 + v55);
      if ( (unsigned int)v57 > 0x2F )
      {
        v105 = *(int **)(v5 + 8);
        goto LABEL_161;
      }
      *(_DWORD *)v5 = v55 + 16;
      v59 = *(_DWORD *)(v56 + v57);
      if ( v55 + 16 > 0x2F )
      {
        v106 = *(_DWORD **)(v5 + 8);
        goto LABEL_162;
      }
      *(_DWORD *)v5 = v55 + 24;
      if ( v55 + 24 <= 0x2F )
      {
        *(_DWORD *)v5 = v55 + 32;
        goto LABEL_93;
      }
      v107 = *(_DWORD **)(v5 + 8);
LABEL_163:
      *(_QWORD *)(v5 + 8) = v107 + 2;
LABEL_93:
      if ( v59 <= 1 )
        return -1;
      *(_QWORD *)v124 = 0;
      if ( !v58 )
        v58 = (__int64 *)v124;
      *(_OWORD *)&v124[8] = 0;
      sub_8BF0(v58, (__int64)"v%d", v59 - 2);
      result = (v58[1] == 0) + v58[1] - 1;
      if ( *(_QWORD *)v124 )
      {
        v121 = (v58[1] == 0) + v58[1] - 1;
        *(_QWORD *)&v124[8] = 0;
        qfree(*(_QWORD *)v124, "v%d", v60);
        return v121;
      }
      return result;
    case 52LL:
      v61 = *(_DWORD *)a3;
      if ( v61 > 0x2F )
      {
        v62 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v62 + 8;
      }
      else
      {
        v62 = *(_QWORD *)(v5 + 16) + v61;
        *(_DWORD *)v5 = v61 + 8;
      }
      if ( **(_BYTE **)v62 != 118 )
        return 0;
      return (int)(strtol((const char *)(*(_QWORD *)v62 + 1LL), nullptr, 10) + 3);
    case 53LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v108 = *(__int64 **)(a3 + 8);
        v67 = v108 + 1;
        *(_QWORD *)(v5 + 8) = v108 + 1;
        v66 = *v108;
      }
      else
      {
        v64 = *(_QWORD *)(a3 + 16);
        v65 = v63 + 8;
        *(_DWORD *)v5 = v65;
        v66 = *(_QWORD *)(v64 + v63);
        if ( (unsigned int)v65 <= 0x2F )
        {
          v67 = (_QWORD *)(v65 + v64);
          *(_DWORD *)v5 = v63 + 16;
          return (unsigned __int8)sub_12180(v66, *v67);
        }
        v67 = *(_QWORD **)(v5 + 8);
      }
      *(_QWORD *)(v5 + 8) = v67 + 1;
      return (unsigned __int8)sub_12180(v66, *v67);
    case 67LL:
      return -1;
    case 95LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v113 = *(_QWORD *)(a3 + 8) + 8LL;
      }
      else
      {
        *(_DWORD *)a3 = v25 + 8;
        if ( v25 + 8 <= 0x2F )
        {
          v26 = v25 + 16;
          *(_DWORD *)v5 = v26;
          if ( (unsigned int)v26 <= 0x2F )
          {
            v27 = (__int64 **)(*(_QWORD *)(v5 + 16) + v26);
            *(_DWORD *)v5 = v25 + 24;
            goto LABEL_47;
          }
          v27 = *(__int64 ***)(v5 + 8);
LABEL_177:
          *(_QWORD *)(v5 + 8) = v27 + 1;
LABEL_47:
          v28 = *v27;
          if ( *v27 )
          {
            v29 = (__m128i *)*v28;
            if ( (unsigned __int64)v28[2] <= 0x32 )
            {
              v120 = qvector_reserve(v28, v29, 51, 1);
              *v28 = v120;
              v29 = (__m128i *)v120;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_15260);
            v28[1] = 51;
            v29[3].m128i_i16[0] = 25701;
            *v29 = si128;
            v29[1] = _mm_load_si128((const __m128i *)&xmmword_15270);
            v29[2] = _mm_load_si128((const __m128i *)&xmmword_15280);
            *(_BYTE *)(*v28 + 50) = 0;
          }
          return -1;
        }
        v113 = *(_QWORD *)(a3 + 8);
      }
      v27 = (__int64 **)(v113 + 8);
      goto LABEL_177;
    default:
      return 0;
  }
}

