__int64 __fastcall sub_AC9E0(__int128 a1, __int64 a2, char a3, unsigned __int8 *a4, int a5, __m128i a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r14d
  char *v8; // r13
  int *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // eax
  unsigned __int8 *v13; // rdx
  char v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned int v19; // r15d
  unsigned __int8 *v21; // r14
  unsigned __int8 *v22; // r15
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // al
  _QWORD *v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // r8
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // r8d
  int v37; // r9d
  unsigned __int64 *v38; // r15
  __m128i v39; // xmm0
  __int64 v40; // r15
  unsigned __int8 *v41; // rsi
  __int64 v42; // rax
  int v43; // r15d
  unsigned int v44; // eax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rsi
  unsigned __int8 *v50; // r15
  char v51; // al
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // r8d
  int v62; // r9d
  char *v63; // r15
  unsigned __int64 *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rdx
  char v67; // al
  unsigned __int8 *v68; // r14
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rax
  __int64 v72; // rdx
  _BYTE *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // r9d
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rsi
  int v81; // r8d
  int v82; // r9d
  int v83; // r8d
  int v84; // r9d
  int v85; // r13d
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r15
  __int64 v90; // r13
  int v91; // [rsp+0h] [rbp-1D0h]
  char *v92; // [rsp+0h] [rbp-1D0h]
  int n; // [rsp+8h] [rbp-1C8h]
  __int64 na; // [rsp+8h] [rbp-1C8h]
  int v95; // [rsp+10h] [rbp-1C0h]
  __int64 v96; // [rsp+10h] [rbp-1C0h]
  int v97; // [rsp+18h] [rbp-1B8h]
  char *v98; // [rsp+18h] [rbp-1B8h]
  __int64 v99; // [rsp+20h] [rbp-1B0h]
  char *v100; // [rsp+20h] [rbp-1B0h]
  char v101; // [rsp+28h] [rbp-1A8h]
  char v102; // [rsp+38h] [rbp-198h]
  __int64 v103; // [rsp+38h] [rbp-198h]
  __int64 v104; // [rsp+40h] [rbp-190h]
  int v105; // [rsp+48h] [rbp-188h]
  __int64 v106; // [rsp+48h] [rbp-188h]
  __int64 v109; // [rsp+58h] [rbp-178h]
  _QWORD *v110; // [rsp+58h] [rbp-178h]
  __int64 v111; // [rsp+58h] [rbp-178h]
  __m128i v112; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 *v113; // [rsp+70h] [rbp-160h]
  __int64 v114; // [rsp+78h] [rbp-158h]
  __int64 v115; // [rsp+88h] [rbp-148h] BYREF
  unsigned __int8 v116[4]; // [rsp+90h] [rbp-140h] BYREF
  int v117; // [rsp+94h] [rbp-13Ch]
  _BYTE v118[4]; // [rsp+A0h] [rbp-130h] BYREF
  int v119; // [rsp+A4h] [rbp-12Ch]
  _BYTE v120[16]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v121; // [rsp+C0h] [rbp-110h] BYREF
  __int128 v122; // [rsp+C8h] [rbp-108h]
  __int64 v123[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v124; // [rsp+F0h] [rbp-E0h] BYREF
  __int128 v125; // [rsp+F8h] [rbp-D8h]
  unsigned __int64 *v126[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v127; // [rsp+120h] [rbp-B0h]
  __int64 v128; // [rsp+128h] [rbp-A8h]
  unsigned __int64 *v129[2]; // [rsp+140h] [rbp-90h] BYREF
  void *src; // [rsp+150h] [rbp-80h] BYREF
  __m128i v131; // [rsp+158h] [rbp-78h]
  unsigned __int64 *v132; // [rsp+170h] [rbp-60h] BYREF
  __int64 v133; // [rsp+178h] [rbp-58h]
  unsigned __int64 *v134; // [rsp+180h] [rbp-50h] BYREF
  __m128i v135; // [rsp+188h] [rbp-48h] BYREF
  unsigned __int64 v136; // [rsp+198h] [rbp-38h]

  v6 = a2;
  v7 = **((_DWORD **)&a1 + 1);
  v114 = *((_QWORD *)&a1 + 1);
  v136 = __readfsqword(0x28u);
  v105 = *(_DWORD *)(a2 + 68);
  v113 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v7 <= 0xE )
  {
    if ( v7 > 1 )
    {
      switch ( v7 )
      {
        case 2u:
        case 3u:
        case 5u:
        case 6u:
        case 7u:
        case 0xCu:
        case 0xDu:
        case 0xEu:
          goto LABEL_4;
        case 4u:
          if ( *(_BYTE *)(a2 + 32) == 2 && *(_BYTE *)(v114 + 32) == 2 && v105 <= 7 )
          {
            sub_1571F0(a1, *(_QWORD *)(v114 + 8), v114 + 64, *(_QWORD *)(a2 + 8), a2 + 64, 1);
            v47 = 0;
            if ( (unsigned __int64)(8 * v105) <= 0x3F )
              v47 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL) << (8 * (unsigned __int8)v105);
            v48 = v114;
            *(__m128i *)(*(_QWORD *)(v114 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                            (__m128i)(*(_QWORD *)(*(_QWORD *)(v114 + 40) + 16LL) | v47),
                                                            (__m128i)(*(_QWORD *)(*(_QWORD *)(v114 + 40) + 16LL) | v47));
            *(_DWORD *)(v48 + 4) &= ~0x80u;
            *(_DWORD *)(v48 + 36) *= 2;
            sub_11D5A0(v6);
            return 1;
          }
          v8 = (char *)(a2 + 32);
          v50 = (unsigned __int8 *)(v114 + 32);
          v112.m128i_i64[0] = (__int64)&v132;
          if ( (unsigned __int8)sub_130BC0((const __m128i *)a1, v114, v114 + 32, a2, a2 + 32, 0) )
          {
            v68 = (unsigned __int8 *)(v114 + 64);
            sub_123A40((__int64)&v132, (unsigned __int8 *)(v114 + 64), v114, (__int64)&v132);
            if ( sub_131730(v113, (const __m128i *)a1, v114, v114 + 64, 2 * *(_DWORD *)(v114 + 68), 0, 0) )
            {
              *((_QWORD *)&a1 + 1) = v114;
              v19 = sub_132E20(a1, (__int64)v50, v6, v6 + 32, 8u);
              if ( (_BYTE)v19 )
              {
                sub_12AB50(v68, (__int64)v113, *(_DWORD *)(v114 + 68), 2);
                sub_A1280((int)v113, v114, *(_DWORD *)(v6 + 4));
                sub_11D5A0(v6);
              }
              else
              {
                sub_125180((__int64)v68, (unsigned __int8 *)v112.m128i_i64[0]);
              }
              sub_11CDA0(v112.m128i_i64[0]);
              return v19;
            }
            sub_11CDA0(v112.m128i_i64[0]);
          }
          if ( *(_DWORD *)(v114 + 68) != 4 )
            goto LABEL_13;
          v51 = *(_BYTE *)(v114 + 32);
          if ( v51 != 4 )
          {
            if ( (a3 & 0xA) != 2 )
              goto LABEL_13;
LABEL_96:
            if ( v51 == 2 )
              goto LABEL_13;
            goto LABEL_97;
          }
          v69 = *(_QWORD *)(v114 + 40);
          if ( *(_BYTE *)(v69 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v69 + 72) + 284LL) == 12 && *(_BYTE *)(v6 + 32) == 4 )
          {
            v71 = *(_QWORD *)(v6 + 40);
            if ( *(_BYTE *)(v71 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v71 + 72) + 284LL) == 12 )
            {
              if ( sub_131730(v113, (const __m128i *)a1, v114, v114 + 64, 8u, 0, 1u) )
              {
                v89 = v114;
                v90 = *(_QWORD *)(v114 + 40);
                sub_157210(
                  a1,
                  v6,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 72LL) + 24LL),
                  v114,
                  *(_QWORD *)(*(_QWORD *)(v90 + 72) + 24LL),
                  0);
                v132 = (unsigned __int64 *)(&qword_20 + 5);
                copy_tinfo_t();
                clear_tinfo_t();
                v132 = (unsigned __int64 *)(&qword_20 + 5);
                copy_tinfo_t();
                clear_tinfo_t();
                *(_DWORD *)(v90 + 68) = 8;
                sub_11D4A0(v90 + 32);
                v49 = (_QWORD *)v89;
                *(_DWORD *)(v89 + 36) *= 2;
LABEL_91:
                sub_A1280((int)v113, (__int64)v49, *(_DWORD *)(v6 + 4));
                sub_11D5A0(v6);
                return 1;
              }
              if ( (a3 & 0xA) != 2 || *(_DWORD *)(v114 + 68) != 4 )
                goto LABEL_13;
              v51 = *(_BYTE *)(v114 + 32);
              goto LABEL_96;
            }
          }
          if ( (a3 & 0xA) != 2 )
            goto LABEL_13;
LABEL_97:
          if ( sub_125B60(v50, v6 + 32, 0) )
            goto LABEL_13;
          if ( v114 )
          {
            if ( sub_122240(v6, *(_QWORD *)(v114 + 8), 0) )
            {
              v104 = v6;
              v54 = v114;
            }
            else
            {
              v54 = v6;
              v104 = v114;
            }
          }
          else
          {
            v104 = 0;
            v54 = v6;
          }
          a6.m128i_i64[0] = 0;
          v129[0] = nullptr;
          v129[1] = nullptr;
          src = nullptr;
          v132 = nullptr;
          v133 = 0;
          v134 = nullptr;
          v131 = 0;
          v135 = 0;
          sub_127FE0(a1, (__int64)v129, v54 + 64, 0, v52, v53, v91, n, v95, v97, v99);
          *((_QWORD *)&a1 + 1) = v112.m128i_i64[0];
          sub_123EA0(a1, v104 + 32, 1, 0xFFFF0000);
          if ( !(unsigned __int8)sub_64780(v129, v112.m128i_i64[0])
            && !(unsigned __int8)sub_318470((unsigned __int64 **)&src, (__int64)&v134) )
          {
            sub_1571F0(a1, v114, (__int64)v50, v6, v6 + 32, 0);
            sub_1571F0(a1, *(_QWORD *)(v114 + 8), v114 + 64, *(_QWORD *)(v6 + 8), v6 + 64, 1);
            sub_A1280((int)v113, v114, *(_DWORD *)(v6 + 4));
            sub_11D5A0(v6);
            if ( v134 )
            {
              v135.m128i_i64[0] = 0;
              qfree((__int64)v134);
            }
            qfree((__int64)v132);
            if ( src )
            {
              v131.m128i_i64[0] = 0;
              qfree((__int64)src);
            }
            qfree((__int64)v129[0]);
            return 1;
          }
          if ( v134 )
          {
            v135.m128i_i64[0] = 0;
            qfree((__int64)v134);
          }
          qfree((__int64)v132);
          if ( src )
          {
            v131.m128i_i64[0] = 0;
            qfree((__int64)src);
          }
          qfree((__int64)v129[0]);
          break;
        case 8u:
        case 9u:
          goto LABEL_76;
        case 0xAu:
          v8 = (char *)(a2 + 32);
          v112.m128i_i64[0] = (__int64)&v132;
          if ( !(unsigned __int8)sub_1301F0((const __m128i *)a1, a2, a2 + 32, v114, v114 + 32)
            || v6 && sub_122240(v114, *(_QWORD *)(v6 + 8), 0) && (unsigned __int8)sub_A9BE0(a1, v114, v6, v114) )
          {
            goto LABEL_13;
          }
          if ( !sub_131730(v113, (const __m128i *)a1, v114, v114 + 64, 2 * *(_DWORD *)(v114 + 68), 0, 1u) )
            goto LABEL_113;
          if ( *(_DWORD *)(v114 + 36) == *(_DWORD *)(v114 + 68) )
            v7 = 4;
          v49 = (_QWORD *)v114;
          *(_DWORD *)v114 = v7;
          *((_DWORD *)v49 + 1) = 0;
          goto LABEL_91;
        default:
          goto LABEL_69;
      }
      goto LABEL_13;
    }
