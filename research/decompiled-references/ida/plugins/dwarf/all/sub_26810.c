__int64 __fastcall sub_26810(__int64 a1, int a2)
{
  unsigned int v2; // r12d
  __int64 v5; // rax
  _QWORD *std_dirtree; // r12
  const char *v7; // r14
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // r12
  __int64 v15; // rax
  __int64 v16; // r12
  const char *v17; // r14
  size_t v18; // r15
  void *v19; // rax
  __int64 v20; // rdx
  const char *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  const char *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  const char *v28; // r14
  size_t v29; // r15
  void *v30; // rax
  __int64 v31; // rdx
  const char *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 *v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 v49; // rdi
  _QWORD *v50; // rax
  const char *v51; // rsi
  _QWORD *v52; // rbx
  const char *v53; // rsi
  const char *v54; // r14
  __int64 v55; // rax
  size_t v56; // r15
  void *v57; // rax
  __int64 v58; // rdx
  const char *v59; // rdi
  __int64 v60; // rax
  const char *v61; // r15
  size_t v62; // r14
  void *v63; // rax
  __int64 v64; // rdx
  __m128i v65; // [rsp+0h] [rbp-1668h] BYREF
  __int64 v66; // [rsp+10h] [rbp-1658h] BYREF
  __int64 v67; // [rsp+18h] [rbp-1650h] BYREF
  __int64 v68; // [rsp+20h] [rbp-1648h] BYREF
  __int128 v69; // [rsp+28h] [rbp-1640h]
  const char *v70; // [rsp+40h] [rbp-1628h]
  __m128i v71; // [rsp+48h] [rbp-1620h]
  __int64 v72; // [rsp+58h] [rbp-1610h] BYREF
  __int128 v73; // [rsp+60h] [rbp-1608h]
  unsigned int v74; // [rsp+70h] [rbp-15F8h]
  bool v75; // [rsp+74h] [rbp-15F4h]
  _BYTE v76[24]; // [rsp+80h] [rbp-15E8h] BYREF
  const char *v77; // [rsp+98h] [rbp-15D0h]
  __int64 v78; // [rsp+E8h] [rbp-1580h]
  __int128 v79; // [rsp+F0h] [rbp-1578h]
  __int64 v80; // [rsp+100h] [rbp-1568h]
  __int128 v81; // [rsp+108h] [rbp-1560h]
  __int128 v82; // [rsp+118h] [rbp-1550h]
  unsigned __int64 v83; // [rsp+128h] [rbp-1540h]
  __int64 v84; // [rsp+130h] [rbp-1538h]
  __int64 v85; // [rsp+138h] [rbp-1530h]
  __int64 v86; // [rsp+140h] [rbp-1528h]
  __int128 v87; // [rsp+148h] [rbp-1520h]
  __m128i si128; // [rsp+158h] [rbp-1510h]
  __int64 v89; // [rsp+168h] [rbp-1500h]
  __int64 v90; // [rsp+170h] [rbp-14F8h]
  __int64 v91; // [rsp+178h] [rbp-14F0h]
  __int64 v92; // [rsp+180h] [rbp-14E8h]
  __int64 v93; // [rsp+188h] [rbp-14E0h]
  __int64 v94; // [rsp+190h] [rbp-14D8h]
  __int64 v95; // [rsp+198h] [rbp-14D0h]
  __int64 v96; // [rsp+1B0h] [rbp-14B8h]
  __int128 v97; // [rsp+1B8h] [rbp-14B0h]
  __int64 v98; // [rsp+1C8h] [rbp-14A0h]
  __int128 v99; // [rsp+1D0h] [rbp-1498h]
  __int64 v100; // [rsp+1E0h] [rbp-1488h] BYREF
  __int128 v101; // [rsp+1E8h] [rbp-1480h]
  __int64 v102; // [rsp+1F8h] [rbp-1470h]
  _BYTE v103[5156]; // [rsp+200h] [rbp-1468h] BYREF
  unsigned __int64 v104; // [rsp+1628h] [rbp-40h]

  v2 = 0;
  v104 = __readfsqword(0x28u);
  sub_1E2A0(a1);
  if ( (*(_BYTE *)(a1 + 298) & 8) != 0 )
  {
    v71 = 0;
    v70 = nullptr;
    v72 = 0;
    v73 = 0;
    v5 = qvector_reserve(&v72, 0, 7, 1);
    v72 = v5;
    *(_QWORD *)&v73 = 7;
    *(_DWORD *)v5 = 1635214383;
    *(_WORD *)(v5 + 4) = 26226;
    *(_BYTE *)(v72 + 6) = 0;
    v74 = 0;
    std_dirtree = (_QWORD *)get_std_dirtree(0);
    memset(v76, 0, sizeof(v76));
    dirtree_getcwd(v76, *std_dirtree);
    v7 = *(const char **)v76;
    memset(v76, 0, sizeof(v76));
    v8 = _mm_loadu_si128((const __m128i *)&v76[8]);
    if ( v70 )
    {
      v65 = v8;
      v71.m128i_i64[0] = 0;
      qfree(v70);
      v9 = _mm_load_si128(&v65);
      v70 = v7;
      v71 = v9;
      if ( *(_QWORD *)v76 )
      {
        *(_QWORD *)&v76[8] = 0;
        qfree(*(_QWORD *)v76);
      }
    }
    else
    {
      v70 = v7;
      v71 = v8;
    }
    v75 = (unsigned __int8)dirtree_mkdir(*std_dirtree, "/dwarf") == 0;
    dirtree_chdir(*std_dirtree, "/dwarf");
    v102 = 0xFFFFFFFFLL;
    v101 = 0;
    memset(v103, 0, sizeof(v103));
    v66 = 0;
    v67 = 0;
    v100 = 0;
    switch ( a2 )
    {
      case 0:
        v54 = (const char *)sub_17390(0);
        if ( !v54 )
          goto LABEL_36;
        v55 = operator new(0x28u);
        *(_DWORD *)(v55 + 8) = 1;
        v16 = v55;
        *(_QWORD *)(v55 + 16) = 0;
        *(_OWORD *)(v55 + 24) = 0;
        *(_QWORD *)v55 = &off_C9478;
        v56 = strlen(v54);
        v65.m128i_i64[0] = v56 + 1;
        v57 = (void *)qvector_reserve(v16 + 16, 0, v56 + 1, 1);
        v58 = v65.m128i_i64[0];
        *(_QWORD *)(v16 + 16) = v57;
        *(_QWORD *)(v16 + 24) = v58;
        memmove(v57, v54, v56);
        v59 = src;
        *(_BYTE *)(*(_QWORD *)(v16 + 16) + v56) = 0;
        if ( *(_QWORD *)(v16 + 24) )
          v59 = *(const char **)(v16 + 16);
        LODWORD(v102) = sub_1B1A0((__int64)v59);
        break;
      case 1:
        if ( !(unsigned __int8)sub_26720((__m128i *)&v100) )
          goto LABEL_36;
        memset(v76, 0, sizeof(v76));
        v16 = 0;
        if ( (unsigned __int8)sub_22AE0((_QWORD *)(a1 + 120), (__int64 *)v76, (__int64)&v100, 0) )
        {
          v60 = operator new(0x28u);
          v16 = v60;
          v61 = src;
          if ( *(_QWORD *)&v76[8] )
            v61 = *(const char **)v76;
          *(_DWORD *)(v60 + 8) = 1;
          *(_QWORD *)(v60 + 16) = 0;
          *(_OWORD *)(v60 + 24) = 0;
          *(_QWORD *)v60 = &off_C9478;
          if ( v61 )
          {
            v62 = strlen(v61);
            v65.m128i_i64[0] = v62 + 1;
            v63 = (void *)qvector_reserve(v16 + 16, 0, v62 + 1, 1);
            v64 = v65.m128i_i64[0];
            *(_QWORD *)(v16 + 16) = v63;
            *(_QWORD *)(v16 + 24) = v64;
            memmove(v63, v61, v62);
            *(_BYTE *)(*(_QWORD *)(v16 + 16) + v62) = 0;
          }
        }
        v33 = *(_QWORD *)v76;
        if ( *(_QWORD *)v76 )
        {
LABEL_34:
          *(_QWORD *)&v76[8] = 0;
          qfree(v33);
        }
        break;
      case 3:
        memset(v76, 0, sizeof(v76));
        v68 = -1;
        netnode_check(&v68, "$ dwarf_params", 0, 1);
        if ( netnode_qsupstr(v68, v76, 1, 83, v25, v26, v65.m128i_i64[0], v65.m128i_i64[1], v66, v67) == -1 )
        {
          v16 = 0;
        }
        else
        {
          v66 = netnode_altval(v68, 2, 65);
          v27 = operator new(0x28u);
          v16 = v27;
          v28 = src;
          if ( *(_QWORD *)&v76[8] )
            v28 = *(const char **)v76;
          *(_DWORD *)(v27 + 8) = 1;
          *(_QWORD *)(v27 + 16) = 0;
          *(_OWORD *)(v27 + 24) = 0;
          *(_QWORD *)v27 = &off_C9478;
          if ( v28
            && (v29 = strlen(v28),
                v65.m128i_i64[0] = v29 + 1,
                v30 = (void *)qvector_reserve(v16 + 16, 0, v29 + 1, 1),
                v31 = v65.m128i_i64[0],
                *(_QWORD *)(v16 + 16) = v30,
                *(_QWORD *)(v16 + 24) = v31,
                memmove(v30, v28, v29),
                *(_BYTE *)(*(_QWORD *)(v16 + 16) + v29) = 0,
                *(_QWORD *)(v16 + 24)) )
          {
            v32 = *(const char **)(v16 + 16);
          }
          else
          {
            v32 = src;
          }
          LODWORD(v102) = sub_1B1A0((__int64)v32);
        }
        v33 = *(_QWORD *)v76;
        if ( *(_QWORD *)v76 )
          goto LABEL_34;
        break;
      case 4:
        memset(v76, 0, sizeof(v76));
        v68 = -1;
        netnode_check(&v68, "$ dwarf_params", 0, 1);
        if ( netnode_qsupstr(v68, v76, 1, 83, v22, v23, v65.m128i_i64[0], v65.m128i_i64[1], v66, v67) == -1 )
        {
          v2 = 0;
        }
        else
        {
          v24 = src;
          if ( *(_QWORD *)&v76[8] )
            v24 = *(const char **)v76;
          v2 = sub_24A50(a1, v24);
        }
        if ( *(_QWORD *)v76 )
        {
          *(_QWORD *)&v76[8] = 0;
          qfree(*(_QWORD *)v76);
        }
        goto LABEL_65;
      case 5:
        v69 = 0;
        v68 = 0;
        *(_QWORD *)v76 = -1;
        netnode_check(v76, "$ dwarf_params", 0, 1);
        if ( netnode_qsupstr(*(_QWORD *)v76, &v68, 1, 83, v12, v13, v65.m128i_i64[0], v65.m128i_i64[1], v66, v67) == -1 )
          goto LABEL_89;
        v14 = src;
        if ( (_QWORD)v69 )
          v14 = (const char *)v68;
        v77 = v14;
        *(_QWORD *)&v76[16] = &v67;
        *(__m128i *)v76 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_C7430, (__m128i)(unsigned __int64)&v66);
        if ( (unsigned int)sub_14A00((__int64 (__fastcall ***)(_QWORD, __int64, __m128i *))v76) == 1 )
        {
          v15 = operator new(0x28u);
          v16 = v15;
          v17 = src;
          if ( (_QWORD)v69 )
            v17 = (const char *)v68;
          *(_DWORD *)(v15 + 8) = 1;
          *(_QWORD *)(v15 + 16) = 0;
          *(_OWORD *)(v15 + 24) = 0;
          *(_QWORD *)v15 = &off_C9478;
          if ( v17
            && (v18 = strlen(v17),
                v65.m128i_i64[0] = v18 + 1,
                v19 = (void *)qvector_reserve(v16 + 16, 0, v18 + 1, 1),
                v20 = v65.m128i_i64[0],
                *(_QWORD *)(v16 + 16) = v19,
                *(_QWORD *)(v16 + 24) = v20,
                memmove(v19, v17, v18),
                *(_BYTE *)(*(_QWORD *)(v16 + 16) + v18) = 0,
                *(_QWORD *)(v16 + 24)) )
          {
            v21 = *(const char **)(v16 + 16);
          }
          else
          {
            v21 = src;
          }
          LODWORD(v102) = sub_1B1A0((__int64)v21);
        }
        else
        {
          sub_1D740((__int64)"no matching subfile found for %s\n", v14);
LABEL_89:
          v16 = 0;
        }
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree(v68);
        }
        break;
      default:
        if ( (debug & 0x400000) != 0 )
          sub_88B80((unsigned int)"Unexpected plugin run code: %d.", a2, (unsigned int)v103, 0, v10, v11);
LABEL_36:
        v16 = 0;
        break;
    }
    v83 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v76 = 0;
    v78 = 0;
    v80 = 0;
    v84 = 0xFFFFFFFFLL;
    v85 = -1;
    v86 = 0;
    v89 = 0;
    v90 = 0;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0;
    v98 = 0;
    v79 = 0;
    v81 = 0;
    v82 = 0;
    v87 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v97 = 0;
    v99 = 0;
    sub_83090(v76);
    *(_QWORD *)v76 = v16;
    sub_24200(a1, (__int64 *)v76, v66, v67, (__int64)&v100, a2);
    sub_83090(v76);
    v34 = v98;
    if ( v98 )
    {
      v35 = v99;
      if ( (_QWORD)v99 )
      {
        v36 = 0;
        do
        {
          v37 = (__int64 *)(v34 + 24 * v36);
          v38 = *v37;
          if ( *v37 )
          {
            v37[1] = 0;
            qfree(v38);
            v34 = v98;
          }
          ++v36;
        }
        while ( v35 != v36 );
      }
      *(_QWORD *)&v99 = 0;
      qfree(v34);
    }
    v39 = v96;
    if ( v96 )
    {
      v40 = v97;
      if ( (_QWORD)v97 )
      {
        v41 = 0;
        do
        {
          v42 = (__int64 *)(v39 + 72 * v41);
          v43 = v42[3];
          if ( v43 )
          {
            v42[4] = 0;
            qfree(v43);
          }
          v44 = *v42;
          if ( *v42 )
          {
            v42[1] = 0;
            qfree(v44);
          }
          ++v41;
          v39 = v96;
        }
        while ( v40 != v41 );
      }
      *(_QWORD *)&v97 = 0;
      qfree(v39);
    }
    if ( v86 )
    {
      *(_QWORD *)&v87 = 0;
      qfree(v86);
    }
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80);
    }
    v45 = v78;
    if ( v78 )
    {
      v46 = v79;
      if ( (_QWORD)v79 )
      {
        v47 = 0;
        v48 = 0;
        do
        {
          v49 = *(_QWORD *)(v45 + v47 + 16);
          if ( v49 )
          {
            *(_QWORD *)(v45 + v47 + 24) = 0;
            qfree(v49);
            v45 = v78;
          }
          ++v48;
          v47 += 120;
        }
        while ( v46 != v48 );
      }
      *(_QWORD *)&v79 = 0;
      qfree(v45);
    }
    v2 = 1;
LABEL_65:
    if ( v100 )
    {
      *(_QWORD *)&v101 = 0;
      qfree(v100);
    }
    v50 = (_QWORD *)get_std_dirtree(v74);
    v51 = src;
    v52 = v50;
    if ( v71.m128i_i64[0] )
      v51 = v70;
    dirtree_chdir(*v50, v51);
    if ( v75 )
    {
      v53 = src;
      if ( (_QWORD)v73 )
        v53 = (const char *)v72;
      dirtree_rmdir(*v52, v53);
    }
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree(v72);
    }
    if ( v70 )
    {
      v71.m128i_i64[0] = 0;
      qfree(v70);
    }
  }
  return v2;
}

