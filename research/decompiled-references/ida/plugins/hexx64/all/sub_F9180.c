__int64 __fastcall sub_F9180(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r13
  void *v13; // rax
  _QWORD *v14; // rax
  __int64 i; // r13
  int v16; // eax
  int v17; // eax
  _QWORD *v18; // r14
  char v19; // dl
  size_t v20; // rcx
  __int64 v21; // rbx
  int v22; // r8d
  int v23; // r9d
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 *v29; // r14
  _QWORD *v30; // rbp
  int **v31; // r14
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  int *v36; // rbx
  __int64 v37; // r13
  _QWORD *v38; // rax
  __int64 *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // rbp
  __int64 *v47; // r12
  __int64 v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // rbp
  __int64 *v51; // r12
  __int64 v52; // rdx
  __int64 *v53; // rdi
  __int64 *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // r13
  __int64 *v59; // rdi
  __int64 *v60; // rdi
  __int64 v61; // r13
  __int64 *v62; // rdi
  __int64 *v63; // rdi
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 na; // [rsp+10h] [rbp-288h]
  size_t n; // [rsp+10h] [rbp-288h]
  _QWORD *v74; // [rsp+18h] [rbp-280h]
  int v75; // [rsp+2Ch] [rbp-26Ch]
  __int64 v76; // [rsp+30h] [rbp-268h]
  __int64 v77; // [rsp+40h] [rbp-258h] BYREF
  __int64 v78; // [rsp+48h] [rbp-250h]
  unsigned __int8 v79; // [rsp+50h] [rbp-248h]
  __int64 v80; // [rsp+60h] [rbp-238h] BYREF
  __int128 v81; // [rsp+68h] [rbp-230h]
  __int64 (__fastcall **v82)(); // [rsp+80h] [rbp-218h] BYREF
  __int64 v83; // [rsp+88h] [rbp-210h]
  void *src; // [rsp+90h] [rbp-208h] BYREF
  __int128 v85; // [rsp+98h] [rbp-200h]
  char v86; // [rsp+A8h] [rbp-1F0h]
  __int64 *v87; // [rsp+B0h] [rbp-1E8h]
  int v88; // [rsp+C0h] [rbp-1D8h] BYREF
  _QWORD *v89; // [rsp+C8h] [rbp-1D0h]
  int *v90; // [rsp+D0h] [rbp-1C8h]
  int *v91; // [rsp+D8h] [rbp-1C0h]
  __int64 v92; // [rsp+E0h] [rbp-1B8h]
  unsigned __int8 v93; // [rsp+E8h] [rbp-1B0h]
  __int64 (__fastcall **v94)(); // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-1A0h]
  size_t v96; // [rsp+100h] [rbp-198h]
  __int64 v97; // [rsp+108h] [rbp-190h]
  __int64 v98; // [rsp+110h] [rbp-188h]
  char v99; // [rsp+118h] [rbp-180h]
  __int64 *v100; // [rsp+120h] [rbp-178h]
  __int64 *v101; // [rsp+128h] [rbp-170h]
  char v102[8]; // [rsp+130h] [rbp-168h] BYREF
  __int64 v103; // [rsp+138h] [rbp-160h]
  __int64 v104; // [rsp+140h] [rbp-158h]
  __int64 v105; // [rsp+150h] [rbp-148h]
  __int64 v106; // [rsp+158h] [rbp-140h]
  __int64 v107; // [rsp+188h] [rbp-110h]
  __int64 v108; // [rsp+190h] [rbp-108h]
  __int64 v109; // [rsp+1A0h] [rbp-F8h]
  __int64 v110; // [rsp+1A8h] [rbp-F0h]
  __int64 v111; // [rsp+1B8h] [rbp-E0h]
  __int64 v112; // [rsp+1C0h] [rbp-D8h]
  __int64 v113; // [rsp+1C8h] [rbp-D0h]
  __int64 v114; // [rsp+1D0h] [rbp-C8h]
  __int64 v115; // [rsp+1D8h] [rbp-C0h]
  __int64 v116; // [rsp+1E0h] [rbp-B8h]
  __int64 v117; // [rsp+1E8h] [rbp-B0h]
  __int128 v118; // [rsp+1F0h] [rbp-A8h]
  __int64 v119; // [rsp+200h] [rbp-98h]
  __int128 v120; // [rsp+208h] [rbp-90h]
  __int64 v121; // [rsp+218h] [rbp-80h]
  __int128 v122; // [rsp+220h] [rbp-78h]
  __int64 v123; // [rsp+230h] [rbp-68h]
  __int64 v124; // [rsp+238h] [rbp-60h]
  __int64 v125; // [rsp+240h] [rbp-58h]
  int v126; // [rsp+248h] [rbp-50h]
  unsigned __int64 v127; // [rsp+258h] [rbp-40h]

  v127 = __readfsqword(0x28u);
  v79 = 0;
  v94 = off_4DCF38;
  v77 = 0;
  v78 = 0;
  v95 = 0;
  v96 = 0;
  v1 = *(_QWORD *)(a1 + 1496);
  v99 = 0;
  v97 = 0;
  v98 = 0;
  v100 = &v77;
  v101 = nullptr;
  sub_D10B0((__int64)v102, v1, 0x10u);
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v119 = 0;
  v121 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v95 = a1;
  v118 = 0;
  v120 = 0;
  v122 = 0;
  sub_670E0((_QWORD *)a1, v1, v2, v3);
  v76 = sub_1108E0(*(_QWORD *)(a1 + 784), 0);
  if ( !v76 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v76 + 24);
  v4 = sub_110340(*(_QWORD *)(a1 + 784), 0);
  v5 = (_QWORD *)v4;
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v4 + 24);
  nullsub_39();
  v6 = *(_QWORD **)v76;
  v7 = *(int *)(a1 + 64);
  v80 = 0;
  v81 = 0;
  v74 = v6;
  if ( !v7 )
  {
    v14 = (_QWORD *)*v6;
    if ( !*v74 )
      goto LABEL_60;
    goto LABEL_13;
  }
  v82 = nullptr;
  v83 = 0;
  src = nullptr;
  v85 = 0;
  v8 = qvector_reserve((__int64)&v80, 0, v7, 40);
  v9 = v81;
  v80 = v8;
  if ( (unsigned __int64)v81 < v7 )
  {
    while ( 1 )
    {
      v10 = v8 + 40 * v9;
      sub_64000((__int64 *)v10, (__int64)&v82, 0.0);
      *(_QWORD *)(v10 + 16) = 0;
      *(_OWORD *)(v10 + 24) = 0;
      v12 = v85;
      if ( (_QWORD)v85 )
      {
        na = 16 * v85;
        v13 = (void *)qalloc_or_throw(16 * v85, (__int64)&v82, 16 * v85, v11);
        *(_QWORD *)(v10 + 16) = v13;
        ++v9;
        *(_QWORD *)(v10 + 32) = v12;
        memcpy(v13, src, na);
        *(_QWORD *)(v10 + 24) = v12;
        if ( v7 == v9 )
          break;
      }
      else if ( v7 == ++v9 )
      {
        break;
      }
      v8 = v80;
    }
  }
  *(_QWORD *)&v81 = v7;
  if ( src )
  {
    *(_QWORD *)&v85 = 0;
    qfree((__int64)src);
  }
  qfree((__int64)v82);
  v14 = (_QWORD *)*v74;
  if ( *v74 )
  {
LABEL_13:
    if ( v74[1] )
    {
      v30 = (_QWORD *)v14[1];
      if ( v30 != v14 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = (int **)(v30 + 3);
            if ( (*((_BYTE *)v30 + 56) != 1
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 264LL))(
                     *(_QWORD *)(a1 + 1504),
                     *((unsigned int *)v30 + 12)))
              && (unsigned int)sub_F8060(a1, (__int64)(v30 + 3), 0.0) == 1 )
            {
              v82 = nullptr;
              v83 = 0;
              src = nullptr;
              v85 = 0;
              sub_103D60((__int64)(v30 + 3), a1, (__int64)&v82);
              v36 = *v31;
              if ( 4LL * v30[4] )
              {
                while ( 1 )
                {
                  v37 = *v36;
                  v38 = sub_104DF0((unsigned __int64 *)(*v5 + 24 * v37), (__int64)(v30 + 3));
                  if ( !v38 )
                    break;
                  if ( v38[1] <= 1u )
                  {
                    v39 = (__int64 *)(v80 + 40 * v37);
                    sub_64280(v39, (__int64 *)&v82, 0.0);
                    sub_316CB0(v39 + 2, (__int64 **)&src, v40, v41);
                  }
                  if ( ++v36 == &(*v31)[v30[4]] )
                    goto LABEL_56;
                }
                if ( !under_debugger )
                  sub_383060(0xC3C4u, 0.0);
LABEL_151:
                BUG();
              }
LABEL_56:
              if ( src )
              {
                *(_QWORD *)&v85 = 0;
                qfree((__int64)src);
              }
              qfree((__int64)v82);
            }
            if ( (*v30 & 2) == 0 )
              break;
LABEL_40:
            if ( (_QWORD *)*v74 == v30 )
              goto LABEL_14;
          }
          v32 = (_QWORD *)v30[2];
          if ( (*(_BYTE *)v32 & 2) == 0 )
          {
            do
            {
              v30 = v32;
              v32 = (_QWORD *)v32[1];
            }
            while ( (*(_BYTE *)v32 & 2) == 0 );
            goto LABEL_40;
          }
          v33 = (_QWORD *)(*v30 & 0xFFFFFFFFFFFFFFFCLL);
          v34 = *v33;
          if ( (*v33 & 2) != 0 )
          {
LABEL_43:
            v30 = v33;
            if ( (_QWORD *)*v74 == v33 )
              break;
          }
          else
          {
            while ( 1 )
            {
              if ( (_QWORD *)v33[2] != v30 )
                goto LABEL_43;
              v30 = v33;
              v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
              v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v34 & 2) != 0 )
                break;
              v33 = (_QWORD *)v35;
            }
            v30 = (_QWORD *)v35;
            if ( *v74 == v35 )
              break;
          }
        }
      }
    }
  }
