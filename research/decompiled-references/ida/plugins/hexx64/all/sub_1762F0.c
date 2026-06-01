__int64 __fastcall sub_1762F0(__int64 a1, __int64 a2, __int64 a3, char a4, __m128 a5)
{
  bool v5; // zf
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v10; // rbp
  int v11; // eax
  int v12; // r14d
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // r15
  int v20; // ebp
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rax
  void *v39; // rax
  int v40; // eax
  __int64 v41; // rdi
  __m128i *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r15
  unsigned int *v53; // r9
  __int64 v54; // rcx
  int v55; // edx
  char v56; // al
  __int64 v57; // rdx
  unsigned int *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int8 *v61; // rsi
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // r15d
  char v73; // bp
  _QWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  char *v77; // rdi
  __int64 v78; // rax
  unsigned __int8 *v79; // rsi
  __int32 v80; // eax
  int v81; // r8d
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // r9
  char v86; // al
  int v87; // eax
  char v88; // al
  char v89; // al
  __int64 v90; // rcx
  char v91; // al
  __int64 v92; // rax
  int v93; // eax
  char n; // [rsp+8h] [rbp-180h]
  size_t na; // [rsp+8h] [rbp-180h]
  size_t nf; // [rsp+8h] [rbp-180h]
  __int64 ne; // [rsp+8h] [rbp-180h]
  __m128i *nb; // [rsp+8h] [rbp-180h]
  int nc; // [rsp+8h] [rbp-180h]
  char nd; // [rsp+8h] [rbp-180h]
  __m128i v101; // [rsp+10h] [rbp-178h] BYREF
  __int64 v102; // [rsp+20h] [rbp-168h]
  unsigned int v103; // [rsp+28h] [rbp-160h]
  __int32 v104; // [rsp+2Ch] [rbp-15Ch]
  unsigned int *v105; // [rsp+30h] [rbp-158h]
  unsigned int *v106; // [rsp+38h] [rbp-150h]
  int v107; // [rsp+48h] [rbp-140h] BYREF
  int v108; // [rsp+4Ch] [rbp-13Ch] BYREF
  const void *v109[2]; // [rsp+50h] [rbp-138h] BYREF
  void *src; // [rsp+60h] [rbp-128h]
  __int128 v111; // [rsp+68h] [rbp-120h]
  __int64 v112[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v113; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v114; // [rsp+98h] [rbp-F0h]
  _QWORD v115[5]; // [rsp+B0h] [rbp-D8h] BYREF
  char v116; // [rsp+D8h] [rbp-B0h]
  __int64 v117; // [rsp+E0h] [rbp-A8h]
  __m128i v118; // [rsp+F0h] [rbp-98h] BYREF
  __int64 *v119; // [rsp+100h] [rbp-88h] BYREF
  __int128 v120; // [rsp+108h] [rbp-80h] BYREF
  __int64 v121; // [rsp+118h] [rbp-70h]
  _QWORD v122[2]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v123; // [rsp+130h] [rbp-58h]
  __int64 v124; // [rsp+138h] [rbp-50h]
  unsigned __int64 v125; // [rsp+148h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  v5 = *(_BYTE *)(a1 + 349) == 0;
  *(_BYTE *)(a1 + 40) = 1;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 8);
  v103 = *(_DWORD *)v6 - 56;
  if ( v103 > 1 )
  {
    v10 = *(_QWORD *)(v7 + 1504);
    switch ( *(_BYTE *)a2 )
    {
      case 1:
      case 5:
      case 0xF:
        goto LABEL_9;
      case 4:
        v21 = sub_175BD0(a1, *(_QWORD *)(a2 + 8), (__m128i)a5);
        v22 = 0;
        *(_QWORD *)(a1 + 32) = v6;
        if ( v21 <= 0 )
          v22 = v21;
        v12 = v22;
        break;
      case 6:
        goto LABEL_7;
      case 8:
        goto LABEL_17;
      case 0xA:
        goto LABEL_13;
      case 0xE:
        goto LABEL_28;
      default:
        return 0;
    }
    return (unsigned int)v12;
  }
  v11 = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(a1 + 340) = v11 + 1;
  v10 = *(_QWORD *)(v7 + 1504);
  switch ( *(_BYTE *)a2 )
  {
    case 1:
    case 5:
    case 0xF:
      goto LABEL_9;
    case 4:
      v23 = sub_175BD0(a1, *(_QWORD *)(a2 + 8), (__m128i)a5);
      v24 = 0;
      *(_QWORD *)(a1 + 32) = v6;
      if ( v23 <= 0 )
        v24 = v23;
      v12 = v24;
      goto LABEL_27;
    case 6:
LABEL_7:
      v14 = *(int *)(a2 + 4);
      n = a4;
      if ( (_DWORD)v14 == -1 )
        goto LABEL_10;
      v15 = sub_343460(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 480LL), *(_QWORD *)(a2 + 8), v14);
      a4 = n;
      if ( v15 )
        goto LABEL_10;
LABEL_9:
      if ( a4 )
        goto LABEL_10;
      v25 = *(_QWORD *)(a1 + 328);
      v26 = 0;
      v111 = 0;
      v109[0] = nullptr;
      v109[1] = nullptr;
      src = nullptr;
      v112[0] = 0;
      v112[1] = 0;
      v113 = 0;
      v114 = 0;
      sub_123EA0(v25, (__int64 *)v109, a2, 1, 0xFFFF0000, 0.0);
      if ( (unsigned __int8)sub_11E2C0((int **)v6, &v107, &v108, 0) && v107 + v108 < *(_DWORD *)(v6 + 68) )
      {
        v40 = sub_11CA90(v107 + v108, 0.0);
        v41 = *(_QWORD *)(a1 + 328);
        v108 = v40;
        sub_123EA0(v41, v112, a2, 1, v40 << 19, 0.0);
      }
      else
      {
        v108 = *(_DWORD *)(a2 + 4);
      }
      if ( (unsigned __int8)sub_64880(v112) && !v114.m128i_i64[0] )
      {
        sub_648D0(v112, v109, 0.0);
        v27 = v111;
        v28 = 0;
        if ( (_QWORD)v111 )
        {
          v101.m128i_i64[0] = v111;
          ne = 16 * v111;
          v38 = (void *)qalloc_or_throw(16 * v111, (__int64)v109, 16 * v111, 0);
          v39 = memcpy(v38, src, ne);
          v27 = v101.m128i_i64[0];
          v28 = (__int64)v39;
        }
        v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
        if ( v113 )
        {
          nf = v28;
          v101 = v26;
          v114.m128i_i64[0] = 0;
          qfree(v113);
          v26 = _mm_load_si128(&v101);
          v28 = nf;
        }
        v113 = v28;
        v114 = v26;
      }
      if ( (unsigned __int8)sub_64780((_QWORD *)(a1 + 192), v112)
        || (unsigned __int8)sub_318470((unsigned __int64 **)(a1 + 208), (__int64)&v113) )
      {
        goto LABEL_53;
      }
      if ( (unsigned __int8)sub_64780((_QWORD *)(a1 + 152), v112) )
        goto LABEL_65;
      if ( (unsigned __int8)sub_318470((unsigned __int64 **)(a1 + 168), (__int64)&v113) )
        goto LABEL_65;
      sub_64700(v112, (__int64 *)(a1 + 232));
      sub_3180C0(&v113, a1 + 248, v42, v43);
      if ( (unsigned __int8)sub_64880(v112) )
      {
        if ( !v114.m128i_i64[0] )
          goto LABEL_65;
      }
      v101.m128i_i64[0] = *(_QWORD *)(a1 + 312);
      if ( !(unsigned __int8)sub_64820(v112, v101.m128i_i64[0])
        || !(unsigned __int8)sub_317F40((__int64 *)(v101.m128i_i64[0] + 16), (__int64)&v113) )
      {
        goto LABEL_65;
      }
      if ( !*(_BYTE *)(a1 + 353) && !*(_DWORD *)(a1 + 340) )
        goto LABEL_74;
      if ( *(_BYTE *)a2 != 15 )
        goto LABEL_78;
      v101.m128i_i64[0] = *(_QWORD *)(a1 + 56);
      nd = sub_173460(v101.m128i_i64[0], a2, *(double *)v26.m128i_i64);
      if ( nd )
        goto LABEL_128;
      if ( *(_BYTE *)(v101.m128i_i64[0] + 64) == 15 )
      {
        nd = sub_125B60((unsigned __int8 *)(v101.m128i_i64[0] + 64), a2, 0, *(double *)v26.m128i_i64);
        goto LABEL_146;
      }
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        v67 = *(_DWORD *)v101.m128i_i64[0];
        if ( *(_DWORD *)v101.m128i_i64[0] != 4 )
        {
          if ( v67 == 67 )
          {
            if ( *(_DWORD *)(v101.m128i_i64[0] + 36) != *(_DWORD *)(v101.m128i_i64[0] + 68) )
              goto LABEL_128;
          }
          else if ( (unsigned int)(v67 - 1) > 1 )
          {
            goto LABEL_128;
          }
        }
      }
      v74 = *(_QWORD **)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( v74[1] == 1 )
      {
        v118 = 0u;
        if ( *(_DWORD *)(v101.m128i_i64[0] + 68) == *(unsigned __int16 *)(*v74 + 18LL) )
        {
          v77 = (char *)(v101.m128i_i64[0] + 64);
          v102 = (__int64)v74;
          v101.m128i_i64[0] = (__int64)&v118;
          if ( (unsigned __int8)sub_1C5030(v77, (__int64)&v118) )
            nd = (unsigned int)sub_1C2AD0((int *)v101.m128i_i64[0], *(int **)v102) == 0;
        }
        else
        {
          v101.m128i_i64[0] = (__int64)&v118;
        }
        cleanup_argloc();
LABEL_146:
        if ( nd && (unsigned __int8)sub_12B3B0((char *)a2, *(unsigned __int8 **)(a1 + 56), v26) )
          goto LABEL_140;
      }
