__int64 __fastcall sub_DB50(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // r12
  __int64 *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(char *, __int64, __int64, double); // rsi
  __int64 *v25; // rdx
  unsigned int v26; // eax
  _QWORD *v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 *v31; // r12
  __int64 v32; // rsi
  void *v33; // rbx
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // r15
  void *v37; // rdi
  unsigned int v38; // eax
  int *v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rdi
  __int64 *v50; // rax
  unsigned int v51; // eax
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  _BYTE **v54; // rdx
  unsigned int v55; // eax
  __int64 *v56; // rdx
  unsigned int v57; // eax
  __int64 *v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdi
  _QWORD **v64; // rax
  unsigned int v65; // edx
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rsi
  __int64 *v70; // rax
  unsigned int v71; // eax
  int *v72; // rdx
  int v73; // eax
  __int64 v74; // rdx
  unsigned int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rdi
  __int64 *v79; // rax
  unsigned int v80; // eax
  __int64 *v81; // rdx
  unsigned int v82; // eax
  _QWORD *v83; // rdx
  unsigned int v84; // eax
  _WORD **v85; // rdx
  unsigned int v86; // eax
  __int64 *v87; // rdx
  unsigned int v88; // eax
  __int64 *v89; // rdx
  unsigned int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rdi
  signed int v96; // r10d
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 (__fastcall *v99)(char *, __int64, __int64, double); // r8
  __int64 *v100; // rdx
  __int64 *v101; // rdx
  __int64 *v102; // rax
  signed int *v103; // rdx
  signed int *v104; // rax
  __int64 (__fastcall **v105)(char *, __int64, __int64, double); // rax
  __int64 **v106; // rdx
  _QWORD **v107; // rax
  __int64 *v108; // rdx
  __int64 *v109; // rax
  __int64 (__fastcall **v110)(char *, __int64, __int64, double); // rax
  _QWORD **v111; // rdx
  __int64 v112; // rax
  __int64 *v113; // rdx
  _QWORD **v114; // rdx
  __int64 *v115; // rdx
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD **v118; // rax
  _QWORD **v119; // rdx
  __int64 *v120; // rdx
  __int64 *v121; // rax
  _QWORD **v122; // rdx
  __int64 v123; // rax
  char v124; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v125; // [rsp+1018h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  if ( a2 > 96 )
  {
    if ( a2 != 1007 )
    {
      if ( a2 > 1007 )
      {
        if ( a2 == 3000 )
        {
          if ( *(_DWORD *)a3 > 0x2Fu )
            *(_QWORD *)(a3 + 8) += 8LL;
          else
            *(_DWORD *)a3 += 8;
          if ( getseg() )
            split_sreg_range();
        }
        return 0;
      }
      if ( a2 != 1000 )
      {
        if ( a2 != 1001 )
          return 0;
        v12 = *(_DWORD *)a3;
        if ( v12 > 0x2F )
        {
          v111 = *(_QWORD ***)(a3 + 8);
          v16 = (__int64 *)(v111 + 1);
          *(_QWORD *)(a3 + 8) = v111 + 1;
          v15 = *v111;
        }
        else
        {
          v13 = *(_QWORD *)(a3 + 16);
          v14 = v12 + 8;
          *(_DWORD *)a3 = v14;
          v15 = *(__int64 **)(v13 + v12);
          if ( (unsigned int)v14 <= 0x2F )
          {
            v16 = (__int64 *)(v14 + v13);
            *(_DWORD *)a3 = v12 + 16;
LABEL_15:
            *v15 = sub_B0C0(a1, *v16);
            return 1;
          }
          v16 = *(__int64 **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v16 + 1;
        goto LABEL_15;
      }
      v17 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v107 = *(_QWORD ***)(a3 + 8);
        v108 = (__int64 *)(v107 + 1);
        *(_QWORD *)(a3 + 8) = v107 + 1;
        v20 = *v107;
      }
      else
      {
        v18 = *(_QWORD *)(a3 + 16);
        v19 = v17 + 8;
        *(_DWORD *)a3 = v19;
        v20 = *(__int64 **)(v18 + v17);
        if ( (unsigned int)v19 <= 0x2F )
        {
          *(_DWORD *)a3 = v17 + 16;
          v21 = *(_QWORD *)(v18 + v19);
          if ( v17 + 16 <= 0x2F )
          {
            v22 = v17 + 24;
            *(_DWORD *)a3 = v22;
            if ( (unsigned int)v22 <= 0x2F )
            {
              v23 = v17 + 32;
              *(_DWORD *)a3 = v23;
              v24 = *(__int64 (__fastcall **)(char *, __int64, __int64, double))(v18 + v22);
              if ( (unsigned int)v23 <= 0x2F )
              {
                v25 = (__int64 *)(v23 + v18);
                *(_DWORD *)a3 = v17 + 40;
LABEL_23:
                *v20 = sub_AD00(a1, v21, v24, *v25);
                return 1;
              }
              v25 = *(__int64 **)(a3 + 8);
LABEL_147:
              *(_QWORD *)(a3 + 8) = v25 + 1;
              goto LABEL_23;
            }
            v110 = *(__int64 (__fastcall ***)(char *, __int64, __int64, double))(a3 + 8);
LABEL_146:
            v25 = (__int64 *)(v110 + 1);
            *(_QWORD *)(a3 + 8) = v110 + 1;
            v24 = *v110;
            goto LABEL_147;
          }
          v109 = *(__int64 **)(a3 + 8);
LABEL_145:
          v110 = (__int64 (__fastcall **)(char *, __int64, __int64, double))(v109 + 1);
          goto LABEL_146;
        }
        v108 = *(__int64 **)(a3 + 8);
      }
      v109 = v108 + 1;
      *(_QWORD *)(a3 + 8) = v108 + 1;
      v21 = *v108;
      goto LABEL_145;
    }
    v90 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v101 = *(__int64 **)(a3 + 8);
      v102 = v101 + 1;
      *(_QWORD *)(a3 + 8) = v101 + 1;
      v93 = *v101;
    }
    else
    {
      v91 = *(_QWORD *)(a3 + 16);
      v92 = v90 + 8;
      *(_DWORD *)a3 = v92;
      v93 = *(_QWORD *)(v91 + v90);
      if ( (unsigned int)v92 <= 0x2F )
      {
        v94 = v90 + 16;
        *(_DWORD *)a3 = v94;
        v95 = *(_QWORD *)(v91 + v92);
        if ( (unsigned int)v94 <= 0x2F )
        {
          *(_DWORD *)a3 = v90 + 24;
          v96 = *(_DWORD *)(v91 + v94);
          if ( v90 + 24 <= 0x2F )
          {
            v97 = v90 + 32;
            *(_DWORD *)a3 = v97;
            if ( (unsigned int)v97 <= 0x2F )
            {
              v98 = v90 + 40;
              *(_DWORD *)a3 = v98;
              v99 = *(__int64 (__fastcall **)(char *, __int64, __int64, double))(v91 + v97);
              if ( (unsigned int)v98 <= 0x2F )
              {
                v100 = (__int64 *)(v98 + v91);
                *(_DWORD *)a3 = v90 + 48;
                return (unsigned __int8)sub_A680(a1, v93, v95, v96, v99, *v100);
              }
              v100 = *(__int64 **)(a3 + 8);
LABEL_138:
              *(_QWORD *)(a3 + 8) = v100 + 1;
              return (unsigned __int8)sub_A680(a1, v93, v95, v96, v99, *v100);
            }
            v105 = *(__int64 (__fastcall ***)(char *, __int64, __int64, double))(a3 + 8);
LABEL_137:
            v100 = (__int64 *)(v105 + 1);
            *(_QWORD *)(a3 + 8) = v105 + 1;
            v99 = *v105;
            goto LABEL_138;
          }
          v104 = *(signed int **)(a3 + 8);
LABEL_136:
          v105 = (__int64 (__fastcall **)(char *, __int64, __int64, double))(v104 + 2);
          goto LABEL_137;
        }
        v103 = *(signed int **)(a3 + 8);
LABEL_135:
        v104 = v103 + 2;
        *(_QWORD *)(a3 + 8) = v103 + 2;
        v96 = *v103;
        goto LABEL_136;
      }
      v102 = *(__int64 **)(a3 + 8);
    }
    v103 = (signed int *)(v102 + 1);
    *(_QWORD *)(a3 + 8) = v102 + 1;
    v95 = *v102;
    goto LABEL_135;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      hook_event_listener();
      netnode_check();
      setinf_flag();
      *(_DWORD *)(a1 + 336) = register_custom_data_type();
      *(_DWORD *)(a1 + 340) = register_custom_data_format();
      attach_custom_data_format();
      return 0;
    case 1LL:
      if ( *(_DWORD *)(a1 + 336) != -1 )
        unregister_custom_data_type();
      if ( *(_DWORD *)(a1 + 340) != -1 )
        unregister_custom_data_format();
      unhook_event_listener();
      clr_module_data();
      return 0;
    case 2LL:
      v71 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v72 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v72 + 2;
      }
      else
      {
        v72 = (int *)(*(_QWORD *)(a3 + 16) + v71);
        *(_DWORD *)a3 = v71 + 8;
      }
      v73 = *v72;
      v74 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 248) = v73;
      *(_DWORD *)(v74 + 72) = 5 * (v73 == 2) + 34;
      return 0;
    case 3LL:
      v38 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v39 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v39 + 2;
      }
      else
      {
        v39 = (int *)(*(_QWORD *)(a3 + 16) + v38);
        *(_DWORD *)a3 = v38 + 8;
      }
      v40 = *v39;
      if ( (unsigned int)v40 <= 2 )
        *(_QWORD *)(a1 + 304) = off_165C0[v40];
      return 0;
    case 4LL:
      v31 = (__int64 *)(a1 + 128);
      getinf_buf();
      qstrlwr();
      qstrncat();
      v32 = (__int64)&v124;
      if ( !(unsigned __int8)choose_ioport_device2() )
        goto LABEL_45;
      if ( *(_QWORD *)(a1 + 144) )
      {
        v33 = *(void **)(a1 + 136);
        if ( !v33 )
          goto LABEL_44;
        v34 = strlen(*(const char **)(a1 + 136));
        v35 = v34;
        if ( v34 )
        {
          v36 = v34 + 1;
          v37 = v33;
          if ( *(_QWORD *)(a1 + 152) < v34 + 1 )
          {
            v123 = qvector_reserve();
            *(_QWORD *)(a1 + 136) = v123;
            v37 = (void *)v123;
          }
          *(_QWORD *)(a1 + 144) = v36;
          memmove(v37, v33, v35);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v35) = 0;
          goto LABEL_43;
        }
