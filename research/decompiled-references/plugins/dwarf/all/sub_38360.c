__int64 __fastcall sub_38360(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _QWORD *v3; // r14
  const char *v4; // rdx
  unsigned int *idati; // rax
  __int64 v6; // rdi
  unsigned int tinfo_property; // eax
  unsigned int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  const char *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  int v18; // r15d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int16 v28; // ax
  __int16 v29; // cx
  bool v30; // al
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rcx
  const char *v37; // rcx
  unsigned int v38; // r12d
  const char *v39; // r14
  __int64 *v40; // rax
  int v41; // r8d
  int v42; // r9d
  const char *v43; // rsi
  unsigned int v44; // ebx
  __int64 *v45; // rax
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  const char *v49; // rsi
  __int64 v50; // rdi
  unsigned int *v51; // r15
  char *v52; // rax
  size_t v53; // rdx
  unsigned int *v54; // rdi
  int v55; // ecx
  __int64 v56; // rbx
  __int64 v57; // r15
  unsigned int *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdi
  unsigned int v61; // eax
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // r9
  __int64 v66; // rcx
  const char *v67; // rdx
  const char *v68; // rcx
  int v69; // r12d
  const char *v70; // r14
  __int64 *v71; // rax
  int v72; // r8d
  int v73; // r9d
  const char *v74; // rsi
  bool v76; // zf
  const char *v77; // rax
  const char *v78; // r14
  __int64 *v79; // rax
  int v80; // r9d
  const char *v81; // rcx
  const char *v82; // rdx
  const char *v83; // rdx
  const char *v84; // rsi
  const char *v85; // rsi
  __int64 name_ea; // rax
  const char *v87; // rsi
  __int64 v88; // r15
  __int64 v89; // rax
  const char *v90; // rcx
  unsigned int v91; // r14d
  const char *v92; // rbx
  __int64 *v93; // rax
  int v94; // r8d
  int v95; // r9d
  const char *v96; // rsi
  const char *v97; // r14
  __int64 *v98; // rax
  int v99; // ecx
  int v100; // r8d
  int v101; // r9d
  const char *v102; // rsi
  unsigned int *v103; // rdi
  __int64 v104; // r13
  __int64 v105; // r12
  __int64 v106; // r14
  unsigned int *v107; // rbx
  __int64 v108; // rdi
  __int64 v109; // rdi
  unsigned int *v110; // [rsp+0h] [rbp-C0h]
  __int64 v111; // [rsp+0h] [rbp-C0h]
  size_t n; // [rsp+8h] [rbp-B8h]
  size_t nc; // [rsp+8h] [rbp-B8h]
  const char *na; // [rsp+8h] [rbp-B8h]
  int nb; // [rsp+8h] [rbp-B8h]
  int i; // [rsp+18h] [rbp-A8h]
  __int64 v117; // [rsp+18h] [rbp-A8h]
  int j; // [rsp+18h] [rbp-A8h]
  __int64 v119; // [rsp+28h] [rbp-98h] BYREF
  unsigned int v120; // [rsp+30h] [rbp-90h] BYREF
  unsigned int *v121; // [rsp+38h] [rbp-88h] BYREF
  unsigned int *v122; // [rsp+40h] [rbp-80h] BYREF
  __int64 v123; // [rsp+48h] [rbp-78h] BYREF
  unsigned int *v124; // [rsp+50h] [rbp-70h] BYREF
  __int128 v125; // [rsp+58h] [rbp-68h]
  __int64 v126; // [rsp+68h] [rbp-58h]
  __int128 v127; // [rsp+70h] [rbp-50h]
  int v128; // [rsp+80h] [rbp-40h]
  char v129; // [rsp+84h] [rbp-3Ch]
  unsigned __int64 v130; // [rsp+88h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 80);
  v130 = __readfsqword(0x28u);
  v2 = a1;
  v119 = 0;
  v3 = *(_QWORD **)(v1 + 144);
  for ( i = 0; ; ++i )
  {
    v4 = src;
    if ( *(_QWORD *)(v2 + 48) )
      v4 = *(const char **)(v2 + 40);
    idati = (unsigned int *)v3[12];
    if ( !v4 )
      goto LABEL_86;
    *(_QWORD *)&v125 = v4;
    WORD4(v125) = 256;
    if ( !idati )
      idati = (unsigned int *)get_idati();
    v124 = idati;
    if ( !(unsigned __int8)create_tinfo(&v119, 61, 61, &v124) )
    {
LABEL_85:
      idati = (unsigned int *)v3[12];
LABEL_86:
      v61 = alloc_type_ordinals(idati, 1);
      *(_DWORD *)(v2 + 128) = v61;
      v62 = v3[18];
      v63 = *(_QWORD *)(v62 + 160);
      v64 = v62 + 152;
      if ( !v63 )
        goto LABEL_93;
      do
      {
        while ( 1 )
        {
          v65 = *(_QWORD *)(v63 + 16);
          v66 = *(_QWORD *)(v63 + 24);
          if ( *(_DWORD *)(v63 + 32) < v61 )
            break;
          v64 = v63;
          v63 = *(_QWORD *)(v63 + 16);
          if ( !v65 )
            goto LABEL_91;
        }
        v63 = *(_QWORD *)(v63 + 24);
      }
      while ( v66 );
LABEL_91:
      if ( v62 + 152 == v64 || v61 < *(_DWORD *)(v64 + 32) )
      {
LABEL_93:
        v124 = (unsigned int *)(v2 + 128);
        v64 = sub_28600((_QWORD *)(v62 + 144), v64, &v124);
      }
      *(_QWORD *)(v64 + 40) = v2;
      v67 = src;
      if ( *(_QWORD *)(v2 + 48) )
        v67 = *(const char **)(v2 + 40);
      if ( (unsigned int)get_name_value(&v120, -1, v67) == 1 )
      {
        for ( j = 0; ; ++j )
        {
          v76 = *(_QWORD *)(v2 + 24) == 0;
          v124 = nullptr;
          v83 = src;
          v125 = 0;
          if ( !v76 )
            v83 = *(const char **)(v2 + 16);
          sub_20160((__int64 *)&v124, (__int64)"%s_%u", v83, j);
          v84 = src;
          if ( (_QWORD)v125 )
            v84 = (const char *)v124;
          if ( get_name_ea(-1, v84) == -1 )
            break;
          if ( v124 )
          {
            *(_QWORD *)&v125 = 0;
            qfree(v124);
          }
        }
        v85 = src;
        if ( *(_QWORD *)(v2 + 48) )
          v85 = *(const char **)(v2 + 40);
        name_ea = get_name_ea(-1, v85);
        v87 = src;
        if ( (_QWORD)v125 )
          v87 = (const char *)v124;
        v88 = name_ea;
        set_name(name_ea, v87, 0);
        sub_1B9A0(v3[16], v88);
        if ( v124 )
        {
          *(_QWORD *)&v125 = 0;
          qfree(v124);
        }
      }
      v68 = src;
      n = v2 + 8;
      if ( *(_QWORD *)(v2 + 48) )
        v68 = *(const char **)(v2 + 40);
      if ( !(unsigned int)save_tinfo(n, v3[12], *(unsigned int *)(v2 + 128), v68, 128) )
        goto LABEL_110;
      if ( (debug & 0x400000) != 0 )
      {
        v69 = *(_DWORD *)(v2 + 128);
        v70 = src;
        if ( *(_QWORD *)(v2 + 48) )
          v70 = *(const char **)(v2 + 40);
        v71 = sub_34340(v2);
        v74 = src;
        if ( v71[1] )
          v74 = (const char *)*v71;
        sub_88B80((unsigned int)"Error DIE %s storing type to TIL %s(%u)\n", (_DWORD)v74, (_DWORD)v70, v69, v72, v73);
      }
      *(_DWORD *)(v2 + 128) = 0;
      v44 = 0;
      goto LABEL_112;
    }
    v6 = v119;
    if ( (v119 & 0x100) != 0 )
    {
      if ( get_tinfo_property(v119, 4) )
        goto LABEL_85;
      v6 = v119;
    }
    tinfo_property = get_tinfo_property(v6, 7);
    v120 = tinfo_property;
    v8 = tinfo_property;
    v9 = tinfo_property;
    if ( tinfo_property )
      break;
LABEL_20:
    v15 = src;
    if ( *(_QWORD *)(v2 + 24) )
      v15 = *(const char **)(v2 + 16);
    sub_20160((__int64 *)(v2 + 40), (__int64)"%s_%u", v15, i);
    v123 = 0x7E83B8DEDDE45EC6LL;
    v16 = (__int64 *)sub_85700(&v123, v2 + 40);
    v17 = *v16;
    if ( *(_QWORD *)(v2 + 64) == *v16 || (*(_QWORD *)(v2 + 64) = v17, v18 = v17, (debug & 0x400000) == 0) )
    {
      if ( *(_WORD *)(v2 + 140) != 4 )
        continue;
LABEL_65:
      v50 = *(_QWORD *)(v2 + 8);
      v124 = nullptr;
      v126 = 0;
      v128 = 0;
      v129 = 0x80;
      v125 = 0;
      v127 = 0;
      if ( (unsigned __int8)get_tinfo_details(v50, 45, &v124) )
      {
        v51 = v124;
        v110 = &v124[14 * v125];
        if ( v110 == v124 )
        {
LABEL_73:
          create_tinfo(v2 + 8, 45, 45, &v124);
          if ( v126 )
          {
            *(_QWORD *)&v127 = 0;
            qfree(v126);
          }
          v54 = v124;
          if ( v124 )
          {
            if ( (_QWORD)v125 )
            {
              v55 = i;
              v111 = v2;
              v117 = 0;
              v56 = 0;
              v57 = v125;
              nb = v55;
              do
              {
                v58 = &v54[v56];
                v59 = *(_QWORD *)&v54[v56 + 6];
                if ( v59 )
                {
                  *((_QWORD *)v58 + 4) = 0;
                  qfree(v59);
                }
                v60 = *(_QWORD *)v58;
                if ( *(_QWORD *)v58 )
                {
                  *((_QWORD *)v58 + 1) = 0;
                  qfree(v60);
                }
                ++v117;
                v54 = v124;
                v56 += 14;
              }
              while ( v57 != v117 );
              v2 = v111;
              i = nb;
            }
            *(_QWORD *)&v125 = 0;
            qfree(v54);
          }
          continue;
        }
        while ( 2 )
        {
          while ( *((_QWORD *)v51 + 1) )
          {
            nc = *((_QWORD *)v51 + 1);
            v52 = (char *)qalloc_or_throw(nc);
            v53 = nc;
            na = v52;
            memcpy(v52, *(const void **)v51, v53);
            sub_20160((__int64 *)v51, (__int64)"%s_%u", na, i);
            if ( !na )
              goto LABEL_69;
            qfree(na);
            v51 += 14;
            if ( v110 == v51 )
              goto LABEL_73;
          }
          sub_20160((__int64 *)v51, (__int64)"%s_%u", src, i);
LABEL_69:
          v51 += 14;
          if ( v110 == v51 )
            goto LABEL_73;
          continue;
        }
      }
      if ( (debug & 0x400000) != 0 )
      {
        v97 = src;
        if ( *(_QWORD *)(v2 + 48) )
          v97 = *(const char **)(v2 + 40);
        v98 = sub_34340(v2);
        v102 = src;
        if ( v98[1] )
          v102 = (const char *)*v98;
        sub_88B80(
          (unsigned int)"Error enumeration DIE %s updating enumerator names %s\n",
          (_DWORD)v102,
          (_DWORD)v97,
          v99,
          v100,
          v101);
      }
      if ( v126 )
      {
        *(_QWORD *)&v127 = 0;
        qfree(v126);
      }
      v103 = v124;
      if ( v124 )
      {
        v104 = v125;
        if ( (_QWORD)v125 )
        {
          v105 = 0;
          v106 = 0;
          do
          {
            v107 = &v103[v105];
            v108 = *(_QWORD *)&v103[v105 + 6];
            if ( v108 )
            {
              *((_QWORD *)v107 + 4) = 0;
              qfree(v108);
            }
            v109 = *(_QWORD *)v107;
            if ( *(_QWORD *)v107 )
            {
              *((_QWORD *)v107 + 1) = 0;
              qfree(v109);
            }
            v103 = v124;
            v105 += 14;
            ++v106;
          }
          while ( v104 != v106 );
        }
        *(_QWORD *)&v125 = 0;
        v44 = 0;
        qfree(v103);
        goto LABEL_112;
      }
LABEL_59:
      v44 = 0;
      goto LABEL_112;
    }
    v45 = sub_34340(v2);
    v49 = src;
    if ( v45[1] )
      v49 = (const char *)*v45;
    sub_88B80((unsigned int)"%s name_hash -> %llx\n", (_DWORD)v49, v18, v46, v47, v48);
    if ( *(_WORD *)(v2 + 140) == 4 )
      goto LABEL_65;
  }
  if ( !*(_DWORD *)(v2 + 132) )
    *(_DWORD *)(v2 + 132) = tinfo_property;
  v10 = v3[18];
  v11 = *(_QWORD *)(v10 + 160);
  if ( !v11 )
    goto LABEL_174;
  v12 = v10 + 152;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( *(_DWORD *)(v11 + 32) < v9 )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        goto LABEL_17;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v14 );