LABEL_128:
      v68 = *(_QWORD *)(a1 + 56);
      if ( (*(_DWORD *)v68 == 4 || *(_DWORD *)v68 == 67 && *(_DWORD *)(v68 + 68) == *(_DWORD *)(v68 + 36))
        && *(_BYTE *)(v68 + 64) == 15
        && !(unsigned __int8)sub_1205A0((_BYTE *)v68, v10, 0)
        && (unsigned __int8)sub_1C3DC0(
                              *(int **)(*(_QWORD *)(a1 + 56) + 72LL),
                              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 68LL),
                              *(_QWORD *)(a2 + 8),
                              *(_DWORD *)(a2 + 4),
                              &v118) )
      {
        sub_123A40((__int64)v115, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL), v75, v76);
        if ( (LOBYTE(v115[0]) == 15 || (unsigned __int8)sub_1C9210((char *)v115, *(_QWORD *)(a1 + 8)))
          && (unsigned __int8)sub_126980((__int64)v115, (int)v119, *(_DWORD *)(a2 + 4), 0, *(double *)v26.m128i_i64) )
        {
          sub_11CA10((char *)a2, (char *)v115);
          ++*(_DWORD *)(a1 + 44);
          sub_11CDA0((__int64)v115);
          goto LABEL_65;
        }
        sub_11CDA0((__int64)v115);
      }
      if ( !(unsigned __int8)sub_1C3110(*(_QWORD *)(a2 + 8), 0, 0)
        || sub_173460(*(_QWORD *)(a1 + 56), a2, *(double *)v26.m128i_i64) )
      {
LABEL_74:
        if ( *(_BYTE *)(a1 + 352) )
        {
LABEL_53:
          v12 = -3;
LABEL_54:
          if ( v113 )
          {
            v114.m128i_i64[0] = 0;
            qfree(v113);
          }
          qfree(v112[0]);
          if ( src )
          {
            *(_QWORD *)&v111 = 0;
            qfree((__int64)src);
          }
          qfree((__int64)v109[0]);
          goto LABEL_26;
        }
        goto LABEL_65;
      }