LABEL_14:
  if ( *(int *)(a1 + 64) > 0 )
  {
    for ( i = 0; v17 > (int)i; ++i )
    {
      v18 = (_QWORD *)(40 * i + v80);
      v19 = sub_64880(v18);
      v17 = *(_DWORD *)(a1 + 64);
      if ( !v19 || v18[3] )
      {
        if ( (unsigned int)i >= v17 )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, 0.0);
          goto LABEL_151;
        }
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)i);
        v101 = (__int64 *)(v80 + 40 * i);
        v21 = *(_QWORD *)(v20 + 48);
        n = v20;
        v96 = v20;
        v75 = v126;
        if ( v21 )
        {
          while ( 1 )
          {
            v97 = v21;
            sub_11E900((_BYTE *)v21, (__int64)&v94);
            sub_127A20((__int64)&v82, n, v21, 1, v22, v23);
            v24 = v101;
            sub_64640(v101, (__int64 *)&v82, v25, v26, v27, v28);
            sub_317C60(v24 + 2, (__int64)&src);
            v29 = v101;
            if ( (unsigned __int8)sub_64880(v101) )
            {
              if ( !v29[3] )
                break;
            }
            if ( src )
            {
              *(_QWORD *)&v85 = 0;
              qfree((__int64)src);
            }
            qfree((__int64)v82);
            v21 = *(_QWORD *)(v21 + 8);
            if ( !v21 )
              goto LABEL_20;
          }
          if ( src )
          {
            *(_QWORD *)&v85 = 0;
            qfree((__int64)src);
          }
          qfree((__int64)v82);
LABEL_20:
          if ( v126 != v75 )
          {
            v16 = *(_DWORD *)(n + 24);
            BYTE1(v16) &= ~2u;
            LOBYTE(v16) = v16 | 0x80;
            *(_DWORD *)(n + 24) = v16;
          }
          v17 = *(_DWORD *)(a1 + 64);
        }
      }
    }
  }
