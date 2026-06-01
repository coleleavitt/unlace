__int64 __fastcall sub_17F00(unsigned __int8 *a1, __int64 a2, unsigned __int16 a3, __int64 a4, int a5)
{
  unsigned __int8 *v7; // rbx
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // r15
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  _DWORD *v14; // rsi
  __int64 v15; // rbp
  void *v16; // rax
  char *v17; // rdi
  int v18; // ecx
  int v19; // ebp
  int v20; // r12d
  _BYTE *v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // ebp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __m128i v36; // xmm1
  unsigned __int64 v37; // r12
  __m128i v38; // xmm0
  __int64 v39; // rbp
  __int64 v40; // r14
  void *v41; // rax
  unsigned __int64 v42; // rbp
  char v43; // al
  unsigned __int64 v44; // rcx
  _BYTE *v45; // r12
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int128 v49; // kr00_16
  char **v50; // rsi
  unsigned __int64 v51; // rdx
  unsigned int v52; // edx
  __int64 v53; // rbp
  bool v54; // cf
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  _QWORD *v62; // r12
  __int64 k; // rbx
  _QWORD *v64; // rbp
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rsi
  void (__fastcall *v68)(_QWORD, __int64); // rax
  unsigned __int8 v69; // r12
  int v70; // ebp
  char v71; // r10
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int16 v74; // ax
  unsigned __int64 v75; // rax
  __int64 v76; // rbp
  char *v77; // rax
  __int64 v78; // rbp
  void *v79; // r12
  const void *v80; // rdi
  __int64 *v81; // r15
  __int64 v82; // rdi
  __int64 v83; // r12
  __int64 i; // rbp
  _QWORD *v85; // r14
  __int64 v86; // rdi
  unsigned __int64 *v87; // rax
  unsigned __int64 v88; // rbp
  _QWORD *v89; // r14
  __int64 v90; // rdi
  __int64 v91; // rbx
  __int64 v92; // rdi
  bool v93; // zf
  __int64 *v94; // rbx
  __int64 v95; // rdi
  __int64 v96; // r12
  __int64 j; // r13
  _QWORD *v98; // r15
  __int64 v99; // rdi
  void *v100; // rbp
  __int64 v101; // rdi
  __int64 *v102; // rbp
  __int64 v103; // rdi
  __m128i si128; // xmm0
  __int64 v105; // rbp
  __int64 v106; // r12
  void *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rbp
  __int64 v111; // rdi
  __int64 *v112; // r15
  __int64 v113; // rdi
  __int64 v114; // r12
  __int64 v115; // rbp
  _QWORD *v116; // r14
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  void *v120; // rax
  unsigned __int8 *n; // [rsp+8h] [rbp-500h]
  __int64 nd; // [rsp+8h] [rbp-500h]
  size_t na; // [rsp+8h] [rbp-500h]
  size_t ne; // [rsp+8h] [rbp-500h]
  __int64 *nb; // [rsp+8h] [rbp-500h]
  __int64 *nc; // [rsp+8h] [rbp-500h]
  __int64 *v127; // [rsp+10h] [rbp-4F8h]
  _QWORD *v128; // [rsp+10h] [rbp-4F8h]
  _QWORD *v129; // [rsp+10h] [rbp-4F8h]
  _QWORD *v130; // [rsp+10h] [rbp-4F8h]
  _QWORD *v131; // [rsp+10h] [rbp-4F8h]
  unsigned __int64 v132; // [rsp+10h] [rbp-4F8h]
  _QWORD *v133; // [rsp+10h] [rbp-4F8h]
  _QWORD *v134; // [rsp+10h] [rbp-4F8h]
  _QWORD *v135; // [rsp+10h] [rbp-4F8h]
  unsigned __int64 v136; // [rsp+10h] [rbp-4F8h]
  unsigned int v139; // [rsp+20h] [rbp-4E8h]
  __int64 *v140; // [rsp+28h] [rbp-4E0h]
  __int16 v141; // [rsp+30h] [rbp-4D8h]
  _QWORD *v143; // [rsp+38h] [rbp-4D0h]
  unsigned __int8 *v144; // [rsp+38h] [rbp-4D0h]
  char v145; // [rsp+47h] [rbp-4C1h]
  char v146; // [rsp+5Fh] [rbp-4A9h] BYREF
  char *v147; // [rsp+60h] [rbp-4A8h] BYREF
  void *v148[2]; // [rsp+68h] [rbp-4A0h]
  __int128 v149; // [rsp+78h] [rbp-490h]
  _BYTE v150[24]; // [rsp+90h] [rbp-478h] BYREF
  __int128 v151; // [rsp+A8h] [rbp-460h]
  _BYTE v152[1032]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v153; // [rsp+4C8h] [rbp-40h]

  v7 = a1;
  LODWORD(v140) = a5;
  v153 = __readfsqword(0x28u);
  v8 = sub_173C0((__int64)a1);
  if ( *a1 )
    return 2;
  v9 = v8;
  if ( !v8 )
  {
    if ( a5 )
    {
      *(_BYTE *)a2 = 1;
      v10 = *(__int64 **)(a4 + 48);
      v147 = nullptr;
      v140 = v10;
      *(_QWORD *)&v149 = v10;
      n = (unsigned __int8 *)&v146;
      *(_OWORD *)v148 = 0;
LABEL_5:
      if ( qlread(*((_QWORD *)v7 + 2), v150, 1) != 1 )
        *v7 = 1;
      LOBYTE(v143) = v150[0];
      v141 = sub_17340((__int64)v7);
      if ( *v7 )
        goto LABEL_27;
LABEL_8:
      v11 = v140[1];
      v12 = *v140;
      if ( v140[2] < (unsigned __int64)(v11 + 1) )
      {
        v66 = qvector_reserve(v140, v12, v11 + 1, 104);
        *v140 = v66;
        v11 = v140[1];
        v12 = v66;
      }
      v13 = v12 + 104 * v11;
      *(_QWORD *)(v13 + 96) = 0;
      *(_QWORD *)v13 = 0;
      memset(
        (void *)((v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((_DWORD)v12 + 104 * (_DWORD)v11 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 104) >> 3));
      ++v140[1];
      *(_QWORD *)(v13 + 96) = v140;
      v14 = v147;
      v15 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v13 - *v140) >> 3);
      v16 = v148[0];
      v17 = (char *)v148[0] + 1;
      *(_DWORD *)v150 = v15;
      v18 = v15;
      if ( v150 >= v147 && v150 < &v147[4 * (__int64)v148[1]] )
      {
        if ( v148[1] < v17 )
        {
          v147 = (char *)qvector_reserve(&v147, v147, (char *)v148[0] + 1, 4);
          v14 = v147;
          v16 = v148[0];
        }
        v14[(_QWORD)v16] = v15;
      }
      else
      {
        if ( v148[1] < v17 )
        {
          v147 = (char *)qvector_reserve(&v147, v147, (char *)v148[0] + 1, 4);
          v14 = v147;
          v18 = *(_DWORD *)v150;
          v16 = v148[0];
        }
        v14[(_QWORD)v16] = v18;
      }
      ++v148[0];
      *(_BYTE *)(v13 + 66) = (_BYTE)v143;
      *(_WORD *)(v13 + 64) = v141;
      *(_DWORD *)v13 = sub_175B0((__int64)v7, a4);
      if ( *v7 )
        goto LABEL_27;
      v19 = 0;
      while ( 1 )
      {
        v26 = *(_QWORD *)(v13 + 16);
        v27 = *(_QWORD *)(v13 + 8);
        if ( *(_QWORD *)(v13 + 24) < (unsigned __int64)(v26 + 1) )
        {
          v30 = qvector_reserve(v13 + 8, v27, v26 + 1, 32);
          *(_QWORD *)(v13 + 8) = v30;
          v26 = *(_QWORD *)(v13 + 16);
          v27 = v30;
        }
        v25 = v27 + 32 * v26;
        *(_QWORD *)v25 = 0;
        *(_OWORD *)(v25 + 8) = 0;
        ++*(_QWORD *)(v13 + 16);
        if ( !v25 )
          break;
        if ( *(_BYTE *)(a4 + 6) > 8u )
        {
          v20 = sub_17460((__int64)v7);
          if ( *v7 )
            goto LABEL_27;
        }
        else
        {
          v20 = (unsigned __int16)sub_173C0((__int64)v7);
          if ( *v7 )
            goto LABEL_27;
        }
        v21 = (_BYTE *)v25;
        if ( (unsigned int)sub_17680((__int64)v7, v25, n) )
          goto LABEL_27;
        v24 = *(_BYTE *)(v25 + 28);
        if ( (v24 & 0x10) != 0 )
        {
          v20 = -v20;
          *(_BYTE *)(v25 + 28) = v24 & 0xEF;
        }
        v19 += v20;
        *(_DWORD *)(v25 + 24) = v19;
        LOBYTE(v25) = v146;
        if ( (v146 & 1) == 0 )
        {
          if ( (v146 & 2) == 0 )
            goto LABEL_116;
          v69 = 1;
          if ( *(_BYTE *)(a4 + 6) <= 7u )
          {
LABEL_107:
            v70 = 0;
            while ( 1 )
            {
              v21 = v150;
              v139 = sub_175B0((__int64)v7, a4);
              if ( qlread(*((_QWORD *)v7 + 2), v150, 1) != 1 )
                break;
              v71 = v150[0];
              if ( *v7 )
                goto LABEL_27;
              v22 = *(_QWORD *)(v13 + 80);
              if ( v22 <= 0xFE )
              {
                v72 = *(_QWORD *)(v13 + 72);
                v21 = (_BYTE *)(v22 + 1);
                if ( *(_QWORD *)(v13 + 88) < v22 + 1 )
                {
                  v145 = v150[0];
                  v72 = qvector_reserve(v13 + 72, *(_QWORD *)(v13 + 72), v22 + 1, 8);
                  v22 = *(_QWORD *)(v13 + 80);
                  v71 = v145;
                  *(_QWORD *)(v13 + 72) = v72;
                  v21 = (_BYTE *)(v22 + 1);
                }
                v23 = v139;
                v73 = v72 + 8 * v22;
                *(_QWORD *)(v13 + 80) = v21;
                *(_BYTE *)(v73 + 4) = v71;
                *(_DWORD *)v73 = v139;
              }
              if ( v69 <= ++v70 )
                goto LABEL_116;
            }
LABEL_109:
            *v7 = 1;
            goto LABEL_27;
          }
          v21 = v150;
          if ( qlread(*((_QWORD *)v7 + 2), v150, 1) != 1 )
            goto LABEL_109;
          v69 = v150[0];
          if ( *v7 )
          {
LABEL_27:
            v28 = 2;
            goto LABEL_28;
          }
          if ( v150[0] )
            goto LABEL_107;
LABEL_116:
          if ( (v25 & 4) == 0 )
            goto LABEL_132;
          if ( *(_BYTE *)(a4 + 6) > 7u )
          {
            if ( qlread(*((_QWORD *)v7 + 2), v150, 1) != 1 )
              goto LABEL_109;
            if ( *v7 )
              goto LABEL_27;
          }
          *(_DWORD *)(v13 + 56) = sub_175B0((__int64)v7, a4);
          if ( qlread(*((_QWORD *)v7 + 2), v150, 1) != 1 )
            goto LABEL_109;
          v53 = v150[0];
          if ( *v7 )
            goto LABEL_27;
          if ( !v150[0] )
          {
            v74 = sub_173C0((__int64)v7);
            v53 = v74;
            if ( *v7 || !v74 )
              goto LABEL_27;
          }
          v75 = *(_QWORD *)(v13 + 40);
          v45 = (_BYTE *)(v53 + 1);
          if ( v75 < v53 + 1 )
          {
            v50 = *(char ***)(v13 + 32);
            if ( *(_QWORD *)(v13 + 48) >= (unsigned __int64)v45 )
            {
LABEL_212:
              memset((char *)v50 + v75, 0, (size_t)&v45[-v75]);
              *(_QWORD *)(v13 + 40) = v45;
              goto LABEL_128;
            }
LABEL_215:
            v119 = qvector_reserve(v13 + 32, v50, v45, 1);
            *(_QWORD *)(v13 + 32) = v119;
            v50 = (char **)v119;
            v75 = *(_QWORD *)(v13 + 40);
            goto LABEL_212;
          }
          if ( v45 != (_BYTE *)v75 )
            *(_QWORD *)(v13 + 40) = v45;
LABEL_128:
          *(_BYTE *)(*(_QWORD *)(v13 + 32) + v53) = 0;
          v21 = *(_BYTE **)(v13 + 32);
          qlread(*((_QWORD *)v7 + 2), v21, v53);
          v76 = v53 - 1;
          v77 = &byte_20510;
          v23 = *(_QWORD *)(v13 + 40) | v76;
          if ( v23 )
            v77 = (char *)(v76 + *(_QWORD *)(v13 + 32));
          if ( !*v77 )
            *(_DWORD *)(v13 + 56) = -*(_DWORD *)(v13 + 56);
LABEL_132:
          if ( (v25 & 8) == 0 )
          {
            if ( (v25 & 0x10) == 0 )
            {
              if ( !*(_QWORD *)(a2 + 8) )
              {
                v78 = qalloc_or_throw(32);
                *(_QWORD *)v78 = 0;
                *(_OWORD *)(v78 + 8) = 0;
                v79 = v148[0];
                if ( v148[0] )
                {
                  v120 = (void *)qalloc_or_throw(4 * (__int64)v148[0]);
                  *(_QWORD *)v78 = v120;
                  *(_QWORD *)(v78 + 16) = v79;
                  memcpy(v120, v147, 4LL * (_QWORD)v79);
                  *(_QWORD *)(v78 + 8) = v79;
                }
                *(_QWORD *)(v78 + 24) = v149;
                v80 = v147;
                *(_QWORD *)(a2 + 8) = v78;
                if ( v80 )
                {
                  v148[0] = nullptr;
                  qfree(v80);
                }
                return 2 * (unsigned int)*v7;
              }
              if ( !under_debugger )
                interr(712, v21, v22, v23);
LABEL_220:
              BUG();
            }
            goto LABEL_5;
          }
          goto LABEL_8;
        }
      }
      v68 = *((void (__fastcall **)(_QWORD, __int64))v7 + 1);
      if ( v68 )
        v68(*((_QWORD *)v7 + 2), 1);
      sub_17950((_QWORD *)a4);
      v28 = 1;
LABEL_28:
      if ( v147 )
      {
        v148[0] = nullptr;
        qfree(v147);
      }
    }
    else
    {
      return 4;
    }
    return v28;
  }
  *(_BYTE *)a2 = 0;
  v31 = qalloc_or_throw(24);
  *(_QWORD *)v31 = 0;
  v32 = (__int64 *)v31;
  *(_OWORD *)(v31 + 8) = 0;
  *(_QWORD *)(a2 + 8) = v31;
  if ( v9 != *(_QWORD *)(v31 + 8) )
  {
    LOBYTE(v147) = 0;
    *(_OWORD *)v148 = 0;
    v149 = 0;
    v33 = *(_QWORD *)(v31 + 8);
    if ( v9 >= v33 )
    {
      if ( v33 >= v9 )
        goto LABEL_139;
      v34 = *(_QWORD *)v31;
      v35 = *(_QWORD *)(v31 + 16);
      if ( (unsigned __int64)&v147 < v34 || (unsigned __int64)&v147 >= v34 + 40 * v35 )
      {
        if ( v35 >= v9
          || (nb = v32, v109 = qvector_reserve(v32, v34, v9, 40), v32 = nb,
                                                                  v34 = v109,
                                                                  v33 = nb[1],
                                                                  *nb = v109,
                                                                  v33 < v9) )
        {
          while ( 1 )
          {
            si128 = _mm_load_si128((const __m128i *)&v147);
            v105 = v34 + 40 * v33;
            *(_QWORD *)(v105 + 16) = 0;
            *(__m128i *)v105 = si128;
            *(_OWORD *)(v105 + 24) = 0;
            v106 = v149;
            if ( (_QWORD)v149 )
            {
              v136 = v33;
              ne = (size_t)v32;
              v107 = (void *)qalloc_or_throw(2 * v149);
              *(_QWORD *)(v105 + 16) = v107;
              *(_QWORD *)(v105 + 32) = v106;
              memcpy(v107, v148[1], 2 * v106);
              *(_QWORD *)(v105 + 24) = v106;
              v33 = v136;
              v32 = (__int64 *)ne;
            }
            if ( ++v33 >= v9 )
              break;
            v34 = *v32;
          }
        }
        v32[1] = v9;
      }
      else
      {
        v36 = _mm_load_si128((const __m128i *)&v147);
        v151 = 0;
        *(_QWORD *)&v150[16] = 0;
        *(__m128i *)v150 = v36;
        if ( v32[2] < v9 )
        {
          nc = v32;
          v118 = qvector_reserve(v32, *v32, v9, 40);
          v32 = nc;
          *nc = v118;
        }
        v37 = v32[1];
        if ( v37 < v9 )
        {
          do
          {
            v38 = _mm_load_si128((const __m128i *)v150);
            v39 = *v32 + 40 * v37;
            *(_QWORD *)(v39 + 16) = 0;
            *(__m128i *)v39 = v38;
            *(_OWORD *)(v39 + 24) = 0;
            v40 = v151;
            if ( (_QWORD)v151 )
            {
              v127 = v32;
              nd = 2 * v151;
              v41 = (void *)qalloc_or_throw(2 * v151);
              *(_QWORD *)(v39 + 16) = v41;
              *(_QWORD *)(v39 + 32) = v40;
              memcpy(v41, *(const void **)&v150[16], nd);
              *(_QWORD *)(v39 + 24) = v40;
              v32 = v127;
            }
            ++v37;
          }
          while ( v9 != v37 );
        }
        v32[1] = v9;
        if ( *(_QWORD *)&v150[16] )
        {
          *(_QWORD *)&v151 = 0;
          qfree(*(_QWORD *)&v150[16]);
        }
        if ( v150[0] )
        {
          v110 = *(_QWORD *)&v150[8];
          if ( *(_QWORD *)&v150[8] )
          {
            v111 = **(_QWORD **)&v150[8];
            if ( **(_QWORD **)&v150[8] )
            {
              *(_QWORD *)(*(_QWORD *)&v150[8] + 8LL) = 0;
              qfree(v111);
            }
            qfree(v110);
          }
        }
        else
        {
          v112 = *(__int64 **)&v150[8];
          if ( *(_QWORD *)&v150[8] )
          {
            v113 = **(_QWORD **)&v150[8];
            if ( **(_QWORD **)&v150[8] )
            {
              v114 = *(_QWORD *)(*(_QWORD *)&v150[8] + 8LL);
              v115 = 0;
              if ( v114 )
              {
                do
                {
                  v116 = (_QWORD *)(v113 + 40 * v115);
                  v117 = v116[2];
                  if ( v117 )
                  {
                    v116[3] = 0;
                    qfree(v117);
                  }
                  ++v115;
                  sub_A960(v116);
                  v113 = *v112;
                }
                while ( v114 != v115 );
              }
              v112[1] = 0;
              qfree(v113);
            }
            qfree(v112);
          }
        }
      }
LABEL_170:
      if ( v148[1] )
      {
        *(_QWORD *)&v149 = 0;
        qfree(v148[1]);
      }
      if ( (_BYTE)v147 )
      {
        v100 = v148[0];
        if ( v148[0] )
        {
          v101 = *(_QWORD *)v148[0];
          if ( *(_QWORD *)v148[0] )
          {
            *((_QWORD *)v148[0] + 1) = 0;
            qfree(v101);
          }
          qfree(v100);
        }
      }
      else
      {
LABEL_139:
        v81 = (__int64 *)v148[0];
        if ( v148[0] )
        {
          v82 = *(_QWORD *)v148[0];
          if ( *(_QWORD *)v148[0] )
          {
            v83 = *((_QWORD *)v148[0] + 1);
            if ( v83 )
            {
              for ( i = 0; i != v83; ++i )
              {
                v85 = (_QWORD *)(v82 + 40 * i);
                v86 = v85[2];
                if ( v86 )
                {
                  v85[3] = 0;
                  qfree(v86);
                }
                sub_A960(v85);
                v82 = *v81;
              }
            }
            v81[1] = 0;
            qfree(v82);
          }
          qfree(v81);
        }
      }
      v87 = *(unsigned __int64 **)(a2 + 8);
      v13 = *v87;
      if ( !(40 * v87[1]) )
        return 2 * (unsigned int)*v7;
      goto LABEL_51;
    }
    v132 = v9;
    v88 = v9;
    v89 = (_QWORD *)v31;
    na = *(_QWORD *)(v31 + 8);
    v143 = (_QWORD *)a4;
    while ( 1 )
    {
      v91 = *v89 + 40 * v88;
      v92 = *(_QWORD *)(v91 + 16);
      if ( v92 )
      {
        *(_QWORD *)(v91 + 24) = 0;
        qfree(v92);
      }
      v93 = *(_BYTE *)v91 == 0;
      v94 = *(__int64 **)(v91 + 8);
      if ( v93 )
        break;
      if ( v94 )
      {
        v90 = *v94;
        if ( *v94 )
        {
          v94[1] = 0;
          qfree(v90);
        }
LABEL_155:
        qfree(v94);
      }
LABEL_156:
      if ( ++v88 >= na )
      {
        v7 = a1;
        a4 = (__int64)v143;
        v89[1] = v132;
        goto LABEL_170;
      }
    }
    if ( !v94 )
      goto LABEL_156;
    v95 = *v94;
    if ( *v94 )
    {
      v96 = v94[1];
      if ( v96 )
      {
        for ( j = 0; j != v96; ++j )
        {
          v98 = (_QWORD *)(v95 + 40 * j);
          v99 = v98[2];
          if ( v99 )
          {
            v98[3] = 0;
            qfree(v99);
          }
          sub_A960(v98);
          v95 = *v94;
        }
      }
      v94[1] = 0;
      qfree(v95);
    }
    goto LABEL_155;
  }
  v13 = *(_QWORD *)v31;