LABEL_78:
      nb = (__m128i *)(a1 + 272);
      if ( !sub_122C30(a1 + 272, (__int64)v109) )
      {
        if ( !(unsigned __int8)sub_175960(a1, *(_QWORD *)(a1 + 56), a2, *(double *)v26.m128i_i64) )
        {
          v69 = *(_QWORD *)(a1 + 56);
          if ( *(_BYTE *)(v69 + 64) != 8 )
            goto LABEL_79;
          v70 = *(_QWORD *)(v69 + 72);
          if ( *(_DWORD *)(v70 + 284) != 5 )
            goto LABEL_79;
          v71 = *(_QWORD *)(v70 + 24);
          if ( *(_BYTE *)(v71 + 80) != 10 )
            goto LABEL_79;
          v72 = *(_DWORD *)(a2 + 4);
          v73 = *(_BYTE *)(a2 + 1) & 2;
          sub_125180((unsigned __int8 *)a2, *(unsigned __int8 **)(v71 + 88));
          *(_DWORD *)(a2 + 4) = v72;
          if ( v73 )
            *(_BYTE *)(a2 + 1) |= 2u;
          sub_175A70(*(_QWORD *)(a1 + 56));
        }
LABEL_140:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_65;
      }
LABEL_79:
      if ( *(_DWORD *)(a2 + 4) > v108 )
      {
        v45 = *(_QWORD *)(a1 + 56);
        if ( v108 <= *(_DWORD *)(v45 + 68)
          && !*(_BYTE *)(a1 + 354)
          && sub_1255D0((unsigned __int8 *)(v45 + 64), v10, a2, 1, *(double *)v26.m128i_i64) )
        {
          v79 = *(unsigned __int8 **)(a1 + 56);
          v118 = (__m128i)0xFFFFFFFF00000000LL;
          v101.m128i_i64[0] = (__int64)&v118;
          sub_1262E0((__int64)&v118, v79, *(double *)v26.m128i_i64);
          if ( v118.m128i_i8[0] == 4 )
          {
            v83 = v118.m128i_i64[1];
            if ( *(_BYTE *)(v118.m128i_i64[1] + 64) == 8 )
            {
              sub_F2BF0(*(_QWORD *)(v118.m128i_i64[1] + 72), *(double *)v26.m128i_i64);
              v80 = v118.m128i_i32[1];
              v81 = *(_DWORD *)(a2 + 4);
              if ( v118.m128i_i32[1] == v81 )
              {
LABEL_219:
                v83 = v118.m128i_i64[1];
                if ( v118.m128i_i8[0] == 4 )
                  goto LABEL_214;
LABEL_211:
                if ( sub_1255D0((unsigned __int8 *)v101.m128i_i64[0], v10, a2, 0, *(double *)v26.m128i_i64) )
                {
LABEL_212:
                  sub_11CDA0(v101.m128i_i64[0]);
                  goto LABEL_82;
                }
                sub_11CA10((char *)a2, (char *)v101.m128i_i64[0]);
                goto LABEL_215;
              }
            }
            else
            {
              v80 = v118.m128i_i32[1];
              v81 = *(_DWORD *)(a2 + 4);
              if ( v118.m128i_i32[1] == v81 )
                goto LABEL_214;
            }
          }
          else
          {
            v80 = v118.m128i_i32[1];
            v81 = *(_DWORD *)(a2 + 4);
            if ( v81 == v118.m128i_i32[1] )
              goto LABEL_211;
          }
          v82 = 10;
          if ( v81 > v80 )
            v82 = 9;
          sub_1207E0((char *)v101.m128i_i64[0], (unsigned __int64 *)v10, v82, *(_QWORD *)(v6 + 24), v81, v26);
          if ( v118.m128i_i8[0] != 4 )
            goto LABEL_211;
          v83 = v118.m128i_i64[1];
          if ( *(_DWORD *)v118.m128i_i64[1] != 9 )
          {
LABEL_214:
            if ( !(unsigned __int8)sub_175960(a1, v83, a2, *(double *)v26.m128i_i64) )
              goto LABEL_212;
LABEL_215:
            ++*(_DWORD *)(a1 + 44);
LABEL_216:
            sub_11CDA0(v101.m128i_i64[0]);
            goto LABEL_65;
          }
          if ( !sub_11CA80(*(_DWORD *)(v118.m128i_i64[1] + 36)) )
            goto LABEL_216;
          goto LABEL_219;
        }
      }
