__int64 __fastcall sub_B36D0(__int128 a1)
{
  __int64 v1; // r15
  const __m128i *v3; // rbx
  int v4; // eax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 *v9; // r12
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 *v14; // r12
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edx
  int v27; // esi
  __int64 v28; // rax
  unsigned __int64 *v29; // rdi
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // rsi
  _DWORD *v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 func; // rax
  __int64 v53; // r14
  __int32 v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  char v57; // al
  int v58; // r12d
  __int64 v59; // r10
  __int64 v60; // r14
  unsigned int *v61; // rax
  unsigned int v62; // eax
  char v63; // al
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // r9d
  __int64 v67; // r12
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  char *v71; // rdi
  __int32 v72; // eax
  __int64 v73; // r12
  int v74; // esi
  __int64 v75; // rax
  __int32 v76; // eax
  __int32 v77; // eax
  __int32 v78; // eax
  int v79; // eax
  char *v80; // r12
  __int64 v81; // rax
  int v82; // esi
  __int64 v83; // r14
  bool v84; // al
  __int64 v85; // r10
  __int32 v86; // eax
  __int64 v87; // rdi
  __int64 v88; // r14
  __int64 v89; // rax
  __int32 v90; // eax
  char v91; // al
  char v92; // al
  __int64 v93; // rcx
  char v94; // al
  __int64 v95; // rax
  __int64 v96; // r11
  __int32 v97; // eax
  char v98; // al
  __int64 v99; // rcx
  char v100; // al
  __int64 v101; // rax
  int v102; // r10d
  char v103; // al
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // r11
  int v108; // r8d
  int v109; // r9d
  int v110; // edx
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  char v114; // al
  int v115; // r9d
  __int64 v116; // rax
  char v117; // al
  char v118; // al
  char v119; // al
  char v120; // al
  int v121; // eax
  __int64 v122; // rax
  int v123; // eax
  __int32 v124; // eax
  __int64 v125; // rdi
  __int64 v126; // r14
  __int64 v127; // rax
  int v128; // eax
  int v129; // [rsp-10h] [rbp-170h]
  int v130; // [rsp-8h] [rbp-168h]
  int v131; // [rsp+0h] [rbp-160h]
  int v132; // [rsp+0h] [rbp-160h]
  __int64 v133; // [rsp+8h] [rbp-158h]
  unsigned __int8 *v134; // [rsp+8h] [rbp-158h]
  __m128i v135; // [rsp+10h] [rbp-150h] BYREF
  __int64 v136; // [rsp+20h] [rbp-140h]
  __int64 v137; // [rsp+28h] [rbp-138h]
  __int64 v138; // [rsp+38h] [rbp-128h] BYREF
  unsigned __int64 *v139[2]; // [rsp+40h] [rbp-120h] BYREF
  unsigned __int64 *v140; // [rsp+50h] [rbp-110h] BYREF
  __m128i v141; // [rsp+58h] [rbp-108h]
  __int64 v142[2]; // [rsp+70h] [rbp-F0h] BYREF
  unsigned __int64 *v143; // [rsp+80h] [rbp-E0h]
  __m128i v144; // [rsp+88h] [rbp-D8h]
  __int64 v145[2]; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v146; // [rsp+B0h] [rbp-B0h]
  __int128 v147; // [rsp+B8h] [rbp-A8h]
  __int64 v148; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v149; // [rsp+D8h] [rbp-88h]
  __int64 v150; // [rsp+E0h] [rbp-80h]
  __int128 v151; // [rsp+E8h] [rbp-78h]
  unsigned __int64 *v152[2]; // [rsp+100h] [rbp-60h] BYREF
  unsigned __int64 *v153; // [rsp+110h] [rbp-50h] BYREF
  __m128i v154; // [rsp+118h] [rbp-48h] BYREF
  unsigned __int64 v155; // [rsp+128h] [rbp-38h]

  v155 = __readfsqword(0x28u);
  if ( !*((_QWORD *)&a1 + 1)
    || (v1 = *((_QWORD *)&a1 + 1), (*(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) & 0x40010) != 0)
    || (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 65LL) & 2) != 0
    || (v3 = (const __m128i *)a1, LOBYTE(v137) = sub_A2650(*(_QWORD *)(a1 + 64), *((__int64 *)&a1 + 1)), (_BYTE)v137) )
  {
    LOBYTE(v137) = 0;
    return (unsigned __int8)v137;
  }
  v4 = sub_33E140(*(_QWORD *)(a1 + 480), 0xCu, a1);
  if ( v4 )
  {
    LOBYTE(v137) = v4 != -1;
    return (unsigned __int8)v137;
  }
  v7 = *(_QWORD *)(a1 + 480);
  v139[0] = nullptr;
  v139[1] = nullptr;
  v140 = nullptr;
  v8 = *(_QWORD *)(v7 + 112);
  v142[0] = 0;
  v142[1] = 0;
  v143 = nullptr;
  v141 = 0;
  v144 = 0;
  switch ( **((_DWORD **)&a1 + 1) )
  {
    case 1:
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 48LL) == 1
        && *(_DWORD *)(v8 + 56) == *(_DWORD *)(*((_QWORD *)&a1 + 1) + 56LL)
        && *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) == 1
        && *(_DWORD *)(v8 + 60) == *(_DWORD *)(*((_QWORD *)&a1 + 1) + 72LL) )
      {
        v73 = sub_129320(a1, (__int64 *)v139, (__int64)v142, *((__int64 *)&a1 + 1), 0);
        if ( v73 )
        {
          if ( *(_QWORD *)(v73 + 24) == *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL)
            && *(_DWORD *)v73 == 13
            && *(_BYTE *)(v73 + 32) == 1
            && *(_DWORD *)(v8 + 60) == *(_DWORD *)(v73 + 40)
            && sub_125B60((unsigned __int8 *)(v73 + 32), v73 + 64, 0)
            && sub_A2350((char *)(v73 + 48), *(int *)(*((_QWORD *)&a1 + 1) + 36LL), 1u)
            && sub_B02D0(a1, v139, (__int64)v142, v73, *((__int64 *)&a1 + 1), 0.0) )
          {
            sub_11D5A0(v73);
            **((_DWORD **)&a1 + 1) = 59;
            sub_11CDA0(*((_QWORD *)&a1 + 1) + 48LL);
            sub_11CDA0(*((_QWORD *)&a1 + 1) + 64LL);
            *(_DWORD *)(a1 + 24) |= 0x10u;
            goto LABEL_42;
          }
        }
      }
      if ( !(unsigned __int8)sub_9AAF0(a1) && !(unsigned __int8)sub_18AD00(a1, *((__int64 *)&a1 + 1)) )
        goto LABEL_66;
      goto LABEL_42;
    case 2:
