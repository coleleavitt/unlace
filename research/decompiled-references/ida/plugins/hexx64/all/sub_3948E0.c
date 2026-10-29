// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_3948E0(__int64 a1, int a2, __int64 a3, __int64 a4, double a5, double a6, __m128i a7, double a8)
{
  __int64 v10; // rbp
  __int64 module_data; // r13
  __int64 v12; // rdi
  __int64 *v13; // rbx
  unsigned __int64 *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rbx
  int v17; // eax
  char v18; // bp
  double v19; // xmm0_8
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 i; // r12
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 j; // r12
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 **k; // rax
  __int64 *v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rcx
  unsigned __int64 **m; // rdx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 *v50; // rbx
  __int64 v51; // rsi
  __int64 ii; // rdx
  __int64 *v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 jj; // rcx
  __int64 *v58; // rdx
  __int64 v59; // rdi
  unsigned int v60; // eax
  size_t v61; // rbp
  int v62; // ebp
  __int64 v63; // rcx
  __int64 v64; // rdx
  const char *v65; // r8
  unsigned int v66; // eax
  _QWORD *v67; // rbp
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 *v70; // rbp
  __int64 v71; // rcx
  unsigned __int64 v72; // rsi
  __int64 kk; // rax
  __int64 *v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rcx
  unsigned __int64 v78; // rsi
  __int64 mm; // rdx
  __int64 *v80; // rax
  __int64 v81; // rdi
  __int64 v82; // r9
  double v83; // xmm0_8
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 *v88; // r15
  __int64 v89; // rsi
  __int64 *v90; // rbx
  __int64 *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned __int64 **v94; // [rsp+0h] [rbp-158h]
  __int64 v95; // [rsp+8h] [rbp-150h]
  __int64 v96; // [rsp+10h] [rbp-148h]
  unsigned __int64 v97; // [rsp+18h] [rbp-140h]
  __int64 v98; // [rsp+20h] [rbp-138h]
  __int64 v99; // [rsp+20h] [rbp-138h]
  __int64 v100; // [rsp+20h] [rbp-138h]
  __int64 v101; // [rsp+20h] [rbp-138h]
  double v102; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall **v103)(); // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 *v104; // [rsp+40h] [rbp-118h] BYREF
  __int64 v105; // [rsp+48h] [rbp-110h]
  __int64 v106; // [rsp+50h] [rbp-108h]
  __int64 v107; // [rsp+60h] [rbp-F8h]
  __int128 v108; // [rsp+68h] [rbp-F0h]
  __int64 v109; // [rsp+78h] [rbp-E0h]
  __int64 v110; // [rsp+80h] [rbp-D8h]
  double v111; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+98h] [rbp-C0h]
  void *src; // [rsp+A0h] [rbp-B8h]
  size_t n[3]; // [rsp+A8h] [rbp-B0h]
  _BYTE v115[24]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v116; // [rsp+D8h] [rbp-80h]
  __int128 v117; // [rsp+E0h] [rbp-78h]
  _QWORD v118[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v119[11]; // [rsp+100h] [rbp-58h] BYREF

  v10 = a3;
  v95 = a4;
  v119[3] = __readfsqword(0x28u);
  if ( a3 )
    module_data = *(_QWORD *)(a3 + 128);
  else
    module_data = get_module_data();
  if ( *(_QWORD *)(module_data + 936) > 1u )
  {
    if ( (*(_BYTE *)(module_data + 606) & 0x40) == 0 )
    {
      v13 = nullptr;
      sub_2B4E70((__int64)"Cannot continue after an internal error, sorry");
      return v13;
    }
    v12 = *(_QWORD *)(module_data + 928);
    if ( v12 )
    {
      *(_QWORD *)(module_data + 936) = 0;
      qfree(v12);
      *(_QWORD *)(module_data + 928) = 0;
      *(_QWORD *)(module_data + 944) = 0;
    }
  }
  v94 = &v104;
  sub_3909B0((__int64)&v104, a1);
  v13 = (__int64 *)v104;
  if ( *(_QWORD *)(a1 + 32) != -1 || v104 )
  {
    v14 = v104;
    v107 = 0;
    v109 = 0;
    v110 = 0xFFFFFFFFLL;
    v108 = 0;
    get_func_ranges();
    v15 = v107;
    v16 = v107 + 16 * v108;
    if ( v107 != v16 )
    {
      do
      {
        get_fchunk();
        v14 = (_QWORD *)&byte_1;
        lock_func_range();
        v15 += 16;
      }
      while ( v16 != v15 );
    }
    LOBYTE(v96) = 0;
    if ( (a2 & 8) != 0 )
      goto LABEL_101;
    if ( v10 )
    {
LABEL_13:
      v17 = sub_332860((__int64)&v104, *(_QWORD *)(v10 + 24) + 8LL);
      v102 = 0.0;
      LOBYTE(v97) = v17 != 0;
      if ( !(v17 | a2 & 0xC) )
      {
        LODWORD(v94) = 1;
        v13 = (__int64 *)v10;
        v18 = 0;
        LOBYTE(v97) = a2 & 1;
LABEL_15:
        v19 = 0.0;
        v116 = -1;
        v117 = 0u;
        memset(v115, 0, sizeof(v115));
        if ( (unsigned int)sub_3937C0((__m128i *)v115, module_data, (__int64)v13, a1, 0, 1, 0.0, a6, a7, a8) == 1 )
        {
          if ( (_BYTE)v97 )
          {
            v60 = (unsigned int)v94 | 2;
            if ( (_BYTE)v96 )
            {
              if ( (a2 & 0x80) == 0 )
                v60 = (unsigned int)v94 | 6;
              LODWORD(v94) = v60;
            }
            else
            {
              LODWORD(v94) = (unsigned int)v94 | 2;
            }
          }
          v19 = callui(149, v13[1], v115, (unsigned int)v94, &callui, v20, v94, v95, v96, v97);
        }
        sub_38B490(v13, 0);
        if ( v95 && v18 )
        {
          v119[1] = v95;
          v22 = v13[1];
          v119[0] = 0;
          v118[1] = v22;
          v118[0] = 0;
          v19 = callui(176, v118, v119, 1, &callui, v21, v94, v95, v96, v97);
        }
        if ( *((_QWORD *)&v117 + 1) )
          qfree(*((__int64 *)&v117 + 1));
LABEL_23:
        if ( v102 != 0.0 )
        {
          v23 = (*(_DWORD *)(*(_QWORD *)&v102 + 104LL))-- == 1;
          if ( v23 )
          {
            sub_258970(*(__int64 **)&v102);
            v24 = *(_QWORD *)(*(_QWORD *)&v102 + 184LL);
            if ( v24 )
            {
              v25 = *(_QWORD *)(*(_QWORD *)&v102 + 192LL);
              if ( v25 )
              {
                for ( i = 0; i != v25; ++i )
                {
                  v27 = (__int64 *)(v24 + 24 * i);
                  v28 = *v27;
                  if ( *v27 )
                  {
                    v27[1] = 0;
                    qfree(v28);
                    v24 = *(_QWORD *)(*(_QWORD *)&v102 + 184LL);
                  }
                }
              }
              *(_QWORD *)(*(_QWORD *)&v102 + 192LL) = 0;
              qfree(v24);
            }
            v29 = *(_QWORD *)(*(_QWORD *)&v102 + 160LL);
            if ( v29 )
            {
              *(_QWORD *)(*(_QWORD *)&v102 + 168LL) = 0;
              qfree(v29);
            }
            v30 = *(_QWORD *)(*(_QWORD *)&v102 + 128LL);
            if ( v30 )
            {
              v31 = *(_QWORD *)(*(_QWORD *)&v102 + 136LL);
              if ( v31 )
              {
                for ( j = 0; j != v31; ++j )
                {
                  v33 = (__int64 *)(v30 + 32 * j);
                  v34 = *v33;
                  if ( *v33 )
                  {
                    v33[1] = 0;
                    qfree(v34);
                    v30 = *(_QWORD *)(*(_QWORD *)&v102 + 128LL);
                  }
                }
              }
              *(_QWORD *)(*(_QWORD *)&v102 + 136LL) = 0;
              qfree(v30);
            }
            sub_255050(*(_QWORD *)&v102 + 16LL, v19);
            j__qfree(*(__int64 *)&v102);
          }
        }
        v35 = v107;
        v36 = v107 + 16 * v108;
        if ( v107 != v36 )
        {
          do
          {
            v35 += 16;
            get_fchunk();
            lock_func_range();
          }
          while ( v36 != v35 );
          v36 = v107;
        }
        if ( v36 )
        {
          *(_QWORD *)&v108 = 0;
          qfree(v36);
        }
        goto LABEL_47;
      }
      if ( (a2 & 2) == 0 )
        a2 |= 1u;
LABEL_52:
      if ( (a2 & 4) != 0 && v104 )
        sub_147D70(*(_QWORD *)(module_data + 112), *v104, 0);
      v111 = 0.0;
      *(_OWORD *)n = 0;
      v112 = -1;
      src = nullptr;
      v38 = *(_QWORD *)(module_data + 112);
      sub_14CDC0((__int64 *)v115, v38, (__int64 **)&v104, &v111, ((a2 & 0x100) != 0) + 8, 0.0, a6, a7, a8);
      v13 = *(__int64 **)v115;
      v102 = *(double *)v115;
      if ( !*(_QWORD *)v115 )
        goto LABEL_106;
      if ( !*(_DWORD *)(*(_QWORD *)v115 + 104LL) )
      {
        sub_258970(*(__int64 **)v115);
        v41 = v13[23];
        if ( v41 )
        {
          v38 = v13[24];
          if ( v38 )
          {
            for ( k = nullptr; k != (unsigned __int64 **)v38; k = (unsigned __int64 **)((char *)k + 1) )
            {
              v43 = (__int64 *)(v41 + 24LL * (_QWORD)k);
              v44 = *v43;
              if ( *v43 )
              {
                v43[1] = 0;
                v94 = k;
                qfree(v44);
                v41 = v13[23];
                k = v94;
              }
            }
          }
          v13[24] = 0;
          qfree(v41);
        }
        v45 = v13[20];
        if ( v45 )
        {
          v13[21] = 0;
          qfree(v45);
        }
        v46 = v13[16];
        if ( v46 )
        {
          v38 = v13[17];
          if ( v38 )
          {
            for ( m = nullptr; m != (unsigned __int64 **)v38; m = (unsigned __int64 **)((char *)m + 1) )
            {
              v48 = (__int64 *)(v46 + 32LL * (_QWORD)m);
              v49 = *v48;
              if ( *v48 )
              {
                v48[1] = 0;
                v94 = m;
                qfree(v49);
                v46 = v13[16];
                m = v94;
              }
            }
          }
          v13[17] = 0;
          qfree(v46);
        }
        sub_255050((__int64)(v13 + 2), 0.0);
        j__qfree((__int64)v13);
        v13 = *(__int64 **)&v102;
        if ( v102 == 0.0 )
        {
LABEL_106:
          v61 = n[0];
          v19 = 0.0;
          *(_QWORD *)v115 = off_4DBCD0;
          v117 = 0;
          v103 = off_4E3C38;
          v116 = 0;
          *(_DWORD *)&v115[8] = LODWORD(v111);
          *(_QWORD *)&v115[16] = v112;
          if ( n[0] )
          {
            v116 = qalloc_or_throw(n[0], v38, v39, v40);
            *((_QWORD *)&v117 + 1) = v61;
            memcpy((void *)v116, src, v61);
            *(_QWORD *)&v117 = v61;
          }
          sub_33C260(0.0, (__int64)&v103, module_data, (__int64)v115);
          *(_QWORD *)v115 = off_4DBCD0;
          if ( v116 )
          {
            *(_QWORD *)&v117 = 0;
            qfree(v116);
          }
          std::exception::~exception((std::exception *)v115);
          if ( src )
          {
            n[0] = 0;
            qfree((__int64)src);
          }
          v13 = nullptr;
          goto LABEL_23;
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
        v13 = *(__int64 **)&v102;
        LODWORD(v94) = (unsigned __int8)v97 ^ 1;
        if ( v10 )
        {
          if ( (a2 & 9) != 1 )
          {
            LOBYTE(v97) = 0;
            if ( v102 != 0.0 )
              goto LABEL_78;
LABEL_153:
            v13 = (__int64 *)v10;
            v18 = 0;
            goto LABEL_15;
          }
          LOBYTE(v97) = 1;
          if ( v102 == 0.0 )
            goto LABEL_153;
LABEL_78:
          ++*((_DWORD *)v13 + 26);
          *(_QWORD *)v115 = v13;
          sub_390360(v10, (__int64 *)v115, 0, 0.0);
          v50 = *(__int64 **)v115;
          if ( *(_QWORD *)v115 )
          {
            v23 = (*(_DWORD *)(*(_QWORD *)v115 + 104LL))-- == 1;
            if ( v23 )
            {
              sub_258970(v50);
              v51 = v50[23];
              if ( v51 )
              {
                v96 = v50[24];
                if ( v96 )
                {
                  for ( ii = 0; ii != v96; ++ii )
                  {
                    v53 = (__int64 *)(v51 + 24 * ii);
                    v54 = *v53;
                    if ( *v53 )
                    {
                      v53[1] = 0;
                      v98 = ii;
                      qfree(v54);
                      v51 = v50[23];
                      ii = v98;
                    }
                  }
                }
                v50[24] = 0;
                qfree(v51);
              }
              v55 = v50[20];
              if ( v55 )
              {
                v50[21] = 0;
                qfree(v55);
              }
              v56 = v50[16];
              if ( v56 )
              {
                v96 = v50[17];
                if ( v96 )
                {
                  for ( jj = 0; jj != v96; ++jj )
                  {
                    v58 = (__int64 *)(v56 + 32 * jj);
                    v59 = *v58;
                    if ( *v58 )
                    {
                      v58[1] = 0;
                      v99 = jj;
                      qfree(v59);
                      v56 = v50[16];
                      jj = v99;
                    }
                  }
                }
                v50[17] = 0;
                qfree(v56);
              }
              sub_255050((__int64)(v50 + 2), 0.0);
              j__qfree((__int64)v50);
            }
          }
          LOBYTE(v96) = 1;
          v13 = (__int64 *)v10;
          v18 = 0;
LABEL_98:
          *(_DWORD *)v13 |= 2u;
          goto LABEL_15;
        }
        if ( v102 == 0.0 )
        {
          LOBYTE(v97) = 0;
          v18 = 0;
          goto LABEL_15;
        }
      }
      else
      {
        LODWORD(v94) = (unsigned __int8)v97 ^ 1;
        if ( v10 )
        {
          LOBYTE(v97) = (a2 & 9) == 1;
          goto LABEL_78;
        }
      }
      memset(v115, 0, sizeof(v115));
      v62 = sub_387360(*(_QWORD *)(v13[27] + 1008));
      sub_390740((__int64 *)v115, v62, "Pseudocode-");
      v13 = (__int64 *)operator new(0xA8u);
      v63 = *(_QWORD *)&v115[8];
      v111 = v102;
      v64 = *(_QWORD *)(*(_QWORD *)&v102 + 216LL);
      if ( v102 == 0.0 )
      {
        if ( *(_QWORD *)&v115[8] )
        {
          *((_DWORD *)v13 + 1) = v62;
          v65 = *(const char **)v115;
        }
        else
        {
          *((_DWORD *)v13 + 1) = v62;
          v65 = s1;
        }
        *(_OWORD *)(v13 + 1) = 0;
        v66 = 0;
        *(_OWORD *)(v13 + 3) = 0;
      }
      else
      {
        ++*(_DWORD *)(*(_QWORD *)&v102 + 104LL);
        v65 = s1;
        if ( v63 )
          v65 = *(const char **)v115;
        *(_DWORD *)v13 = 0;
        a6 = v102;
        *((_DWORD *)v13 + 1) = v62;
        *(_OWORD *)(v13 + 1) = 0;
        *(__m128i *)(v13 + 3) = _mm_unpacklo_epi64(
                                  _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v102 + 8LL)),
                                  (__m128i)*(unsigned __int64 *)&v102);
        ++*(_DWORD *)(*(_QWORD *)&v102 + 104LL);
        v66 = *(_DWORD *)v13 & 0xFFFFFFFD;
      }
      v13[16] = v64;
      *(__int64 *)((char *)v13 + 52) = 0;
      *(__int64 *)((char *)v13 + 44) = 0xFFFFFFFFLL;
      *((_DWORD *)v13 + 20) = 0;
      *((_DWORD *)v13 + 26) = 0;
      v13[17] = 0;
      v13[20] = 0;
      *(_DWORD *)v13 = v66;
      *((_OWORD *)v13 + 9) = 0;
      v67 = *(_QWORD **)(v64 + 1008);
      v68 = v67[6];
      v69 = v67[5];
      if ( v67[7] < (unsigned __int64)(v68 + 1) )
      {
        v97 = (unsigned __int64)v65;
        v84 = qvector_reserve((__int64)(v67 + 5), v69, v68 + 1, 8);
        v67[5] = v84;
        v69 = v84;
        v65 = (const char *)v97;
        v68 = v67[6];
      }
      *(_QWORD *)(v69 + 8 * v68) = v13;
      ++v67[6];
      sub_394550(v13, (__int64)v65, a2, -1, 0.0, a6, a7, a8);
      v70 = *(__int64 **)&v111;
      if ( v111 != 0.0 )
      {
        v23 = (*(_DWORD *)(*(_QWORD *)&v111 + 104LL))-- == 1;
        if ( v23 )
        {
          sub_258970(v70);
          v71 = v70[23];
          if ( v71 )
          {
            v72 = v70[24];
            if ( v72 )
            {
              for ( kk = 0; kk != v72; ++kk )
              {
                v74 = (__int64 *)(v71 + 24 * kk);
                v75 = *v74;
                if ( *v74 )
                {
                  v74[1] = 0;
                  v100 = kk;
                  v97 = v72;
                  qfree(v75);
                  kk = v100;
                  v71 = v70[23];
                }
              }
            }
            v70[24] = 0;
            qfree(v71);
          }
          v76 = v70[20];
          if ( v76 )
          {
            v70[21] = 0;
            qfree(v76);
          }
          v77 = v70[16];
          if ( v77 )
          {
            v78 = v70[17];
            if ( v78 )
            {
              for ( mm = 0; mm != v78; ++mm )
              {
                v80 = (__int64 *)(v77 + 32 * mm);
                v81 = *v80;
                if ( *v80 )
                {
                  v80[1] = 0;
                  v101 = mm;
                  v97 = v78;
                  qfree(v81);
                  mm = v101;
                  v77 = v70[16];
                }
              }
            }
            v70[17] = 0;
            qfree(v77);
          }
          sub_255050((__int64)(v70 + 2), 0.0);
          j__qfree((__int64)v70);
        }
      }
      sub_38F500((__int64)v13, 1);
      if ( (a2 & 0x10) == 0 )
      {
        v83 = callui(
                174,
                v13[2],
                (*(_DWORD *)(v13[16] + 724) << 16) | 0x104u,
                0,
                &callui,
                v82,
                v94,
                v95,
                (_BYTE)v96,
                v97);
        sub_33E140(v13[16], 0x64u, v13, v83);
      }
      v18 = *(_BYTE *)(v13[16] + 713);
      LODWORD(v94) = ((a2 & 1) << 16) | (unsigned int)v94;
      if ( *(_QWORD *)v115 )
      {
        *(_QWORD *)&v115[8] = 0;
        qfree(*(__int64 *)v115);
      }
      LOBYTE(v97) = 0;
      goto LABEL_98;
    }
    LOBYTE(v96) = 0;
    v10 = sub_389C40(module_data, v14);
    if ( v10 )
      goto LABEL_100;
    v85 = *(_QWORD *)(module_data + 888);
    if ( v85 )
    {
      v86 = *(_QWORD *)(v85 + 8);
      v87 = *(_QWORD *)(module_data + 1008);
      v88 = *(__int64 **)(v87 + 40);
      v89 = *(_QWORD *)(v87 + 48);
      v90 = &v88[v89];
      if ( v86 )
      {
        v91 = *(__int64 **)(v87 + 40);
        if ( v89 * 8 )
        {
          while ( 1 )
          {
            v10 = *v91;
            if ( *v91 )
            {
              if ( v86 == *(_QWORD *)(v10 + 8) || v86 == *(_QWORD *)(v10 + 16) )
                goto LABEL_169;
            }
            if ( v90 == ++v91 )
              goto LABEL_163;
          }
        }
      }
      else
      {
LABEL_163:
        v97 = *(_QWORD *)(a1 + 16);
        if ( v88 != v90 )
        {
          while ( 1 )
          {
            v10 = *v88;
            if ( *v88 )
            {
              LOBYTE(v96) = sub_389B80(*v88, v97);
              if ( (_BYTE)v96 )
                break;
            }
            if ( v90 == ++v88 )
              goto LABEL_167;
          }
LABEL_100:
          if ( (*(_BYTE *)v10 & 1) != 0 )
            goto LABEL_13;
LABEL_101:
          v10 = 0;
          LOBYTE(v97) = 1;
          goto LABEL_52;
        }
      }
LABEL_167:
      v92 = *(_QWORD *)(module_data + 1008);
      v93 = *(_QWORD *)(v92 + 48);
      if ( v93 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v92 + 40) + 8 * v93 - 8);
        if ( v10 )
        {
LABEL_169:
          LOBYTE(v96) = 1;
          goto LABEL_100;
        }
      }
    }
    LOBYTE(v96) = 1;
    goto LABEL_101;
  }
LABEL_47:
  if ( v105 )
  {
    v106 = 0;
    qfree(v105);
  }
  return v13;
}