LABEL_82:
      ++*(_DWORD *)(a1 + 48);
      if ( (*(_BYTE *)a2 & 0xFB) == 1
        && *(_DWORD *)(*(_QWORD *)(a1 + 56) + 68LL) == *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL)
                                                                          + 130LL)
        && !*(_BYTE *)(a1 + 354)
        && (unsigned __int8)sub_176070(a1, v109, nb, v44) )
      {
        v12 = 1;
        goto LABEL_54;
      }
      if ( (unsigned int)(*(_DWORD *)v6 - 19) <= 1
        && (v46 = *(_QWORD *)(a1 + 56), (unsigned int)(*(_DWORD *)v46 - 56) <= 1) )
      {
        if ( *(_DWORD *)(v46 + 68) != v108 || v108 >= *(_DWORD *)(a2 + 4) )
          goto LABEL_65;
      }
      else
      {
        if ( !(unsigned __int8)sub_A2310(nb, v109) )
          goto LABEL_65;
        v46 = *(_QWORD *)(a1 + 56);
      }
      nc = *(_DWORD *)(a2 + 4);
      if ( nc >= *(_DWORD *)(v46 + 68) )
        goto LABEL_65;
      if ( *(_BYTE *)(v46 + 64) != 14 )
      {
        v102 = v46;
        v101.m128i_i64[0] = v46 + 64;
        if ( !sub_1255D0((unsigned __int8 *)a2, v10, v46 + 64, 1, *(double *)v26.m128i_i64) )
        {
          if ( !(unsigned __int8)sub_121BB0(v101.m128i_i64[0], (char *)a2, v115) )
            goto LABEL_65;
          v84 = *(_QWORD *)(v10 + 96);
          v85 = v102;
          if ( !*(_BYTE *)(v84 + 145) )
          {
LABEL_242:
            if ( !LODWORD(v115[0]) )
              goto LABEL_243;
            v93 = *(_DWORD *)(v85 + 68);
            if ( LODWORD(v115[0]) + *(_DWORD *)(a2 + 4) < v93 )
            {
              LODWORD(v102) = 10;
              nc = v93 - LODWORD(v115[0]);
              goto LABEL_233;
            }
            goto LABEL_238;
          }
          if ( *(_BYTE *)(v102 + 64) == 15 )
          {
            v89 = sub_1C3110(*(_QWORD *)(v102 + 72), 0, 0);
            v84 = *(_QWORD *)(v10 + 96);
            v85 = v102;
            if ( !v89 )
            {
              v90 = *(int *)(a2 + 4);
              v101.m128i_i64[0] = v102;
              v118.m128i_i64[0] = SLODWORD(v115[0]);
              v91 = sub_1C50C0(*(_QWORD *)(v102 + 72), v84, v118.m128i_i64, v90, *(int *)(v102 + 68));
              v85 = v101.m128i_i64[0];
              if ( !v91 || SLODWORD(v115[0]) != v118.m128i_i64[0] )
                goto LABEL_65;
              goto LABEL_242;
            }
          }
          v102 = v85;
          v86 = sub_11CC50((unsigned __int8 *)v101.m128i_i64[0], v84, v115[0], *(double *)v26.m128i_i64);
          v85 = v102;
          if ( !v86 )
            goto LABEL_242;
          v87 = LODWORD(v115[0]) + *(_DWORD *)(a2 + 4);
          if ( v87 != *(_DWORD *)(v102 + 68) )
          {
            if ( LODWORD(v115[0]) && v87 < *(_DWORD *)(v102 + 68) )
            {
              nc = LODWORD(v115[0]) + *(_DWORD *)(a2 + 4);
              LODWORD(v102) = 10;
LABEL_233:
              v101.m128i_i64[0] = v85;
              if ( !sub_11CA80(nc) )
              {
                v88 = sub_11CC50((unsigned __int8 *)a2, *(_QWORD *)(v10 + 96), 0, *(double *)v26.m128i_i64);
                nc = v115[0];
                if ( v88 )
                  nc = *(_DWORD *)(v101.m128i_i64[0] + 68) - (LODWORD(v115[0]) + *(_DWORD *)(a2 + 4));
                LODWORD(v102) = 10;
                v104 = 23;
                goto LABEL_101;
              }
              v104 = 11;
              goto LABEL_100;
            }
LABEL_238:
            LODWORD(v102) = 0;
            goto LABEL_233;
          }
        }
LABEL_243:
        v104 = 10;
        LODWORD(v102) = 0;
        goto LABEL_100;
      }
      v47 = *(_QWORD *)(v46 + 72);
      v101.m128i_i64[0] = v46;
      if ( nc > *(_DWORD *)(v47 + 4) )
        goto LABEL_65;
      if ( sub_1255D0((unsigned __int8 *)a2, v10, v47, 1, *(double *)v26.m128i_i64) )
        goto LABEL_243;
      v48 = *(_QWORD *)(v101.m128i_i64[0] + 72);
      if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(v48 + 20) )
        goto LABEL_95;
      if ( !sub_1255D0((unsigned __int8 *)a2, v10, v48 + 16, 1, *(double *)v26.m128i_i64) )
      {
        v48 = *(_QWORD *)(v101.m128i_i64[0] + 72);
LABEL_95:
        v102 = v48;
        v101.m128i_i64[0] = v48 + 16;
        if ( !(unsigned __int8)sub_121BB0(v48 + 16, (char *)a2, &v118) )
          goto LABEL_65;
        if ( !(sub_11CC50((unsigned __int8 *)v101.m128i_i64[0], *(_QWORD *)(v10 + 96), 0, *(double *)v26.m128i_i64)
             ? v118.m128i_i32[0] == 0
             : *(_DWORD *)(a2 + 4) + v118.m128i_i32[0] == *(_DWORD *)(v102 + 20)) )
          goto LABEL_65;
        v104 = 11;
        LODWORD(v102) = 0;
        goto LABEL_100;
      }
      v92 = *(_QWORD *)(v101.m128i_i64[0] + 72);
      LODWORD(v102) = 10;
      v104 = 11;
      nc = *(_DWORD *)(v92 + 20);