LABEL_66:
      if ( (unsigned __int8)sub_186F90(a1, *((__int64 *)&a1 + 1)) )
        goto LABEL_42;
      goto LABEL_33;
    case 4:
      v151 = 0;
      v145[0] = 0;
      v145[1] = 0;
      v146 = 0;
      v148 = 0;
      v149 = 0;
      v150 = 0;
      v147 = 0;
      sub_127FE0(
        a1,
        (__int64)v145,
        *((_QWORD *)&a1 + 1) + 64LL,
        1u,
        v5,
        v6,
        v131,
        v133,
        (int)v145,
        v135.m128i_i32[2],
        *((_QWORD *)&a1 + 1) + 64LL);
      v32 = sub_129150(a1, v145, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL), 0, (__int64)&v148, 128, 0x101u);
      if ( !v32 )
        goto LABEL_54;
      if ( *(_BYTE *)(v32 + 64) != *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) || *(_DWORD *)v32 != 4 )
        goto LABEL_51;
      v79 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL);
      if ( *(_DWORD *)(v32 + 68) > v79 )
      {
        v133 = v32;
        v98 = sub_A2310(&v148, v135.m128i_i64[0]);
        v32 = v133;
        if ( v98 )
        {
          v100 = sub_1205A0(*((_BYTE **)&a1 + 1), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, v99, v30, v31);
          v32 = v133;
          if ( !v100 )
          {
            v101 = sub_A9AA0(
                     a1,
                     (unsigned __int64 **)v135.m128i_i64[0],
                     *(_QWORD *)(v133 + 8),
                     *((__int64 *)&a1 + 1),
                     1u);
            v32 = v133;
            if ( !v101 )
            {
              v130 = v102;
              v103 = sub_12FF70(
                       *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                       &v138,
                       (const __m128i *)a1,
                       v133,
                       v133 + 64,
                       *((__int64 *)&a1 + 1),
                       v136);
              LODWORD(v30) = v129;
              v32 = v133;
              v31 = v130;
              if ( v103 )
              {
                sub_123A40((__int64)v152, (unsigned __int8 *)(v133 + 32), v104, v105);
                v107 = v133;
                if ( v138 >= 0 && v138 < SHIDWORD(v152[0]) )
                {
                  v118 = sub_126F10((unsigned __int64)v152, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v138, v106);
                  v107 = v133;
                  if ( v118 )
                  {
                    v119 = sub_125B60((unsigned __int8 *)v152, *((_QWORD *)&a1 + 1) + 32LL, 0);
                    v107 = v133;
                    if ( v119 )
                    {
                      *((_QWORD *)&a1 + 1) = v152;
                      v120 = sub_A9CB0(a1, *(_QWORD *)(v133 + 8), v1);
                      v107 = v133;
                      if ( !v120 )
                      {
                        sub_11D5A0(v1);
                        v121 = *(_DWORD *)(a1 + 24);
                        BYTE1(v121) &= ~2u;
                        LOBYTE(v121) = v121 | 0x80;
                        *(_DWORD *)(a1 + 24) = v121;
                        sub_11CDA0((__int64)v152);
                        goto LABEL_250;
                      }
                    }
                  }
                }
                v133 = v107;
                sub_11CDA0((__int64)v152);
                v32 = v133;
              }
            }
          }
        }
LABEL_51:
        if ( *(int *)(v1 + 68) > 4 )
          goto LABEL_54;
        if ( (unsigned int)(*(_DWORD *)v32 - 8) <= 1 )
        {
          v133 = v32;
          v92 = sub_125B60((unsigned __int8 *)(v32 + 32), v1 + 32, 0);
          v32 = v133;
          if ( v92 )
          {
            if ( *(_BYTE *)(v1 + 32) != 4
              || (v117 = sub_1205A0(*(_BYTE **)(v1 + 40), v8, 0, v93, v30, v31), v32 = v133, !v117) )
            {
              v133 = v32;
              v94 = sub_127420(v136, v8, (unsigned __int8 *)(v32 + 64), v93);
              v32 = v133;
              if ( v94 )
              {
                if ( *(_DWORD *)(v133 + 68) >= *(_DWORD *)(v1 + 68) )
                {
                  v136 = v133;
                  sub_124680((__int64)v152, a1, v133, 1u);
                  v95 = sub_A9AA0(a1, (unsigned __int64 **)v135.m128i_i64[0], *(_QWORD *)(v133 + 8), v1, 1u);
                  v96 = v133;
                  if ( !v95 )
                  {
                    v122 = sub_A9AA0(a1, v152, *(_QWORD *)(v136 + 8), v1, 1u);
                    v96 = v136;
                    if ( !v122 )
                    {
                      sub_11D5A0(v1);
                      v123 = *(_DWORD *)(a1 + 24);
                      BYTE1(v123) &= ~2u;
                      LOBYTE(v123) = v123 | 0x80;
                      *(_DWORD *)(a1 + 24) = v123;
                      sub_93B40((__int64 *)v152);
                      goto LABEL_250;
                    }
                  }
                  v136 = v96;
                  sub_93B40((__int64 *)v152);
                  v32 = v136;
                }
              }
            }
          }
        }
      }
      else if ( v79 > 4 )
      {
LABEL_54:
        if ( v150 )
        {
          *(_QWORD *)&v151 = 0;
          qfree(v150);
        }
        qfree(v148);
        if ( v146 )
        {
          *(_QWORD *)&v147 = 0;
          qfree(v146);
        }
        qfree(v145[0]);
        if ( (unsigned __int8)sub_186F90(a1, v1) )
          goto LABEL_42;
LABEL_59:
        if ( *(int *)(v1 + 68) <= 2 && (!(unsigned __int8)sub_11FD80((char *)(v1 + 32), v152, 0) || v152[0]) )
        {
          v135.m128i_i64[0] = v1 + 64;
          sub_123A40((__int64)&v148, (unsigned __int8 *)(v1 + 64), v33, v34);
          if ( !sub_131730((unsigned __int64 *)v8, (const __m128i *)a1, v1, (__int64)&v148, 2 * HIDWORD(v148), 0, 0) )
          {
            sub_11CDA0((__int64)&v148);
            goto LABEL_35;
          }
          sub_127FE0(
            a1,
            (__int64)v142,
            (__int64)&v148,
            1u,
            v35,
            v36,
            v131,
            v133,
            v135.m128i_i32[0],
            v135.m128i_i32[2],
            v136);
          v37 = sub_129150(a1, v142, *(_QWORD *)(v1 + 16), 0, 0, 0, 0x101u);
          v136 = v37;
          if ( v37 )
          {
            if ( *(_DWORD *)v37 == 4 )
            {
              if ( sub_A2350((char *)(v37 + 32), 0, 0) )
              {
                v110 = *(_DWORD *)(v136 + 68);
                v111 = (*(int *)(v1 + 4) >> 8) & 7;
                if ( (!v111 || 1 << (v111 - 1) >= v110) && *(_DWORD *)(v1 + 68) < v110 )
                {
                  v152[0] = nullptr;
                  v152[1] = nullptr;
                  v153 = nullptr;
                  v154 = 0;
                  sub_127FE0(
                    a1,
                    (__int64)v152,
                    v136 + 64,
                    0,
                    v108,
                    v109,
                    v132,
                    v136 + 64,
                    v135.m128i_i32[0],
                    v135.m128i_i32[2],
                    v136);
                  if ( !sub_A9D90(a1, v152, *(_QWORD *)(v136 + 8), *(_QWORD *)(v1 + 8), 1u)
                    && (unsigned __int8)sub_127420(v135.m128i_i64[0], v8, v134, v112) )
                  {
                    sub_125180(v135.m128i_i64[0], v134);
                    v127 = v136;
                    *(_DWORD *)v1 = 9;
                    if ( *(char *)(v127 + 4) >= 0 )
                    {
                      sub_11D5A0(v127);
                      v128 = *(_DWORD *)(a1 + 24);
                      BYTE1(v128) &= ~2u;
                      LOBYTE(v128) = v128 | 0x80;
                      *(_DWORD *)(a1 + 24) = v128;
                    }
                    sub_93B40((__int64 *)v152);
                    sub_11CDA0((__int64)&v148);
                    goto LABEL_42;
                  }
                  sub_93B40((__int64 *)v152);
                }
              }
            }
          }
          sub_11CDA0((__int64)&v148);
        }
LABEL_33:
        if ( !(unsigned __int8)sub_AC200(v3, (unsigned int *)v1)
          && !(unsigned __int8)sub_18AA30((__int64)v3, (_BYTE *)v1) )
        {
          goto LABEL_35;
        }
        goto LABEL_42;
      }
      if ( !(unsigned __int8)sub_AE450((const __m128i *)a1, v32, v1, v135.m128i_i64[0], v30, v31) )
        goto LABEL_54;