LABEL_69:
    v8 = (char *)(v6 + 32);
    goto LABEL_16;
  }
  if ( v7 - 15 > 0x2D )
    goto LABEL_69;
  if ( ((1LL << v7) & 0x1300000001C78000LL) != 0 )
  {
LABEL_76:
    v8 = (char *)(a2 + 32);
    v112.m128i_i64[0] = (__int64)&v132;
    goto LABEL_13;
  }
  if ( ((1LL << v7) & 0x180000) != 0 )
  {
    if ( *(_DWORD *)(v114 + 36) == 8 && sub_11C8A0(v114, nullptr) )
      goto LABEL_69;
  }
  else if ( v7 != 21 )
  {
    goto LABEL_69;
  }
  v21 = (unsigned __int8 *)(v114 + 48);
  v22 = (unsigned __int8 *)(v114 + 32);
  if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a1 + 64), v114 + 32, (unsigned __int8 *)(v114 + 48), 0, 0, a5) )
  {
LABEL_4:
    v8 = (char *)(v6 + 32);
    goto LABEL_5;
  }
  v8 = (char *)(v6 + 32);
  v102 = sub_12CF30(*(_QWORD *)(a1 + 64), (__int64)v21, v22, 0, 0, v23);
  if ( !v102 )
  {
    sub_123A40((__int64)v123, v22, v24, v25);
    sub_123A40((__int64)v126, v21, v26, v27);
    *((_QWORD *)&a1 + 1) = v114;
    v28 = sub_132E20(a1, (__int64)v22, v6, v6 + 32, 4u);
    v29 = (_QWORD *)(v114 + 48);
    if ( !v28 )
    {
      *((_QWORD *)&a1 + 1) = v114;
      if ( !(unsigned __int8)sub_132E20(a1, (__int64)v21, v6, v6 + 32, 4u) )
      {
LABEL_143:
        sub_11CDA0((__int64)v126);
        sub_11CDA0((__int64)v123);
        goto LABEL_5;
      }
      v29 = (_QWORD *)(v114 + 32);
    }
    if ( *(_DWORD *)v114 == 20
      && ((v112.m128i_i64[0] = (__int64)v29,
           v70 = sub_11FD80((char *)(v6 + 32), &v132, 0),
           v29 = (_QWORD *)v112.m128i_i64[0],
           !v70)
       || v132) )
    {
      v101 = 1;
      if ( (a3 & 2) == 0 )
      {
        sub_11CA10((char *)v22, (char *)v123);
        sub_11CA10((char *)v21, (char *)v126);
        goto LABEL_143;
      }
    }
    else
    {
      v101 = 0;
    }
    v30 = *(_QWORD *)(v6 + 8);
    v112.m128i_i64[0] = (__int64)v29;
    sub_1571F0(a1, *(_QWORD *)(v114 + 8), v114 + 64, v30, v6 + 64, 1);
    sub_12AB50((unsigned __int8 *)v112.m128i_i64[0], (__int64)v113, *(_DWORD *)(v112.m128i_i64[0] + 4), 2);
    v31 = v112.m128i_i64[0];
    if ( v101 )
    {
      v32 = *(_QWORD *)(v114 + 24);
      v33 = *(_DWORD *)(v112.m128i_i64[0] + 4);
      v133 = 0;
      v132 = (unsigned __int64 *)0xFFFFFFFF00000000LL;
      v112.m128i_i64[0] = (__int64)&v132;
      v109 = v31;
      sub_120A10((__int64)&v132, (__int64)v113, -1, v33, v32, 0);
      sub_1571F0(a1, v114, v109, v114, (__int64)&v132, 0);
      sub_11CDA0((__int64)&v132);
    }
    else
    {
      sub_1207E0((char *)v112.m128i_i64[0], (__int64)v113, 9, *(_QWORD *)(v114 + 24), *(_DWORD *)(v114 + 68));
    }
    if ( v6 && sub_122240(v114, *(_QWORD *)(v6 + 8), 0) )
    {
      sub_124680((__int64)v129, a1, v114, 1u);
      v112.m128i_i64[0] = (__int64)&v132;
      sub_127A20((__int64)&v132, a1, v6, 0, v34, v35);
      if ( !(unsigned __int8)sub_64780(&v132, v129) )
        v102 = sub_318470(&v134, (__int64)&src) ^ 1;
      if ( v134 )
      {
        v135.m128i_i64[0] = 0;
        qfree((__int64)v134);
      }
      qfree((__int64)v132);
      if ( src )
      {
        v131.m128i_i64[0] = 0;
        qfree((__int64)src);
      }
      qfree((__int64)v129[0]);
    }
    else
    {
      v102 = 1;
    }
    sub_A1280((int)v113, v114, *(_DWORD *)(v6 + 4));
    sub_15BC70((unsigned int *)v114, v113, 0, 0, nullptr, nullptr, a6, 0);
    if ( v102 )
      sub_11D5A0(v6);
    sub_11CDA0((__int64)v126);
    sub_11CDA0((__int64)v123);
    return 1;
  }