LABEL_100:
      if ( !*(_DWORD *)(a1 + 44) )
      {
        v78 = *(_QWORD *)(a1 + 56);
        if ( (*(_DWORD *)v78 != 4
           || !(unsigned __int8)sub_11FD80((char *)(v78 + 32), v118.m128i_i64, 0)
           || v118.m128i_i64[0])
          && *(_DWORD *)(a1 + 336) == 1
          && (unsigned __int8)sub_AB6D0(
                                *(__m128i **)(a1 + 328),
                                (unsigned int *)v6,
                                a2,
                                v104 == 11,
                                *(double *)v26.m128i_i64) )
        {
          *(_BYTE *)(a1 + 350) = 1;
          v12 = -1;
          goto LABEL_54;
        }
      }
LABEL_101:
      v50 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(a1 + 348) == 8 && 2 * nc == *(_DWORD *)(v50 + 68) )
        goto LABEL_110;
      v51 = *(_QWORD *)(a1 + 328);
      v101.m128i_i64[0] = *(_QWORD *)(a1 + 56);
      v52 = *(_QWORD *)(*(_QWORD *)(v51 + 64) + 1496LL);
      if ( sub_122600((unsigned int *)v101.m128i_i64[0]) )
        goto LABEL_65;
      v53 = (unsigned int *)v101.m128i_i64[0];
      v54 = *(_QWORD *)(v52 + 8);
      v101.m128i_i64[0] = *(int *)(v101.m128i_i64[0] + 68);
      v55 = v101.m128i_i32[0];
      if ( v101.m128i_i64[0] == *(_QWORD *)(v54 + 120) )
      {
LABEL_181:
        if ( sub_11CC20(*(_QWORD *)(v52 + 112), *v53, v55) )
          goto LABEL_108;
LABEL_65:
        v12 = 0;
        goto LABEL_54;
      }
      v106 = v53;
      v105 = (unsigned int *)v54;
      v56 = getinf();
      v58 = v105;
      v53 = v106;
      if ( v56 )
      {
        v105 = v106;
        LOBYTE(v59) = getinf();
        v53 = v105;
        v59 = (unsigned __int8)v59;
      }
      else
      {
        v59 = *((_QWORD *)v105 + 15);
      }
      if ( v101.m128i_i64[0] == v59 )
      {
        v55 = v53[17];
        goto LABEL_181;
      }
