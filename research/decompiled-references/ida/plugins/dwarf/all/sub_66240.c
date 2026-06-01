unsigned __int64 __fastcall sub_66240(__int64 a1, __int64 *a2, __m128i *a3)
{
  int v4; // eax
  __int64 v5; // r12
  size_t v6; // rbp
  const char *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  _BYTE *v10; // rsi
  unsigned __int64 v11; // rdx
  int *v12; // rax
  int *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  _BYTE *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // r14
  __int64 *v20; // r13
  unsigned __int64 v21; // r15
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // r14
  __int64 *v25; // r13
  unsigned __int64 v26; // r15
  __int64 v27; // rsi
  _DWORD *v28; // r15
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // r8
  __int64 v32; // rdx
  char *v33; // r14
  char *v34; // r13
  int v35; // esi
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  __int64 v40; // r12
  __int64 v41; // r13
  unsigned __int64 v42; // r14
  _BYTE *v43; // rsi
  unsigned __int64 v44; // rdx
  size_t v45; // r14
  __int64 v46; // r13
  size_t v47; // r15
  __int64 v48; // r12
  unsigned __int64 v49; // r13
  __int64 v50; // rsi
  unsigned __int64 v51; // r12
  size_t v52; // r14
  __int64 v53; // r13
  size_t v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r13
  unsigned __int64 v59; // rdx
  __int64 v60; // r12
  __m128i *v61; // r14
  char *m128i_i8; // rax
  _DWORD *v63; // r12
  __int64 v64; // r13
  unsigned __int64 v65; // r15
  __int64 v66; // r14
  _BYTE *v67; // rsi
  __int64 v68; // rax
  __int64 *v69; // rax
  __int64 v70; // r14
  __int64 *v71; // r13
  unsigned __int64 v72; // r15
  __int64 v73; // rsi
  __int64 v74; // r13
  unsigned __int64 v75; // r15
  __int64 v76; // r14
  _BYTE *v77; // rsi
  char *v78; // r13
  __int64 v79; // r13
  unsigned __int64 v80; // r15
  __int64 v81; // r14
  _BYTE *v82; // rsi
  char *v83; // r13
  __int64 v84; // r13
  unsigned __int64 v85; // r15
  __int64 v86; // r14
  _BYTE *v87; // rsi
  __int64 v88; // r13
  unsigned __int64 v89; // r15
  __int64 v90; // r14
  _BYTE *v91; // rsi
  __int64 v92; // rcx
  const __m128i *v93; // rdi
  __int64 v94; // rax
  __m128i *v95; // rdx
  __m128i v96; // xmm0
  unsigned __int8 *v98; // rbx
  void *v99; // rax
  __int64 v100; // r12
  unsigned __int64 v101; // r13
  __int64 v102; // r14
  unsigned __int64 v103; // rbx
  size_t v104; // r12
  size_t v106; // r13
  __int64 v107; // rbp
  __int64 v108; // rsi
  __int64 v109; // r12
  unsigned __int64 v110; // r13
  _BYTE *v111; // rsi
  __int64 v112; // r12
  unsigned __int64 v113; // r13
  _BYTE *v114; // rsi
  const char *numbered_type_name; // rax
  const char *v116; // r12
  size_t v117; // rax
  __int64 v118; // r13
  size_t v119; // r14
  size_t v120; // r15
  _BYTE *v121; // rsi
  size_t v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // [rsp+0h] [rbp-150h]
  unsigned __int64 v127; // [rsp+0h] [rbp-150h]
  int *v129; // [rsp+18h] [rbp-138h]
  __int64 v131; // [rsp+28h] [rbp-128h]
  __int64 v132; // [rsp+30h] [rbp-120h]
  void *dest; // [rsp+38h] [rbp-118h] BYREF
  __int128 v134; // [rsp+40h] [rbp-110h]
  __int64 v135; // [rsp+58h] [rbp-F8h] BYREF
  __int128 v136; // [rsp+60h] [rbp-F0h]
  void *src; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v138; // [rsp+80h] [rbp-D0h]
  _BYTE v139[96]; // [rsp+98h] [rbp-B8h] BYREF
  _BYTE v140[16]; // [rsp+F8h] [rbp-58h] BYREF
  char v141; // [rsp+108h] [rbp-48h] BYREF
  unsigned __int64 v142; // [rsp+110h] [rbp-40h]

  v142 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 408);
  v134 = 0;
  dest = nullptr;
  v135 = 0;
  v136 = 0;
  if ( v4 == 3 )
  {
LABEL_75:
    v5 = 6;
    v6 = 5;
    v7 = "union";
  }
  else if ( v4 == 1 )
  {
    v5 = 7;
    v6 = 6;
    v7 = "struct";
  }
  else
  {
    v5 = 6;
    v6 = 5;
    v7 = "class";
  }
  dest = (void *)qvector_reserve(&dest, 0, v5, 1);
  *(_QWORD *)&v134 = v5;
  v8 = 2;
  *((_BYTE *)dest + v6) = 0;
  memmove(dest, v7, v6);
  v9 = v134;
  if ( (_QWORD)v134 )
  {
    v8 = v134 + 1;
    v10 = dest;
    v9 = v134 - 1;
    if ( *((_QWORD *)&v134 + 1) >= (unsigned __int64)(v134 + 1) )
      goto LABEL_6;
  }
  else
  {
    v10 = dest;
    if ( *((_QWORD *)&v134 + 1) >= 2u )
      goto LABEL_6;
  }
  dest = (void *)qvector_reserve(&dest, v10, v8, 1);
  v10 = dest;
