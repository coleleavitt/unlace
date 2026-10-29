__int64 __fastcall sub_181A60(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  _QWORD *v5; // r12
  char *j; // rbx
  bool v8; // zf
  _BYTE *k; // rax
  unsigned __int64 v10; // r15
  bool v11; // bl
  unsigned __int8 v12; // al
  _QWORD *v13; // rdx
  char *v14; // r13
  char *v15; // rcx
  int v16; // r8d
  char *v17; // rax
  int v18; // r8d
  char *v19; // rcx
  _BYTE *v20; // rax
  char v21; // dl
  char *i; // rax
  char *v23; // rcx
  int v24; // r8d
  int v25; // eax
  char *v27; // rax
  int v28; // edx
  char v29; // r14
  char *v30; // rcx
  char v31; // al
  char *v32; // r9
  unsigned __int8 *v33; // r14
  int v34; // r8d
  unsigned int v35; // edi
  char *v36; // r10
  unsigned __int8 v37; // al
  unsigned __int8 *n; // rbx
  unsigned __int8 v39; // di
  char v40; // al
  int v41; // eax
  char *v42; // rax
  int v43; // ecx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  int v49; // r14d
  __int64 v50; // r11
  unsigned int v51; // edi
  unsigned __int64 v52; // r15
  int v53; // eax
  char v54; // dl
  bool v55; // r13
  char v56; // r14
  __int64 v57; // rax
  char v58; // al
  bool v59; // cc
  char *v60; // rbx
  char m; // al
  __int64 v62; // r13
  __int64 v63; // r15
  unsigned __int64 v64; // r14
  char v65; // r15
  __int64 v66; // rbx
  unsigned __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rbx
  char v72; // r14
  unsigned __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // rax
  int v76; // ebx
  unsigned __int8 *v77; // rax
  unsigned __int8 v78; // al
  _BYTE *v79; // rax
  __int64 v80; // rax
  char v81; // bl
  unsigned __int8 v82; // bl
  char v83; // al
  unsigned int v84; // edi
  int v85; // eax
  unsigned __int64 v86; // rax
  unsigned __int8 *v87; // rbx
  char v88; // al
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rbx
  size_t v92; // rbx
  __int64 v93; // rax
  int v94; // eax
  int v95; // eax
  __int16 v96; // ax
  unsigned __int8 v97; // al
  char v98; // r14
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // edi
  char v102; // r14
  int v103; // eax
  char v104; // al
  int v105[2]; // [rsp+8h] [rbp-70h]
  int v106; // [rsp+8h] [rbp-70h]
  int cd; // [rsp+10h] [rbp-68h]
  int c; // [rsp+10h] [rbp-68h]
  int ca[2]; // [rsp+10h] [rbp-68h]
  unsigned __int8 *cb; // [rsp+10h] [rbp-68h]
  int cc[2]; // [rsp+10h] [rbp-68h]
  int v112; // [rsp+18h] [rbp-60h]
  char *v113; // [rsp+18h] [rbp-60h]
  int v114; // [rsp+18h] [rbp-60h]
  char *v115; // [rsp+18h] [rbp-60h]
  int v116; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v117; // [rsp+18h] [rbp-60h]
  char *v118; // [rsp+20h] [rbp-58h]
  char *v119; // [rsp+20h] [rbp-58h]
  unsigned __int64 v120; // [rsp+20h] [rbp-58h]
  unsigned __int64 v121; // [rsp+28h] [rbp-50h]
  char *v122; // [rsp+28h] [rbp-50h]
  unsigned __int8 v124; // [rsp+30h] [rbp-48h]
  __int64 v125; // [rsp+38h] [rbp-40h]

  v5 = (_QWORD *)a2;
  j = *(char **)(a1 + 8);
  v8 = *(_BYTE *)(a1 + 144) == 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = j;
  if ( v8 )
    goto LABEL_2;
  while ( 2 )
  {
    v21 = *j;
    for ( i = j + 1; ; ++i )
    {
      if ( v21 != 42 )
      {
        if ( !v21 )
          goto LABEL_70;
        goto LABEL_28;
      }
      *(_QWORD *)(a1 + 8) = i;
      v21 = *i;
      if ( *i == 47 )
        break;
      if ( v21 == 41 )
      {
        if ( (*(_BYTE *)(a1 + 652) & 2) != 0 )
          goto LABEL_34;
LABEL_45:
        ++i;
LABEL_28:
        *(_QWORD *)(a1 + 8) = i;
        v21 = *i;
        continue;
      }
    }
    if ( (*(_BYTE *)(a1 + 652) & 1) == 0 )
      goto LABEL_45;
LABEL_34:
    *(_BYTE *)(a1 + 144) = 0;
    for ( j = i + 1; ; j = *(char **)(a1 + 8) )
    {
      while ( 1 )
      {
LABEL_2:
        for ( k = j + 1; ; ++k )
        {
          *(_QWORD *)(a1 + 8) = k;
          v10 = (unsigned __int8)*(k - 1);
          v11 = (_BYTE)v10 == 9 || (_BYTE)v10 == 32;
          if ( !v11 && (unsigned __int8)(v10 - 10) > 3u )
            break;
        }
        if ( a4 )
          *a4 = *(_DWORD *)(a1 + 304);
        if ( !(_BYTE)v10 )
          goto LABEL_70;
        if ( (_BYTE)v10 != 47 )
          break;
        v14 = *(char **)(a1 + 8);
        if ( *v14 != 47 )
        {
          v15 = v14 - 1;
          v16 = 47;
          LODWORD(a2) = 47;
          goto LABEL_19;
        }
        if ( (*(_BYTE *)(a1 + 652) & 4) == 0 )
        {
          *(_QWORD *)(a1 + 24) = v14 - 1;
          if ( !isalpha(47) )
          {
            v23 = v14 - 1;
            v24 = 47;
            LODWORD(a2) = 47;
            goto LABEL_51;
          }
          goto LABEL_39;
        }
LABEL_70:
        if ( a3 == *(_QWORD *)(a1 + 64) )
        {
          v100 = *(_QWORD *)(a1 + 8);
          if ( !*(_BYTE *)(v100 - 1) )
            *(_QWORD *)(a1 + 8) = v100 - 1;
          *((_WORD *)v5 + 12) = 1;
          return 0;
        }
        sub_17D2A0(a1);
        j = *(char **)(a1 + 8);
      }
      if ( (_BYTE)v10 == 59 )
      {
        if ( (*(_BYTE *)(a1 + 652) & 8) == 0 )
        {
          v14 = *(char **)(a1 + 8);
          v16 = 59;
          LODWORD(a2) = 59;
          v15 = v14 - 1;
LABEL_19:
          *(_QWORD *)(a1 + 24) = v15;
          v112 = v16;
          *(_QWORD *)v105 = v15;
          if ( !isalpha((char)v10) )
          {
            v17 = strchr("?(),.[\\]`{};~@", a2);
            a2 = (unsigned int)a2;
            v18 = v112;
            v19 = *(char **)v105;
            if ( v17 )
            {
              *((_WORD *)v5 + 12) = (unsigned __int8)v10;
              goto LABEL_22;
            }
            goto LABEL_72;
          }
          goto LABEL_39;
        }
        goto LABEL_70;
      }
      v12 = v10 + 0x80;
      if ( (unsigned __int8)(v10 + 0x80) > 0x7Eu )
        break;
      if ( !*(_QWORD *)(a1 + 64) )
        goto LABEL_81;
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80));
      if ( (unsigned __int64)v12 < v13[1] )
      {
        j = *(char **)(*v13 + 24LL * v12);
        if ( j )
        {
          if ( *j )
          {
            a2 = 0;
            sub_17D1E0((__int64 *)a1, 0, nullptr);
            v41 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
            *(_QWORD *)a1 = j;
            *(_DWORD *)(a1 + 80) = v41;
            goto LABEL_2;
          }
        }
      }
LABEL_15:
      ;
    }
    v14 = *(char **)(a1 + 8);
    v23 = v14 - 1;
    *(_QWORD *)(a1 + 24) = v14 - 1;
    if ( (unsigned int)(char)v10 <= 0x7F )
    {
      if ( !isalpha((char)v10) )
      {
        v24 = (char)v10;
        v23 = v14 - 1;
        goto LABEL_37;
      }
      if ( (_BYTE)v10 != 76 )
      {
LABEL_39:
        a2 = 0;
        v25 = sub_1816A0((__m128i *)a1, 0, (__int64)v5);
        if ( !v25 )
          return 0;
        if ( v25 != 1 )
          return sub_18FA20(a1, 0);
        goto LABEL_15;
      }
      if ( *v14 != 34 )
      {
        if ( *v14 != 39 )
          goto LABEL_39;
        *(_QWORD *)(a1 + 8) = v14 + 1;
        *((_BYTE *)v5 + 40) = 1;
LABEL_153:
        v5[4] = 0;
        v76 = 0;
        *((_WORD *)v5 + 12) = 5;
        while ( 1 )
        {
          v77 = *(unsigned __int8 **)(a1 + 8);
          if ( *v77 == 39 )
            break;
          if ( !*v77 )
            return sub_18FA40(26);
          *(_QWORD *)(a1 + 8) = v77 + 1;
          v78 = *v77;
          if ( v78 == 92 )
            v78 = sub_18C620(a1 + 8, a2);
          ++v76;
          v5[4] = (v5[4] << 8) | v78;
          if ( v76 == 4 )
          {
            v79 = *(_BYTE **)(a1 + 8);
            if ( *v79 == 39 )
            {
              *(_QWORD *)(a1 + 8) = v79 + 1;
              return 0;
            }
            return sub_18FA40(26);
          }
        }
        if ( v76 )
        {
          ++*(_QWORD *)(a1 + 8);
          if ( v76 == 1 )
            v5[4] = *((char *)v5 + 32);
          return 0;
        }
        return sub_18FA40(26);
      }
      v11 = 1;
      *(_QWORD *)(a1 + 8) = v14 + 1;
LABEL_123:
      *((_BYTE *)v5 + 40) = v11;
      v59 = v5[2] <= 0x3FFu;
      *((_WORD *)v5 + 12) = 4;
      v5[1] = 0;
      if ( v59 )
      {
        a2 = *v5;
        *v5 = sub_1987B0(v5, *v5, 1024, 1);
      }
      v60 = *(char **)(a1 + 8);
      for ( m = *v60; *v60 != 34; m = *v60 )
      {
        if ( !m )
          return sub_18FA40(24);
        if ( m == 92 )
        {
          if ( (*(_BYTE *)(a1 + 356) & 0x10) != 0 )
          {
            if ( !v60[1] )
              return sub_18FA40(24);
            v62 = v5[1];
            if ( v62 )
            {
              v63 = v62 + 1;
              v64 = v62 + 2;
              --v62;
            }
            else
            {
              v64 = 3;
              v63 = 2;
            }
            a2 = *v5;
            if ( v5[2] < v64 )
            {
              v75 = sub_1987B0(v5, a2, v64, 1);
              *v5 = v75;
              a2 = v75;
            }
            v5[1] = v64;
            *(_BYTE *)(a2 + v63) = 0;
            *(_WORD *)(*v5 + v62) = *(_WORD *)v60;
            v60 = (char *)(*(_QWORD *)(a1 + 8) + 2LL);
            *(_QWORD *)(a1 + 8) = v60;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v60 + 1;
            v70 = sub_18C620(a1 + 8, a2);
            v71 = v5[1];
            v72 = v70;
            if ( v71 )
            {
              v73 = v71 + 1;
              v74 = v5[1];
              --v71;
            }
            else
            {
              v74 = 1;
              v73 = 2;
            }
            a2 = *v5;
            if ( v5[2] < v73 )
            {
              v80 = sub_1987B0(v5, a2, v73, 1);
              *v5 = v80;
              a2 = v80;
            }
            v5[1] = v73;
            *(_BYTE *)(a2 + v71) = v72;
            *(_BYTE *)(*v5 + v74) = 0;
            v60 = *(char **)(a1 + 8);
          }
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v60 + 1;
          v65 = *v60;
          v66 = v5[1];
          if ( v66 )
          {
            v67 = v66 + 1;
            v68 = v5[1];
            --v66;
          }
          else
          {
            v68 = 1;
            v67 = 2;
          }
          a2 = *v5;
          if ( v5[2] < v67 )
          {
            v69 = sub_1987B0(v5, a2, v67, 1);
            *v5 = v69;
            a2 = v69;
          }
          v5[1] = v67;
          *(_BYTE *)(a2 + v66) = v65;
          *(_BYTE *)(*v5 + v68) = 0;
          v60 = *(char **)(a1 + 8);
        }
      }
      *(_QWORD *)(a1 + 8) = v60 + 1;
      return 0;
    }
    v24 = -1;