LABEL_108:
      v50 = *(_QWORD *)(a1 + 56);
      if ( (*(_DWORD *)v50 == 4 || *(_DWORD *)v50 == 67 && *(_DWORD *)(v50 + 36) == *(_DWORD *)(v50 + 68))
        && *(_BYTE *)(v50 + 32) == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v10 + 216LL))(
               v10,
               *(unsigned int *)(v50 + 40),
               v57,
               v58)
          && !(unsigned __int8)sub_13B090(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 328) + 64LL),
                                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 40LL),
                                 *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL)) )
        {
          v50 = *(_QWORD *)(a1 + 56);
          goto LABEL_110;
        }
        goto LABEL_65;
      }
LABEL_110:
      v60 = *(_QWORD *)(v50 + 24);
      v121 = 0;
      *((_QWORD *)&v120 + 1) = 0xFFFFFFFF00000000LL;
      v122[0] = 0xFFFFFFFF00000000LL;
      v123 = 0xFFFFFFFF00000000LL;
      v122[1] = 0;
      v124 = 0;
      v101.m128i_i64[0] = (__int64)&v118;
      sub_330970((__int64)&v118, v60);
      v61 = *(unsigned __int8 **)(a1 + 56);
      v118.m128i_i32[0] = v104;
      LOBYTE(v104) = BYTE9(v120);
      sub_1262E0((__int64)&v120 + 8, v61, *(double *)v26.m128i_i64);
      BYTE9(v120) |= v104 & 6;
      if ( BYTE8(v120) == 4 && *(_BYTE *)(v121 + 64) == 8 )
        sub_F2BF0(*(_QWORD *)(v121 + 72), *(double *)v26.m128i_i64);
      if ( v118.m128i_i32[0] == 23 )
      {
        if ( (unsigned __int8)nc > 0x1Fu )
        {
LABEL_178:
          v12 = 0;
LABEL_179:
          sub_7CCD0(v101.m128i_i64[0]);
          goto LABEL_54;
        }
        sub_120A10((__int64)v122, (unsigned __int64 *)v10, 8 * nc, 1, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 0);
        nc = HIDWORD(v120);
      }
      HIDWORD(v123) = nc;
      if ( v118.m128i_i32[0] == 10
        && (unsigned __int8)sub_12D880(v101.m128i_i64[0], (unsigned __int64 *)v10, 0, 0, nullptr, v26)
        && (v118.m128i_i32[0] == 4 || v118.m128i_i32[0] == 67 && HIDWORD(v120) == HIDWORD(v123))
        && sub_1255D0((unsigned __int8 *)&v120 + 8, v10, a2, 1, *(double *)v26.m128i_i64)
        || *(_BYTE *)(*(_QWORD *)(v10 + 96) + 145LL)
        && BYTE8(v120) == 4
        && (unsigned int)(*(_DWORD *)v121 - 56) <= 1
        && SHIDWORD(v120) > *(_DWORD *)(v10 + 80)
        && (*(_BYTE *)(v121 + 65) & 2) != 0
        || sub_122600(*(unsigned int **)(a1 + 56)) && !sub_11CC20(v10, v118.m128i_u32[0], SHIDWORD(v120)) )
      {
        goto LABEL_178;
      }
      if ( (_DWORD)v102 )
      {
        v62 = v101.m128i_i64[0];
        sub_12B6F0(v101.m128i_i64[0], (unsigned __int64 *)v10, 10, *(_DWORD *)(a2 + 4), 1, v26);
        if ( (unsigned __int8)sub_122910(v62, nullptr) )
        {
          if ( !sub_11CC20(v10, 0x17u, SHIDWORD(v120))
            && !(unsigned __int8)sub_12A970(
                                   v101.m128i_i64[0],
                                   (unsigned __int64 *)v10,
                                   v101.m128i_i64[0],
                                   *(double *)v26.m128i_i64) )
          {
            v12 = -3;
            if ( *(_BYTE *)(a1 + 352) )
              goto LABEL_179;
            goto LABEL_178;
          }
        }
      }
      v63 = *(_QWORD *)(a1 + 328);
      v64 = v101.m128i_i64[0];
      v65 = *(_QWORD *)(v63 + 64);
      v66 = *(_QWORD *)(*(_QWORD *)(v63 + 480) + 112LL);
      v115[0] = &off_4DDE18;
      memset(&v115[2], 0, 24);
      v116 = 0;
      v117 = v66;
      v115[1] = v65;
      if ( !(unsigned int)sub_11E900(v101.m128i_i64[0], (__int64)v115)
        && (unsigned __int8)sub_175960(a1, v64, a2, *(double *)v26.m128i_i64) )
      {
        *(_QWORD *)(a1 + 44) = _mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)(a1 + 44)),
                                 _mm_loadl_epi64((const __m128i *)&qword_424010)).m128i_u64[0];
      }
      sub_7CCD0(v101.m128i_i64[0]);
      sub_93B40(v112);
      sub_93B40((__int64 *)v109);