LABEL_6:
  *(_QWORD *)&v134 = v8;
  v10[v9] = 58;
  *((_BYTE *)dest + v9 + 1) = 0;
  v11 = sub_97AE0(a1 + 8);
  if ( v11 != -1 )
    v11 >>= 3;
  sub_1F510((__int64 *)&dest, (__int64)"%llu", v11);
  v12 = *(int **)(a1 + 384);
  v13 = v12 + 12;
  v129 = &v12[26 * *(_QWORD *)(a1 + 392)];
  if ( v12 != v129 )
  {
    while ( 1 )
    {
      v131 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL);
      if ( (v13[6] & 2) != 0 )
        v14 = *((_QWORD *)v13 + 4) >> 3;
      else
        LODWORD(v14) = sub_5E020(v13, 1u, a3);
      v15 = v134;
      v16 = 2;
      if ( (_QWORD)v134 )
      {
        v16 = v134 + 1;
        v15 = v134 - 1;
      }
      v17 = dest;
      if ( *((_QWORD *)&v134 + 1) < v16 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v16, 1);
        v17 = dest;
      }
      *(_QWORD *)&v134 = v16;
      v17[v15] = 58;
      *((_BYTE *)dest + v15 + 1) = 0;
      v18 = sub_1F510((__int64 *)&dest, (__int64)"%d", *(v13 - 2));
      v19 = v18[1];
      v20 = v18;
      v21 = 2;
      if ( v19 )
        v21 = v19-- + 1;
      v22 = *v18;
      if ( v18[2] < v21 )
      {
        v57 = qvector_reserve(v18, v22, v21, 1);
        *v20 = v57;
        v22 = v57;
      }
      v20[1] = v21;
      *(_BYTE *)(v22 + v19) = 58;
      *(_BYTE *)(*v20 + v19 + 1) = 0;
      v23 = sub_1F510(v20, (__int64)"%d", v13[8]);
      v24 = v23[1];
      v25 = v23;
      v26 = 2;
      if ( v24 )
        v26 = v24-- + 1;
      v27 = *v23;
      if ( v23[2] < v26 )
      {
        v56 = qvector_reserve(v23, v27, v26, 1);
        *v25 = v56;
        v27 = v56;
      }
      v25[1] = v26;
      *(_BYTE *)(v27 + v24) = 58;
      *(_BYTE *)(*v25 + v24 + 1) = 0;
      sub_1F510(v25, (__int64)"%d", v14);
      v28 = v13;
      src = nullptr;
      v138 = 0;
      v29 = *v13;
      if ( *v13 == 1 )
        break;
      if ( v29 != 2 )
      {
        if ( v29 != 3 )
          goto LABEL_55;
        goto LABEL_149;
      }