LABEL_37:
    if ( (_BYTE)v10 == 95 || (_BYTE)v10 == 36 )
      goto LABEL_39;
    LODWORD(a2) = (unsigned __int8)v10;
LABEL_51:
    v113 = v23;
    cd = v24;
    v27 = strchr("?(),.[\\]`{};~@", a2);
    a2 = (unsigned int)a2;
    v18 = cd;
    v19 = v113;
    if ( v27 )
    {
      *((_WORD *)v5 + 12) = (unsigned __int8)v10;
      if ( (_BYTE)v10 == 46 )
      {
        v14 = *(char **)(a1 + 8);
        v28 = *(_DWORD *)(a1 + 356);
        v29 = *v14;
        if ( (v28 & 1) == 0 )
          goto LABEL_187;
        if ( (unsigned int)v29 > 0x7F )
          return 0;
        if ( (unsigned int)(v29 - 48) > 9
          || (v30 = v14 - 1, *(_QWORD *)a1 < (unsigned __int64)(v14 - 1))
          && (v114 = *(_DWORD *)(a1 + 356),
              v31 = sub_17D1A0(*(v14 - 2), (unsigned int)a2, v28),
              a2 = (unsigned int)a2,
              v30 = v14 - 1,
              v28 = v114,
              v31) )
        {
LABEL_187:
          if ( v29 == 46 && v14[1] == 46 )
          {
            *(_QWORD *)(a1 + 8) = v14 + 2;
            *((_WORD *)v5 + 12) = 11868;
          }
          return 0;
        }
        LOBYTE(v106) = v28;
        v32 = v30;
        v33 = (unsigned __int8 *)v30;
LABEL_59:
        v34 = 0;
        while ( 2 )
        {
          v35 = *v32;
          v36 = v32 + 1;
          v37 = *v32;
          if ( v35 <= 0x7F )
          {
            if ( v35 - 48 <= 9 )
            {
LABEL_185:
              v32 = v36;
              continue;
            }
            if ( v37 == 46 )
            {
              if ( v34 )
                goto LABEL_64;
              v34 = 1;
              goto LABEL_185;
            }
          }
          break;
        }
        v122 = v30;
        v119 = v32;
        v116 = v34;
        *(_QWORD *)ca = v32 + 1;
        v83 = toupper(v37);
        a2 = (unsigned int)a2;
        v30 = v122;
        if ( v83 != 69 )
        {
          if ( !v116 )
          {
            v32 = v122;
            goto LABEL_100;
          }
          if ( v83 == 76 || v83 == 70 )
          {
            v84 = v119[1];
            if ( v84 <= 0x7F )
            {
              v85 = isalnum(v84);
              v30 = v122;
              if ( v85
                || (unsigned __int8)(v84 - 36) <= 0x3Bu
                && (v86 = 0xF7FFFFFFFFFFFBFELL, !_bittest64((const __int64 *)&v86, v84 - 36)) )
              {
LABEL_64:
                for ( n = (unsigned __int8 *)v30; ; v33 = n )
                {
                  *(_QWORD *)(a1 + 8) = v33;
                  v39 = *n++;
                  v40 = sub_17D1A0(v39, a2, v28);
                  if ( v39 != 46 && !v40 )
                    break;
                }
                return sub_18FA40(21);
              }
            }
          }
          *(_QWORD *)(a1 + 8) = v30;
          a2 = (__int64)(v5 + 6);
          v46 = 22;
          if ( (unsigned int)sub_192280(a1 + 8, v5 + 6) != 1 )
            return sub_18FA40(v46);
          *((_WORD *)v5 + 12) = 7;
          v87 = *(unsigned __int8 **)(a1 + 8);
          v52 = *v87;
          v88 = toupper(*v87);
          if ( v88 == 70 || v88 == 76 )
          {
            *(_QWORD *)(a1 + 8) = v87 + 1;
            v52 = v87[1];
          }
LABEL_199:
          if ( (*(_BYTE *)(a1 + 356) & 2) != 0 )
          {
            if ( (unsigned __int8)sub_17D1A0(v52, a2, v89) )
              return sub_18FA40(23);
            if ( (unsigned __int8)v52 <= 0x2Eu )
            {
              v90 = 0x408400000000LL;
              if ( _bittest64(&v90, v52) )
                return sub_18FA40(23);
            }
          }
          v91 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 40) = 0;
          v92 = v91 - (_QWORD)v33;
          if ( *(_QWORD *)(a1 + 48) < v92 + 1 )
            *(_QWORD *)(a1 + 32) = sub_1987B0(a1 + 32, *(_QWORD *)(a1 + 32), v92 + 1, 1);
          v93 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 40) = v92 + 1;
          *(_BYTE *)(v93 + v92) = 0;
          memmove(*(void **)(a1 + 32), v33, v92);
          return 0;
        }
        if ( (v116 & 2) != 0 )
          goto LABEL_64;
        v34 = v116 | 2;
        v36 = *(char **)ca;
        if ( ((v119[1] - 43) & 0xFD) == 0 )
          v36 = v119 + 2;
        goto LABEL_185;
      }