LABEL_60:
  v42 = v79;
  if ( v79 )
  {
    v83 = 0;
    v87 = &v77;
    src = nullptr;
    v85 = 0u;
    v86 = 0;
    v82 = off_4DCF60;
    v88 = 0;
    v89 = nullptr;
    v90 = &v88;
    v91 = &v88;
    v92 = 0;
    v93 = 0;
    sub_11FBB0(a1, (__int64)&v82);
    v82 = off_4DCF60;
    v42 = v93;
    sub_F6160(v89);
    if ( !v126 && !v79 )
      goto LABEL_65;
  }
  else if ( !v126 )
  {
    goto LABEL_65;
  }
  v43 = *(_QWORD *)(a1 + 784);
  if ( v43 )
    *(_DWORD *)(v43 + 48) = 63;
  sub_66FA0(a1, 1);
LABEL_65:
  v44 = v80;
  if ( v80 )
  {
    v45 = v81;
    if ( (_QWORD)v81 )
    {
      v46 = 0;
      do
      {
        v47 = (__int64 *)(v44 + 40 * v46);
        v48 = v47[2];
        if ( v48 )
        {
          v47[3] = 0;
          qfree(v48);
        }
        ++v46;
        qfree(*v47);
        v44 = v80;
      }
      while ( v45 != v46 );
    }
    *(_QWORD *)&v81 = 0;
    qfree(v44);
  }
  sub_104E10((__int64)v5);
  sub_104E10(v76);
  v94 = off_4DCF38;
  v49 = v123;
  if ( v123 )
  {
    v50 = *(_QWORD *)v123;
    if ( !v124 )
    {
      *(_QWORD *)v123 = *(_QWORD *)v123 & 3LL | v123 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v123 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v123, (__m128i)(unsigned __int64)v123);
      *(_QWORD *)v123 &= ~1uLL;
      *(_QWORD *)v123 |= 2uLL;
LABEL_83:
      if ( v123 )
        qfree(v123);
      goto LABEL_85;
    }
    v51 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
    v52 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v52 & 2) != 0 )
    {
LABEL_82:
      *(_QWORD *)v49 = v50 & 3 | v49 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v123 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v123, (__m128i)(unsigned __int64)v123);
      *(_QWORD *)v123 &= ~1uLL;
      *(_QWORD *)v123 |= 2uLL;
      v124 = 0;
      goto LABEL_83;
    }
    v53 = (__int64 *)v51[1];
    if ( (*(_BYTE *)v53 & 2) != 0 )
    {
      v54 = (__int64 *)v51[2];
      if ( (*(_BYTE *)v54 & 2) != 0 )
        goto LABEL_130;
    }
    else
    {
      sub_F56D0(v53);
      v54 = (__int64 *)v51[2];
      if ( (*(_BYTE *)v54 & 2) != 0 )
        goto LABEL_78;
    }
    sub_F56D0(v54);
