unsigned __int64 __fastcall sub_A400(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int16 flags; // r13
  __int16 v7; // ax
  __int64 v9; // r13
  __int64 v10; // rax
  const void **v11; // r9
  __int64 v12; // r13
  char *v13; // r12
  const void *v14; // r14
  void *v15; // rax
  void *v16; // rax
  const void *v17; // rsi
  char *v18; // r13
  __int64 v19; // rdi
  _BYTE *v20; // r14
  __int64 v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // r13
  _BYTE *v27; // r14
  size_t v28; // r9
  void *v29; // rax
  const void *v30; // rsi
  __int64 *v31; // rbx
  __int64 *v32; // rbx
  __int64 *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r12
  _BYTE *v37; // r13
  __int64 v38; // r9
  void *v39; // rax
  const void *v40; // rsi
  __int64 v41; // rdi
  char v42; // al
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r12
  char *v46; // r13
  __int64 v47; // r14
  void *v48; // rax
  const void *v49; // rsi
  void *v50; // rax
  const void *v51; // rsi
  __int64 v52; // r12
  void *v53; // rax
  const void *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbp
  char *v57; // r12
  __int64 v58; // r13
  void *v59; // rax
  __int64 v60; // r12
  void *v61; // rax
  const void *v62; // rsi
  __int64 *v63; // rbx
  char v64; // al
  __int64 *v65; // rbx
  __int64 v66; // rbp
  void *v67; // rax
  const void *v68; // rsi
  __int64 v69; // [rsp+8h] [rbp-4D0h]
  __int64 v70; // [rsp+10h] [rbp-4C8h]
  const void **v71; // [rsp+18h] [rbp-4C0h]
  size_t n; // [rsp+20h] [rbp-4B8h]
  _QWORD *v73; // [rsp+28h] [rbp-4B0h]
  __int64 v74; // [rsp+30h] [rbp-4A8h]
  size_t v75; // [rsp+30h] [rbp-4A8h]
  __int64 v76; // [rsp+38h] [rbp-4A0h]
  __int64 v77; // [rsp+40h] [rbp-498h]
  __int128 v78; // [rsp+50h] [rbp-488h] BYREF
  __int64 v79; // [rsp+60h] [rbp-478h]
  __int128 v80; // [rsp+68h] [rbp-470h]
  __int64 v81; // [rsp+78h] [rbp-460h]
  __int128 v82; // [rsp+80h] [rbp-458h]
  _BYTE *v83; // [rsp+90h] [rbp-448h]
  __int128 v84; // [rsp+98h] [rbp-440h]
  __int128 v85; // [rsp+B0h] [rbp-428h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-418h]
  __int128 v87; // [rsp+C8h] [rbp-410h]
  __int64 v88; // [rsp+D8h] [rbp-400h]
  __int64 v89; // [rsp+E0h] [rbp-3F8h]
  int v90; // [rsp+E8h] [rbp-3F0h]
  __int128 v91; // [rsp+F0h] [rbp-3E8h]
  __int64 v92; // [rsp+100h] [rbp-3D8h]
  __int128 v93; // [rsp+110h] [rbp-3C8h] BYREF
  __int64 v94; // [rsp+120h] [rbp-3B8h]
  __int128 v95; // [rsp+128h] [rbp-3B0h]
  __int64 v96; // [rsp+138h] [rbp-3A0h]
  __int64 v97; // [rsp+140h] [rbp-398h]
  _BYTE v98[24]; // [rsp+148h] [rbp-390h]
  __int64 v99; // [rsp+160h] [rbp-378h]
  __int128 v100; // [rsp+168h] [rbp-370h]
  __int64 v101; // [rsp+178h] [rbp-360h]
  __int64 v102; // [rsp+180h] [rbp-358h]
  int v103; // [rsp+188h] [rbp-350h]
  int v104; // [rsp+190h] [rbp-348h]
  __int64 v105; // [rsp+198h] [rbp-340h]
  __int64 v106; // [rsp+1A0h] [rbp-338h] BYREF
  __int128 v107; // [rsp+1A8h] [rbp-330h]
  __int64 v108; // [rsp+1B8h] [rbp-320h] BYREF
  int v109; // [rsp+1C0h] [rbp-318h]
  __int64 v110; // [rsp+1C8h] [rbp-310h]
  _BYTE v111[168]; // [rsp+1D0h] [rbp-308h] BYREF
  char v112; // [rsp+278h] [rbp-260h] BYREF
  _BYTE v113[16]; // [rsp+290h] [rbp-248h] BYREF
  void *v114; // [rsp+2A0h] [rbp-238h] BYREF
  __int128 v115; // [rsp+2A8h] [rbp-230h]
  __int64 v116; // [rsp+2B8h] [rbp-220h] BYREF
  int v117; // [rsp+2C0h] [rbp-218h]
  __int64 v118; // [rsp+2C8h] [rbp-210h]
  _BYTE v119[168]; // [rsp+2D0h] [rbp-208h] BYREF
  _BYTE v120[24]; // [rsp+378h] [rbp-160h] BYREF
  _BYTE v121[16]; // [rsp+390h] [rbp-148h] BYREF
  void *v122; // [rsp+3A0h] [rbp-138h] BYREF
  __int128 v123; // [rsp+3A8h] [rbp-130h]
  __int64 v124; // [rsp+3B8h] [rbp-120h] BYREF
  int v125; // [rsp+3C0h] [rbp-118h]
  __int64 v126; // [rsp+3C8h] [rbp-110h]
  _BYTE v127[168]; // [rsp+3D0h] [rbp-108h] BYREF
  _BYTE v128[24]; // [rsp+478h] [rbp-60h] BYREF
  char v129; // [rsp+490h] [rbp-48h] BYREF
  unsigned __int64 v130; // [rsp+498h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  flags = get_flags_ex();
  v7 = get_flags_ex();
  if ( (~flags & 0x600) == 0 )
    return v130 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 128);
  v70 = v7 & 0x600;
  v69 = a1 + 120;
  if ( v9 )
  {
    if ( rangeset_t_find_range() )
      goto LABEL_24;
    v9 = *(_QWORD *)(a1 + 128);
  }
  v94 = 0;
  v96 = a1;
  LODWORD(v97) = 0;
  *(_QWORD *)&v98[16] = -1;
  v99 = 0;
  v122 = 0;
  v93 = 0;
  v95 = 0;
  *(_OWORD *)v98 = 0;
  v100 = 0;
  v123 = 0;
  if ( v9 )
  {
    v16 = (void *)qalloc_or_throw();
    v17 = *(const void **)(a1 + 120);
    v122 = v16;
    *((_QWORD *)&v123 + 1) = v9;
    memcpy(v16, v17, 16 * v9);
    *(_QWORD *)&v123 = v9;
  }
  v10 = *(_QWORD *)(a1 + 160);
  v11 = (const void **)(a1 + 168);
  v124 = 0;
  v12 = 7;
  v125 = -1;
  v126 = v10;
  v13 = v127;
  do
  {
    v14 = v11[1];
    *(_QWORD *)v13 = 0;
    *(_OWORD *)(v13 + 8) = 0;
    if ( v14 )
    {
      v71 = v11;
      v15 = (void *)qalloc_or_throw();
      *(_QWORD *)v13 = v15;
      *((_QWORD *)v13 + 2) = v14;
      memcpy(v15, *v71, 8LL * (_QWORD)v14);
      *((_QWORD *)v13 + 1) = v14;
      v11 = v71;
    }
    v13 += 24;
    v11 += 3;
    --v12;
  }
  while ( v13 != &v129 );
  v129 = *(_BYTE *)(a1 + 360);
  if ( (unsigned __int8)sub_92E0(&v93, (__int64)&v122, a3, 0) )
    sub_92E0(&v93, v69, a3, 0x30u);
  if ( v70 == 1536 && a3 >= *(_QWORD *)(a1 + 368) && (unsigned __int8)is_mapped() )
    sub_7200(a1, v69, a3, 0x30u);
  v18 = &v129;
  do
  {
    v19 = *((_QWORD *)v18 - 3);
    v18 -= 24;
    if ( v19 )
    {
      *((_QWORD *)v18 + 1) = 0;
      qfree();
    }
  }
  while ( v18 != v127 );
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree();
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree();
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
LABEL_24:
  if ( v70 == 1536
    || *(_QWORD *)(a1 + 128) && rangeset_t_find_range() && *(_QWORD *)(a1 + 128) && rangeset_t_find_range() )
  {
    return v130 - __readfsqword(0x28u);
  }
  v81 = a1;
  v79 = 0;
  v78 = 0;
  v80 = 0;
  v82 = -1;
  v84 = 0;
  v83 = (_BYTE *)qvector_reserve();
  v20 = v113;
  *(_QWORD *)&v84 = 1;
  *v83 = 0;
  v21 = *(_QWORD *)(a1 + 160);
  v106 = 0;
  v108 = 0;
  v109 = -1;
  v110 = v21;
  v22 = v111;
  v107 = 0;
  do
  {
    *(_QWORD *)v22 = 0;
    v22 += 24;
    *((_OWORD *)v22 - 1) = 0;
  }
  while ( v113 != v22 );
  v113[0] = 0;
  if ( sub_4ED0(v69, 0, a3) || (unsigned __int8)sub_7690(&v78, (__int64)&v106, a3, 0) )
  {
    sub_7690(&v78, v69, a3, 0x30u);
    v73 = (_QWORD *)getseg();
    if ( v73 )
    {
      if ( *(_QWORD *)(a1 + 128) )
      {
        if ( rangeset_t_find_range() )
        {
          if ( (_QWORD)v80 && sub_4ED0(v69, 0, a3) )
            sub_7620(a1, v69, (__int64 *)&v78, 0x30u);
          do
          {
            v41 = *((_QWORD *)v20 - 3);
            v20 -= 24;
            if ( v41 )
            {
              *((_QWORD *)v20 + 1) = 0;
              qfree();
            }
          }
          while ( v20 != v111 );
          if ( v106 )
          {
            *(_QWORD *)&v107 = 0;
            qfree();
          }
          if ( v83 )
          {
            *(_QWORD *)&v84 = 0;
            qfree();
          }
          if ( v79 )
            goto LABEL_65;
          return v130 - __readfsqword(0x28u);
        }
        v60 = *(_QWORD *)(a1 + 128);
        v114 = 0;
        v115 = 0;
        if ( v60 )
        {
          v61 = (void *)qalloc_or_throw();
          v62 = *(const void **)(a1 + 120);
          v114 = v61;
          *((_QWORD *)&v115 + 1) = v60;
          memcpy(v61, v62, 16 * v60);
          *(_QWORD *)&v115 = v60;
        }
      }
      else
      {
        v114 = 0;
        v115 = 0;
      }
      v23 = *(_QWORD *)(a1 + 160);
      v24 = a1 + 168;
      v116 = 0;
      v25 = 7;
      v117 = -1;
      v26 = a1 + 168;
      v118 = v23;
      v27 = v119;
      do
      {
        v28 = *(_QWORD *)(v26 + 8);
        *(_QWORD *)v27 = 0;
        *(_OWORD *)(v27 + 8) = 0;
        if ( v28 )
        {
          n = v28;
          v74 = 8 * v28;
          v29 = (void *)qalloc_or_throw();
          v30 = *(const void **)v26;
          *(_QWORD *)v27 = v29;
          *((_QWORD *)v27 + 2) = n;
          memcpy(v29, v30, v74);
          *((_QWORD *)v27 + 1) = n;
        }
        v27 += 24;
        v26 += 24;
        --v25;
      }
      while ( v27 != v121 );
      v42 = *(_BYTE *)(a1 + 360);
      v86 = 0;
      v85 = 0;
      v121[0] = v42;
      v87 = 0;
      v89 = 0xFFFFFFFFLL;
      v88 = a1;
      v90 = 0;
      v92 = -1;
      v91 = -1;
      if ( a2 - *v73 <= 0xC || (_QWORD)v115 && rangeset_t_find_range() )
        goto LABEL_97;
      if ( !(unsigned __int8)sub_6C70(&v85, (__int64)&v114, a2 - 12, 0) )
      {
LABEL_97:
        v43 = *(_QWORD *)(a1 + 128);
        v94 = 0;
        v96 = a1;
        v97 = -1;
        *(_DWORD *)v98 = 0;
        v99 = 0;
        v101 = a1;
        v102 = -1;
        v103 = -1;
        v104 = 0;
        v105 = -1;
        v122 = 0;
        v93 = 0;
        v95 = 0;
        *(_OWORD *)&v98[8] = 0;
        v100 = 0;
        v123 = 0;
        if ( v43 )
        {
          v50 = (void *)qalloc_or_throw();
          v51 = *(const void **)(a1 + 120);
          v122 = v50;
          *((_QWORD *)&v123 + 1) = v43;
          memcpy(v50, v51, 16 * v43);
          *(_QWORD *)&v123 = v43;
        }
        v44 = *(_QWORD *)(a1 + 160);
        v45 = 7;
        v124 = 0;
        v125 = -1;
        v126 = v44;
        v46 = v127;
        do
        {
          v47 = *(_QWORD *)(v24 + 8);
          *(_QWORD *)v46 = 0;
          *(_OWORD *)(v46 + 8) = 0;
          if ( v47 )
          {
            v48 = (void *)qalloc_or_throw();
            v49 = *(const void **)v24;
            *(_QWORD *)v46 = v48;
            *((_QWORD *)v46 + 2) = v47;
            memcpy(v48, v49, 8 * v47);
            *((_QWORD *)v46 + 1) = v47;
          }
          v46 += 24;
          v24 += 24;
          --v45;
        }
        while ( v46 != &v129 );
        v129 = *(_BYTE *)(a1 + 360);
        if ( (unsigned __int8)sub_81A0(&v93, (__int64)&v122, a2, 0) )
        {
          sub_81A0(&v93, v69, a2, 0x30u);
          sub_7620(a1, v69, (__int64 *)&v78, 0x30u);
        }
        v31 = (__int64 *)v128;
        do
        {
          if ( *v31 )
          {
            v31[1] = 0;
            qfree();
          }
          v31 -= 3;
        }
        while ( &v124 != v31 );
        if ( v122 )
        {
          *(_QWORD *)&v123 = 0;
          qfree();
        }
        if ( v99 )
        {
          *(_QWORD *)&v100 = 0;
          qfree();
        }
        if ( v94 )
        {
          *(_QWORD *)&v95 = 0;
          qfree();
        }
      }
      else
      {
        sub_6C70(&v85, v69, a2 - 12, 0x30u);
        sub_7620(a1, v69, (__int64 *)&v78, 0x30u);
      }
      if ( v86 )
      {
        *(_QWORD *)&v87 = 0;
        qfree();
      }
      v32 = (__int64 *)v120;
      do
      {
        if ( *v32 )
        {
          v32[1] = 0;
          qfree();
        }
        v32 -= 3;
      }
      while ( v32 != &v116 );
      if ( v114 )
        goto LABEL_55;
    }
    goto LABEL_56;
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    if ( rangeset_t_find_range() )
      goto LABEL_56;
    v52 = *(_QWORD *)(a1 + 128);
    v114 = 0;
    v115 = 0;
    if ( v52 )
    {
      v53 = (void *)qalloc_or_throw();
      v54 = *(const void **)(a1 + 120);
      v114 = v53;
      *((_QWORD *)&v115 + 1) = v52;
      memcpy(v53, v54, 16 * v52);
      *(_QWORD *)&v115 = v52;
    }
  }
  else
  {
    v114 = 0;
    v115 = 0;
  }
  v34 = *(_QWORD *)(a1 + 160);
  v35 = a1 + 168;
  v116 = 0;
  v36 = 7;
  v117 = -1;
  v118 = v34;
  v37 = v119;
  v75 = a1 + 168;
  do
  {
    v38 = *(_QWORD *)(v35 + 8);
    *(_QWORD *)v37 = 0;
    *(_OWORD *)(v37 + 8) = 0;
    if ( v38 )
    {
      v76 = v38;
      v77 = 8 * v38;
      v39 = (void *)qalloc_or_throw();
      v40 = *(const void **)v35;
      *(_QWORD *)v37 = v39;
      *((_QWORD *)v37 + 2) = v76;
      memcpy(v39, v40, v77);
      *((_QWORD *)v37 + 1) = v76;
    }
    --v36;
    v37 += 24;
    v35 += 24;
  }
  while ( v121 != v37 );
  v121[0] = *(_BYTE *)(a1 + 360);
  if ( (unsigned __int8)sub_7690(&v78, (__int64)&v114, a2, 0) )
  {
    sub_7690(&v78, v69, a2, 0x30u);
    sub_7620(a1, v69, (__int64 *)&v78, 0x30u);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 128) )
    {
      if ( rangeset_t_find_range() )
        goto LABEL_118;
      v66 = *(_QWORD *)(a1 + 128);
      v122 = 0;
      v123 = 0;
      if ( v66 )
      {
        v67 = (void *)qalloc_or_throw();
        v68 = *(const void **)(a1 + 120);
        v122 = v67;
        *((_QWORD *)&v123 + 1) = v66;
        memcpy(v67, v68, 16 * v66);
        *(_QWORD *)&v123 = v66;
      }
    }
    else
    {
      v122 = 0;
      v123 = 0;
    }
    v55 = *(_QWORD *)(a1 + 160);
    v124 = 0;
    v56 = 7;
    v125 = -1;
    v126 = v55;
    v57 = v127;
    do
    {
      *(_QWORD *)v57 = 0;
      *(_OWORD *)(v57 + 8) = 0;
      v58 = *(_QWORD *)(v75 + 8);
      if ( v58 )
      {
        v59 = (void *)qalloc_or_throw();
        *(_QWORD *)v57 = v59;
        *((_QWORD *)v57 + 2) = v58;
        memcpy(v59, *(const void **)v75, 8 * v58);
        *((_QWORD *)v57 + 1) = v58;
      }
      v75 += 24LL;
      v57 += 24;
      --v56;
    }
    while ( &v129 != v57 );
    v64 = *(_BYTE *)(a1 + 360);
    v93 = 0;
    v129 = v64;
    v95 = 0;
    v94 = 0;
    v96 = a1;
    v97 = 0xFFFFFFFFLL;
    *(_DWORD *)v98 = 0;
    v99 = -1;
    *(_OWORD *)&v98[8] = -1;
    if ( (unsigned __int8)sub_6C70(&v93, (__int64)&v122, a3, 0) )
      sub_6C70(&v93, v69, a3, 0x30u);
    if ( v94 )
    {
      *(_QWORD *)&v95 = 0;
      qfree();
    }
    v65 = (__int64 *)v128;
    do
    {
      if ( *v65 )
      {
        v65[1] = 0;
        qfree();
      }
      v65 -= 3;
    }
    while ( &v124 != v65 );
    if ( v122 )
    {
      *(_QWORD *)&v123 = 0;
      qfree();
    }
  }
LABEL_118:
  v63 = (__int64 *)v120;
  do
  {
    if ( *v63 )
    {
      v63[1] = 0;
      qfree();
    }
    v63 -= 3;
  }
  while ( &v116 != v63 );
  if ( v114 )
  {
LABEL_55:
    *(_QWORD *)&v115 = 0;
    qfree();
  }
LABEL_56:
  v33 = (__int64 *)&v112;
  do
  {
    if ( *v33 )
    {
      v33[1] = 0;
      qfree();
    }
    v33 -= 3;
  }
  while ( &v108 != v33 );
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree();
  }
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree();
  }
  if ( v79 )
  {
LABEL_65:
    *(_QWORD *)&v80 = 0;
    qfree();
  }
  return v130 - __readfsqword(0x28u);
}
