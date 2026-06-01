__int64 __fastcall sub_E8550(_QWORD *a1, __m128i *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rdx
  int v12; // r14d
  size_t v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r12
  void *v17; // rax
  __m128i v18; // xmm0
  void *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r12
  size_t v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 j; // r12
  _QWORD *v28; // rbx
  __int64 custom_callcnv; // rax
  __int64 v31; // rdi
  __int64 (*v32)(); // rax
  __int64 v33; // r12
  __int64 v34; // r14
  char v35; // dl
  int v36; // eax
  char v37; // dl
  int v38; // r8d
  int v39; // r9d
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // r12d
  __int64 v44; // rax
  int v45; // eax
  int v46; // r12d
  int v47; // r12d
  int v48; // eax
  int v49; // eax
  _DWORD *v50; // rdx
  int i; // r12d
  _DWORD *v52; // rcx
  int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // r13
  __int64 v56; // r12
  __int64 v57; // rcx
  int v58; // edx
  char v59; // al
  __int64 v60; // rax
  __int64 v61; // rdi
  int v62; // eax
  int v63; // r12d
  __int64 v64; // rdi
  int v65; // esi
  char v66; // al
  char v67; // cl
  int v68; // eax
  char v69; // cl
  int v70; // eax
  int v71; // eax
  int v72; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v73; // [rsp+0h] [rbp-1C8h]
  __int64 v74; // [rsp+8h] [rbp-1C0h]
  int v75; // [rsp+10h] [rbp-1B8h]
  int v76; // [rsp+18h] [rbp-1B0h]
  int v77; // [rsp+24h] [rbp-1A4h]
  int v78; // [rsp+24h] [rbp-1A4h]
  int v79; // [rsp+24h] [rbp-1A4h]
  __int64 v80; // [rsp+38h] [rbp-190h]
  int v81; // [rsp+38h] [rbp-190h]
  int v82; // [rsp+40h] [rbp-188h]
  int v83; // [rsp+44h] [rbp-184h]
  int v84; // [rsp+44h] [rbp-184h]
  bool v85; // [rsp+4Bh] [rbp-17Dh]
  int v86; // [rsp+4Ch] [rbp-17Ch]
  int v87; // [rsp+4Ch] [rbp-17Ch]
  char v88[8]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v89; // [rsp+58h] [rbp-170h]
  __int64 v90; // [rsp+60h] [rbp-168h] BYREF
  __int128 v91; // [rsp+68h] [rbp-160h]
  int v92; // [rsp+78h] [rbp-150h]
  int v93; // [rsp+80h] [rbp-148h] BYREF
  int v94; // [rsp+84h] [rbp-144h]
  __int64 v95; // [rsp+88h] [rbp-140h]
  void *v96; // [rsp+90h] [rbp-138h]
  __m128i v97; // [rsp+98h] [rbp-130h] BYREF
  void *v98; // [rsp+A8h] [rbp-120h]
  __m128i v99; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-108h]
  int v101; // [rsp+C8h] [rbp-100h]
  __int64 v102; // [rsp+D0h] [rbp-F8h]
  __int64 v103; // [rsp+D8h] [rbp-F0h]
  __int64 v104; // [rsp+E0h] [rbp-E8h]
  unsigned int *v105; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v106; // [rsp+F8h] [rbp-D0h]
  __int64 v107; // [rsp+108h] [rbp-C0h]
  _QWORD v108[2]; // [rsp+110h] [rbp-B8h] BYREF
  _QWORD v109[2]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v110; // [rsp+130h] [rbp-98h]
  __int128 v111; // [rsp+138h] [rbp-90h]
  int v112; // [rsp+148h] [rbp-80h]
  __int16 v113; // [rsp+14Ch] [rbp-7Ch]
  __m128i *v114; // [rsp+150h] [rbp-78h]
  __int64 v115; // [rsp+158h] [rbp-70h]
  __int128 v116; // [rsp+160h] [rbp-68h]
  int v117; // [rsp+170h] [rbp-58h]
  __int64 v118; // [rsp+178h] [rbp-50h]
  unsigned __int64 v119; // [rsp+188h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v74 = a2->m128i_i64[1];
  if ( !v74 )
  {
    if ( !under_debugger )
      sub_37E160(50085);
    goto LABEL_171;
  }
  v4 = sub_2BFB40(a1[1], a1[38]);
  v5 = (__int64 *)v4;
  if ( !v4 || (v6 = *(_QWORD *)(v4 + 8), v7 = a2->m128i_u64[1], v6 < v7) )
  {
LABEL_9:
    LOBYTE(v10) = a2[5].m128i_i8[8] & 0xF0;
    if ( (_BYTE)v10 == 0xC0 )
    {
      v10 = a2[1].m128i_u32[3];
      if ( v10 > 0x10 )
      {
LABEL_46:
        if ( v10 > 0x1FF || v10 <= 0xFF && (v10 & 0xFFFFFF0F) != 0 )
        {
          custom_callcnv = get_custom_callcnv();
          v31 = custom_callcnv;
          if ( !custom_callcnv )
          {
            v12 = -1;
            goto LABEL_14;
          }
          v32 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 24LL);
          v11 = *(_QWORD *)(*a1 + 56LL);
          if ( v32 == sub_DF5E0 )
          {
LABEL_12:
            if ( (unsigned __int8)sub_E7040(a1, a2, v11, 0, nullptr) )
            {
              v12 = a2->m128i_i32[2];
              goto LABEL_14;
            }
            v34 = *a1;
            sub_CCEB0((__int64)&v93, *(_QWORD *)(*a1 + 480LL), 0);
            v107 = v34;
            v108[0] = 0;
            v108[1] = 0;
            v109[0] = 0;
            v109[1] = 0;
            v110 = 0;
            v112 = -1;
            v113 = 0;
            v114 = a2;
            v115 = 0;
            v117 = 0;
            v118 = -1;
            v111 = 0;
            v116 = 0;
            v80 = sub_1CB850(v10);
            sub_DAAE0((__int64)&v93);
            v77 = v115;
            if ( (v93 & 0xFFFFFFFB) == 2 )
              v77 = HIDWORD(v115) + v115;
            v83 = v94;
            if ( v94 < v77 )
            {
              if ( !under_debugger )
                sub_37E160(50086);
              goto LABEL_171;
            }
            v35 = sub_60680(v108);
            v36 = 0;
            if ( !v35 )
              v36 = sub_60A00(v108) + 1;
            v76 = v36 - v115;
            v37 = sub_60680(v109);
            v40 = 0;
            if ( !v37 )
              v40 = sub_60A00(v109) + 1;
            v72 = v74;
            v75 = v40 - HIDWORD(v115);
            v41 = v40 - HIDWORD(v115) + v76;
            v82 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
            v12 = v118;
            if ( (_DWORD)v118 != -1 )
            {
LABEL_61:
              v42 = v12 / v82;
              if ( v12 % v82 )
              {
                if ( !under_debugger )
                  sub_37E160(50088);
                goto LABEL_171;
              }
              v43 = v42 + v41;
              if ( v42 + v41 > 0 )
              {
                if ( v41 > v43 )
                {
                  if ( !under_debugger )
                    sub_37E160(51168);
                  goto LABEL_171;
                }
LABEL_64:
                v78 = v41;
                v12 = v43 + v74;
                v44 = a1[2];
                if ( v43 + (int)v74 >= *(_DWORD *)(v44 + 656) )
                {
                  sub_32C190(a1[1], a1[38], 5, v41, v38, v39);
                  v44 = a1[2];
                  v58 = *(_DWORD *)(v44 + 656);
                  v12 = v58 - 1;
                  if ( v78 + (int)v74 >= v58 )
                  {
                    v72 = v12 - v78;
                    v12 = v43 + v12 - v78;
                  }
                }
                sub_327340(v88, *(_QWORD *)(v44 + 112), (unsigned int)v82);
                sub_E69B0(a2->m128i_i64, v72 + v76 + v75);
                if ( v72 + v76 > v12 )
                {
                  if ( !under_debugger )
                    sub_37E160(51751);
                  goto LABEL_171;
                }
                v45 = v115;
                if ( (unsigned __int64)v96 < (int)v115 + v76 )
                {
                  if ( !under_debugger )
                    sub_37E160(51752);
                  goto LABEL_171;
                }
                v46 = 0;
                if ( v76 > 0 )
                {
                  while ( 1 )
                  {
                    v49 = *(_DWORD *)(v95 + 4LL * (v46 + v45));
                    v50 = (_DWORD *)(80LL * v72 + a2->m128i_i64[0]);
                    *v50 = 3;
                    v50[2] = v49;
                    copy_tinfo_t();
                    ++v46;
                    ++v72;
                    if ( v46 == v76 )
                      break;
                    v45 = v115;
                  }
                }
                if ( v72 + v75 > v12 )
                {
                  if ( !under_debugger )
                    sub_37E160(51753);
                  goto LABEL_171;
                }
                if ( (unsigned __int64)v98 < HIDWORD(v115) + v75 )
                {
                  if ( !under_debugger )
                    sub_37E160(51754);
                  goto LABEL_171;
                }
                v89 = 25;
                if ( !v106 )
                  goto LABEL_89;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v102 + 112) + 200LL))(
                       *(_QWORD *)(v102 + 112),
                       *v105) )
                {
                  v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v102 + 112) + 32LL))(
                          *(_QWORD *)(v102 + 112),
                          *v105);
                  if ( v106 <= 1 || v105[1] - *v105 >= v47 )
                  {
LABEL_75:
                    if ( v47 > 7 || *(_DWORD *)(*(_QWORD *)(v102 + 8) + 4LL) == 13 || !v106 )
                      goto LABEL_89;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v102 + 112) + 200LL))(
                           *(_QWORD *)(v102 + 112),
                           *v105) )
                    {
                      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v102 + 112) + 32LL))(
                              *(_QWORD *)(v102 + 112),
                              *v105);
                      if ( v106 <= 1 || v105[1] - *v105 >= v48 )
                      {
LABEL_82:
                        if ( v48 <= 7 )
                        {
                          if ( v47 == 4 )
                          {
                            v79 = 2;
                            if ( (v115 & 0x100000000LL) != 0 )
                            {
                              --v75;
                              ++HIDWORD(v115);
                            }
                            goto LABEL_90;
                          }
                          if ( !under_debugger )
                            sub_37E160(52510);
LABEL_171:
                          BUG();
                        }
LABEL_89:
                        v79 = 1;
LABEL_90:
                        if ( v75 > 0 )
                        {
                          for ( i = 0; i < v75; i += v79 )
                          {
                            v52 = (_DWORD *)(80LL * v72 + a2->m128i_i64[0]);
                            v53 = *(_DWORD *)(v97.m128i_i64[1] + 4LL * (i + HIDWORD(v115)));
                            *v52 = 3;
                            v52[2] = v53;
                            copy_tinfo_t();
                            ++v72;
                          }
                        }
                        v54 = a1[1];
                        v90 = 0;
                        v92 = 0;
                        v91 = 0;
                        sub_D1FD0((__int64)&v93, (unsigned int *)&v90, v54, (__int64)a2);
                        v55 = sub_D0ED0((__int64)&v90, v82);
                        sub_E69B0(a2->m128i_i64, v12);
                        if ( v72 < v12 )
                        {
                          v56 = 80LL * v72;
                          v73 = 80 * (v72 + (unsigned __int64)(unsigned int)(v12 - v72));
                          do
                          {
                            v57 = v56 + a2->m128i_i64[0];
                            *(_DWORD *)v57 = 1;
                            *(_QWORD *)(v57 + 8) = v55;
                            copy_tinfo_t();
                            v56 += 80;
                            v55 += v82;
                          }
                          while ( v56 != v73 );
                        }
                        a2[3].m128i_i64[1] = v55;
                        clear_tinfo_t();
                        clear_tinfo_t();
                        goto LABEL_97;
                      }
                    }
                    else if ( v106 <= 1 || v105[1] - *v105 > 7 )
                    {
                      goto LABEL_89;
                    }
                    v48 = round_down_power2();
                    goto LABEL_82;
                  }
                }
                else if ( v106 <= 1 || v105[1] - *v105 > 7 )
                {
                  goto LABEL_89;
                }
                v47 = round_down_power2();
                goto LABEL_75;
              }
              goto LABEL_127;
            }
            v86 = v40 - HIDWORD(v115) + v76;
            v59 = getinf_flag();
            v41 = v86;
            v85 = v10 == 64;
            if ( v59 != 1 && v10 == 64 )
            {
              v66 = sub_DA580((__int64)&v93);
              v41 = v86;
              if ( !v66 )
              {
                if ( v86 > 0 )
                {
                  v43 = v86;
                  goto LABEL_64;
                }
                goto LABEL_127;
              }
            }
            if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0
              && (v87 = v41, v60 = sub_1CB7F0(a1[1], a1[38]), v61 = a1[1], v41 = v87, *(_QWORD *)(v61 + 136) == v60) )
            {
              v65 = v77;
              v63 = 0;
              if ( v83 - v77 == v87 )
              {
                v71 = sub_D2B40(v61, *(_DWORD *)(*a1 + 72LL));
                v41 = v87;
                v63 = v71;
                v65 = v71 | v77;
              }
              if ( !v65 )
              {
                sub_32C190(a1[1], a1[38], 3, v41, v38, v39);
                goto LABEL_97;
              }
            }
            else
            {
              v84 = v41;
              v62 = sub_DCDE0((__int64)a1, v77, v80);
              v41 = v84;
              v63 = v62;
              if ( v62 < 0 )
                goto LABEL_97;
              if ( !(v62 | v77) )
              {
                *(_QWORD *)(a1[2] + 416LL) = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 24LL);
                goto LABEL_97;
              }
              v64 = a1[1];
              if ( !*(_QWORD *)(v64 + 136) )
              {
                v38 = v94;
                if ( !v94 && v85 )
                {
                  sub_32C190(v64, a1[38], 4, v84, 0, v39);
                  goto LABEL_97;
                }
              }
            }
            v81 = a2[3].m128i_i32[2] - v80;
            if ( v81 < 0 )
            {
              if ( v93 != 4 )
              {
                if ( !under_debugger )
                  sub_37E160(52025);
                goto LABEL_171;
              }
              v81 = 0;
            }
            v12 = v82 * v77 + v81;
            if ( v12 )
            {
              if ( v63 > 0 && HIBYTE(v113) )
              {
                LODWORD(v90) = v63 / v82;
                sub_DA6D0((__int64)&v93, &v90);
                v63 = v90 * v82;
                v67 = sub_60680(v108);
                v68 = 0;
                if ( !v67 )
                  v68 = sub_60A00(v108) + 1;
                v76 = v68 - v115;
                v69 = sub_60680(v109);
                v70 = 0;
                if ( !v69 )
                  v70 = sub_60A00(v109) + 1;
                v75 = v70 - HIDWORD(v115);
                v41 = v70 - HIDWORD(v115) + v76;
              }
              v12 = v63 - v81;
              if ( v63 - v81 >= 0 )
                goto LABEL_61;
              v43 = v41;
              if ( v41 > 0 )
                goto LABEL_64;
LABEL_127:
              v12 = v74;
            }