LABEL_10:
      v12 = 0;
LABEL_26:
      if ( v103 <= 1 )
      {
LABEL_27:
        v11 = *(_DWORD *)(a1 + 340) - 1;
LABEL_12:
        *(_DWORD *)(a1 + 340) = v11;
      }
      return (unsigned int)v12;
    case 8:
LABEL_17:
      na = *(_QWORD *)(a2 + 8);
      v101.m128i_i64[0] = *(_QWORD *)(na + 32);
      if ( v101.m128i_i64[0] )
      {
        v18 = 0;
        while ( 1 )
        {
          v20 = *(_DWORD *)(a1 + 44);
          *(_BYTE *)(a1 + 348) = 8;
          v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
                  a1,
                  80 * v18 + *(_QWORD *)(na + 24),
                  0,
                  0);
          if ( v12 || *(_BYTE *)(a1 + 349) )
            break;
          if ( *(_DWORD *)(a1 + 44) != v20 )
          {
            v19 = *(_QWORD *)(na + 24) + 80 * v18;
            if ( *(_QWORD *)(v19 + 16) == -1 )
              *(_QWORD *)(v19 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
          }
          if ( ++v18 == v101.m128i_i64[0] )
            goto LABEL_59;
        }
        if ( v101.m128i_i64[0] != v18 )
          goto LABEL_26;
LABEL_59:
        na = *(_QWORD *)(a2 + 8);
        goto LABEL_60;
      }
      v12 = 0;