LABEL_154:
      v112 = v134;
      v113 = 2;
      if ( (_QWORD)v134 )
      {
        v113 = v134 + 1;
        v112 = v134 - 1;
      }
      v114 = dest;
      if ( *((_QWORD *)&v134 + 1) < v113 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v113, 1);
        v114 = dest;
      }
      *(_QWORD *)&v134 = v113;
      v114[v112] = 44;
      *((_BYTE *)dest + v112 + 1) = 0;
      numbered_type_name = (const char *)get_numbered_type_name(v131, (unsigned int)v28[4]);
      v116 = numbered_type_name;
      if ( numbered_type_name )
      {
        v117 = strlen(numbered_type_name);
        v118 = v134;
        v119 = v117;
        v120 = v117;
        if ( (_QWORD)v134 )
        {
          v118 = v134 - 1;
          v120 = v117 + v134 - 1;
        }
        v121 = dest;
        v122 = v120 + 1;
        if ( *((_QWORD *)&v134 + 1) < v120 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v122, 1);
          v122 = v120 + 1;
          v121 = dest;
        }
        *(_QWORD *)&v134 = v122;
        v121[v120] = 0;
        memmove((char *)dest + v118, v116, v119);
      }
LABEL_55:
      v48 = v136;
      v49 = 2;
      if ( (_QWORD)v136 )
      {
        v49 = v136 + 1;
        v48 = v136 - 1;
      }
      v50 = v135;
      if ( *((_QWORD *)&v136 + 1) < v49 )
      {
        v135 = qvector_reserve(&v135, v135, v49, 1);
        v50 = v135;
      }
      *(_QWORD *)&v136 = v49;
      *(_BYTE *)(v50 + v48) = 58;
      *(_BYTE *)(v135 + v48 + 1) = 0;
      v51 = *((_QWORD *)v13 - 3);
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v51 != 1 )
        {
          v53 = v136;
          v54 = v51 - 1;
          if ( (_QWORD)v136 )
          {
            v53 = v136 - 1;
            v54 = v52 + v136 - 1;
            v51 += v136 - 1;
          }
          v55 = v135;
          if ( *((_QWORD *)&v136 + 1) < v51 )
          {
            v135 = qvector_reserve(&v135, v135, v51, 1);
            v55 = v135;
          }
          *(_QWORD *)&v136 = v51;
          *(_BYTE *)(v55 + v54) = 0;
          memcpy((void *)(v53 + v135), *((const void **)v13 - 4), v52);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v138 = 0;
        qfree(src);
      }
      if ( v129 == v13 + 14 )
        goto LABEL_119;
      v13 += 26;
    }
    while ( 1 )
    {
      v30 = *((_QWORD *)v28 + 1);
      if ( *(_DWORD *)(v30 + 272) != 1 || *(_DWORD *)(v30 + 384) == 5 )
        break;
      v31 = *(_QWORD *)(v30 + 232);
      if ( (v31 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v31 == -1 )
      {
        if ( under_debugger )
          BUG();
        interr(30478);
        goto LABEL_75;
      }
      v32 = v138;
      v33 = (char *)src;
      v34 = (char *)src + 16 * v138;
      if ( src != v34 )
      {
        do
        {
          v35 = (int)v33;
          if ( !(unsigned int)sub_849A0(v30 + 232, v33) )
            break;
          v33 += 16;
        }
        while ( v34 != v33 );
        v32 = v138;
        if ( v33 != (char *)src + 16 * (_QWORD)v138 )
        {
          if ( (debug & 0x400000) != 0 )
            sub_88B80((unsigned int)"Cyclic dependency found when generating name.\n", v35, v138, v36, v37, v38);
          break;
        }
        v31 = *(_QWORD *)(v30 + 232);
      }
      v58 = *((_QWORD *)&v138 + 1);
      v59 = v32 + 1;
      v60 = *(_QWORD *)(v30 + 240);
      if ( *((_QWORD *)&v138 + 1) < v59 )
      {
        v126 = v31;
        v61 = (__m128i *)qvector_reserve(&src, 0, v59, 16);
        v92 = *((_QWORD *)&v138 + 1);
        v93 = (const __m128i *)src;
        *((_QWORD *)&v138 + 1) = v58;
        v94 = v138 - 1;
        if ( (__int64)v138 - 1 >= 0 )
        {
          v95 = v61;
          do
          {
            v96 = _mm_loadu_si128(v93);
            ++v95;
            ++v93;
            v95[-1] = v96;
          }
          while ( v94-- != 0 );
          v93 = (const __m128i *)src;
        }
        v132 = v92;
        qfree(v93);
        src = v61;
        v31 = v126;
        *((_QWORD *)&v138 + 1) = v132;
      }
      else
      {
        v61 = (__m128i *)src;
      }
      m128i_i8 = v61[v138].m128i_i8;
      *(_QWORD *)m128i_i8 = v31;
      *((_QWORD *)m128i_i8 + 1) = v60;
      *(_QWORD *)&v138 = v138 + 1;
      v63 = *((_DWORD **)v28 + 1);
      if ( v63[68] != 1 )
        v63 = nullptr;
      switch ( v63[96] )
      {
        case 1:
          v88 = v134;
          if ( (_QWORD)v134 )
          {
            v90 = v134 + 1;
            v89 = v134 + 2;
            v88 = v134 - 1;
          }
          else
          {
            v89 = 3;
            v90 = 2;
          }
          v91 = dest;
          if ( *((_QWORD *)&v134 + 1) < v89 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v89, 1);
            v91 = dest;
          }
          *(_QWORD *)&v134 = v89;
          v91[v90] = 0;
          *(_WORD *)((char *)dest + v88) = 9772;
          break;
        case 2:
          v84 = v134;
          if ( (_QWORD)v134 )
          {
            v86 = v134 + 1;
            v85 = v134 + 2;
            v84 = v134 - 1;
          }
          else
          {
            v85 = 3;
            v86 = 2;
          }
          v87 = dest;
          if ( *((_QWORD *)&v134 + 1) < v85 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v85, 1);
            v87 = dest;
          }
          *(_QWORD *)&v134 = v85;
          v87[v86] = 0;
          *(_WORD *)((char *)dest + v84) = 10796;
          break;
        case 3:
          v79 = v134;
          if ( (_QWORD)v134 )
          {
            v81 = v134 + 5;
            v80 = v134 + 6;
            v79 = v134 - 1;
          }
          else
          {
            v80 = 7;
            v81 = 6;
          }
          v82 = dest;
          if ( *((_QWORD *)&v134 + 1) < v80 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v80, 1);
            v82 = dest;
          }
          *(_QWORD *)&v134 = v80;
          v82[v81] = 0;
          v83 = (char *)dest + v79;
          *(_DWORD *)v83 = 1852793644;
          *((_WORD *)v83 + 2) = 29811;
          break;
        case 4:
          v74 = v134;
          if ( (_QWORD)v134 )
          {
            v76 = v134 + 8;
            v75 = v134 + 9;
            v74 = v134 - 1;
          }
          else
          {
            v75 = 10;
            v76 = 9;
          }
          v77 = dest;
          if ( *((_QWORD *)&v134 + 1) < v75 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v75, 1);
            v77 = dest;
          }
          *(_QWORD *)&v134 = v75;
          v77[v76] = 0;
          v78 = (char *)dest + v74;
          *(_QWORD *)v78 = 0x6C6974616C6F762CLL;
          v78[8] = 101;
          break;
        case 6:
          v64 = v134;
          if ( (_QWORD)v134 )
          {
            v66 = v134 + 1;
            v65 = v134 + 2;
            v64 = v134 - 1;
          }
          else
          {
            v65 = 3;
            v66 = 2;
          }
          v67 = dest;
          if ( *((_QWORD *)&v134 + 1) < v65 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v65, 1);
            v67 = dest;
          }
          *(_QWORD *)&v134 = v65;
          v67[v66] = 0;
          *(_WORD *)((char *)dest + v64) = 23340;
          v68 = sub_81CE0(v63 + 104);
          v69 = sub_1F510((__int64 *)&dest, (__int64)"%lld", v68);
          v70 = v69[1];
          v71 = v69;
          v72 = 2;
          if ( v70 )
            v72 = v70-- + 1;
          v73 = *v69;
          if ( v69[2] < v72 )
          {
            v123 = qvector_reserve(v69, v73, v72, 1);
            *v71 = v123;
            v73 = v123;
          }
          v71[1] = v72;
          *(_BYTE *)(v73 + v70) = 93;
          *(_BYTE *)(*v71 + v70 + 1) = 0;
          break;
        default:
          break;
      }
      v39 = v63[98];
      v28 = v63 + 98;
      if ( v39 != 1 )
        goto LABEL_36;
    }
    v39 = *v28;