LABEL_97:
            if ( v110 )
            {
              *(_QWORD *)&v111 = 0;
              qfree();
            }
            qfree();
            qfree();
            if ( v105 )
            {
              v106 = 0;
              qfree();
            }
            if ( v103 )
            {
              v104 = 0;
              qfree();
            }
            if ( v97.m128i_i64[1] )
            {
              v98 = nullptr;
              qfree();
            }
            if ( v95 )
            {
              v96 = nullptr;
              qfree();
            }
LABEL_14:
            if ( !v5 )
              return (unsigned int)v12;
            goto LABEL_33;
          }
          v12 = ((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v32)(v31, a2, *(_QWORD *)(v11 + 24));
          if ( v12 )
            goto LABEL_14;
        }
        v11 = *(_QWORD *)(*a1 + 56LL);
        goto LABEL_12;
      }
    }
    else if ( (unsigned __int8)v10 > 0x10u )
    {
      v10 = (unsigned __int8)v10;
      v11 = *(_QWORD *)(*a1 + 56LL);
      goto LABEL_12;
    }
    v10 = getinf();
    goto LABEL_46;
  }
  v8 = 0;
  if ( !v7 )
  {
    v12 = 0;
    if ( !v6 )
      goto LABEL_108;
    goto LABEL_27;
  }
  do
  {
    if ( (unsigned int)lexcompare_tinfo() || (unsigned int)compare_arglocs() )
      goto LABEL_9;
    ++v8;
    v9 = a2->m128i_u64[1];
  }
  while ( v8 < v9 );
  v12 = a2->m128i_i64[1];
  v7 = (int)v9;
  if ( (int)v9 < (unsigned __int64)v5[1] )
  {
    do
    {
LABEL_27:
      v21 = *v5 + 80 * v7;
      v93 = 0;
      copy_argloc();
      v96 = nullptr;
      v97 = 0;
      v22 = *(_QWORD *)(v21 + 24);
      if ( v22 )
      {
        v96 = (void *)qalloc_or_throw();
        v97.m128i_i64[1] = v22;
        memcpy(v96, *(const void **)(v21 + 16), v22);
        v97.m128i_i64[0] = v22;
      }
      v98 = nullptr;
      v99 = 0;
      v13 = *(_QWORD *)(v21 + 48);
      if ( v13 )
      {
        v98 = (void *)qalloc_or_throw();
        v99.m128i_i64[1] = v13;
        memcpy(v98, *(const void **)(v21 + 40), v13);
        v99.m128i_i64[0] = v13;
      }
      v100 = 0;
      copy_tinfo_t();
      v14 = a2->m128i_i64[1];
      v15 = a2->m128i_i64[0];
      v101 = *(_DWORD *)(v21 + 72);
      if ( a2[1].m128i_i64[0] < (unsigned __int64)(v14 + 1) )
      {
        v23 = qvector_reserve();
        a2->m128i_i64[0] = v23;
        v14 = a2->m128i_i64[1];
        v15 = v23;
      }
      v16 = v15 + 80 * v14;
      *(_DWORD *)v16 = 0;
      copy_argloc();
      v17 = v96;
      v18 = _mm_loadu_si128(&v97);
      v96 = nullptr;
      *(_QWORD *)(v16 + 16) = v17;
      *(__m128i *)(v16 + 24) = v18;
      v19 = v98;
      v20 = _mm_load_si128(&v99);
      v97 = 0;
      v98 = nullptr;
      v99 = 0;
      *(_QWORD *)(v16 + 40) = v19;
      *(_QWORD *)(v16 + 64) = 0;
      *(__m128i *)(v16 + 48) = v20;
      copy_tinfo_t();
      *(_DWORD *)(v16 + 72) = v101;
      ++a2->m128i_i64[1];
      clear_tinfo_t();
      if ( v98 )
      {
        v99.m128i_i64[0] = 0;
        qfree();
      }
      if ( v96 )
      {
        v97.m128i_i64[0] = 0;
        qfree();
      }
      ++v12;
      cleanup_argloc();
      v7 = v12;
    }
    while ( v12 < (unsigned __int64)v5[1] );
    v9 = a2->m128i_u64[1];
    v12 = v9;
  }
  if ( v12 )
  {
    v24 = a2->m128i_i64[0] + 80 * v9 - 80;
    if ( *(_DWORD *)v24 == 1 )
    {
      v33 = *(_QWORD *)(v24 + 8);
      a2[3].m128i_i64[1] = get_tinfo_size() + v33;
    }
    goto LABEL_33;
  }
LABEL_108:
  v12 = 0;
LABEL_33:
  v25 = *v5;
  if ( *v5 )
  {
    v26 = v5[1];
    if ( v26 )
    {
      for ( j = 0; j != v26; ++j )
      {
        v28 = (_QWORD *)(v25 + 80 * j);
        clear_tinfo_t();
        if ( v28[5] )
        {
          v28[6] = 0;
          qfree();
        }
        if ( v28[2] )
        {
          v28[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v25 = *v5;
      }
    }
    v5[1] = 0;
    qfree();
  }
  qfree();
  return (unsigned int)v12;
}