LABEL_176:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_43:
        netnode_supset();
        sub_CF40(v31, 7);
        goto LABEL_44;
      }
      if ( byte_11DF8 )
        goto LABEL_176;
LABEL_44:
      v32 = -1;
      setinf();
LABEL_45:
      if ( *(_DWORD *)(a1 + 248) == 2 )
        sub_D8F0((__int64)&unk_11E18, v32);
      return 0;
    case 5LL:
      goto LABEL_5;
    case 8LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v115 = *(__int64 **)(a3 + 8);
        v116 = v115 + 1;
        *(_QWORD *)(a3 + 8) = v115 + 1;
        v43 = *v115;
LABEL_159:
        v117 = v116 + 1;
LABEL_160:
        v118 = (_QWORD **)(v117 + 1);
LABEL_161:
        v119 = v118 + 1;
        *(_QWORD *)(a3 + 8) = v118 + 1;
        v45 = *v118;
        goto LABEL_162;
      }
      v42 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v41 + 8;
      v43 = *(_QWORD *)(v42 + v41);
      if ( v41 + 8 > 0x2F )
      {
        v116 = *(_QWORD **)(a3 + 8);
        goto LABEL_159;
      }
      *(_DWORD *)a3 = v41 + 16;
      if ( v41 + 16 > 0x2F )
      {
        v117 = *(_QWORD **)(a3 + 8);
        goto LABEL_160;
      }
      v44 = v41 + 24;
      *(_DWORD *)a3 = v44;
      if ( (unsigned int)v44 > 0x2F )
      {
        v118 = *(_QWORD ***)(a3 + 8);
        goto LABEL_161;
      }
      *(_DWORD *)a3 = v41 + 32;
      v45 = *(_QWORD **)(v42 + v44);
      if ( v41 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v41 + 40;
        goto LABEL_57;
      }
      v119 = *(_QWORD ***)(a3 + 8);