LABEL_17:
  if ( v10 + 152 == v12 || v8 < *(_DWORD *)(v12 + 32) )
  {
LABEL_174:
    if ( v8 < *(_DWORD *)(v10 + 200) )
    {
      n = v2 + 8;
      if ( (unsigned int)sub_28C70((_QWORD *)(v2 + 8), &v119) == 1 )
      {
        v19 = alloc_type_ordinals(v3[12], 1);
        *(_DWORD *)(v2 + 128) = v19;
        set_type_alias(v3[12], v19, v120, v20);
        copy_tinfo_t(n, &v119);
        v21 = v3[18];
        v22 = *(_QWORD *)(v21 + 160);
        v23 = v21 + 152;
        if ( v22 )
        {
          v24 = *(_DWORD *)(v2 + 128);
          v25 = v21 + 152;
          do
          {
            if ( *(_DWORD *)(v22 + 32) >= v24 )
            {
              v25 = v22;
              v22 = *(_QWORD *)(v22 + 16);
            }
            else
            {
              v22 = *(_QWORD *)(v22 + 24);
            }
          }
          while ( v22 );
          if ( v25 != v23 )
          {
            if ( v24 >= *(_DWORD *)(v25 + 32) )
            {
LABEL_171:
              *(_QWORD *)(v25 + 40) = v2;
              goto LABEL_110;
            }
            v23 = v25;
          }
        }
        v122 = (unsigned int *)(v2 + 128);
        v25 = sub_28600((_QWORD *)(v21 + 144), v23, &v122);
        goto LABEL_171;
      }
    }
    goto LABEL_20;
  }
  v26 = *(_QWORD *)(v12 + 40);
  if ( v2 != v26 )
  {
    if ( *(_QWORD *)(v2 + 72) == *(_QWORD *)(v26 + 72) || *(_BYTE *)(v2 + 142) == 1 )
    {
      *(_DWORD *)(v2 + 128) = v8;
      n = v2 + 8;
      copy_tinfo_t(v2 + 8, &v119);
LABEL_110:
      if ( (debug & 0x400000) != 0 )
      {
        v76 = *(_QWORD *)(v2 + 48) == 0;
        v124 = nullptr;
        v77 = src;
        v125 = 0;
        if ( !v76 )
          v77 = *(const char **)(v2 + 40);
        print_tinfo(&v124, 0, 8, 0, 35, n, v77);
        if ( (debug & 0x400000) != 0 )
        {
          v78 = src;
          if ( (_QWORD)v125 )
            LODWORD(v78) = (_DWORD)v124;
          v79 = sub_34340(v2);
          v81 = src;
          if ( v79[1] )
            v81 = (const char *)*v79;
          v82 = src;
          if ( *(_QWORD *)(v2 + 48) )
            v82 = *(const char **)(v2 + 40);
          sub_88B80(
            (unsigned int)"Ordinal #%u: \"%s\" (%s):\n%s\n",
            *(_DWORD *)(v2 + 128),
            (_DWORD)v82,
            (_DWORD)v81,
            (_DWORD)v78,
            v80);
        }
        if ( v124 )
        {
          *(_QWORD *)&v125 = 0;
          qfree(v124);
        }
      }
      v44 = 1;
      goto LABEL_112;
    }
    if ( get_tinfo_size(0, v119, 0) == -1 )
    {
      v27 = *(_QWORD *)(v2 + 88);
      if ( !v27 || (v28 = *(_WORD *)(v26 + 140), v28 == 22) || (v29 = *(_WORD *)(v27 + 140), v28 == v29) )
      {
LABEL_43:
        v31 = v120;
        *(_DWORD *)(v2 + 128) = v120;
        v32 = v3[18];
        v33 = *(_QWORD *)(v32 + 160);
        v34 = v32 + 152;
        if ( !v33 )
          goto LABEL_140;
        do
        {
          while ( 1 )
          {
            v35 = *(_QWORD *)(v33 + 16);
            v36 = *(_QWORD *)(v33 + 24);
            if ( *(_DWORD *)(v33 + 32) < (unsigned int)v31 )
              break;
            v34 = v33;
            v33 = *(_QWORD *)(v33 + 16);
            if ( !v35 )
              goto LABEL_48;
          }
          v33 = *(_QWORD *)(v33 + 24);
        }
        while ( v36 );
LABEL_48:
        if ( v32 + 152 == v34 || (unsigned int)v31 < *(_DWORD *)(v34 + 32) )
        {
LABEL_140:
          v121 = &v120;
          v89 = sub_28600((_QWORD *)(v32 + 144), v34, &v121);
          v31 = v120;
          v34 = v89;
        }
        *(_QWORD *)(v34 + 40) = v2;
        v37 = src;
        n = v2 + 8;
        if ( *(_QWORD *)(v2 + 48) )
          v37 = *(const char **)(v2 + 40);
        if ( !(unsigned int)save_tinfo(n, v3[12], v31, v37, 132) )
          goto LABEL_110;
        if ( (debug & 0x400000) != 0 )
        {
          v38 = v120;
          v39 = src;
          if ( *(_QWORD *)(v2 + 48) )
            v39 = *(const char **)(v2 + 40);
          v40 = sub_34340(v2);
          v43 = src;
          if ( v40[1] )
            v43 = (const char *)*v40;
          sub_88B80((unsigned int)"Error DIE %s replacng type in TIL %s(%u)\n", (_DWORD)v43, (_DWORD)v39, v38, v41, v42);
        }
        goto LABEL_59;
      }
      v30 = v28 == 19 || v28 == 2;
      if ( v29 == 19 || v29 == 2 )
      {
        if ( v30 )
          goto LABEL_43;
      }
      else if ( !v30 )
      {
        goto LABEL_43;
      }
    }
    goto LABEL_20;
  }
  v90 = src;
  n = v2 + 8;
  if ( *(_QWORD *)(v2 + 48) )
    v90 = *(const char **)(v2 + 40);
  if ( !(unsigned int)save_tinfo(n, v3[12], v8, v90, 132) )
    goto LABEL_110;
  if ( (debug & 0x400000) == 0 )
    goto LABEL_59;
  v91 = v120;
  v92 = src;
  if ( *(_QWORD *)(v26 + 48) )
    v92 = *(const char **)(v26 + 40);
  v93 = sub_34340(v26);
  v96 = src;
  if ( v93[1] )
    v96 = (const char *)*v93;
  sub_88B80((unsigned int)"Error DIE %s replacing type in TIL %s(%u)\n", (_DWORD)v96, (_DWORD)v92, v91, v94, v95);
  v44 = 0;
LABEL_112:
  clear_tinfo_t(&v119);
  return v44;
}
