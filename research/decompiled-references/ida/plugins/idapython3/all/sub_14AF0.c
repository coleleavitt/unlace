__int64 __fastcall sub_14AF0(__int64 *a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // r12
  __int64 *v11; // rcx
  __int64 *v12; // rax
  char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r12
  size_t v16; // r13
  void *v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // r13d
  int v21; // eax
  __int64 v22; // rdi
  size_t v23; // rbp
  __int64 v24; // rax
  const void *v25; // r12
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rdx
  char *v32; // rsi
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rbp
  unsigned __int64 v38; // rbp
  char *v39; // r12
  void *v40; // rax
  __int64 v41; // rax
  _BOOL8 v42; // rbp
  char *p_src; // rsi
  __int64 *v44; // rdi
  __int64 *v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  size_t v58; // rdi
  __int64 v59; // rdi
  int v60; // esi
  size_t v61; // rax
  size_t v62; // r13
  __int64 *v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  size_t v74; // r13
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  size_t v79; // rdi
  size_t v80; // r12
  void *v81; // r13
  char *v82; // rsi
  size_t v83; // r14
  unsigned int v84; // eax
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rbp
  char *v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r15
  size_t v97; // rdi
  __int64 v98; // r12
  __int64 *v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // rdi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int128 *v110; // rdi
  __int64 v111; // rbp
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  char *v128; // r12
  size_t v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  char *v135; // r12
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  char *v141; // rdi
  __int64 v142; // rax
  __int64 *v143; // r13
  __int64 v144; // rax
  size_t v145; // r10
  size_t v146; // rdx
  char *v147; // rax
  __int64 v148; // [rsp+0h] [rbp-4C8h]
  __int64 *v149; // [rsp+0h] [rbp-4C8h]
  __int64 v150; // [rsp+0h] [rbp-4C8h]
  __int64 v151; // [rsp+8h] [rbp-4C0h]
  __int64 v152; // [rsp+8h] [rbp-4C0h]
  __int64 *v153; // [rsp+8h] [rbp-4C0h]
  void *v154; // [rsp+10h] [rbp-4B8h]
  const void *v155; // [rsp+10h] [rbp-4B8h]
  void *v156; // [rsp+18h] [rbp-4B0h]
  __int64 v157; // [rsp+18h] [rbp-4B0h]
  size_t v158; // [rsp+20h] [rbp-4A8h]
  size_t v159; // [rsp+28h] [rbp-4A0h]
  void *src; // [rsp+30h] [rbp-498h] BYREF
  size_t n; // [rsp+38h] [rbp-490h] BYREF
  char *s; // [rsp+40h] [rbp-488h] BYREF
  __int128 v163; // [rsp+48h] [rbp-480h]
  char v164[8]; // [rsp+60h] [rbp-468h] BYREF
  __int128 v165; // [rsp+68h] [rbp-460h] BYREF
  __int64 v166; // [rsp+78h] [rbp-450h]
  unsigned __int64 v167; // [rsp+488h] [rbp-40h]

  v7 = (__int64 *)*a4;
  v8 = a4[1];
  v167 = __readfsqword(0x28u);
  v10 = *a1;
  v11 = &v7[v8];
  if ( v7 != v11 )
  {
    v12 = v7;
    while ( v10 != *v12 )
    {
      if ( v11 == ++v12 )
        goto LABEL_10;
    }
    if ( v12 != v11 )
    {
      v163 = 0;
      s = nullptr;
      sub_14130((__int64 *)&s);
      v13 = s;
      if ( (_QWORD)v163 )
      {
        if ( !s )
        {
          *(_BYTE *)a2 = 7;
          *(_QWORD *)(a2 + 8) = 0;
          *(_OWORD *)(a2 + 16) = 0;
          return 1;
        }
        v14 = strlen(s);
        *(_BYTE *)a2 = 7;
        *(_QWORD *)(a2 + 8) = 0;
        v15 = v14;
        *(_OWORD *)(a2 + 16) = 0;
        if ( !v14 )
          goto LABEL_25;
        v16 = v14 + 1;
        v17 = (void *)qvector_reserve();
        *(_QWORD *)(a2 + 8) = v17;
        *(_QWORD *)(a2 + 16) = v16;
        memmove(v17, v13, v15);
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + v15) = 0;
        v13 = s;
      }
      else
      {
        *(_BYTE *)a2 = 7;
        *(_QWORD *)(a2 + 8) = 0;
        *(_OWORD *)(a2 + 16) = 0;
      }
      if ( v13 )
      {
LABEL_25:
        *(_QWORD *)&v163 = 0;
        qfree();
        return 1;
      }
      return 1;
    }
  }