LABEL_5:
  *((_QWORD *)&a1 + 1) = v8;
  v115 = v6;
  v9 = (int *)sub_129440(a1, (__int64)&v115, 0);
  v11 = (__int64)v9;
  if ( !v9 )
  {
LABEL_113:
    v112.m128i_i64[0] = (__int64)&v132;
    goto LABEL_13;
  }
  v12 = *v9;
  if ( v12 == 11 && *(_BYTE *)(v11 + 32) == 4 )
  {
    v11 = *(_QWORD *)(v11 + 40);
    v12 = *(_DWORD *)v11;
  }
  else if ( v115 != v6 )
  {
    v133 = 0;
    v13 = (unsigned __int8 *)(v11 + 64);
    v132 = (unsigned __int64 *)0xFFFFFFFF00000000LL;
    if ( *(_DWORD *)(v11 + 68) > 2 * *(_DWORD *)(v6 + 36) )
    {
      v112.m128i_i64[0] = (__int64)&v132;
      sub_125180((__int64)&v132, (unsigned __int8 *)(v11 + 64));
      v67 = sub_1272B0((unsigned __int64)&v132, (__int64)v113, 2 * *(_DWORD *)(v6 + 36), 0);
      v13 = (unsigned __int8 *)&v132;
      if ( !v67 )
      {
        sub_11CDA0(v112.m128i_i64[0]);
        return 0;
      }
    }
    else
    {
      v112.m128i_i64[0] = (__int64)&v132;
    }
    v14 = sub_129F00((__int64)v8, (__int64)v113, v13, v10);
    sub_11CDA0(v112.m128i_i64[0]);
    if ( !v14 )
      return 0;
    v12 = *(_DWORD *)v11;
  }
  v112.m128i_i64[0] = (__int64)&v132;
  if ( *(_DWORD *)v114 == v12 )
  {
    if ( (unsigned __int8)sub_1321C0((const __m128i *)a1, v114, v114 + 32, v115, v11 + 32) )
    {
      v19 = sub_1321C0((const __m128i *)a1, v114, v114 + 48, v115, v11 + 48);
      if ( (_BYTE)v19 )
      {
        sub_123A40((__int64)v116, (unsigned __int8 *)(v114 + 64), v55, v56);
        v92 = (char *)(v6 + 64);
        sub_1571F0(a1, *(_QWORD *)(v114 + 8), (__int64)v116, *(_QWORD *)(v6 + 8), v6 + 64, 5);
        v100 = v118;
        sub_123A40((__int64)v118, (unsigned __int8 *)(v11 + 32), v57, v58);
        v98 = v120;
        sub_123A40((__int64)v120, (unsigned __int8 *)(v11 + 48), v59, v60);
        if ( v117 != v119
          && (!(unsigned __int8)sub_1272B0((unsigned __int64)v118, (__int64)v113, v117, 0)
           || !(unsigned __int8)sub_1272B0((unsigned __int64)v120, (__int64)v113, v117, 0)) )
        {
          sub_11CDA0((__int64)v120);
          sub_11CDA0((__int64)v118);
          sub_11CDA0((__int64)v116);
          goto LABEL_113;
        }
        v121 = 0;
        v123[0] = 0;
        v123[1] = 0;
        v124 = 0;
        v122 = 0;
        v125 = 0;
        if ( v115 != v6 )
        {
          sub_127FE0(a1, (__int64)v123, (__int64)v116, 0, v61, v62, (int)v92, n, v95, (int)v120, (__int64)v118);
          sub_124680((__int64)v126, a1, v11, 1u);
          while ( 1 )
          {
            if ( (_QWORD)v122 )
              v72 = *(_QWORD *)(*(_QWORD *)(v121 + 8 * v122 - 8) + 8LL);
            else
              v72 = v115;
            v73 = (_BYTE *)sub_A9AA0(a1, v126, v72, v6, 1u);
            if ( !v73 )
            {
              sub_93B40((__int64 *)v126);
              goto LABEL_182;
            }
            v111 = (__int64)v73;
            if ( (unsigned __int8)sub_1205A0(v73, (__int64)v113, 0, v74, v75, v76) )
              break;
            sub_127A20((__int64)v129, a1, v111, 1, v77, v78);
            v106 = *(_QWORD *)(v6 + 8);
            v103 = *(_QWORD *)(v111 + 8);
            v112.m128i_i64[0] = (__int64)&v132;
            sub_64000((__int64 *)&v132, (__int64)v129, 0.0);
            v134 = nullptr;
            v135 = 0;
            if ( v131.m128i_i64[0] )
            {
              v96 = v131.m128i_i64[0];
              na = 16 * v131.m128i_i64[0];
              v134 = (unsigned __int64 *)qalloc_or_throw(
                                           16 * v131.m128i_i64[0],
                                           (__int64)v129,
                                           16 * v131.m128i_i64[0],
                                           v131.m128i_i64[0]);
              v135.m128i_i64[1] = v96;
              memcpy(v134, src, na);
              v135.m128i_i64[0] = v96;
            }
            v112.m128i_i64[0] = sub_A9D90(a1, (unsigned __int64 **)v112.m128i_i64[0], v103, v106, 1u);
            if ( v134 )
            {
              v135.m128i_i64[0] = 0;
              qfree((__int64)v134);
            }
            qfree((__int64)v132);
            if ( v112.m128i_i64[0] )
            {
              sub_93B40((__int64 *)v129);
              break;
            }
            v79 = v122;
            v80 = v121;
            if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
            {
              v121 = qvector_reserve((__int64)&v121, v121, v122 + 1, 8);
              v80 = v121;
              v79 = v122;
            }
            *(_QWORD *)(v80 + 8 * v79) = v111;
            *(_QWORD *)&v122 = v122 + 1;
            if ( src )
            {
              v131.m128i_i64[0] = 0;
              qfree((__int64)src);
            }
            qfree((__int64)v129[0]);
          }
          if ( v127 )
          {
            v128 = 0;
            qfree(v127);
          }
          qfree((__int64)v126[0]);
          goto LABEL_186;
        }
LABEL_182:
        if ( v114 && sub_122240(v6, *(_QWORD *)(v114 + 8), 0) )
        {
          v112.m128i_i64[0] = (__int64)&v132;
          sub_127A20((__int64)&v132, a1, v114, 1, v81, v82);
          if ( sub_A9D90(a1, &v132, *(_QWORD *)(v114 + 8), v6, 0) )
          {
            sub_93B40((__int64 *)&v132);
LABEL_186:
            v19 = 0;
LABEL_187:
            if ( v124 )
            {
              *(_QWORD *)&v125 = 0;
              qfree(v124);
            }
            qfree(v123[0]);
            if ( v121 )
            {
              *(_QWORD *)&v122 = 0;
              qfree(v121);
            }
            sub_11CDA0((__int64)v98);
            sub_11CDA0((__int64)v100);
            sub_11CDA0((__int64)v116);
            return v19;
          }
          sub_93B40((__int64 *)&v132);
        }
        sub_12AB50(v116, (__int64)v113, v117, 2);
        *(_DWORD *)v6 = *(_DWORD *)v11;
        sub_11CA10(v8, v100);
        sub_11CA10((char *)(v6 + 48), v98);
        sub_11CA10(v92, (char *)v116);
        sub_11D5A0(v114);
        if ( (_QWORD)v122 )
        {
          v85 = 0;
          v114 = 0;
          v112.m128i_i64[0] = (__int64)&v132;
          do
          {
            v113 = (unsigned __int64 *)(8 * v114);
            sub_127A20(v112.m128i_i64[0], a1, *(_QWORD *)(v121 + 8 * v114), 1, v83, v84);
            *((_QWORD *)&a1 + 1) = v123;
            if ( (unsigned __int8)sub_64820(v112.m128i_i64[0], v123)
              && (*((_QWORD *)&a1 + 1) = &v134, (unsigned __int8)sub_317F40(&v124, (__int64)&v134)) )
            {
              sub_11D5A0(*(_QWORD *)(v121 + 8 * v114));
            }
            else
            {
              v86 = (_QWORD *)j__qalloc_or_throw(80, *((__int64 *)&a1 + 1), v87, v88);
              v114 = (__int64)v86;
              *((_QWORD *)&a1 + 1) = *(_QWORD *)(*(unsigned __int64 *)((char *)v113 + v121) + 24);
              v86[4] = 0xFFFFFFFF00000000LL;
              v86[5] = 0;
              v86[6] = 0xFFFFFFFF00000000LL;
              v86[7] = 0;
              v86[8] = 0xFFFFFFFF00000000LL;
              v86[9] = 0;
              sub_330970((__int64)v86, *((__int64 *)&a1 + 1));
              sub_11D890(v114, *(unsigned __int64 *)((char *)v113 + v121));
              sub_A3160(a1, (_QWORD *)v114, v6, 0.0);
            }
            if ( v134 )
            {
              v135.m128i_i64[0] = 0;
              qfree((__int64)v134);
            }
            ++v85;
            qfree((__int64)v132);
            v114 = v85;
          }
          while ( v85 < (unsigned __int64)v122 );
        }
        goto LABEL_187;
      }
    }
  }
