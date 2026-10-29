__int64 __fastcall sub_EC750(_QWORD *a1, __m128i *a2, double a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rbp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // r12d
  unsigned __int64 v10; // rcx
  unsigned __int32 v11; // r12d
  unsigned __int64 v12; // rdx
  __int32 v13; // r14d
  size_t v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r12
  void *v18; // rax
  __m128i v19; // xmm0
  void *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r12
  const void *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  size_t v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 j; // r12
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 custom_callcnv; // rax
  __int64 v37; // rdi
  __int64 (*v38)(); // rax
  __int64 v39; // r12
  __int64 v40; // r14
  char v41; // dl
  int v42; // eax
  char v43; // dl
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // r12d
  __int64 v48; // rax
  int v49; // eax
  int v50; // r12d
  int v51; // r12d
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // rdx
  int i; // r12d
  _DWORD *v56; // rcx
  int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // r13
  __int64 v60; // r12
  __int64 v61; // rcx
  int v62; // edx
  char v63; // al
  __int64 v64; // rax
  __int64 v65; // rdi
  int v66; // eax
  int v67; // r12d
  _QWORD *v68; // rdi
  int v69; // esi
  char v70; // al
  char v71; // cl
  int v72; // eax
  char v73; // cl
  int v74; // eax
  int v75; // eax
  __int32 v76; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v77; // [rsp+0h] [rbp-1C8h]
  __int64 v78; // [rsp+8h] [rbp-1C0h]
  int v79; // [rsp+10h] [rbp-1B8h]
  int v80; // [rsp+18h] [rbp-1B0h]
  int v81; // [rsp+24h] [rbp-1A4h]
  int v82; // [rsp+24h] [rbp-1A4h]
  int v83; // [rsp+24h] [rbp-1A4h]
  unsigned __int64 v84; // [rsp+38h] [rbp-190h]
  int v85; // [rsp+38h] [rbp-190h]
  int v86; // [rsp+40h] [rbp-188h]
  int v87; // [rsp+44h] [rbp-184h]
  unsigned int v88; // [rsp+44h] [rbp-184h]
  bool v89; // [rsp+4Bh] [rbp-17Dh]
  int v90; // [rsp+4Ch] [rbp-17Ch]
  int v91; // [rsp+4Ch] [rbp-17Ch]
  char v92[8]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v93; // [rsp+58h] [rbp-170h]
  __int64 v94; // [rsp+60h] [rbp-168h] BYREF
  __int128 v95; // [rsp+68h] [rbp-160h]
  int v96; // [rsp+78h] [rbp-150h]
  int v97; // [rsp+80h] [rbp-148h] BYREF
  int v98; // [rsp+84h] [rbp-144h]
  __int64 v99; // [rsp+88h] [rbp-140h]
  void *v100; // [rsp+90h] [rbp-138h]
  __m128i v101; // [rsp+98h] [rbp-130h] BYREF
  void *v102; // [rsp+A8h] [rbp-120h]
  __m128i v103; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-108h]
  int v105; // [rsp+C8h] [rbp-100h]
  __int64 v106; // [rsp+D0h] [rbp-F8h]
  __int64 v107; // [rsp+D8h] [rbp-F0h]
  __int64 v108; // [rsp+E0h] [rbp-E8h]
  unsigned int *v109; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v110; // [rsp+F8h] [rbp-D0h]
  __int64 v111; // [rsp+108h] [rbp-C0h]
  __int64 v112[2]; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v113[2]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v114; // [rsp+130h] [rbp-98h]
  __int128 v115; // [rsp+138h] [rbp-90h]
  int v116; // [rsp+148h] [rbp-80h]
  __int16 v117; // [rsp+14Ch] [rbp-7Ch]
  __m128i *v118; // [rsp+150h] [rbp-78h]
  __int64 v119; // [rsp+158h] [rbp-70h]
  __int128 v120; // [rsp+160h] [rbp-68h]
  int v121; // [rsp+170h] [rbp-58h]
  __int64 v122; // [rsp+178h] [rbp-50h]
  unsigned __int64 v123; // [rsp+188h] [rbp-40h]

  v123 = __readfsqword(0x28u);
  v78 = a2->m128i_i64[1];
  if ( !v78 )
  {
    if ( !under_debugger )
      sub_383060(0xC3A5u, a3);
    goto LABEL_171;
  }
  v5 = sub_2C43C0((_QWORD *)a1[1], a1[38], a3);
  v6 = v5;
  if ( !v5 || (v7 = v5[1], v8 = a2->m128i_u64[1], v7 < v8) )
  {
LABEL_9:
    LOBYTE(v11) = a2[5].m128i_i8[8] & 0xF0;
    if ( (_BYTE)v11 == 0xC0 )
    {
      v11 = a2[1].m128i_u32[3];
      if ( v11 > 0x10 )
      {
LABEL_46:
        if ( v11 > 0x1FF || v11 <= 0xFF && (v11 & 0xFFFFFF0F) != 0 )
        {
          custom_callcnv = get_custom_callcnv();
          v37 = custom_callcnv;
          if ( !custom_callcnv )
          {
            v13 = -1;
            goto LABEL_14;
          }
          v38 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 24LL);
          v12 = *(_QWORD *)(*a1 + 56LL);
          if ( v38 == sub_E37E0 )
          {
LABEL_12:
            if ( (unsigned __int8)sub_EB240(a1, a2, v12, 0, nullptr) )
            {
              v13 = a2->m128i_i32[2];
              goto LABEL_14;
            }
            v40 = *a1;
            sub_D10B0((__int64)&v97, *(_QWORD *)(*a1 + 480LL), 0);
            v111 = v40;
            v112[0] = 0;
            v112[1] = 0;
            v113[0] = 0;
            v113[1] = 0;
            v114 = 0;
            v116 = -1;
            v117 = 0;
            v118 = a2;
            v119 = 0;
            v121 = 0;
            v122 = -1;
            v115 = 0;
            v120 = 0;
            v84 = sub_1CFC10();
            sub_DECE0((__int64)&v97, 0.0);
            v81 = v119;
            if ( (v97 & 0xFFFFFFFB) == 2 )
              v81 = HIDWORD(v119) + v119;
            v87 = v98;
            if ( v98 < v81 )
            {
              if ( !under_debugger )
                sub_383060(0xC3A6u, 0.0);
              goto LABEL_171;
            }
            v41 = sub_64880(v112);
            v42 = 0;
            if ( !v41 )
              v42 = sub_64C00(v112) + 1;
            v80 = v42 - v119;
            v43 = sub_64880(v113);
            v44 = 0;
            if ( !v43 )
              v44 = sub_64C00(v113) + 1;
            v76 = v78;
            v79 = v44 - HIDWORD(v119);
            v45 = v44 - HIDWORD(v119) + v80;
            v86 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
            v13 = v122;
            if ( (_DWORD)v122 != -1 )
            {
LABEL_61:
              v46 = v13 / v86;
              if ( v13 % v86 )
              {
                if ( !under_debugger )
                  sub_383060(0xC3A8u, 0.0);
                goto LABEL_171;
              }
              v47 = v46 + v45;
              if ( v46 + v45 > 0 )
              {
                if ( v45 > v47 )
                {
                  if ( !under_debugger )
                    sub_383060(0xC7E0u, 0.0);
                  goto LABEL_171;
                }
LABEL_64:
                v82 = v45;
                v13 = v47 + v78;
                v48 = a1[2];
                if ( v47 + (int)v78 >= *(_DWORD *)(v48 + 656) )
                {
                  sub_3311F0((_QWORD *)a1[1], a1[38], 5u);
                  v48 = a1[2];
                  v62 = *(_DWORD *)(v48 + 656);
                  v13 = v62 - 1;
                  if ( v82 + (int)v78 >= v62 )
                  {
                    v76 = v13 - v82;
                    v13 = v47 + v13 - v82;
                  }
                }
                sub_32C270(v92, *(_QWORD *)(v48 + 112), v86);
                sub_EABB0(a2->m128i_i64, v76 + v80 + v79);
                if ( v76 + v80 > v13 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCA27u, 0.0);
                  goto LABEL_171;
                }
                v49 = v119;
                if ( (unsigned __int64)v100 < (int)v119 + v80 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCA28u, 0.0);
                  goto LABEL_171;
                }
                v50 = 0;
                if ( v80 > 0 )
                {
                  while ( 1 )
                  {
                    v53 = *(_DWORD *)(v99 + 4LL * (v50 + v49));
                    v54 = (_DWORD *)(80LL * v76 + a2->m128i_i64[0]);
                    *v54 = 3;
                    v54[2] = v53;
                    copy_tinfo_t();
                    ++v50;
                    ++v76;
                    if ( v50 == v80 )
                      break;
                    v49 = v119;
                  }
                }
                if ( v76 + v79 > v13 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCA29u, 0.0);
                  goto LABEL_171;
                }
                if ( (unsigned __int64)v102 < HIDWORD(v119) + v79 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCA2Au, 0.0);
                  goto LABEL_171;
                }
                v93 = 25;
                if ( !v110 )
                  goto LABEL_89;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v106 + 112) + 200LL))(
                       *(_QWORD *)(v106 + 112),
                       *v109) )
                {
                  v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v106 + 112) + 32LL))(
                          *(_QWORD *)(v106 + 112),
                          *v109);
                  if ( v110 <= 1 || v109[1] - *v109 >= v51 )
                  {
LABEL_75:
                    if ( v51 > 7 || *(_DWORD *)(*(_QWORD *)(v106 + 8) + 4LL) == 13 || !v110 )
                      goto LABEL_89;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v106 + 112) + 200LL))(
                           *(_QWORD *)(v106 + 112),
                           *v109) )
                    {
                      v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v106 + 112) + 32LL))(
                              *(_QWORD *)(v106 + 112),
                              *v109);
                      if ( v110 <= 1 || v109[1] - *v109 >= v52 )
                      {
LABEL_82:
                        if ( v52 <= 7 )
                        {
                          if ( v51 == 4 )
                          {
                            v83 = 2;
                            if ( (v119 & 0x100000000LL) != 0 )
                            {
                              --v79;
                              ++HIDWORD(v119);
                            }
                            goto LABEL_90;
                          }
                          if ( !under_debugger )
                            sub_383060(0xCD1Eu, 0.0);
LABEL_171:
                          BUG();
                        }
LABEL_89:
                        v83 = 1;
LABEL_90:
                        if ( v79 > 0 )
                        {
                          for ( i = 0; i < v79; i += v83 )
                          {
                            v56 = (_DWORD *)(80LL * v76 + a2->m128i_i64[0]);
                            v57 = *(_DWORD *)(v101.m128i_i64[1] + 4LL * (i + HIDWORD(v119)));
                            *v56 = 3;
                            v56[2] = v57;
                            copy_tinfo_t();
                            ++v76;
                          }
                        }
                        v58 = a1[1];
                        v94 = 0;
                        v96 = 0;
                        v95 = 0;
                        sub_D61D0((__int64)&v97, (unsigned int *)&v94, v58, (__int64)a2, 0.0);
                        v59 = sub_D50D0((__int64)&v94, v86);
                        sub_EABB0(a2->m128i_i64, v13);
                        if ( v76 < v13 )
                        {
                          v60 = 80LL * v76;
                          v77 = 80 * (v76 + (unsigned __int64)(unsigned int)(v13 - v76));
                          do
                          {
                            v61 = v60 + a2->m128i_i64[0];
                            *(_DWORD *)v61 = 1;
                            *(_QWORD *)(v61 + 8) = v59;
                            copy_tinfo_t();
                            v60 += 80;
                            v59 += v86;
                          }
                          while ( v60 != v77 );
                        }
                        a2[3].m128i_i64[1] = v59;
                        clear_tinfo_t();
                        clear_tinfo_t();
                        goto LABEL_97;
                      }
                    }
                    else if ( v110 <= 1 || v109[1] - *v109 > 7 )
                    {
                      goto LABEL_89;
                    }
                    v52 = round_down_power2();
                    goto LABEL_82;
                  }
                }
                else if ( v110 <= 1 || v109[1] - *v109 > 7 )
                {
                  goto LABEL_89;
                }
                v51 = round_down_power2();
                goto LABEL_75;
              }
              goto LABEL_127;
            }
            v90 = v44 - HIDWORD(v119) + v80;
            v63 = getinf_flag();
            v45 = v90;
            v89 = v11 == 64;
            if ( v63 != 1 && v11 == 64 )
            {
              v70 = sub_DE780((__int64)&v97);
              v45 = v90;
              if ( !v70 )
              {
                if ( v90 > 0 )
                {
                  v47 = v90;
                  goto LABEL_64;
                }
                goto LABEL_127;
              }
            }
            if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0
              && (v91 = v45, v64 = sub_1CFBB0(a1[1], a1[38]), v65 = a1[1], v45 = v91, *(_QWORD *)(v65 + 136) == v64) )
            {
              v69 = v81;
              v67 = 0;
              if ( v87 - v81 == v91 )
              {
                v75 = sub_D6D40(v65, *(_DWORD *)(*a1 + 72LL), 0.0);
                v45 = v91;
                v67 = v75;
                v69 = v75 | v81;
              }
              if ( !v69 )
              {
                sub_3311F0((_QWORD *)a1[1], a1[38], 3u);
                goto LABEL_97;
              }
            }
            else
            {
              v88 = v45;
              v66 = sub_E0FE0((__int64)a1, v81, v84);
              v45 = v88;
              v67 = v66;
              if ( v66 < 0 )
                goto LABEL_97;
              if ( !(v66 | v81) )
              {
                *(_QWORD *)(a1[2] + 416LL) = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 24LL);
                goto LABEL_97;
              }
              v68 = (_QWORD *)a1[1];
              if ( !v68[17] && !v98 && v89 )
              {
                sub_3311F0(v68, a1[38], 4u, v88);
                goto LABEL_97;
              }
            }
            v85 = a2[3].m128i_i32[2] - v84;
            if ( v85 < 0 )
            {
              if ( v97 != 4 )
              {
                if ( !under_debugger )
                  sub_383060(0xCB39u, 0.0);
                goto LABEL_171;
              }
              v85 = 0;
            }
            v13 = v86 * v81 + v85;
            if ( v13 )
            {
              if ( v67 > 0 && HIBYTE(v117) )
              {
                LODWORD(v94) = v67 / v86;
                sub_DE8D0((__int64)&v97, &v94, 0.0);
                v67 = v94 * v86;
                v71 = sub_64880(v112);
                v72 = 0;
                if ( !v71 )
                  v72 = sub_64C00(v112) + 1;
                v80 = v72 - v119;
                v73 = sub_64880(v113);
                v74 = 0;
                if ( !v73 )
                  v74 = sub_64C00(v113) + 1;
                v79 = v74 - HIDWORD(v119);
                v45 = v74 - HIDWORD(v119) + v80;
              }
              v13 = v67 - v85;
              if ( v67 - v85 >= 0 )
                goto LABEL_61;
              v47 = v45;
              if ( v45 > 0 )
                goto LABEL_64;
LABEL_127:
              v13 = v78;
            }