LABEL_22:
      if ( (_BYTE)v10 != 40 )
        return 0;
      v20 = *(_BYTE **)(a1 + 8);
      if ( *v20 != 42 || (*(_BYTE *)(a1 + 652) & 2) == 0 )
        return 0;
LABEL_25:
      j = v20 + 1;
      *(_BYTE *)(a1 + 144) = 1;
      *(_QWORD *)(a1 + 8) = v20 + 1;
      *(_QWORD *)(a1 + 16) = v20 + 1;
      *(_QWORD *)(a1 + 24) = 0;
      continue;
    }
    break;
  }
LABEL_72:
  v115 = v19;
  c = v18;
  v42 = strchr("!%&*+-/<=>^|:", a2);
  a2 = (unsigned int)a2;
  v30 = v115;
  if ( v42 )
  {
    *((_WORD *)v5 + 12) = (unsigned __int8)v10;
    v20 = *(_BYTE **)(a1 + 8);
    v43 = (char)*v20;
    if ( *v20 == 61 )
    {
      *((_WORD *)v5 + 12) = ((unsigned __int8)v10 << 8) + 61;
      ++*(_QWORD *)(a1 + 8);
      return 0;
    }
    if ( (char)v10 > 60 )
    {
      if ( (_BYTE)v10 != 62 )
      {
        if ( (_BYTE)v10 == 124 && (_DWORD)a2 == v43 )
        {
          *((_WORD *)v5 + 12) = 257 * (unsigned __int8)v10;
          ++*(_QWORD *)(a1 + 8);
        }
        return 0;
      }
      if ( (_DWORD)a2 == v43 )
      {
        *((_WORD *)v5 + 12) = 257 * (unsigned __int8)v10;
        v47 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v47 + 1;
        goto LABEL_93;
      }
    }
    else
    {
      if ( (char)v10 <= 37 )
        return 0;
      v44 = 0x1400284000000000LL;
      if ( !_bittest64(&v44, v10) )
      {
        if ( (_BYTE)v10 != 47 || (_BYTE)v43 != 42 || (*(_BYTE *)(a1 + 652) & 1) == 0 )
          return 0;
        goto LABEL_25;
      }
      if ( (_DWORD)a2 != (char)v43 )
      {
        if ( (_BYTE)v10 == 45 && (_BYTE)v43 == 62 )
        {
          *((_WORD *)v5 + 12) = 11582;
          ++*(_QWORD *)(a1 + 8);
        }
        return 0;
      }
      *((_WORD *)v5 + 12) = 257 * (unsigned __int8)v10;
      v47 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v47 + 1;
      if ( (v10 & 0xFD) == 0x3C )
      {
LABEL_93:
        if ( *(_BYTE *)(v47 + 1) == 61 )
        {
          *((_WORD *)v5 + 12) += 61;
          ++*(_QWORD *)(a1 + 8);
        }
      }
    }
    return 0;
  }
  if ( (unsigned int)(c - 48) > 9 )
  {
    if ( (_BYTE)v10 != 34 )
    {
      if ( (_BYTE)v10 != 39 )
      {
        if ( (_BYTE)v10 == 35 && *v14 < -1 )
        {
          if ( *(_QWORD *)(a1 + 64) )
          {
            *(_QWORD *)(a1 + 8) = v14 + 1;
            v81 = *v14;
            *((_WORD *)v5 + 12) = 4;
            v82 = v81 + 0x80;
            *((_BYTE *)v5 + 40) = 0;
            v59 = v5[2] <= 0x3FFu;
            v5[1] = 0;
            if ( v59 )
              *v5 = sub_1987B0(v5, *v5, 1024, 1);
            sub_17D530(a1, v5, v82, *(_DWORD *)(a1 + 80));
            return 0;
          }
          v45 = *v14;
        }
        else
        {
LABEL_81:
          v45 = (char)v10;
        }
        sub_18FA70(0, v45);
        v46 = 27;
        return sub_18FA40(v46);
      }
      goto LABEL_153;
    }
    goto LABEL_123;
  }
  v32 = v115;
  v106 = *(_DWORD *)(a1 + 356);
  if ( (v106 & 1) != 0 )
  {
    v33 = (unsigned __int8 *)v115;
    goto LABEL_59;
  }