LABEL_51:
  v141 = a3;
  n = (unsigned __int8 *)&v147;
  while ( 1 )
  {
    if ( *(_BYTE *)(a4 + 6) <= 9u )
    {
      if ( qlread(*((_QWORD *)v7 + 2), v150, 1) != 1 )
      {
        *v7 = 1;
        return 2;
      }
      v43 = *v7;
      v42 = v150[0];
    }
    else
    {
      v42 = (unsigned __int16)sub_173C0((__int64)v7);
      v43 = *v7;
    }
    if ( v43 || a3 < v42 )
      return 2;
    v44 = *(_QWORD *)(v13 + 24);
    if ( v44 < v42 )
    {
      v67 = *(_QWORD *)(v13 + 16);
      if ( *(_QWORD *)(v13 + 32) < v42 )
      {
        v108 = qvector_reserve(v13 + 16, v67, v42, 2);
        v44 = *(_QWORD *)(v13 + 24);
        *(_QWORD *)(v13 + 16) = v108;
        v67 = v108;
      }
      memset((void *)(v67 + 2 * v44), 0, 2 * (v42 - v44));
      *(_QWORD *)(v13 + 24) = v42;
    }
    else if ( v42 != v44 )
    {
      *(_QWORD *)(v13 + 24) = v42;
    }
    v45 = *(_BYTE **)(v13 + 16);
    memset(v150, 0, sizeof(v150));
    LODWORD(v151) = 0;
    *(_QWORD *)v150 = qvector_reserve(v150, 0, 8, 1);
    **(_QWORD **)v150 = 0;
    sub_17800(v7, (__int64)v150, v42);
    if ( *v7 )
      break;
    v47 = (unsigned int)v151;
    if ( (unsigned int)v151 > 0x3FFuLL )
      v47 = 1023;
    LODWORD(v48) = v47 - 1;
    if ( v47 )
    {
      v49 = *(_OWORD *)v150;
      v48 = (int)v48;
      v50 = (char **)v152;
      do
      {
        v51 = (unsigned int)v48 >> 3;
        if ( v51 >= *((_QWORD *)&v49 + 1) )
        {
          if ( !under_debugger )
            interr(709, v50, v51, v46);
          goto LABEL_220;
        }
        v50 = (char **)((char *)v50 + 1);
        v46 = *(unsigned __int8 *)(v49 + (v48 >> 3));
        v52 = v48 & 7;
        LOBYTE(v52) = _bittest((const int *)&v46, v52);
        --v48;
        v47 = v52 + 48;
        *((_BYTE *)v50 - 1) = v47;
      }
      while ( (_DWORD)v48 != -1 );
    }
    else
    {
      v50 = (char **)v152;
    }
    *(_BYTE *)v50 = 0;
    if ( v42 )
    {
      LODWORD(v25) = v42 - 1;
      v53 = 0;
      do
      {
        while ( 1 )
        {
          if ( (unsigned __int64)((unsigned int)v25 >> 3) >= *(_QWORD *)&v150[8] )
          {
            if ( under_debugger )
              goto LABEL_220;
            interr(709, v50, v47, v46);
            goto LABEL_215;
          }
          v47 = *(unsigned __int8 *)(*(_QWORD *)v150 + ((unsigned __int64)(unsigned int)v25 >> 3));
          if ( !_bittest((const int *)&v47, v25 & 7) )
            break;
          *v45 = 0;
          v45 += 2;
          v54 = (_DWORD)v25 == 0;
          LODWORD(v25) = v25 - 1;
          if ( v54 )
            goto LABEL_75;
        }
        *v45 = 1;
        v50 = &v147;
        if ( qlread(*((_QWORD *)v7 + 2), &v147, 1) != 1 )
          *v7 = 1;
        v45[1] = (_BYTE)v147;
        if ( *v7 )
          goto LABEL_91;
        v53 = (unsigned int)(v53 + 1);
        v45 += 2;
        v54 = (_DWORD)v25 == 0;
        LODWORD(v25) = v25 - 1;
      }
      while ( !v54 );
LABEL_75:
      v55 = (unsigned int)(v53 + (_DWORD)v140);
    }
    else
    {
      v55 = (unsigned int)v140;
    }
    v56 = sub_17F00(v7, v13, a3, a4, v55);
    v28 = v56;
    if ( v56 )
    {
      if ( v56 != 4 )
        goto LABEL_92;
      v57 = *(_QWORD *)(v13 + 16);
      v58 = *(_QWORD **)(a2 + 8);
      if ( v57 )
      {
        *(_QWORD *)(v13 + 24) = 0;
        v128 = v58;
        qfree(v57);
        v58 = v128;
      }
      if ( *(_BYTE *)v13 )
      {
        v102 = *(__int64 **)(v13 + 8);
        if ( v102 )
        {
          v103 = *v102;
          if ( *v102 )
          {
            v102[1] = 0;
            v133 = v58;
            qfree(v103);
            v58 = v133;
          }
          v134 = v58;
          qfree(v102);
          v58 = v134;
        }
      }
      else
      {
        v59 = *(_QWORD **)(v13 + 8);
        if ( v59 )
        {
          v60 = *v59;
          if ( *v59 )
          {
            v61 = v59[1];
            if ( v61 )
            {
              v129 = v58;
              v62 = *(_QWORD **)(v13 + 8);
              v144 = v7;
              for ( k = 0; k != v61; ++k )
              {
                v64 = (_QWORD *)(v60 + 40 * k);
                v65 = v64[2];
                if ( v65 )
                {
                  v64[3] = 0;
                  qfree(v65);
                }
                sub_A960(v64);
                v60 = *v62;
              }
              v58 = v129;
              v7 = v144;
              v59 = v62;
            }
            v59[1] = 0;
            v143 = v58;
            v130 = v59;
            qfree(v60);
            v58 = v143;
            v59 = v130;
          }
          v131 = v58;
          qfree(v59);
          v58 = v131;
        }
      }
      v135 = v58;
      memmove((void *)v13, (const void *)(v13 + 40), *v58 + 40LL * v58[1] - v13 - 40);
      --v135[1];
    }
    else
    {
      v13 += 40LL;
    }
    if ( *(_QWORD *)v150 )
    {
      *(_QWORD *)&v150[8] = 0;
      qfree(*(_QWORD *)v150);
    }
    if ( v13 == **(_QWORD **)(a2 + 8) + 40LL * *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) )
      return 2 * (unsigned int)*v7;
  }
LABEL_91:
  v28 = 2;
LABEL_92:
  if ( *(_QWORD *)v150 )
  {
    *(_QWORD *)&v150[8] = 0;
    qfree(*(_QWORD *)v150);
  }
  return v28;
}