LABEL_97:
            if ( v114 )
            {
              *(_QWORD *)&v115 = 0;
              qfree(v114);
            }
            qfree(v113[0]);
            qfree(v112[0]);
            if ( v109 )
            {
              v110 = 0;
              qfree((__int64)v109);
            }
            if ( v107 )
            {
              v108 = 0;
              qfree(v107);
            }
            if ( v101.m128i_i64[1] )
            {
              v102 = nullptr;
              qfree(v101.m128i_i64[1]);
            }
            if ( v99 )
            {
              v100 = nullptr;
              qfree(v99);
            }
LABEL_14:
            if ( !v6 )
              return (unsigned int)v13;
            goto LABEL_33;
          }
          v13 = ((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v38)(v37, a2, *(_QWORD *)(v12 + 24));
          if ( v13 )
            goto LABEL_14;
        }
        v12 = *(_QWORD *)(*a1 + 56LL);
        goto LABEL_12;
      }
    }
    else if ( (unsigned __int8)v11 > 0x10u )
    {
      v11 = (unsigned __int8)v11;
      v12 = *(_QWORD *)(*a1 + 56LL);
      goto LABEL_12;
    }
    v11 = getinf();
    goto LABEL_46;
  }
  v9 = 0;
  if ( !v8 )
  {
    v13 = 0;
    if ( !v7 )
      goto LABEL_108;
    goto LABEL_27;
  }
  do
  {
    if ( (unsigned int)lexcompare_tinfo() || (unsigned int)compare_arglocs() )
      goto LABEL_9;
    ++v9;
    v10 = a2->m128i_u64[1];
  }
  while ( v9 < v10 );
  v13 = a2->m128i_i64[1];
  v8 = (int)v10;
  if ( (int)v10 < (unsigned __int64)v6[1] )
  {
    do
    {
LABEL_27:
      v22 = *v6 + 80 * v8;
      v97 = 0;
      v23 = (const void *)v22;
      copy_argloc();
      v100 = nullptr;
      v101 = 0;
      v26 = *(_QWORD *)(v22 + 24);
      if ( v26 )
      {
        v100 = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 24), v22, v24, v25);
        v101.m128i_i64[1] = v26;
        v23 = *(const void **)(v22 + 16);
        memcpy(v100, v23, v26);
        v101.m128i_i64[0] = v26;
      }
      v102 = nullptr;
      v103 = 0;
      v14 = *(_QWORD *)(v22 + 48);
      if ( v14 )
      {
        v102 = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 48), (__int64)v23, v24, v25);
        v103.m128i_i64[1] = v14;
        memcpy(v102, *(const void **)(v22 + 40), v14);
        v103.m128i_i64[0] = v14;
      }
      v104 = 0;
      copy_tinfo_t();
      v15 = a2->m128i_i64[1];
      v16 = a2->m128i_i64[0];
      v105 = *(_DWORD *)(v22 + 72);
      if ( a2[1].m128i_i64[0] < (unsigned __int64)(v15 + 1) )
      {
        v27 = qvector_reserve((__int64)a2, v16, v15 + 1, 80);
        a2->m128i_i64[0] = v27;
        v15 = a2->m128i_i64[1];
        v16 = v27;
      }
      v17 = v16 + 80 * v15;
      *(_DWORD *)v17 = 0;
      copy_argloc();
      v18 = v100;
      v19 = _mm_loadu_si128(&v101);
      v100 = nullptr;
      *(_QWORD *)(v17 + 16) = v18;
      *(__m128i *)(v17 + 24) = v19;
      v20 = v102;
      v21 = _mm_load_si128(&v103);
      v101 = 0;
      v102 = nullptr;
      v103 = 0;
      *(_QWORD *)(v17 + 40) = v20;
      *(_QWORD *)(v17 + 64) = 0;
      *(__m128i *)(v17 + 48) = v21;
      copy_tinfo_t();
      *(_DWORD *)(v17 + 72) = v105;
      ++a2->m128i_i64[1];
      clear_tinfo_t();
      if ( v102 )
      {
        v103.m128i_i64[0] = 0;
        qfree((__int64)v102);
      }
      if ( v100 )
      {
        v101.m128i_i64[0] = 0;
        qfree((__int64)v100);
      }
      ++v13;
      cleanup_argloc();
      v8 = v13;
    }
    while ( v13 < (unsigned __int64)v6[1] );
    v10 = a2->m128i_u64[1];
    v13 = v10;
  }
  if ( v13 )
  {
    v28 = a2->m128i_i64[0] + 80 * v10 - 80;
    if ( *(_DWORD *)v28 == 1 )
    {
      v39 = *(_QWORD *)(v28 + 8);
      a2[3].m128i_i64[1] = get_tinfo_size() + v39;
    }
    goto LABEL_33;
  }
LABEL_108:
  v13 = 0;
LABEL_33:
  v29 = *v6;
  if ( *v6 )
  {
    v30 = v6[1];
    if ( v30 )
    {
      for ( j = 0; j != v30; ++j )
      {
        v32 = (_QWORD *)(v29 + 80 * j);
        clear_tinfo_t();
        v33 = v32[5];
        if ( v33 )
        {
          v32[6] = 0;
          qfree(v33);
        }
        v34 = v32[2];
        if ( v34 )
        {
          v32[3] = 0;
          qfree(v34);
        }
        cleanup_argloc();
        v29 = *v6;
      }
    }
    v6[1] = 0;
    qfree(v29);
  }
  qfree((__int64)v6);
  return (unsigned int)v13;
}