LABEL_250:
      sub_93B40(&v148);
      sub_93B40((__int64 *)v135.m128i_i64[0]);
LABEL_42:
      sub_1B5B40((int *)v1);
      sub_A2520((__int64)v3, "cmb%d: %s");
LABEL_43:
      LOBYTE(v137) = 1;
LABEL_35:
      if ( v143 )
      {
        v144.m128i_i64[0] = 0;
        qfree((__int64)v143);
      }
      qfree(v142[0]);
      if ( v140 )
      {
        v141.m128i_i64[0] = 0;
        qfree((__int64)v140);
      }
      qfree((__int64)v139[0]);
      return (unsigned __int8)v137;
    case 5:
      if ( (unsigned __int8)sub_9ED70(a1) || (unsigned __int8)sub_99C40(a1) )
        goto LABEL_42;
      goto LABEL_33;
    case 9:
      goto LABEL_59;
    case 0xA:
      if ( (unsigned __int8)sub_9B160(a1)
        || (unsigned __int8)sub_A02B0(a1)
        || (unsigned __int8)sub_9B2C0((const __m128i *)a1, *((__int64 *)&a1 + 1))
        || (unsigned __int8)sub_98A40((const __m128i *)a1, *((__int64 *)&a1 + 1)) )
      {
        goto LABEL_42;
      }
      goto LABEL_33;
    case 0xB:
      if ( (unsigned __int8)sub_9FDC0(a1)
        || (unsigned __int8)sub_9CFB0(a1)
        || (unsigned __int8)sub_9B900(a1, v42, v43, v44, v45)
        || (unsigned __int8)sub_9D2D0((const __m128i *)a1, *((__int64 *)&a1 + 1))
        || (unsigned __int8)sub_A0610(a1) )
      {
        goto LABEL_42;
      }
      goto LABEL_33;
    case 0xC:
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 1 )
        goto LABEL_76;
      if ( *(_DWORD *)(v8 + 60) != *(_DWORD *)(*((_QWORD *)&a1 + 1) + 40LL) )
        goto LABEL_76;
      v135.m128i_i64[0] = *((_QWORD *)&a1 + 1) + 64LL;
      if ( !sub_125B60((unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL), *((_QWORD *)&a1 + 1) + 64LL, 0) )
        goto LABEL_76;
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 48LL) != 2 )
        goto LABEL_76;
      v67 = sub_129B40(a1, (__int64)v139, v142, *((__int64 *)&a1 + 1), 0, v66);
      if ( !v67 )
        goto LABEL_76;
      v68 = *(int *)(v67 + 68);
      v136 = v1 + 48;
      if ( !sub_A2350((char *)(v1 + 48), v68, 1u) )
        goto LABEL_76;
      if ( *(_DWORD *)v67 == 2 )
      {
        if ( *(_BYTE *)(v67 + 32) != 1
          || *(_DWORD *)(v8 + 56) != *(_DWORD *)(v67 + 40)
          || *(_BYTE *)(v67 + 48) != 1
          || *(_DWORD *)(v8 + 60) != *(_DWORD *)(v67 + 56) )
        {
          goto LABEL_76;
        }
      }
      else
      {
        if ( *(_DWORD *)v67 != 4 )
          goto LABEL_76;
        if ( *(_BYTE *)(v67 + 32) != 4 )
          goto LABEL_76;
        v69 = *(_QWORD *)(v67 + 40);
        if ( *(_DWORD *)v69 != 2
          || *(_BYTE *)(v69 + 32) != 1
          || *(_DWORD *)(v8 + 56) != *(_DWORD *)(v69 + 40)
          || *(_BYTE *)(v69 + 48) != 1
          || *(_DWORD *)(v8 + 60) != *(_DWORD *)(v69 + 56) )
        {
          goto LABEL_76;
        }
      }
      if ( sub_B02D0(a1, v139, (__int64)v142, v67, v1, 0.0) )
      {
        *(_DWORD *)v1 = 60;
        v70 = *(_QWORD *)(v1 + 24);
        v71 = (char *)v135.m128i_i64[0];
        *(_QWORD *)(v1 + 24) = *(_QWORD *)(v67 + 24);
        *(_QWORD *)(v67 + 24) = v70;
        sub_11CA10(v71, (char *)(v67 + 64));
        sub_11CDA0(v1 + 32);
        sub_11CDA0(v136);
        sub_11D5A0(v67);
        v72 = v3[1].m128i_i32[2];
        BYTE1(v72) &= ~2u;
        LOBYTE(v72) = v72 | 0x90;
        v3[1].m128i_i32[2] = v72;
        goto LABEL_42;
      }