LABEL_13:
  if ( (unsigned __int8)sub_11FD80(v8, v112.m128i_i64[0], 0) && !v132 )
  {
    if ( *a4 != 5 )
    {
      sub_123A40((__int64)v126, a4, v15, v16);
      if ( (unsigned __int8)sub_131830((__int64)v126, v113, 0) )
      {
        if ( !v6 || !sub_122240(v114, *(_QWORD *)(v6 + 8), 0) )
        {
LABEL_56:
          *(_DWORD *)v6 = 9;
          sub_125180((__int64)v8, a4);
          sub_11CA10((char *)(v6 + 64), (char *)v126);
          v43 = (int)v113;
          sub_12AB50((unsigned __int8 *)(v6 + 64), (__int64)v113, *(_DWORD *)(v6 + 68), 2);
          sub_A1280(v43, v6, *(_DWORD *)(v114 + 4));
          sub_11CDA0((__int64)v126);
          return 1;
        }
        sub_127A20((__int64)v129, a1, v114, 1, v36, v37);
        if ( !(unsigned __int8)sub_64A60(v129, *(_DWORD *)(v6 + 72), v105) )
        {
          sub_124680(v112.m128i_i64[0], a1, v114, 1u);
          sub_648D0((__int64 *)v129, (const void **)v112.m128i_i64[0], *(double *)a6.m128i_i64);
          v38 = v134;
          v134 = nullptr;
          v39 = _mm_loadu_si128(&v135);
          v135 = 0;
          if ( src )
          {
            v112 = v39;
            v131.m128i_i64[0] = 0;
            qfree((__int64)src);
            src = v38;
            v131 = _mm_load_si128(&v112);
            if ( v134 )
            {
              v135.m128i_i64[0] = 0;
              qfree((__int64)v134);
            }
          }
          else
          {
            src = v38;
            v131 = v39;
          }
          qfree((__int64)v132);
          if ( !(unsigned __int8)sub_64A60(v129, *(_DWORD *)(v6 + 72), v105) && !sub_A9AA0(a1, v129, v6, v114, 1u) )
          {
            v40 = v114;
            v41 = (unsigned __int8 *)(v114 + 32);
            *(_DWORD *)v6 = *(_DWORD *)v114;
            sub_125180((__int64)v8, v41);
            sub_125180(v6 + 48, (unsigned __int8 *)(v40 + 48));
            sub_125180(v6 + 64, (unsigned __int8 *)(v40 + 64));
            sub_11CDA0(v40 + 48);
            if ( src )
            {
              v131.m128i_i64[0] = 0;
              qfree((__int64)src);
            }
            qfree((__int64)v129[0]);
            v42 = v114;
            v114 = v6;
            v8 = (char *)(v42 + 32);
            v6 = v42;
            goto LABEL_56;
          }
        }
        if ( src )
        {
          v131.m128i_i64[0] = 0;
          qfree((__int64)src);
        }
        qfree((__int64)v129[0]);
      }
      sub_11CDA0((__int64)v126);
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_12B890(v114, (__int64)v113, 9, (unsigned __int8 *)(v6 + 64), 2 * *(_DWORD *)(v114 + 68)) )
    {
      sub_A1280((int)v113, v114, *(_DWORD *)(v6 + 4));
      sub_11D5A0(v6);
      return 1;
    }
    return 0;
  }
  if ( *(_BYTE *)(v6 + 32) == 2
    && (a3 & 0xA) == 2
    && *(_DWORD *)v114 == 9
    && sub_131730(v113, (const __m128i *)a1, v114, v114 + 64, 2 * *(_DWORD *)(v114 + 68), 0, 1u) )
  {
    v63 = (char *)v114;
    v64 = v113;
    *(_DWORD *)v114 = 19;
    sub_1207E0(v63 + 32, (__int64)v64, 9, *((_QWORD *)v63 + 3), 2 * v105);
    v65 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(_DWORD *)(v6 + 36), 0) << (8 * (unsigned __int8)v105);
    v66 = 0;
    if ( (unsigned __int64)(8 * v105) < 0x40 )
      v66 = v65;
    sub_120A10((__int64)(v63 + 48), (__int64)v64, v66, 2 * v105, *(_QWORD *)(v6 + 24), 0);
    sub_A1280((int)v64, (__int64)v63, *(_DWORD *)(v6 + 4));
    sub_11D5A0(v6);
    return 1;
  }