LABEL_60:
      v29 = *(_QWORD *)(a1 + 328);
      v118 = 0u;
      v120 = 0;
      v119 = nullptr;
      v30 = *(_QWORD **)(v29 + 64);
      v101.m128i_i64[0] = (__int64)&v118;
      sub_11E5D0(na, v118.m128i_i64, v30, 0.0);
      v31 = *(_QWORD *)(a2 + 8);
      sub_64640(v118.m128i_i64, (__int64 *)(v31 + 96), v32, v33, v34, v35);
      sub_317C60((__int64 *)&v119, v31 + 112);
      sub_64280((__int64 *)(a1 + 152), v118.m128i_i64, 0.0);
      sub_316CB0((__int64 *)(a1 + 168), &v119, v36, v37);
      if ( v119 )
      {
        *(_QWORD *)&v120 = 0;
        qfree((__int64)v119);
      }
      qfree(v118.m128i_i64[0]);
      goto LABEL_26;
    case 0xA:
LABEL_13:
      v16 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)v16 != 1 )
        goto LABEL_10;
      v17 = *(_DWORD *)(v16 + 16);
      if ( v17 <= 0 || !(unsigned __int8)sub_64A60((_QWORD *)(a1 + 272), *(_DWORD *)(v16 + 8), v17) )
        goto LABEL_10;
      goto LABEL_35;
    case 0xE:
LABEL_28:
      if ( a4 )
        goto LABEL_10;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
              a1,
              *(_QWORD *)(a2 + 8),
              0,
              0);
      if ( v12 )
        goto LABEL_32;
      if ( *(_BYTE *)a2 != 14 )
        goto LABEL_10;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
              a1,
              *(_QWORD *)(a2 + 8) + 16LL,
              0,
              0);
LABEL_32:
      if ( v12 >= 0
        && *(_BYTE *)a2 == 14
        && !(unsigned __int8)sub_157240(*(_QWORD *)(a1 + 328), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + 16LL, a5) )
      {
LABEL_35:
        v12 = -3;
      }
      goto LABEL_26;
    default:
      v12 = 0;
      goto LABEL_12;
  }
}

