unsigned __int64 __fastcall sub_41760(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // rax
  _DWORD *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  void (__fastcall *v15)(_QWORD *); // rsi
  unsigned __int64 v16; // rdi
  bool v17; // zf
  void (__fastcall *v18)(_QWORD *); // rdx
  void (__fastcall *v19)(_QWORD *); // rax
  _QWORD *v20; // r13
  __int64 v21; // rbp
  void *v22; // rdi
  __int64 v23; // rbp
  _QWORD *v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned __int64 v27; // r13
  _QWORD *v28; // r14
  __int64 v29; // rax
  int v30; // r8d
  _QWORD **v31; // r15
  _QWORD *v32; // r12
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rdx
  void (__fastcall *v36)(_QWORD *); // rdx
  void (__fastcall *v37)(_QWORD *); // rax
  _QWORD *v38; // rdx
  __int64 v39; // rbx
  void *v40; // rdi
  _QWORD *v41; // rbx
  _QWORD *v42; // rbp
  __int64 v43; // rdi
  _QWORD *v44; // rdi
  __int64 *v45; // rsi
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  void (__fastcall *v49)(_QWORD *); // rdx
  void (__fastcall *v50)(_QWORD *); // rax
  _QWORD *v51; // r12
  __int64 v52; // rbp
  void *v53; // rdi
  _QWORD *v54; // rbp
  _QWORD *v55; // r12
  __int64 v56; // rdi
  _QWORD *v57; // rdi
  _DWORD *v58; // rdx
  unsigned __int64 v59; // r14
  __int64 v60; // rbp
  __int64 v61; // rbp
  _QWORD *v62; // rax
  _QWORD *v63; // r12
  __int64 v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // r8
  void *v68; // r9
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  _QWORD *v74; // rax
  _BOOL8 v75; // rdi
  unsigned __int64 i; // r12
  __int64 *v77; // rax
  __int64 v78; // r8
  _QWORD *v79; // r13
  unsigned __int64 v80; // rax
  char *v81; // r15
  __int64 v82; // rsi
  __int64 v83; // r14
  _QWORD *v84; // r12
  __int64 v85; // r15
  __int64 v86; // r14
  __int64 v87; // r9
  unsigned __int64 v88; // rax
  _QWORD *v89; // r10
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rdx
  void (__fastcall *v93)(_QWORD *); // rcx
  void (__fastcall *v94)(_QWORD *); // rax
  _QWORD *v95; // r15
  __int64 v96; // rbx
  _DWORD *v97; // r12
  void *v98; // rdi
  __int64 v99; // r12
  _DWORD *v100; // r15
  _QWORD *v101; // rbx
  __int64 v102; // rdi
  __int64 v103; // rdi
  const char *v104; // rsi
  __int64 *v105; // rax
  __int64 *j; // rdi
  __int64 v107; // rsi
  __int64 v108; // r14
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // r13
  __int64 v113; // r13
  unsigned __int64 v114; // rax
  __int64 v115; // rcx
  void **v116; // rbx
  const char *v117; // rbp
  void **v118; // r12
  const char *v119; // rdi
  char *v120; // rdi
  __int64 v121; // rax
  void *v122; // r9
  __int64 v123; // rsi
  __int64 v124; // rax
  _QWORD *v125; // [rsp+0h] [rbp-C8h]
  void **v126; // [rsp+0h] [rbp-C8h]
  void *v127; // [rsp+0h] [rbp-C8h]
  _QWORD *v128; // [rsp+0h] [rbp-C8h]
  _QWORD *v130; // [rsp+10h] [rbp-B8h]
  _QWORD *v131; // [rsp+10h] [rbp-B8h]
  __int64 v132; // [rsp+10h] [rbp-B8h]
  _QWORD *v133; // [rsp+10h] [rbp-B8h]
  void *v134; // [rsp+10h] [rbp-B8h]
  _QWORD *v135; // [rsp+10h] [rbp-B8h]
  _QWORD *v136; // [rsp+10h] [rbp-B8h]
  _QWORD *v137; // [rsp+18h] [rbp-B0h]
  _QWORD *v138; // [rsp+18h] [rbp-B0h]
  _DWORD *v139; // [rsp+18h] [rbp-B0h]
  _QWORD *v140; // [rsp+18h] [rbp-B0h]
  _DWORD *v141; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v142; // [rsp+18h] [rbp-B0h]
  __int64 v143; // [rsp+18h] [rbp-B0h]
  _DWORD *v144; // [rsp+28h] [rbp-A0h] BYREF
  void (__fastcall *v145)(_QWORD *); // [rsp+30h] [rbp-98h] BYREF
  __int128 v146; // [rsp+38h] [rbp-90h]
  __int64 v147; // [rsp+50h] [rbp-78h] BYREF
  void *v148[2]; // [rsp+58h] [rbp-70h] BYREF
  void **v149; // [rsp+68h] [rbp-60h]
  void **v150; // [rsp+70h] [rbp-58h]
  __int64 v151; // [rsp+78h] [rbp-50h]
  unsigned __int64 v152; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v3 = a1[14];
  v152 = __readfsqword(0x28u);
  v4 = (__int64 *)a1[13];
  v5 = &v4[v3];
  while ( v5 != v4 )
  {
    v6 = *v4++;
    sub_41760(v6, a2);
  }
  v145 = nullptr;
  v146 = 0;
  v2[12] = get_idati();
  v7 = v2[36];
  v8 = v7 + v2[39];
  if ( *((_QWORD *)&v146 + 1) < v8 )
  {
    v145 = (void (__fastcall *)(_QWORD *))qvector_reserve(&v145, v145, v8, 8);
    v7 = v2[36];
  }
  v9 = 0;
  if ( v7 )
  {
    do
    {
      v10 = (_QWORD *)(v2[35] + 264 * v9);
      v11 = operator new(0xA8u);
      v12 = (_DWORD *)v10[27];
      v13 = v11;
      v144 = v12;
      if ( v12 )
        ++v12[2];
      sub_3F4A0(v11, (__int64)v2, *(_QWORD *)(*v10 + 24LL), (__int64 *)&v144, v9, 17);
      v14 = v146;
      v15 = v145;
      v147 = v13;
      v16 = v146 + 1;
      if ( &v147 < (__int64 *)v145 || &v147 >= (__int64 *)v145 + *((_QWORD *)&v146 + 1) )
      {
        if ( *((_QWORD *)&v146 + 1) >= v16 )
          goto LABEL_11;
      }
      else if ( *((_QWORD *)&v146 + 1) >= v16 )
      {
        goto LABEL_11;
      }
      v145 = (void (__fastcall *)(_QWORD *))qvector_reserve(&v145, v145, v146 + 1, 8);
      v15 = v145;
      v14 = v146;
LABEL_11:
      *((_QWORD *)v15 + v14) = v13;
      *(_QWORD *)&v146 = v146 + 1;
      if ( v12 )
      {
        v17 = v12[2]-- == 1;
        if ( v17 )
        {
          v18 = **(void (__fastcall ***)(_QWORD *))v12;
          if ( v18 == sub_15E30 )
          {
            v19 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v12 + 16LL);
            if ( v19 == sub_15D70 )
            {
              v20 = *((_QWORD **)v12 + 16);
              *(_QWORD *)v12 = &off_C71D8;
              if ( v20 )
              {
                v21 = v20[2];
                while ( v21 )
                {
                  sub_293E0(*(_QWORD **)(v21 + 24));
                  v22 = (void *)v21;
                  v21 = *(_QWORD *)(v21 + 16);
                  operator delete(v22, 0x30u);
                }
                operator delete(v20, 0x30u);
              }
              v23 = *((_QWORD *)v12 + 19);
              while ( v23 )
              {
                v24 = (_QWORD *)v23;
                sub_29E10(*(_QWORD **)(v23 + 24));
                v25 = *(_QWORD *)(v23 + 32);
                v23 = *(_QWORD *)(v23 + 16);
                if ( v25 )
                {
                  v24[5] = 0;
                  qfree(v25);
                }
                operator delete(v24, 0x48u);
              }
              v26 = *((_QWORD *)v12 + 12);
              if ( v26 )
              {
                *((_QWORD *)v12 + 13) = 0;
                qfree(v26);
              }
              operator delete(v12, 0xC0u);
            }
            else
            {
              v19(v12);
            }
          }
          else
          {
            v18(v12);
          }
        }
      }
      ++v9;
    }
    while ( v9 < v2[36] );
  }
  v27 = 0;
  v125 = v2 + 53;
  while ( v27 < v2[39] )
  {
    v28 = (_QWORD *)(v2[38] + 264 * v27);
    v29 = operator new(0xA8u);
    v30 = *((_DWORD *)v2 + 72);
    v31 = (_QWORD **)v28[27];
    v32 = (_QWORD *)v29;
    v144 = v31;
    v33 = v27 + v30;
    if ( v31 )
    {
      v34 = *((_DWORD *)v31 + 2);
      *((_DWORD *)v31 + 2) = v34 + 1;
      v35 = *(_QWORD *)(*v28 + 24LL);
      v147 = (__int64)v31;
      *((_DWORD *)v31 + 2) = v34 + 2;
      sub_3F4A0((__int64)v32, (__int64)v2, v35, &v147, v33, 65);
      v17 = (*((_DWORD *)v31 + 2))-- == 1;
      if ( v17 )
      {
        v36 = (void (__fastcall *)(_QWORD *))**v31;
        if ( v36 == sub_15E30 )
        {
          v37 = (void (__fastcall *)(_QWORD *))(*v31)[2];
          if ( v37 == sub_15D70 )
          {
            v38 = v31[16];
            *v31 = &off_C71D8;
            if ( v38 )
            {
              if ( v38[2] )
              {
                v130 = v38;
                v137 = v2;
                v39 = v38[2];
                do
                {
                  sub_293E0(*(_QWORD **)(v39 + 24));
                  v40 = (void *)v39;
                  v39 = *(_QWORD *)(v39 + 16);
                  operator delete(v40, 0x30u);
                }
                while ( v39 );
                v38 = v130;
                v2 = v137;
              }
              operator delete(v38, 0x30u);
            }
            if ( v31[19] )
            {
              v131 = v2;
              v41 = v31[19];
              do
              {
                v42 = v41;
                sub_29E10((_QWORD *)v41[3]);
                v43 = v41[4];
                v41 = (_QWORD *)v41[2];
                if ( v43 )
                {
                  v42[5] = 0;
                  qfree(v43);
                }
                operator delete(v42, 0x48u);
              }
              while ( v41 );
              v2 = v131;
            }
            v44 = v31[12];
            if ( v44 )
            {
              v31[13] = nullptr;
              qfree(v44);
            }
            operator delete(v31, 0xC0u);
          }
          else
          {
            v37(v31);
          }
        }
        else
        {
          v36(v31);
        }
      }
    }
    else
    {
      v92 = *(_QWORD *)(*v28 + 24LL);
      v147 = 0;
      sub_3F4A0(v29, (__int64)v2, v92, &v147, v33, 65);
    }
    v45 = (__int64 *)v145;
    v46 = *((_QWORD *)&v146 + 1);
    v147 = (__int64)v32;
    *v32 = &off_C7A10;
    v47 = v146;
    v48 = v146 + 1;
    if ( &v147 < v45 || &v147 >= &v45[v46] )
    {
      if ( v46 < v48 )
      {
LABEL_110:
        v145 = (void (__fastcall *)(_QWORD *))qvector_reserve(&v145, v45, v146 + 1, 8);
        v45 = (__int64 *)v145;
        v47 = v146;
      }
    }
    else if ( v46 < v48 )
    {
      goto LABEL_110;
    }
    v45[v47] = (__int64)v32;
    *(_QWORD *)&v146 = v146 + 1;
    if ( v31 )
    {
      v17 = (*((_DWORD *)v31 + 2))-- == 1;
      if ( v17 )
      {
        v49 = (void (__fastcall *)(_QWORD *))**v31;
        if ( v49 == sub_15E30 )
        {
          v50 = (void (__fastcall *)(_QWORD *))(*v31)[2];
          if ( v50 == sub_15D70 )
          {
            v51 = v31[16];
            *v31 = &off_C71D8;
            if ( v51 )
            {
              v52 = v51[2];
              while ( v52 )
              {
                sub_293E0(*(_QWORD **)(v52 + 24));
                v53 = (void *)v52;
                v52 = *(_QWORD *)(v52 + 16);
                operator delete(v53, 0x30u);
              }
              operator delete(v51, 0x30u);
            }
            v54 = v31[19];
            while ( v54 )
            {
              v55 = v54;
              sub_29E10((_QWORD *)v54[3]);
              v56 = v54[4];
              v54 = (_QWORD *)v54[2];
              if ( v56 )
              {
                v55[5] = 0;
                qfree(v56);
              }
              operator delete(v55, 0x48u);
            }
            v57 = v31[12];
            if ( v57 )
            {
              v31[13] = nullptr;
              qfree(v57);
            }
            v45 = (_QWORD *)off_C0;
            operator delete(v31, 0xC0u);
          }
          else
          {
            v50(v31);
          }
        }
        else
        {
          v49(v31);
        }
      }
    }
    v58 = (_DWORD *)v28[27];
    v59 = *((_QWORD *)v58 + 6);
    if ( !v59 )
      goto LABEL_86;
    if ( v58 )
    {
      v60 = *((_QWORD *)v58 + 9);
      v132 = *((_QWORD *)v58 + 7);
      if ( !v58[2] )
      {
        v45 = (__int64 *)sub_15E30;
        v93 = **(void (__fastcall ***)(_QWORD *))v58;
        if ( v93 == sub_15E30 )
        {
          v94 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v58 + 16LL);
          if ( v94 == sub_15D70 )
          {
            v95 = *((_QWORD **)v58 + 16);
            *(_QWORD *)v58 = &off_C71D8;
            if ( v95 )
            {
              if ( v95[2] )
              {
                v138 = v2;
                v96 = v95[2];
                v97 = v58;
                do
                {
                  sub_293E0(*(_QWORD **)(v96 + 24));
                  v98 = (void *)v96;
                  v96 = *(_QWORD *)(v96 + 16);
                  operator delete(v98, 0x30u);
                }
                while ( v96 );
                v2 = v138;
                v58 = v97;
              }
              v139 = v58;
              operator delete(v95, 0x30u);
              v58 = v139;
            }
            v99 = *((_QWORD *)v58 + 19);
            if ( v99 )
            {
              v140 = v2;
              v100 = v58;
              do
              {
                v101 = (_QWORD *)v99;
                sub_29E10(*(_QWORD **)(v99 + 24));
                v102 = *(_QWORD *)(v99 + 32);
                v99 = *(_QWORD *)(v99 + 16);
                if ( v102 )
                {
                  v101[5] = 0;
                  qfree(v102);
                }
                operator delete(v101, 0x48u);
              }
              while ( v99 );
              v2 = v140;
              v58 = v100;
            }
            v103 = *((_QWORD *)v58 + 12);
            if ( v103 )
            {
              *((_QWORD *)v58 + 13) = 0;
              v141 = v58;
              qfree(v103);
              v58 = v141;
            }
            v45 = (_QWORD *)off_C0;
            operator delete(v58, 0xC0u);
          }
          else
          {
            v94(v58);
          }
        }
        else
        {
          v93(v58);
        }
      }
      v61 = v132 + v60;
    }
    else
    {
      v61 = 0x1C001D00400009LL;
    }
    v62 = (_QWORD *)v2[54];
    v63 = v125;
    if ( !v62 )
      goto LABEL_147;
    do
    {
      while ( 1 )
      {
        v64 = v62[2];
        v65 = v62[3];
        if ( v62[4] < v59 )
          break;
        v63 = v62;
        v62 = (_QWORD *)v62[2];
        if ( !v64 )
          goto LABEL_74;
      }
      v62 = (_QWORD *)v62[3];
    }
    while ( v65 );