LABEL_76:
      *((_QWORD *)&a1 + 1) = v1;
      if ( sub_9C9E0(a1, 0.0) )
        goto LABEL_42;
      *((_QWORD *)&a1 + 1) = v1;
      if ( (unsigned __int8)sub_9DED0(a1, 0.0) )
        goto LABEL_42;
      if ( (unsigned __int8)sub_99410((const __m128i *)a1, v1) )
        goto LABEL_42;
      *((_QWORD *)&a1 + 1) = v1;
      if ( (unsigned __int8)sub_9F370(a1) )
        goto LABEL_42;
      *((_QWORD *)&a1 + 1) = v1;
      if ( (unsigned __int8)sub_9CB20(a1) )
        goto LABEL_42;
      *((_QWORD *)&a1 + 1) = v1;
      if ( (unsigned __int8)sub_96180(a1, v38, v39, v40, v41) || (unsigned __int8)sub_96550(a1, v1) )
        goto LABEL_42;
      goto LABEL_33;
    case 0xD:
      if ( sub_9C9E0(a1, 0.0)
        || (unsigned __int8)sub_99C40(a1)
        || (unsigned __int8)sub_9ED70(a1)
        || (unsigned __int8)sub_97260(a1) )
      {
        goto LABEL_42;
      }
      goto LABEL_33;
    case 0xE:
      if ( (unsigned __int8)sub_97480(a1) )
        goto LABEL_42;
      goto LABEL_33;
    case 0x13:
      goto LABEL_44;
    case 0x17:
      if ( (unsigned __int8)sub_96C00(a1) )
        goto LABEL_42;