LABEL_162:
      *(_QWORD *)(a3 + 8) = v119 + 1;
LABEL_57:
      if ( !v43 )
      {
        sub_D270(a1);
        return 1;
      }
      if ( v45 )
        *v45 = 1;
      return -1;
    case 10LL:
      v88 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v89 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v89 + 1;
      }
      else
      {
        v89 = (__int64 *)(*(_QWORD *)(a3 + 16) + v88);
        *(_DWORD *)a3 = v88 + 8;
      }
      return (int)sub_88E0(a1, *v89);
    case 11LL:
      v84 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v85 = *(_WORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v85 + 1;
      }
      else
      {
        v85 = (_WORD **)(*(_QWORD *)(a3 + 16) + v84);
        *(_DWORD *)a3 = v84 + 8;
      }
      if ( (unsigned int)sub_A2D0(a1, *v85) )
        return 1;
      return -1;
    case 12LL:
      v86 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v87 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v87 + 1;
      }
      else
      {
        v87 = (__int64 *)(*(_QWORD *)(a3 + 16) + v86);
        *(_DWORD *)a3 = v86 + 8;
      }
      sub_C5F0((_QWORD *)a1, *v87);
      return 1;
    case 13LL:
      v55 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v56 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v56 + 1;
      }
      else
      {
        v56 = (__int64 *)(*(_QWORD *)(a3 + 16) + v55);
        *(_DWORD *)a3 = v55 + 8;
      }
      sub_C650(a1, *v56);
      return 1;
    case 14LL:
      v66 = *(_DWORD *)a3;
      if ( v66 > 0x2F )
      {
        v122 = *(_QWORD ***)(a3 + 8);
        v70 = (__int64 *)(v122 + 1);
        *(_QWORD *)(a3 + 8) = v122 + 1;
        v69 = *v122;
      }
      else
      {
        v67 = *(_QWORD *)(a3 + 16);
        v68 = v66 + 8;
        *(_DWORD *)a3 = v68;
        v69 = *(_QWORD **)(v67 + v66);
        if ( (unsigned int)v68 <= 0x2F )
        {
          v70 = (__int64 *)(v68 + v67);
          *(_DWORD *)a3 = v66 + 16;
          goto LABEL_87;
        }
        v70 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v70 + 1;
LABEL_87:
      sub_BF10(a1, v69, *v70);
      return 1;
    case 15LL:
      v65 = *(_DWORD *)a3;
      if ( v65 > 0x2F )
      {
        v112 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v112;
      }
      else
      {
        *(_DWORD *)a3 = v65 + 8;
        if ( v65 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v65 + 16;
          goto LABEL_83;
        }
        v112 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v112 + 8;
LABEL_83:
      nullsub_1();
      return 1;
    case 16LL:
      v80 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v81 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v81 + 1;
      }
      else
      {
        v81 = (__int64 *)(*(_QWORD *)(a3 + 16) + v80);
        *(_DWORD *)a3 = v80 + 8;
      }
      sub_C4D0(a1, *v81);
      return 1;
    case 17LL:
      v53 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v54 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v54 + 1;
      }
      else
      {
        v54 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v53);
        *(_DWORD *)a3 = v53 + 8;
      }
      sub_BF00(*v54, a7);
      return 1;
    case 19LL:
      v75 = *(_DWORD *)a3;
      if ( v75 > 0x2F )
      {
        v114 = *(_QWORD ***)(a3 + 8);
        v79 = (__int64 *)(v114 + 1);
        *(_QWORD *)(a3 + 8) = v114 + 1;
        v78 = *v114;
      }
      else
      {
        v76 = *(_QWORD *)(a3 + 16);
        v77 = v75 + 8;
        *(_DWORD *)a3 = v77;
        v78 = *(_QWORD **)(v76 + v75);
        if ( (unsigned int)v77 <= 0x2F )
        {
          v79 = (__int64 *)(v77 + v76);
          *(_DWORD *)a3 = v75 + 16;
          goto LABEL_99;
        }
        v79 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v79 + 1;
LABEL_99:
      if ( !(unsigned __int8)sub_BA40(v78, *v79) )
        return -1;
      return 1;
    case 25LL:
      v57 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v58 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v58 + 1;
      }
      else
      {
        v58 = (__int64 *)(*(_QWORD *)(a3 + 16) + v57);
        *(_DWORD *)a3 = v57 + 8;
      }
      v59 = *v58;
      *(_QWORD *)(v59 + 8LL * (38 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v59 + 8LL * (39 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v59 + 8LL * (32 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v59 + 8LL * (35 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v59 + 8LL * (36 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v59 + 8LL * (37 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      return 0;
    case 32LL:
      v28 = *(_DWORD *)a3;
      if ( v28 > 0x2F )
      {
        v120 = *(__int64 **)(a3 + 8);
        v121 = v120 + 1;
        *(_QWORD *)(a3 + 8) = v120 + 1;
        v30 = *v120;
      }
      else
      {
        v29 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v28 + 8;
        v30 = *(_QWORD *)(v29 + v28);
        if ( v28 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v28 + 16;
          goto LABEL_34;
        }
        v121 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v121 + 1;
LABEL_34:
      if ( (unsigned int)sub_A4C0(v30) != 1 )
        return -1;
      return 1;
    case 36LL:
      v26 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v27 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v27 + 1;
      }
      else
      {
        v27 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v26);
        *(_DWORD *)a3 = v26 + 8;
      }
      return (int)sub_A4B0(*v27);
    case 43LL:
      v82 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v83 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v83 + 1;
      }
      else
      {
        v83 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v82);
        *(_DWORD *)a3 = v82 + 8;
      }
      return (int)sub_A540(*v83);
    case 55LL:
      v60 = *(_DWORD *)a3;
      if ( v60 > 0x2F )
      {
        v113 = *(__int64 **)(a3 + 8);
        v64 = (_QWORD **)(v113 + 1);
        *(_QWORD *)(a3 + 8) = v113 + 1;
        v63 = *v113;
      }
      else
      {
        v61 = *(_QWORD *)(a3 + 16);
        v62 = v60 + 8;
        *(_DWORD *)a3 = v62;
        v63 = *(_QWORD *)(v61 + v60);
        if ( (unsigned int)v62 <= 0x2F )
        {
          v64 = (_QWORD **)(v62 + v61);
          *(_DWORD *)a3 = v60 + 16;
          return (int)sub_A4A0(v63, *v64);
        }
        v64 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v64 + 1;
      return (int)sub_A4A0(v63, *v64);
    case 81LL:
      v46 = *(_DWORD *)a3;
      if ( v46 > 0x2F )
      {
        v106 = *(__int64 ***)(a3 + 8);
        v50 = (__int64 *)(v106 + 1);
        *(_QWORD *)(a3 + 8) = v106 + 1;
        v49 = *v106;
      }
      else
      {
        v47 = *(_QWORD *)(a3 + 16);
        v48 = v46 + 8;
        *(_DWORD *)a3 = v48;
        v49 = *(__int64 **)(v47 + v46);
        if ( (unsigned int)v48 <= 0x2F )
        {
          v50 = (__int64 *)(v48 + v47);
          *(_DWORD *)a3 = v46 + 16;
          return (unsigned __int8)sub_9C50(v49, *v50);
        }
        v50 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v50 + 1;
      return (unsigned __int8)sub_9C50(v49, *v50);
    case 86LL:
      v9 = sub_D9C0(*(_QWORD *)(a1 + 16));
      v10 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 248) = v9;
      *(_DWORD *)(v10 + 72) = 5 * (v9 == 2) + 34;
      *(_QWORD *)(a1 + 304) = off_165C0[(unsigned __int8)getinf()];
LABEL_5:
      if ( netnode_qsupstr() > 0 )
        sub_CF40((__int64 *)(a1 + 128), 0);
      return 0;
    case 94LL:
      v51 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v52 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v52 + 1;
      }
      else
      {
        v52 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v51);
        *(_DWORD *)a3 = v51 + 8;
      }
      sub_F640(*v52, a2, (_DWORD)v52, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_17448 && __cxa_guard_acquire(&byte_17448) )
      {
        qword_17410 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_17448);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