LABEL_74:
    if ( v125 == v63 )
    {
LABEL_147:
      v110 = (_QWORD *)operator new(0x38u);
      v110[4] = v59;
      v68 = v110;
      v110[5] = 0;
      v110[6] = 0;
      if ( !v2[57] || (v70 = v2[56], v63 = nullptr, *(_QWORD *)(v70 + 32) >= v59) )
      {
LABEL_79:
        v134 = v68;
        v74 = sub_28540((__int64)(v2 + 52), v59, v70, v72, v73);
        v68 = v134;
        v63 = v74;
      }
LABEL_80:
      if ( !v70 )
        goto LABEL_133;
      if ( v63 || (_QWORD *)v70 == v125 )
      {
        v75 = 1;
LABEL_84:
        v135 = v68;
        std::_Rb_tree_insert_and_rebalance(v75, v68, v70, v125);
        ++v2[57];
        v63 = v135;
        goto LABEL_85;
      }
      v69 = *(_QWORD *)(v70 + 32);
LABEL_186:
      v75 = v59 < v69;
      goto LABEL_84;
    }
    if ( v59 < v63[4] )
    {
      v66 = (_QWORD *)operator new(0x38u);
      v66[4] = v59;
      v68 = v66;
      v66[5] = 0;
      v66[6] = 0;
      v69 = v63[4];
      if ( v59 < v69 )
      {
        v70 = (unsigned __int64)v63;
        if ( (_QWORD *)v2[55] != v63 )
        {
          v133 = v66;
          v71 = std::_Rb_tree_decrement(v63, v45, v63, v69, v67);
          v68 = v133;
          v70 = v71;
          if ( *(_QWORD *)(v71 + 32) >= v59 )
            goto LABEL_79;
          if ( *(_QWORD *)(v71 + 24) )
            v70 = (unsigned __int64)v63;
          else
            v63 = nullptr;
        }
        goto LABEL_80;
      }
      if ( v69 >= v59 )
        goto LABEL_133;
      if ( (_QWORD *)v2[56] != v63 )
      {
        v136 = v66;
        v142 = v63[4];
        v111 = std::_Rb_tree_increment(v63);
        v68 = v136;
        v70 = v111;
        if ( v59 >= *(_QWORD *)(v111 + 32) )
          goto LABEL_79;
        v69 = v142;
        if ( v63[3] )
        {
          v63 = (_QWORD *)v111;
          goto LABEL_80;
        }
      }
      v70 = (unsigned __int64)v63;
      if ( !v63 )
      {
LABEL_133:
        if ( v68 )
          operator delete(v68, 0x38u);
        goto LABEL_85;
      }
      goto LABEL_186;
    }