LABEL_16:
  *((_QWORD *)&a1 + 1) = v8;
  v129[0] = (unsigned __int64 *)v6;
  v17 = sub_129440(a1, (__int64)v129, 0);
  v18 = v17;
  if ( !v17 )
    return 0;
  if ( !sub_125B60((unsigned __int8 *)(v17 + 64), (__int64)v8, 0) )
    return 0;
  if ( *(_DWORD *)v18 != 11 )
    return 0;
  LOBYTE(v44) = sub_132370((const __m128i *)a1, v114, v114, (__int64)v129[0], v18, 0);
  v19 = v44;
  if ( !(_BYTE)v44 )
    return 0;
  v112.m128i_i64[0] = (__int64)&v132;
  sub_124680((__int64)&v132, a1, v18, 1u);
  LOBYTE(v113) = 0;
  v45 = (_QWORD *)v18;
  while ( 1 )
  {
    v46 = (_QWORD *)sub_A9AA0(a1, (unsigned __int64 **)v112.m128i_i64[0], (__int64)v45, v114, 1u);
    if ( !v46 )
      break;
    if ( v46 == (_QWORD *)v114 )
    {
      v45 = (_QWORD *)v114;
    }
    else
    {
      if ( (_QWORD *)v18 != v46 )
      {
        v19 = 0;
        goto LABEL_64;
      }
      v45 = *(_QWORD **)(v18 + 8);
      LOBYTE(v113) = v19;
      if ( !v45 )
        break;
    }
  }
  sub_125180((__int64)v8, (unsigned __int8 *)(v18 + 32));
  v110 = (_QWORD *)(v114 + 64);
  sub_11CA10((char *)(v6 + 64), (char *)(v114 + 64));
  sub_1571F0(a1, *(_QWORD *)(v6 + 8), v6 + 64, *(_QWORD *)(v114 + 8), (__int64)v110, 1);
  sub_11D5A0(v114);
  if ( (_BYTE)v113 )
    sub_11D5A0(v18);
LABEL_64:
  if ( v134 )
  {
    v135.m128i_i64[0] = 0;
    qfree((__int64)v134);
  }
  qfree((__int64)v132);
  return v19;
}