LABEL_44:
      if ( (unsigned __int8)sub_9B500(a1)
        || (unsigned __int8)sub_968F0(a1, *((char **)&a1 + 1))
        || (unsigned __int8)sub_98540(a1, *((char **)&a1 + 1))
        || (unsigned __int8)sub_97770(a1) )
      {
        goto LABEL_42;
      }
      goto LABEL_33;
    case 0x18:
      if ( (unsigned __int8)sub_9EA00(a1) || (unsigned __int8)sub_986E0(a1, *((__int64 *)&a1 + 1)) )
        goto LABEL_42;
      goto LABEL_33;
    case 0x1D:
    case 0x1E:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x2D:
    case 0x2E:
    case 0x32:
    case 0x33:
      if ( (unsigned __int8)sub_98280(a1, *((unsigned int **)&a1 + 1)) )
        goto LABEL_42;
      goto LABEL_33;
    case 0x2A:
      if ( sub_B2870(a1, *((__int64 *)&a1 + 1)) )
        goto LABEL_42;
      goto LABEL_33;
    case 0x36:
      v58 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL);
      DWORD2(a1) = *(_DWORD *)(v8 + 60);
      v59 = v1;
      v60 = 0;
      while ( 2 )
      {
        v61 = (unsigned int *)sub_124B60(a1, SDWORD2(a1), v59, 0, 0, 1u);
        v59 = (__int64)v61;
        if ( !v61 )
          goto LABEL_33;
        v62 = *v61;
        if ( v62 == 59 )
        {
          if ( *(_DWORD *)(v59 + 36) != *(_DWORD *)(v8 + 84) )
            goto LABEL_33;
          *((_QWORD *)&a1 + 1) = *(_QWORD *)(v1 + 24);
          *(_QWORD *)&a1 = *(_QWORD *)(a1 + 64);
          v135.m128i_i64[0] = v59;
          v80 = (char *)(v59 + 32);
          v81 = sub_A25E0((_QWORD *)a1, *((unsigned __int64 *)&a1 + 1));
          if ( !sub_A2350(v80, v81, 0) )
            goto LABEL_33;
          v82 = *(_DWORD *)(v8 + 60);
          v137 = v135.m128i_i64[0];
          v83 = sub_124B60((__int64)v3, v82, v135.m128i_i64[0], 0, 0, 1u);
          v84 = sub_A2620(v8, v83);
          v85 = v135.m128i_i64[0];
          if ( v84 )
          {
            sub_11D5A0(v83);
            v86 = v3[1].m128i_i32[2];
            v87 = v3[4].m128i_i64[0];
            BYTE1(v86) &= ~2u;
            LOBYTE(v86) = v86 | 0x80;
            v3[1].m128i_i32[2] = v86;
            v88 = sub_1CFBB0(v87, *(_QWORD *)(v83 + 24));
            v89 = sub_1CFBB0(v3[4].m128i_i64[0], *(_QWORD *)(v1 + 24));
            v85 = v137;
            if ( v88 != v89 )
              *(_DWORD *)(v1 + 4) |= 0x20u;
          }
          sub_11D5A0(v85);
          v90 = v3[1].m128i_i32[2];
          BYTE1(v90) &= ~2u;
          LOBYTE(v90) = v90 | 0x80;
          v3[1].m128i_i32[2] = v90;
          *(_DWORD *)v1 = 57;
          sub_125180(v1 + 32, (unsigned __int8 *)(v1 + 48));
          sub_125180(v1 + 48, (unsigned __int8 *)(v1 + 64));
          sub_11CDA0(v1 + 64);
          sub_1B5B40((int *)v1);
          sub_A2520((__int64)v3, "cmb%d: %s");
          sub_167810(v3, v1, 6);
          goto LABEL_43;
        }
        if ( v62 <= 0x3B )
        {
          if ( v62 != 12 )
          {
            if ( v62 != 13 )
              goto LABEL_33;
            if ( *(_BYTE *)(v59 + 32) != 1 )
              goto LABEL_33;
            DWORD2(a1) = *(_DWORD *)(v8 + 60);
            if ( DWORD2(a1) != *(_DWORD *)(v59 + 40) )
              goto LABEL_33;
            continue;
          }
          if ( *(_BYTE *)(v59 + 32) == 1 && *(_DWORD *)(v8 + 60) == *(_DWORD *)(v59 + 40) )
          {
            v135.m128i_i64[0] = v59;
            v91 = sub_125B60((unsigned __int8 *)(v59 + 32), v59 + 64, 0);
            v59 = v135.m128i_i64[0];
            if ( v91 && *(_BYTE *)(v135.m128i_i64[0] + 48) == 2 && *(_DWORD *)(v135.m128i_i64[0] + 36) == v58 )
              v60 = v135.m128i_i64[0];
            DWORD2(a1) = *(_DWORD *)(v8 + 60);
            continue;
          }
          goto LABEL_33;
        }
        break;
      }
      if ( v62 != 60 )
        goto LABEL_33;
      if ( *(_BYTE *)(v1 + 64) != 1 )
        goto LABEL_197;
      if ( *(_BYTE *)(v59 + 64) != 1 )
        goto LABEL_33;
      if ( *(_DWORD *)(v1 + 72) == *(_DWORD *)(v59 + 72) && v58 == *(_DWORD *)(v59 + 68) )
      {
        *((_QWORD *)&a1 + 1) = *(_QWORD *)(v1 + 24);
        *(_QWORD *)&a1 = *(_QWORD *)(a1 + 64);
        v135.m128i_i64[0] = v59;
        v136 = v1 + 48;
        sub_330F80((_QWORD *)a1, *((unsigned __int64 *)&a1 + 1));
        v113 = getseg();
        v114 = sub_A2350((char *)(v1 + 48), *(_QWORD *)(v113 + 48), 0);
        v59 = v135.m128i_i64[0];
        if ( v114 )
          goto LABEL_278;
        if ( *(_BYTE *)(v1 + 48) != 1 )
          goto LABEL_33;
        if ( *(_DWORD *)(v8 + 64) == *(_DWORD *)(v1 + 56) )
        {
LABEL_278:
          v116 = sub_129010((__int64)v3, *(_DWORD *)(v1 + 72), *(_QWORD *)(v1 + 16), 0, 0, v115);
          v59 = v135.m128i_i64[0];
          if ( v135.m128i_i64[0] == v116 )
          {
LABEL_207:
            sub_11D5A0(v59);
            v77 = v3[1].m128i_i32[2];
            BYTE1(v77) &= ~2u;
            LOBYTE(v77) = v77 | 0x80;
            v3[1].m128i_i32[2] = v77;
            sub_330990((__int64)v3, v1);
            if ( v60 )
            {
              sub_11D5A0(v60);
              v78 = v3[1].m128i_i32[2];
              BYTE1(v78) &= ~2u;
              LOBYTE(v78) = v78 | 0x80;
              v3[1].m128i_i32[2] = v78;
            }
            sub_1B5B40((int *)v1);
            sub_A2520((__int64)v3, "cmb%d: %s");
            goto LABEL_43;
          }
LABEL_197:
          if ( *(_BYTE *)(v1 + 48) != 1 )
            goto LABEL_33;
        }
        if ( *(_BYTE *)(v59 + 64) != 1 )
          goto LABEL_33;
      }
      else if ( *(_BYTE *)(v1 + 48) != 1 )
      {
        goto LABEL_33;
      }
      if ( *(_DWORD *)(v59 + 72) != *(_DWORD *)(v1 + 56) )
        goto LABEL_33;
      if ( v58 != *(_DWORD *)(v59 + 68) )
        goto LABEL_33;
      v74 = *(_DWORD *)(v8 + 60);
      v135.m128i_i64[0] = v59;
      v75 = sub_124B60((__int64)v3, v74, v59, 0, 0, 1u);
      if ( !v75
        || *(_BYTE *)(v1 + 64) != 1
        || *(_BYTE *)(v75 + 64) != 1
        || *(_DWORD *)(v1 + 72) != *(_DWORD *)(v75 + 72)
        || v58 != *(_DWORD *)(v75 + 68) )
      {
        goto LABEL_33;
      }
      v137 = v135.m128i_i64[0];
      sub_11D5A0(v75);
      v76 = v3[1].m128i_i32[2];
      v59 = v135.m128i_i64[0];
      BYTE1(v76) &= ~2u;
      LOBYTE(v76) = v76 | 0x80;
      v3[1].m128i_i32[2] = v76;
      goto LABEL_207;
    case 0x37:
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 6 )
        goto LABEL_33;
      v47 = *(_QWORD *)(a1 + 64);
      v48 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
      if ( *(_QWORD *)(v47 + 40) != v48 )
      {
        if ( (unsigned __int8)sub_332920(v47 + 8, v48) )
          goto LABEL_33;
      }
      v49 = (_DWORD *)sub_124B60(a1, *(_DWORD *)(v8 + 60), v1, 0, 0, 1u);
      v50 = (__int64)v49;
      if ( !v49 )
        goto LABEL_33;
      if ( *v49 != 59 )
        goto LABEL_33;
      if ( v49[9] != *(_DWORD *)(v8 + 84) )
        goto LABEL_33;
      v51 = sub_A25E0(*(_QWORD **)(a1 + 64), *(_QWORD *)(v1 + 24));
      if ( !sub_A2350((char *)(v50 + 32), v51, 0) )
        goto LABEL_33;
      func = get_func();
      if ( func )
      {
        if ( (*(_BYTE *)(func + 16) & 2) != 0 )
        {
          v53 = sub_124B60(a1, *(_DWORD *)(v8 + 60), v50, 0, 0, 1u);
          if ( sub_A2620(v8, v53) )
          {
            sub_11D5A0(v53);
            v124 = *(_DWORD *)(a1 + 24);
            v125 = *(_QWORD *)(a1 + 64);
            BYTE1(v124) &= ~2u;
            LOBYTE(v124) = v124 | 0x80;
            v3[1].m128i_i32[2] = v124;
            v126 = sub_1CFBB0(v125, *(_QWORD *)(v53 + 24));
            if ( v126 != sub_1CFBB0(v3[4].m128i_i64[0], *(_QWORD *)(v1 + 24)) )
              *(_DWORD *)(v1 + 4) |= 0x20u;
          }
        }
      }
      sub_11D5A0(v50);
      v54 = v3[1].m128i_i32[2];
      BYTE1(v54) &= ~2u;
      LOBYTE(v54) = v54 | 0x80;
      v3[1].m128i_i32[2] = v54;
      *(_DWORD *)v1 = 56;
      goto LABEL_42;
    case 0x38:
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) != 8 )
        goto LABEL_33;
      v46 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL) + 284LL);
      if ( v46 != 5 && v46 != 34 )
        goto LABEL_110;
      v64 = sub_1229A0(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL));
      if ( v64 && (unsigned __int8)sub_189980(a1, *((__int64 *)&a1 + 1), v64, v65) )
        goto LABEL_42;
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) != 8 )
        goto LABEL_33;
      v46 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL) + 284LL);
      if ( v46 == 5 )
        goto LABEL_160;