LABEL_10:
  if ( a4[2] < (unsigned __int64)(v8 + 1) )
  {
    v27 = qvector_reserve();
    v28 = a4[1];
    *a4 = v27;
    v11 = (__int64 *)(v27 + 8 * v28);
  }
  *v11 = v10;
  ++a4[1];
  v18 = *a1;
  if ( !*a1 || *(_QWORD *)(qword_24798 + 1136) == v18 )
  {
    free_idcv();
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = 0;
    return 1;
  }
  if ( (unsigned __int8)PyW_GetNumberAsIDC(v18, a2) )
    return 1;
  v21 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(*a1 + 8));
  v22 = *a1;
  if ( (v21 & 0x8000000) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 320))(v22);
    v24 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 296))(*a1);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v25 = (const void *)v24;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v23 )
    {
      v26 = nullptr;
      if ( v23 != -1 )
      {
        v41 = qvector_reserve();
        *(_QWORD *)(a2 + 8) = v41;
        v26 = (void *)v41;
      }
      *(_QWORD *)(a2 + 16) = v23 + 1;
      memmove(v26, v25, v23);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v23) = 0;
    }
    return 1;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(v22 + 8));
  v30 = *a1;
  if ( (v29 & 0x10000000) != 0 )
  {
    s = nullptr;
    v163 = 0;
    v36 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 944))(v30);
    v37 = v36;
    if ( v36 )
    {
      src = nullptr;
      n = 0;
      if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v36, &src, &n) >= 0 )
      {
        v80 = n;
        v81 = src;
        *(_QWORD *)&v163 = 0;
        v82 = s;
        v83 = n + 1;
        if ( *((_QWORD *)&v163 + 1) < n + 1 )
        {
          s = (char *)qvector_reserve();
          v82 = s;
        }
        *(_QWORD *)&v163 = v83;
        v82[v80] = 0;
        memmove(s, v81, v80);
      }
      (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v37);
    }
    v38 = v163;
    v39 = s;
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v38 >= 2 )
    {
      v40 = (void *)qvector_reserve();
      *(_QWORD *)(a2 + 8) = v40;
      *(_QWORD *)(a2 + 16) = v38;
      memmove(v40, v39, v38 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v38 - 1) = 0;
      v39 = s;
    }
    if ( v39 )
    {
      *(_QWORD *)&v163 = 0;
      qfree();
    }
    return 1;
  }
  v31 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(qword_24798 + 1056) == v31 )
  {
    v42 = *(_QWORD *)(qword_24798 + 1144) == v30;
    free_idcv();
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v42;
    return 1;
  }
  if ( v31 == *(_QWORD *)(qword_24798 + 1096) )
  {
    s = COERCE_CHAR_((*(double (**)(void))(qword_24798 + 504))());
    ieee_realcvt();
    *(_BYTE *)a2 = 3;
    return 1;
  }
  v32 = "$valid$";
  v33 = (*(__int64 (__fastcall **)(__int64, const char *))(qword_24798 + 344))(v30, "$valid$");
  v34 = *a1;
  if ( v33 )
  {
    v35 = (*(__int64 (__fastcall **)(__int64, const char *))(qword_24798 + 336))(v34, "$valid$");
    free_idcv();
    *(_BYTE *)a2 = 8;
    *(_QWORD *)(a2 + 8) = v35;
    return 1;
  }
  if ( *(_QWORD *)(qword_24798 + 1104) != *(_QWORD *)(v34 + 8) && !(unsigned __int8)PyW_IsSequenceType() )
  {
    if ( ((*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(*a1 + 8)) & 0x20000000) != 0 )
    {
      LODWORD(v91) = 0;
      idcv_object();
      v149 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(qword_24798 + 376))(*a1, 0);
      s = nullptr;
      v163 = 0;
      v152 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 856))(v149);
      v96 = 0;
      if ( v152 > 0 )
      {
        while ( 1 )
        {
          v98 = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 584))(v149, v96);
          v99 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(qword_24798 + 840))(v98, 0);
          n = (*(__int64 (__fastcall **)(__int64, __int64))(qword_24798 + 840))(v98, 1);
          PyW_ObjectToString(v99, &s);
          v91 = v164;
          v164[0] = 2;
          v166 = 0;
          v165 = 0;
          if ( (int)sub_15BD0(&n, v164, a3, a4) <= 0 )
            break;
          v91 = (char *)::src;
          if ( (_QWORD)v163 )
            v91 = s;
          set_idcv_attr();
          free_idcv();
          v97 = n;
          if ( n )
          {
            if ( *(__int64 *)n <= 0 )
            {
              sub_6C20(n, (int)v91, v92, v93, v94, v95, (char)v149);
LABEL_113:
              sub_6C20(v97, (int)v91, v92, v93, v94, v95, (char)v149);
            }
            (*(void (__fastcall **)(size_t, char *))(qword_24798 + 984))(n, v91);
          }
          if ( v99 )
          {
            if ( *v99 <= 0 )
              goto LABEL_113;
            (*(void (__fastcall **)(__int64 *, char *))(qword_24798 + 984))(v99, v91);
          }
          if ( ++v96 == v152 )
            goto LABEL_114;
        }
        free_idcv();
        sub_6DF0((__int64 *)n, (int)v164, v100, v101, v102, v103);
        v104 = v99;
        v19 = -1;
        sub_6DF0(v104, (int)v164, v105, v106, v107, v108);
      }
      else
      {
LABEL_114:
        v19 = 1;
      }
      if ( s )
      {
        *(_QWORD *)&v163 = 0;
        qfree();
      }
      sub_6DF0(v149, (int)v91, v92, v93, v94, v95);
      return v19;
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(qword_24798 + 328))(*a1) )
    {
      free_idcv();
      *(_BYTE *)a2 = 6;
      *(_DWORD *)(a2 + 8) = -1;
      return 1;
    }
    v84 = sub_C290(*a1);
    v19 = v84;
    switch ( v84 )
    {
      case 1u:
        if ( !a3 )
          return (unsigned int)-1;
        v85 = *a1;
        PyW_TryGetAttrString(&s, *a1, "__idc_cvt_value__");
        if ( s && (qsnprintf(), v85 = add_idc_gvar(), (int)sub_15BD0(&s, v85, a3, a4) > 0) )
        {
          ++*a3;
          create_idcv_ref();
        }
        else
        {
          v19 = -1;
        }
LABEL_91:
        sub_6DF0((__int64 *)s, v85, v86, v87, v88, v89);
        return v19;
      case 2u:
        find_idc_class();
        if ( !(unsigned int)idcv_object() )
        {
          v109 = 6;
          v164[0] = 2;
          v110 = &v165;
          while ( v109 )
          {
            *(_DWORD *)v110 = 0;
            v110 = (__int128 *)((char *)v110 + 4);
            --v109;
          }
          free_idcv();
          v164[0] = 2;
          *(_QWORD *)&v165 = 2;
          set_idcv_attr();
          if ( *a1 )
            (*(void (__fastcall **)(__int64, const char *))(qword_24798 + 1008))(*a1, "__idc_cvt_id__");
          v111 = *a1;
          free_idcv();
          v164[0] = 8;
          *(_QWORD *)&v165 = v111;
          set_idcv_attr();
          free_idcv();
          return v19;
        }
        return (unsigned int)-1;
      case 0u:
        v85 = *a1;
        PyW_TryGetAttrString(&s, *a1, "__idc_cvt_value__");
        if ( s )
        {
          v90 = (*(__int64 (**)(void))(qword_24798 + 632))();
          free_idcv();
          *(_BYTE *)a2 = 9;
          v19 = 1;
          *(_QWORD *)(a2 + 8) = v90;
        }
        goto LABEL_91;
    }
    v153 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(qword_24798 + 752))(*a1);
    v157 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 616))(v153);
    if ( !v153 || ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v153[1]) & 0x2000000) == 0 || !v157 )
      goto LABEL_125;
    LODWORD(p_src) = 0;
    idcv_object();
    v150 = 0;
    if ( v157 <= 0 )
    {
LABEL_168:
      sub_6DF0(v153, (int)p_src, v120, v121, v122, v123);
      return 1;
    }
    while ( 1 )
    {
      LODWORD(p_src) = v150;
      v142 = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 584))(v153, v150);
      v143 = (__int64 *)v142;
      if ( v142 )
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v142);
      s = nullptr;
      v163 = 0;
      v144 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 944))(v143);
      v135 = (char *)v144;
      if ( v144 )
        break;
      while ( 1 )
      {
        v128 = s;
        v155 = s;
        if ( !s )
          goto LABEL_165;
        v129 = strlen(s);
        if ( v129 > 2 && *v128 == 95 && v128[1] == 95 )
        {
          p_src = "__";
          if ( !strncmp(&v128[v129 - 2], "__", 2u) )
          {
            *(_QWORD *)&v163 = 0;
            qfree();
LABEL_165:
            sub_6DF0(v143, (int)p_src, v124, v125, v126, v127);
            break;
          }
        }
        v164[0] = 2;
        v130 = *a1;
        LODWORD(v32) = (_DWORD)v155;
        v165 = 0;
        v166 = 0;
        n = (*(__int64 (__fastcall **)(__int64, const void *))(qword_24798 + 760))(v130, v155);
        v135 = v164;
        if ( !n || (v32 = v164, (int)sub_15BD0(&n, v164, a3, a4) <= 0) )
        {
          sub_6DF0((__int64 *)n, (int)v32, v131, v132, v133, v134);
          free_idcv();
          if ( s )
          {
            *(_QWORD *)&v163 = 0;
            qfree();
          }
          sub_6DF0(v143, (int)v32, v112, v113, v114, v115);
LABEL_125:
          sub_6DF0(v153, (int)v32, v116, v117, v118, v119);
          return (unsigned int)-1;
        }
        LODWORD(p_src) = (_DWORD)v155;
        set_idcv_attr();
        v44 = (__int64 *)n;
        if ( n )
        {
          if ( *(__int64 *)n <= 0 )
          {
            sub_6C20(n, (int)v155, v136, v137, v138, v139, v150);
LABEL_170:
            sub_6C20((__int64)v44, (int)p_src, v50, v51, v52, v53, v148);
            goto LABEL_171;
          }
          (*(void (__fastcall **)(size_t, const void *))(qword_24798 + 984))(n, v155);
        }
        free_idcv();
        v141 = s;
        if ( s )
        {
          *(_QWORD *)&v163 = 0;
          qfree();
        }
        if ( !v143 )
          break;
        if ( *v143 > 0 )
        {
          (*(void (__fastcall **)(__int64 *, const void *))(qword_24798 + 984))(v143, v155);
          break;
        }
        sub_6C20((__int64)v141, (int)v155, v140, v121, v122, v123, v150);
LABEL_167:
        v159 = v145;
        v158 = v146;
        v147 = (char *)qvector_reserve();
        v145 = v159;
        v146 = v158;
        s = v147;
LABEL_163:
        LODWORD(p_src) = (_DWORD)v155;
        *(_QWORD *)&v163 = v146;
        s[v145] = 0;
        memmove(s, v155, v145);
LABEL_141:
        (*(void (__fastcall **)(char *))(qword_24798 + 984))(v135);
      }
      ++v150;
      v120 = v157;
      if ( v150 == v157 )
        goto LABEL_168;
    }
    p_src = (char *)&src;
    src = nullptr;
    n = 0;
    if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v144, &src, &n) >= 0 )
    {
      v145 = n;
      *(_QWORD *)&v163 = 0;
      v146 = n + 1;
      v155 = src;
      if ( *((_QWORD *)&v163 + 1) < n + 1 )
        goto LABEL_167;
      goto LABEL_163;
    }
    goto LABEL_141;
  }
  idcv_object();
  v156 = *(void **)(*a1 + 8);
  v154 = *(void **)(qword_24798 + 1104);
  if ( v154 == v156 )
    v151 = (*(__int64 (**)(void))(qword_24798 + 616))();
  else
    v151 = (*(__int64 (**)(void))(qword_24798 + 856))();
  s = nullptr;
  v163 = 0;
  if ( v151 <= 0 )
    return 1;
  v148 = 0;
  while ( 1 )
  {
    n = 0;
    v59 = *a1;
    v60 = v148;
    if ( v154 == v156 )
    {
      v73 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_24798 + 584))(v59, v148);
      v63 = (__int64 *)v73;
      if ( v73 )
      {
        (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v73);
        v74 = n;
        v64 = (__int64)v63;
        n = (size_t)v63;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v63);
        if ( v74 )
        {
          v64 = v74;
          (*(void (__fastcall **)(size_t))(qword_24798 + 984))(v74);
        }
        if ( *v63 <= 0 )
          goto LABEL_135;