LABEL_78:
    v52 = *v51;
    if ( (*v51 & 2) != 0 )
    {
LABEL_79:
      if ( v50 > 3 )
        qfree(v50 & 0xFFFFFFFFFFFFFFFCLL);
      v49 = v123;
      v50 = *(_QWORD *)v123;
      goto LABEL_82;
    }
LABEL_130:
    *v51 = v52 | 2;
    goto LABEL_79;
  }
LABEL_85:
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121);
  }
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree(v117);
  }
  qfree(v115);
  qfree(v113);
  qfree(v111);
  if ( v109 )
  {
    v110 = 0;
    qfree(v109);
  }
  if ( v107 )
  {
    v108 = 0;
    qfree(v107);
  }
  if ( v105 )
  {
    v106 = 0;
    qfree(v105);
  }
  if ( v103 )
  {
    v104 = 0;
    qfree(v103);
  }
  v55 = v77;
  if ( v77 )
  {
    v56 = *(_QWORD *)v77;
    if ( !v78 )
    {
      *(_QWORD *)v77 = v77 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v77 & 3LL;
      v67 = v77;
      v68 = (__m128i)(unsigned __int64)v77;
      *(_QWORD *)v77 &= ~1uLL;
      *(__m128i *)(v67 + 8) = _mm_unpacklo_epi64(v68, v68);
      *(_QWORD *)v77 |= 2uLL;
LABEL_121:
      if ( v77 )
        qfree(v77);
      return v42;
    }
    v57 = v56 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v56 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_120:
      *(_QWORD *)v55 = v56 & 3 | v55 & 0xFFFFFFFFFFFFFFFCLL;
      v64 = v77;
      v65 = (__m128i)(unsigned __int64)v77;
      *(_QWORD *)v77 &= ~1uLL;
      *(__m128i *)(v64 + 8) = _mm_unpacklo_epi64(v65, v65);
      *(_QWORD *)v77 |= 2uLL;
      v78 = 0;
      goto LABEL_121;
    }
    v58 = *(_QWORD *)(v57 + 8);
    if ( (*(_BYTE *)v58 & 2) != 0 )
    {
      v61 = *(_QWORD *)(v57 + 16);
      if ( (*(_BYTE *)v61 & 2) != 0 )
        goto LABEL_132;
      goto LABEL_110;
    }
    v59 = *(__int64 **)(v58 + 8);
    if ( (*(_BYTE *)v59 & 2) != 0 )
    {
      v60 = *(__int64 **)(v58 + 16);
      if ( (*(_BYTE *)v60 & 2) != 0 )
      {
LABEL_140:
        v71 = *(_QWORD *)(v58 + 32);
        if ( v71 )
        {
          *(_QWORD *)(v58 + 40) = 0;
          qfree(v71);
        }
        *(_QWORD *)v58 |= 2uLL;
LABEL_107:
        if ( v58 )
          qfree(v58);
        v61 = *(_QWORD *)(v57 + 16);
        if ( (*(_BYTE *)v61 & 2) != 0 )
        {
LABEL_116:
          if ( (*(_BYTE *)v57 & 2) != 0 )
          {
LABEL_117:
            if ( v56 > 3 )
              qfree(v56 & 0xFFFFFFFFFFFFFFFCLL);
            v55 = v77;
            v56 = *(_QWORD *)v77;
            goto LABEL_120;
          }
LABEL_132:
          v69 = *(_QWORD *)(v57 + 32);
          if ( v69 )
          {
            *(_QWORD *)(v57 + 40) = 0;
            qfree(v69);
          }
          *(_QWORD *)v57 |= 2uLL;
          goto LABEL_117;
        }
LABEL_110:
        v62 = *(__int64 **)(v61 + 8);
        if ( (*(_BYTE *)v62 & 2) != 0 )
        {
          v63 = *(__int64 **)(v61 + 16);
          if ( (*(_BYTE *)v63 & 2) != 0 )
            goto LABEL_136;
        }
        else
        {
          sub_F5800(v62);
          v63 = *(__int64 **)(v61 + 16);
          if ( (*(_BYTE *)v63 & 2) != 0 )
            goto LABEL_113;
        }
        sub_F5800(v63);
LABEL_113:
        if ( (*(_BYTE *)v61 & 2) != 0 )
        {
LABEL_114:
          if ( v61 )
            qfree(v61);
          goto LABEL_116;
        }
LABEL_136:
        v70 = *(_QWORD *)(v61 + 32);
        if ( v70 )
        {
          *(_QWORD *)(v61 + 40) = 0;
          qfree(v70);
        }
        *(_QWORD *)v61 |= 2uLL;
        goto LABEL_114;
      }
    }
    else
    {
      sub_F5800(v59);
      v60 = *(__int64 **)(v58 + 16);
      if ( (*(_BYTE *)v60 & 2) != 0 )
        goto LABEL_106;
    }
    sub_F5800(v60);
LABEL_106:
    if ( (*(_BYTE *)v58 & 2) != 0 )
      goto LABEL_107;
    goto LABEL_140;
  }
  return v42;
}