LABEL_110:
      if ( (v46 & 0xFFFFFFDF) != 2 )
        goto LABEL_111;
LABEL_160:
      if ( (unsigned __int8)sub_186F90(a1, *((__int64 *)&a1 + 1)) )
        goto LABEL_42;
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) != 8 )
        goto LABEL_33;
      v46 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL) + 284LL);
      if ( v46 == 5 )
        goto LABEL_112;
LABEL_111:
      if ( v46 != 2 )
        goto LABEL_33;
LABEL_112:
      if ( (unsigned __int8)sub_18A2C0((const __m128i *)a1, *((__int64 *)&a1 + 1)) )
        goto LABEL_42;
      goto LABEL_33;
    case 0x3B:
      if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 1 )
        goto LABEL_33;
      v55 = sub_122A30(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL));
      v56 = v55;
      if ( !v55 )
        goto LABEL_33;
      if ( *(_DWORD *)v55 != 4 )
        goto LABEL_33;
      v57 = *(_BYTE *)(v55 + 32);
      if ( v57 != 2 && (v57 != 1 || *(_QWORD *)(v56 + 24) != *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL)) )
        goto LABEL_33;
      if ( !sub_125B60((unsigned __int8 *)(v56 + 64), *((_QWORD *)&a1 + 1) + 32LL, 0) )
        goto LABEL_33;
      sub_125180(*((_QWORD *)&a1 + 1) + 32LL, (unsigned __int8 *)(v56 + 32));
      goto LABEL_42;
    case 0x3C:
      sub_124680((__int64)v152, a1, *((__int64 *)&a1 + 1), 0);
      sub_648D0((__int64 *)v139, (const void **)v152, 0.0);
      v9 = v153;
      v153 = nullptr;
      v10 = _mm_loadu_si128(&v154);
      v154 = 0;
      if ( v140 )
      {
        v135 = v10;
        v141.m128i_i64[0] = 0;
        qfree((__int64)v140);
        v11 = _mm_load_si128(&v135);
        v140 = v9;
        v141 = v11;
        if ( v153 )
        {
          v154.m128i_i64[0] = 0;
          qfree((__int64)v153);
        }
      }
      else
      {
        v140 = v9;
        v141 = v10;
      }
      qfree((__int64)v152[0]);
      sub_127A20((__int64)v152, a1, *((__int64 *)&a1 + 1), 0, v12, v13);
      sub_648D0(v142, (const void **)v152, 0.0);
      v14 = v153;
      v153 = nullptr;
      v15 = _mm_loadu_si128(&v154);
      v154 = 0;
      if ( v143 )
      {
        v135 = v15;
        v144.m128i_i64[0] = 0;
        qfree((__int64)v143);
        v16 = _mm_load_si128(&v135);
        v143 = v14;
        v144 = v16;
        if ( v153 )
        {
          v154.m128i_i64[0] = 0;
          qfree((__int64)v153);
        }
      }
      else
      {
        v143 = v14;
        v144 = v15;
      }
      qfree((__int64)v152[0]);
      v19 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
      if ( !v19 )
        goto LABEL_33;
      v135.m128i_i64[0] = (__int64)&v148;
      while ( 2 )
      {
        if ( (unsigned int)(*(_DWORD *)v19 - 56) <= 1 )
          goto LABEL_33;
        if ( *(_DWORD *)v19 != 59 )
          goto LABEL_28;
        if ( *(_DWORD *)(v19 + 36) != *(_DWORD *)(v1 + 68) )
          goto LABEL_33;
        v20 = sub_1CFBB0(v3[4].m128i_i64[0], *(_QWORD *)(v19 + 24));
        v21 = *(_QWORD *)(v1 + 24);
        v22 = v3[4].m128i_i64[0];
        v136 = v20;
        v23 = sub_1CFBB0(v22, v21);
        v24 = *(int *)(v1 + 68);
        v25 = v136;
        v136 = v23;
        if ( v25 - v24 != v23 )
          goto LABEL_33;
        v26 = *(_DWORD *)(v8 + 84);
        v27 = *(_DWORD *)(v8 + 60);
        v148 = 0;
        v149 = 0;
        sub_63E80((__int64 *)v135.m128i_i64[0], v27, v26, 0.0);
        v28 = v3[4].m128i_i64[0];
        v150 = 0;
        v151 = 0;
        sub_122B20((__int64 *)v135.m128i_i64[0], *(_QWORD *)(v28 + 1440) + v136, *(int *)(v8 + 80));
        if ( sub_A9D90((__int64)v3, (unsigned __int64 **)v135.m128i_i64[0], *(_QWORD *)(v19 + 8), v1, 0) )
        {
          if ( v150 )
          {
            *(_QWORD *)&v151 = 0;
            qfree(v150);
          }
          qfree(v148);
        }
        else
        {
          sub_124680((__int64)v152, (__int64)v3, v19, 1u);
          if ( !sub_A9AA0((__int64)v3, v152, *(_QWORD *)(v19 + 8), v1, 1u) )
          {
            *(_DWORD *)v1 = 4;
            sub_125180(v1 + 32, (unsigned __int8 *)(v19 + 32));
            if ( *(_BYTE *)(v1 + 32) == 1 && *(_DWORD *)(v8 + 60) == *(_DWORD *)(v1 + 40) )
              *(_QWORD *)(v1 + 24) = *(_QWORD *)(v19 + 24);
            sub_11D5A0(v19);
            v97 = v3[1].m128i_i32[2];
            BYTE1(v97) &= ~2u;
            LOBYTE(v97) = v97 | 0x80;
            v3[1].m128i_i32[2] = v97;
            sub_1B5B40((int *)v1);
            sub_A2520((__int64)v3, "cmb%d: %s");
            sub_167810(v3, v1, 6);
            if ( v153 )
            {
              v154.m128i_i64[0] = 0;
              qfree((__int64)v153);
            }
            qfree((__int64)v152[0]);
            if ( v150 )
            {
              *(_QWORD *)&v151 = 0;
              qfree(v150);
            }
            qfree(v148);
            goto LABEL_43;
          }
          if ( v153 )
          {
            v154.m128i_i64[0] = 0;
            qfree((__int64)v153);
          }
          qfree((__int64)v152[0]);
          if ( v150 )
          {
            *(_QWORD *)&v151 = 0;
            qfree(v150);
          }
          qfree(v148);
LABEL_28:
          sub_127A20((__int64)v152, (__int64)v3, v19, 0, v17, v18);
          if ( (unsigned __int8)sub_64780(v152, v139) )
          {
            v29 = v153;
          }
          else
          {
            v63 = sub_318470(&v153, (__int64)&v140);
            v29 = v153;
            if ( !v63 )
            {
              if ( v153 )
              {
                v154.m128i_i64[0] = 0;
                qfree((__int64)v153);
              }
              qfree((__int64)v152[0]);
              v19 = *(_QWORD *)(v19 + 16);
              if ( !v19 )
                goto LABEL_33;
              continue;
            }
          }
          if ( v29 )
          {
            v154.m128i_i64[0] = 0;
            qfree((__int64)v29);
          }
          qfree((__int64)v152[0]);
        }
        goto LABEL_33;
      }
    default:
      goto LABEL_33;
  }
}