LABEL_61:
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v63);
        goto LABEL_62;
      }
      v79 = n;
      n = 0;
      if ( v79 )
        (*(void (**)(void))(qword_24798 + 984))();
    }
    else
    {
      v61 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_24798 + 840))(v59, v148);
      v62 = n;
      v63 = (__int64 *)v61;
      n = v61;
      if ( v61 )
      {
        v64 = v61;
        (*(void (__fastcall **)(size_t))(qword_24798 + 1008))(v61);
        if ( v62 )
        {
          v64 = v62;
          (*(void (__fastcall **)(size_t))(qword_24798 + 984))(v62);
        }
        if ( *v63 <= 0 )
        {
          sub_6C20(v64, v148, v65, v66, v67, v68, v148);
LABEL_135:
          sub_6C20(v64, v60, v75, v76, v77, v78, v148);
        }
        goto LABEL_61;
      }
      if ( v62 )
        (*(void (__fastcall **)(size_t))(qword_24798 + 984))(v62);
    }
LABEL_62:
    p_src = v164;
    v164[0] = 2;
    v166 = 0;
    v165 = 0;
    if ( (int)sub_15BD0(&n, v164, a3, a4) <= 0 )
      goto LABEL_63;
    p_src = (char *)&s;
    v44 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(qword_24798 + 680))(v148);
    v45 = v44;
    if ( !(unsigned __int8)PyW_ObjectToString(v44, &s) )
      break;
    p_src = (char *)::src;
    if ( (_QWORD)v163 )
      p_src = s;
    v44 = (__int64 *)a2;
    set_idcv_attr();
    if ( v45 )
    {
      if ( *v45 <= 0 )
        goto LABEL_170;
      (*(void (__fastcall **)(__int64 *, char *))(qword_24798 + 984))(v45, p_src);
    }
    free_idcv();
    v58 = n;
    if ( n )
    {
      if ( *(__int64 *)n <= 0 )
      {
        sub_6C20(n, (int)p_src, v54, v55, v56, v57, v148);
        goto LABEL_133;
      }
      (*(void (__fastcall **)(size_t, char *))(qword_24798 + 984))(n, p_src);
    }
    if ( v151 == ++v148 )
    {
      v19 = 1;
      goto LABEL_67;
    }
  }
  if ( !v44 )
    goto LABEL_63;
  if ( *v44 <= 0 )
LABEL_171:
    sub_6C20((__int64)v44, (int)p_src, v46, v47, v48, v49, v148);
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v44);
LABEL_63:
  free_idcv();
  v58 = n;
  if ( n )
  {
    if ( *(__int64 *)n > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_66;
    }
LABEL_133:
    sub_6C20(v58, (int)p_src, v69, v70, v71, v72, v148);
  }
LABEL_66:
  v19 = -1;
LABEL_67:
  if ( s )
  {
    *(_QWORD *)&v163 = 0;
    qfree();
  }
  return v19;
}