LABEL_85:
    v63[5] = v61;
    v63[6] = v2;
LABEL_86:
    ++v27;
  }
  (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 8LL))(a2, "Types (Pass 0):  0%%");
  (**(void (__fastcall ***)(__int64))a2)(a2);
  for ( i = 0; i < (unsigned __int64)v146; ++i )
  {
    v77 = (__int64 *)((char *)v145 + 8 * i);
    v78 = *(_QWORD *)(*v77 + 104);
    *(_OWORD *)v148 = 0;
    v147 = 0;
    sub_3F580((__int64)v2, *v77, 17, (__int64)&v147, v78);
    if ( v147 )
    {
      v148[0] = nullptr;
      qfree(v147);
    }
  }
  v79 = (_QWORD *)v2[18];
  v80 = v79[14];
  if ( v80 )
  {
    if ( v79[17] < v80 / 0x32 )
      v79[15] = qvector_reserve(v79 + 15, v79[15], v80 / 0x32, 8);
    v81 = (char *)&off_CA740;
    do
    {
      v82 = *(_QWORD *)v81;
      v147 = 0x7E83B8DEDDE45EC6LL;
      v81 += 32;
      *((_QWORD *)v81 - 3) = *(_QWORD *)sub_85730(&v147, v82);
    }
    while ( &byte_CABC0 != v81 );
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 8LL))(a2, "Preloading");
    v83 = v79[12];
    v84 = v79 + 10;
    if ( v79 + 10 == (_QWORD *)v83 )
    {
      LODWORD(v148[0]) = 0;
      v148[1] = nullptr;
      v149 = v148;
      v150 = v148;
      v151 = 0;
    }
    else
    {
      do
      {
        sub_34C40(*(_QWORD *)(v83 + 48));
        v83 = std::_Rb_tree_increment(v83);
      }
      while ( v84 != (_QWORD *)v83 );
      v85 = v79[12];
      LODWORD(v148[0]) = 0;
      v148[1] = nullptr;
      v149 = v148;
      v150 = v148;
      v151 = 0;
      if ( v84 != (_QWORD *)v85 )
      {
        v86 = 8912900;
        do
        {
          v87 = *(_QWORD *)(v85 + 48);
          v88 = *(unsigned __int16 *)(v87 + 140);
          if ( (_WORD)v88 == 22 )
          {
            v89 = (_QWORD *)v2[18];
            v90 = v89[16];
            v91 = v89[15];
            if ( v89[17] < (unsigned __int64)(v90 + 1) )
            {
              v143 = *(_QWORD *)(v85 + 48);
              v128 = (_QWORD *)v2[18];
              v124 = qvector_reserve(v89 + 15, v91, v90 + 1, 8);
              v89 = v128;
              v91 = v124;
              v87 = v143;
              v128[15] = v124;
              v90 = v128[16];
            }
            *(_QWORD *)(v91 + 8 * v90) = v87;
            ++v89[16];
            v88 = *(unsigned __int16 *)(v87 + 140);
          }
          if ( (unsigned __int16)v88 <= 0x17u
            && _bittest64(&v86, v88)
            && (*(_BYTE *)(v87 + 143) & 2) != 0
            && !*(_QWORD *)(v87 + 96)
            && *(_QWORD *)(v87 + 48) > 1u )
          {
            v127 = (void *)v87;
            v120 = (char *)sub_414E0(&v147, v87 + 40);
            v121 = *((_QWORD *)v120 + 1);
            v122 = v127;
            v123 = *(_QWORD *)v120;
            if ( *((_QWORD *)v120 + 2) < (unsigned __int64)(v121 + 1) )
            {
              v123 = qvector_reserve(v120, v123, v121 + 1, 8);
              v122 = v127;
              *(_QWORD *)v120 = v123;
              v121 = *((_QWORD *)v120 + 1);
            }
            *(_QWORD *)(v123 + 8 * v121) = v122;
            ++*((_QWORD *)v120 + 1);
          }
          v85 = std::_Rb_tree_increment(v85);
        }
        while ( v84 != (_QWORD *)v85 );
        v112 = v79[12];
        v126 = (void **)v148[1];
        if ( v85 != v112 )
        {
          v108 = v112;
          do
          {
            v113 = *(_QWORD *)(v108 + 48);
            v114 = *(unsigned __int16 *)(v113 + 140);
            if ( (unsigned __int16)v114 <= 0x17u )
            {
              v115 = 8912900;
              if ( _bittest64(&v115, v114) )
              {
                if ( (*(_BYTE *)(v113 + 143) & 2) == 0 && *(_QWORD *)(v113 + 48) > 1u )
                {
                  v116 = v126;
                  if ( v126 )
                  {
                    v117 = *(const char **)(v113 + 40);
                    v118 = v148;
                    do
                    {
                      v119 = src;
                      if ( v116[5] )
                        v119 = (const char *)v116[4];
                      if ( strcmp(v119, v117) >= 0 )
                      {
                        v118 = v116;
                        v116 = (void **)v116[2];
                      }
                      else
                      {
                        v116 = (void **)v116[3];
                      }
                    }
                    while ( v116 );
                    if ( v118 != v148 )
                    {
                      v104 = src;
                      if ( v118[5] )
                        v104 = (const char *)v118[4];
                      if ( strcmp(v117, v104) >= 0 )
                      {
                        v105 = (__int64 *)v118[7];
                        for ( j = &v105[(_QWORD)v118[8]]; v105 != j; *(_QWORD *)(v107 + 96) = v113 )
                          v107 = *v105++;
                      }
                    }
                  }
                }
              }
            }
            v108 = std::_Rb_tree_increment(v108);
          }
          while ( v85 != v108 );
        }
        sub_288E0(v126);
        goto LABEL_143;
      }
    }
    sub_288E0(nullptr);
LABEL_143:
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 8LL))(a2, "Types (Pass 0): 0%%");
    (**(void (__fastcall ***)(__int64))a2)(a2);
  }
  if ( v145 )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v145);
  }
  return v152 - __readfsqword(0x28u);
}