LABEL_36:
    if ( v39 == 2 )
      goto LABEL_154;
    if ( v39 != 3 )
    {
      if ( v39 == 1 )
      {
        v40 = *((_QWORD *)v28 + 1);
        if ( *(_DWORD *)(v40 + 272) == 3 && v40 )
        {
          v125 = sub_30990(*((_QWORD *)v28 + 1));
          sub_1F510((__int64 *)&dest, (__int64)":[%x]", v125);
          v40 = *((_QWORD *)v28 + 1);
        }
        if ( *(_QWORD *)(v40 + 320) > 1u && **(_BYTE **)(v40 + 312) != 36 )
        {
          v41 = v134;
          v42 = 2;
          if ( (_QWORD)v134 )
          {
            v42 = v134 + 1;
            v41 = v134 - 1;
          }
          v43 = dest;
          if ( *((_QWORD *)&v134 + 1) < v42 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v42, 1);
            v43 = dest;
          }
          *(_QWORD *)&v134 = v42;
          v43[v41] = 44;
          *((_BYTE *)dest + v41 + 1) = 0;
          v44 = *(_QWORD *)(v40 + 320);
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v44 != 1 )
            {
              v46 = v134;
              v47 = v44 - 1;
              if ( (_QWORD)v134 )
              {
                v46 = v134 - 1;
                v47 = v45 + v134 - 1;
                v44 += v134 - 1;
              }
              if ( *((_QWORD *)&v134 + 1) < v44 )
              {
                v127 = v44;
                dest = (void *)qvector_reserve(&dest, dest, v44, 1);
                v44 = v127;
              }
              *(_QWORD *)&v134 = v44;
              *((_BYTE *)dest + v47) = 0;
              memcpy((char *)dest + v46, *(const void **)(v40 + 312), v45);
            }
          }
        }
      }
      goto LABEL_55;
    }