LABEL_100:
  v48 = (int)a2 - 48;
  if ( (_BYTE)v10 != 48 )
  {
    v49 = 10;
LABEL_102:
    v50 = v49;
    while ( 1 )
    {
      v51 = *v14;
      v125 = v50;
      v52 = v51;
      if ( v51 > 0x7F )
        break;
      v121 = v48;
      v118 = v32;
      v53 = isxdigit(v51);
      v32 = v118;
      v48 = v121;
      a2 = (char)v51;
      v50 = v125;
      if ( !v53 )
        break;
      *(_QWORD *)(a1 + 8) = ++v14;
      if ( (unsigned __int8)v51 > 0x39u && v49 == 10
        || (unsigned __int8)v51 > 0x37u && v49 == 8
        || (unsigned __int8)v51 > 0x31u && v49 == 2 )
      {
        sub_18FA70(0, (char)v51);
        return sub_18FA40(20);
      }
      if ( (unsigned __int8)v51 > 0x39u )
      {
        if ( (unsigned __int8)v51 > 0x60u )
          a2 = (unsigned int)((char)v51 - 32);
        LOBYTE(v52) = a2 - 7;
      }
      v48 = (unsigned __int8)v52 - 48 + v125 * v121;
    }
    v54 = 1;
    v55 = v49 != 10;
    v56 = 0;
    while ( 1 )
    {
      while ( (v52 & 0xDF) == 0x55 )
      {
        v99 = *(_QWORD *)(a1 + 8);
        v55 = 1;
        *(_QWORD *)(a1 + 8) = v99 + 1;
        v54 = 0;
        v52 = *(unsigned __int8 *)(v99 + 1);
      }
      if ( (v52 & 0xDF) != 0x4C )
        break;
      if ( v56 )
        return sub_18FA40(23);
      v57 = *(_QWORD *)(a1 + 8);
      a2 = v57 + 1;
      *(_QWORD *)(a1 + 8) = v57 + 1;
      v52 = *(unsigned __int8 *)(v57 + 1);
      if ( (*(_BYTE *)(v57 + 1) & 0xDF) == 0x4C )
      {
        a2 = v57 + 2;
        v56 = 1;
        *(_QWORD *)(a1 + 8) = v57 + 2;
        v52 = *(unsigned __int8 *)(v57 + 2);
      }
    }
    v120 = v48;
    v124 = v54;
    v117 = (unsigned __int8 *)v32;
    cb = *(unsigned __int8 **)(a1 + 8);
    v94 = tolower(*cb);
    v89 = v124;
    if ( v94 == 105 )
    {
      v97 = cb[1];
      if ( v97 == 51 )
      {
        if ( cb[2] != 50 )
          goto LABEL_211;
        v98 = 1;
      }
      else
      {
        if ( v97 != 54 || cb[2] != 52 )
          goto LABEL_211;
        v98 = 0;
      }
      v56 = v98 ^ 1;
      *(_QWORD *)(a1 + 8) = cb + 3;
      v52 = cb[3];
    }
LABEL_211:
    if ( (v106 & 8) != 0 )
    {
      if ( v56 )
        goto LABEL_228;
      v56 = v124 & (v120 <= 0x7FFFFFFF);
      if ( v56 )
      {
        v56 = 0;
        v95 = -1;
        goto LABEL_216;
      }
      if ( v120 > 0xFFFFFFFF || (v95 = 1, !v55) )
      {
LABEL_228:
        v95 = -1;
        v56 = v124 & ((v120 & 0x8000000000000000LL) == 0LL);
        if ( !v56 )
        {
          v95 = v55;
          v56 = 1;
        }
      }
LABEL_216:
      v11 = v95 != -1;
    }
    *((_BYTE *)v5 + 40) = v11;
    if ( v56 )
    {
      v5[6] = v120;
      v96 = 8;
    }
    else
    {
      v5[4] = v120;
      v96 = 3;
    }
    *((_WORD *)v5 + 12) = v96;
    v33 = v117;
    goto LABEL_199;
  }
  v58 = *v14;
  if ( *v14 == 98 )
    goto LABEL_243;
  if ( v58 > 98 )
  {
    if ( v58 != 120 )
      goto LABEL_115;
    goto LABEL_240;
  }
  if ( v58 == 66 )
  {
LABEL_243:
    a2 = (__int64)(v14 + 1);
    *(_QWORD *)(a1 + 8) = v14 + 1;
    v104 = v14[1];
    if ( (unsigned __int8)(v104 - 48) <= 1u )
    {
      ++v14;
      v49 = 2;
      goto LABEL_102;
    }
    sub_18FA70(0, v104);
    return sub_18FA40(20);
  }
  else
  {
    if ( v58 != 88 )
    {
LABEL_115:
      v49 = 8;
      goto LABEL_102;
    }
LABEL_240:
    *(_QWORD *)(a1 + 8) = v14 + 1;
    v101 = v14[1];
    *(_QWORD *)cc = v32;
    v102 = v14[1];
    if ( v101 <= 0x7F )
    {
      v103 = isxdigit(v101);
      v32 = *(char **)cc;
      v48 = (int)a2 - 48;
      if ( v103 )
      {
        ++v14;
        v49 = 16;
        goto LABEL_102;
      }
    }
    sub_18FA70(0, v102);
    ++*(_QWORD *)(a1 + 8);
    return sub_18FA40(20);
  }
}