LABEL_149:
    v109 = v134;
    v110 = 2;
    if ( (_QWORD)v134 )
    {
      v110 = v134 + 1;
      v109 = v134 - 1;
    }
    v111 = dest;
    if ( *((_QWORD *)&v134 + 1) < v110 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v110, 1);
      v111 = dest;
    }
    *(_QWORD *)&v134 = v110;
    v111[v109] = 44;
    *((_BYTE *)dest + v109 + 1) = 0;
    sub_63290(a3, (__int64 *)&dest, (const __m128i *)(v28 + 2));
    goto LABEL_55;
  }
LABEL_119:
  memset(v139, 0, 0x58u);
  MD5Init(v139);
  MD5Update(v139, dest, ((_QWORD)v134 == 0) + (_QWORD)v134 - 1LL);
  if ( (unsigned __int64)v136 > 1 )
    MD5Update(v139, v135, v136 - 1);
  v98 = v140;
  MD5Final(v140, v139);
  v138 = 0;
  src = nullptr;
  v99 = (void *)qvector_reserve(&src, 0, 33, 1);
  v100 = v138;
  src = v99;
  if ( (_QWORD)v138 )
  {
    v101 = v138 + 1;
    v102 = v138;
    v100 = v138 - 1;
  }
  else
  {
    v101 = 2;
    v102 = 1;
  }
  if ( *((_QWORD *)&v138 + 1) < v101 )
  {
    v99 = (void *)qvector_reserve(&src, v99, v101, 1);
    src = v99;
  }
  *(_QWORD *)&v138 = v101;
  *((_BYTE *)v99 + v102) = 0;
  *((_BYTE *)src + v100) = 36;
  do
    sub_1F510((__int64 *)&src, (__int64)"%02X", *v98++);
  while ( &v141 != (char *)v98 );
  v103 = v138;
  if ( (_QWORD)v138 )
  {
    v104 = v138 - 1;
    if ( (_QWORD)v138 != 1 )
    {
      v106 = v138 - 1;
      v107 = a2[1];
      if ( v107 )
      {
        --v107;
        v106 = v104 + v107;
        v103 = v138 + v107;
      }
      v108 = *a2;
      if ( a2[2] < v103 )
      {
        v124 = qvector_reserve(a2, v108, v103, 1);
        *a2 = v124;
        v108 = v124;
      }
      a2[1] = v103;
      *(_BYTE *)(v108 + v106) = 0;
      memcpy((void *)(v107 + *a2), src, v104);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v138 = 0;
    qfree(src);
  }
  if ( v135 )
  {
    *(_QWORD *)&v136 = 0;
    qfree(v135);
  }
  if ( dest )
  {
    *(_QWORD *)&v134 = 0;
    qfree(dest);
  }
  return v142 - __readfsqword(0x28u);
}

