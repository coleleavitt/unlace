__int64 __fastcall sub_1E060(__int64 a1, char **a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  char *v7; // rax
  int v9; // eax
  char *v10; // rsi
  char *v11; // rdx
  char v12; // al
  unsigned __int64 v13; // rdx
  char v14; // cl
  bool v15; // r11
  __int64 v16; // r14
  _BYTE *v17; // rdi
  char v18; // al
  const char *v19; // r11
  char *v20; // rax
  const char *v21; // r15
  int v22; // r10d
  int v23; // r14d
  char *v24; // rbp
  int i; // r13d
  char v26; // al
  char *v27; // rbp
  char *v28; // rdi
  __int16 v29; // dx
  int v30; // eax
  char v31; // si
  int v32; // ecx
  char v33; // dl
  __int16 v34; // dx
  int v36; // r15d
  char *v37; // r8
  char v38; // bp
  char *v39; // r8
  const char *v40; // r15
  char v41; // dl
  int v42; // eax
  char v43; // r9
  __int64 v44; // rax
  int v45; // r11d
  __int64 v46; // rcx
  char v47; // cl
  __int64 v48; // rax
  __int16 v49; // dx
  __int64 v50; // rsi
  char v51; // cl
  __int64 v52; // rcx
  int v53; // edx
  int v54; // edx
  char v55; // cl
  char *v56; // rax
  char *v57; // rbp
  char *v58; // rax
  char v59; // r15
  __int64 v60; // rbp
  char *v61; // rbx
  int v62; // r8d
  char *v63; // rax
  bool v64; // r15
  unsigned __int64 v65; // rcx
  __int64 v66; // rdx
  char *v67; // rdi
  int v68; // esi
  int v69; // ecx
  bool v70; // al
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  char *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r11
  int v76; // eax
  __int64 v77; // rcx
  int v78; // edi
  int v79; // eax
  int v80; // edi
  __int16 v81; // ax
  __int64 v82; // rsi
  char v83; // si
  __int64 v84; // rsi
  char v85; // al
  char *v86; // rcx
  char v87; // al
  char v88; // al
  int v89; // eax
  __int16 v90; // ax
  char v91; // cl
  int v92; // ecx
  char v93; // cl
  char *v94; // rax
  char v95; // dl
  int v96; // eax
  char v97; // dl
  int v98; // edx
  int v99; // eax
  int v100; // eax
  char v101; // cl
  int v102; // edx
  char v103; // dl
  int v104; // eax
  int v105; // eax
  char v106; // si
  char v107; // dl
  int v108; // eax
  char v109; // dl
  int v111; // [rsp+18h] [rbp-90h]
  int v112; // [rsp+18h] [rbp-90h]
  int v113; // [rsp+1Ch] [rbp-8Ch]
  char *v114; // [rsp+28h] [rbp-80h]
  char **v115; // [rsp+30h] [rbp-78h]
  int v116; // [rsp+38h] [rbp-70h]
  int v117; // [rsp+3Ch] [rbp-6Ch]
  char *v119; // [rsp+48h] [rbp-60h]
  char *v120; // [rsp+50h] [rbp-58h] BYREF
  __int64 v121; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v122[9]; // [rsp+60h] [rbp-48h] BYREF

  v7 = *a2;
  v122[1] = __readfsqword(0x28u);
  v120 = v7;
  v9 = sub_1D960(&v120);
  v10 = v120;
  if ( v9 )
  {
    if ( *v120 == 58 )
    {
      v10 = v120 + 1;
      *(_BYTE *)(a5 + 48) = v9;
      v97 = byte_93351[v9];
      *(_BYTE *)(a5 + 19) |= 8u;
      v120 = v10;
      *(_BYTE *)(a5 + 47) = v97;
    }
    else
    {
      v10 = v120 - 2;
      v120 -= 2;
    }
  }
  if ( *v10 == 32 || *v10 == 9 )
  {
    v11 = v10 + 1;
    do
    {
      do
      {
        v12 = *v11;
        v10 = v11++;
      }
      while ( v12 == 32 );
    }
    while ( v12 == 9 );
    v120 = v10;
  }
  *a3 = 0;
  v13 = 0;
  v14 = *v10;
  v15 = 0;
  v16 = 65;
  v17 = a3;
  while ( 2 )
  {
    while ( 1 )
    {
      v18 = aBwdfqpt[v13];
      if ( v18 == v14 || v14 == ((unsigned __int8)v18 | 0x20) )
        break;
LABEL_11:
      if ( ++v13 == 7 )
        goto LABEL_20;
    }
    v19 = "BYTE";
    v20 = &v10[-(v13 < 2) + 1];
    if ( !_bittest64(&v16, v13) )
      v19 = "WORD";
    v21 = v19 + 4;
    while ( *v19 == *v20 || *v20 == (*v19 | 0x20) )
    {
      ++v19;
      ++v20;
      if ( v19 == v21 )
      {
        v15 = *v20 == 9 || *v20 == 32;
        if ( v15 )
        {
          v36 = 0;
          do
          {
            do
            {
              v37 = v20;
              v38 = *++v20;
              ++v36;
            }
            while ( v38 == 32 );
          }
          while ( v38 == 9 );
          if ( v36 )
          {
            v112 = v13;
            v39 = v37 + 4;
            v40 = "PTR";
            while ( *v40 == *v20 || *v20 == (*v40 | 0x20) )
            {
              ++v20;
              ++v40;
              if ( v20 == v39 )
              {
                v41 = *v20;
                v22 = v112;
                if ( *v20 != 32 )
                  goto LABEL_57;
                do
                {
                  do
                    v41 = *++v20;
                  while ( v41 == 32 );
LABEL_57:
                  ;
                }
                while ( v41 == 9 );
                v120 = v20;
                v10 = v20;
                *v17 = byte_93339[v112];
                if ( (*(_BYTE *)(a5 + 19) & 8) == 0 )
                {
                  v42 = sub_1D960(&v120);
                  v10 = v120;
                  if ( v42 )
                  {
                    if ( *v120 == 58 )
                    {
                      v10 = v120 + 1;
                      *(_BYTE *)(a5 + 48) = v42;
                      v120 = v10;
                      v109 = byte_93351[v42];
                      *(_BYTE *)(a5 + 19) = v43 | 8;
                      *(_BYTE *)(a5 + 47) = v109;
                    }
                    else
                    {
                      v10 = v120 - 2;
                      v120 -= 2;
                    }
                  }
                }
                goto LABEL_23;
              }
            }
          }
          goto LABEL_11;
        }
        break;
      }
    }
    ++v13;
    v15 = 1;
    if ( v13 != 7 )
      continue;
    break;
  }
LABEL_20:
  if ( v15 )
    v120 = v10;
  v22 = 7;
LABEL_23:
  *(_WORD *)(a5 + 44) &= 0x3C0u;
  v23 = 0;
  v117 = 0;
  v24 = v10;
  v113 = 0;
  v116 = 0;
  v119 = v10;
  v115 = a2;
  v111 = 0;
  for ( i = v22; ; i = v52 | *(unsigned __int8 *)(a5 + 48) )
  {
LABEL_24:
    v26 = *v24;
    if ( *v24 == 32 || v26 == 9 )
    {
      v27 = v24 + 1;
      do
      {
        do
        {
          v26 = *v27;
          v28 = v27++;
        }
        while ( v26 == 32 );
      }
      while ( v26 == 9 );
      v120 = v28;
    }
    else
    {
      v28 = v24;
    }
    if ( v26 == 44 || v26 == 0 )
      break;
    v44 = sub_1D7D0(v28, 91, 0);
    if ( !v44 )
    {
      v55 = v28[1];
      v56 = v28 + 1;
      v120 = v28 + 1;
      if ( v55 == 32 || v55 == 9 )
      {
        do
        {
          do
            v55 = *++v56;
          while ( v55 == 32 );
        }
        while ( v55 == 9 );
        v120 = v56;
      }
      if ( !v55 )
        return 0;
      v57 = v120;
      *(_WORD *)(a5 + 44) &= ~1u;
      v58 = v57;
      v59 = *v57;
      v60 = 0;
      v61 = v58;
      while ( 2 )
      {
        if ( ((v59 - 43) & 0xFD) != 0 )
        {
          v62 = sub_1D840(&v120);
          if ( !v62 )
          {
            v63 = v120;
            v64 = 0;
LABEL_108:
            v65 = (unsigned __int8)*v63;
            if ( (_BYTE)v65 == 9 || (_BYTE)v65 == 32 )
            {
              do
              {
                do
                  v65 = (unsigned __int8)*++v63;
                while ( (_BYTE)v65 == 32 );
              }
              while ( (_BYTE)v65 == 9 );
              v120 = v63;
            }
            if ( (unsigned __int8)v65 > 0x38u )
            {
              if ( v62 )
                return 0;
              if ( v60 )
                goto LABEL_133;
            }
            else
            {
              v66 = 0x116000000000000LL;
              if ( _bittest64(&v66, v65) )
              {
                v67 = v63 + 1;
                v68 = (char)v65 - 48;
                v120 = v63 + 1;
                if ( v62 )
                {
                  v69 = (unsigned __int8)v63[1];
                  v70 = (_BYTE)v69 == 9 || (_BYTE)v69 == 32;
LABEL_117:
                  if ( v70 )
                  {
                    do
                    {
                      do
                        v69 = (unsigned __int8)*++v67;
                      while ( (_BYTE)v69 == 32 );
                    }
                    while ( (_BYTE)v69 == 9 );
                    v120 = v67;
                  }
LABEL_121:
                  v71 = (unsigned int)(v69 - 43);
                  if ( (unsigned __int8)v71 <= 0x32u )
                  {
                    v72 = 0x4000000000005LL;
                    if ( _bittest64(&v72, v71) )
                    {
                      if ( v23 <= 1 )
                      {
                        v89 = v62 & 0xFF00;
                        if ( v89 == 256 )
                          goto LABEL_96;
                        if ( v89 == 1024 )
                        {
                          v90 = *(_WORD *)(a5 + 44);
                          v101 = *(_BYTE *)(a5 + 21);
                          if ( (v90 & 2) != 0 && (v101 & 1) == 0 )
                            goto LABEL_96;
                          *(_BYTE *)(a5 + 21) = v101 | 1;
                          v92 = (unsigned __int8)v62 + 1;
                        }
                        else
                        {
                          if ( v68 )
                            goto LABEL_96;
                          v90 = *(_WORD *)(a5 + 44);
                          v91 = *(_BYTE *)(a5 + 21);
                          if ( (v90 & 2) != 0 && (v91 & 1) != 0 )
                            goto LABEL_96;
                          *(_BYTE *)(a5 + 21) = v91 & 0xFE;
                          v92 = (unsigned __int8)v62 + 1;
                          if ( !byte_93348[v92] )
                            goto LABEL_96;
                        }
                        *(_WORD *)(a5 + 44) = v90 | 2;
                        if ( v68 | v111 )
                        {
                          if ( v113 )
                            goto LABEL_96;
                          v113 = v92;
                          v61 = v120;
                          v116 = v68;
                        }
                        else
                        {
                          v111 = v92;
                          v61 = v120;
                        }
                      }
                      else
                      {
                        v61 = v120;
                      }
LABEL_125:
                      v59 = *v61;
                      if ( *v61 == 93 )
                      {
                        *(_WORD *)(a5 + 44) |= 1u;
                        v24 = v61 + 1;
                        ++v117;
                        v120 = v61 + 1;
                        goto LABEL_24;
                      }
                      continue;
                    }
                  }
LABEL_133:
                  v67 = v120;
                }
                else
                {
                  v88 = v63[1];
                  if ( v88 == 32 || v88 == 9 )
                  {
                    do
                    {
                      do
                        v88 = *++v67;
                      while ( v88 == 32 );
                    }
                    while ( v88 == 9 );
                    v120 = v67;
                  }
                  if ( v88 == 42 )
                  {
                    if ( v64 )
                      goto LABEL_96;
                    v93 = v67[1];
                    v94 = v67 + 1;
                    v120 = v67 + 1;
                    if ( v93 == 9 || v93 == 32 )
                    {
                      do
                      {
                        do
                          v95 = *++v94;
                        while ( v95 == 32 );
                      }
                      while ( v95 == 9 );
                      v120 = v94;
                    }
                    v96 = sub_1D840(&v120);
                    v67 = v120;
                    LOWORD(v62) = v96;
                    if ( v96 )
                    {
                      v69 = (unsigned __int8)*v120;
                      v70 = (_BYTE)v69 == 9 || (_BYTE)v69 == 32;
                      goto LABEL_117;
                    }
                  }
                  else
                  {
                    v67 = v61;
                  }
                }
LABEL_134:
                v74 = sub_1D7D0(v67, 93, 43);
                v61 = &v67[v74];
                v60 = v74;
                v120 = &v67[v74];
                if ( v23 > 1 )
                {
                  v121 = v75;
                  v122[0] = (__int16)i;
                  v76 = sub_86990(a1, v67, (unsigned int)v74, 1, &v121, v122, *(_QWORD *)a5);
                  v77 = v122[0];
                  v60 = v76;
                  if ( (v76 & 1) == 0 )
                    return 0;
                  v78 = *(_DWORD *)(a5 + 8);
                  v79 = v121 + v78;
                  v80 = v78 - v121;
                  if ( v64 )
                    v79 = v80;
                  *(_DWORD *)(a5 + 8) = v79;
                  v81 = *(_WORD *)(a5 + 44);
                  *(_WORD *)(a5 + 44) = v81 | 4;
                  if ( v77 && i != v77 )
                  {
                    if ( v23 != 2 )
                      return 0;
                    v60 = (unsigned __int8)v77;
                    if ( (unsigned __int64)(unsigned __int8)v77 - 1 <= 5 )
                    {
                      v82 = *(unsigned __int8 *)(a5 + 48);
                      if ( (_BYTE)v82 && v82 != (unsigned __int8)v77 )
                        return 0;
                      *(_BYTE *)(a5 + 19) |= 8u;
                      v83 = byte_93351[(unsigned __int8)v77];
                      *(_BYTE *)(a5 + 48) = v77;
                      *(_BYTE *)(a5 + 47) = v83;
                    }
                    v84 = (unsigned __int16)v77 & 0xFF00;
                    if ( (v77 & 0xFE00) == 0x200 )
                    {
                      if ( v111 )
                      {
                        if ( v113 )
                          goto LABEL_96;
                        v116 = 0;
                        v113 = v111;
                      }
                      *(_WORD *)(a5 + 44) = v81 | 6;
                      v111 = (v84 != 512) + 5;
                    }
                    v23 = 3;
                    i = v84 | *(unsigned __int8 *)(a5 + 48);
                  }
                }
                else
                {
                  v23 = 1;
                }
                goto LABEL_125;
              }
              if ( v62 )
                return 0;
              if ( v60 )
                goto LABEL_133;
              if ( !(_BYTE)v65 )
                return 0;
            }
            v67 = v63 + 1;
            goto LABEL_134;
          }
        }
        else
        {
          v85 = v61[1];
          v86 = v61 + 1;
          v120 = v61 + 1;
          if ( v85 == 9 || v85 == 32 )
          {
            do
            {
              do
                v87 = *++v86;
              while ( v87 == 32 );
            }
            while ( v87 == 9 );
            v120 = v86;
          }
          v114 = v86;
          v62 = sub_1D840(&v120);
          if ( !v62 )
          {
            v63 = v120;
            v61 = v114;
            v64 = v59 == 45;
            goto LABEL_108;
          }
          if ( v59 == 45 )
            goto LABEL_96;
          v61 = v114;
        }
        break;
      }
      v73 = v120;
      v69 = (unsigned __int8)*v120;
      v64 = (_BYTE)v69 == 9 || (_BYTE)v69 == 32;
      if ( v64 )
      {
        do
          v69 = (unsigned __int8)*++v73;
        while ( (_BYTE)v69 == 9 || (_BYTE)v69 == 32 );
        v120 = v73;
        v64 = 0;
        v68 = 0;
        if ( (_BYTE)v69 != 42 )
          goto LABEL_121;
      }
      else if ( (_BYTE)v69 != 42 )
      {
        v68 = 0;
        goto LABEL_121;
      }
      v63 = v73 + 1;
      v64 = 0;
      v120 = v63;
      goto LABEL_108;
    }
    v24 = &v28[v44];
    v120 = &v28[v44];
    if ( v23 <= 1 )
    {
      v23 = 1;
      goto LABEL_24;
    }
    v46 = 9;
    if ( !v117 )
      v46 = (unsigned int)(*v24 != 91) + 9;
    v122[0] = (__int16)i;
    v121 = v45;
    v47 = sub_86990(a1, v28, (unsigned int)v44, v46, &v121, v122, *(_QWORD *)a5);
    v48 = v122[0];
    if ( (v47 & 1) == 0 )
      return 0;
    *(_DWORD *)(a5 + 8) += v121;
    v49 = *(_WORD *)(a5 + 44);
    *(_WORD *)(a5 + 44) = v49 | 5;
    if ( !v48 || i == v48 )
      goto LABEL_24;
    if ( v23 != 2 )
      return 0;
    if ( (unsigned __int64)(unsigned __int8)v48 - 1 <= 5 )
    {
      v50 = *(unsigned __int8 *)(a5 + 48);
      if ( (_BYTE)v50 && v50 != (unsigned __int8)v48 )
        return 0;
      *(_BYTE *)(a5 + 19) |= 8u;
      v51 = byte_93351[(unsigned __int8)v48];
      *(_BYTE *)(a5 + 48) = v48;
      *(_BYTE *)(a5 + 47) = v51;
    }
    v52 = (unsigned __int16)v48 & 0xFF00;
    if ( (v48 & 0xFE00) == 0x200 )
    {
      if ( v111 )
      {
        if ( v113 )
          goto LABEL_96;
        v116 = 0;
        v113 = v111;
      }
      *(_WORD *)(a5 + 44) = v49 | 7;
      v111 = (v52 != 512) + 5;
    }
    v23 = 3;
  }
  v29 = *(_WORD *)(a5 + 44);
  if ( (v29 & 1) != 0 )
  {
    if ( v23 != 1 )
    {
      v30 = *(_DWORD *)(a5 + 8);
      if ( v30 )
      {
        if ( (unsigned int)(v30 - 256) <= 0xFEFF )
        {
          if ( v30 != (__int16)v30 )
          {
LABEL_36:
            if ( (v29 & 2) == 0 )
            {
              v31 = *(_BYTE *)(a5 + 18);
              if ( (*(_BYTE *)(a5 + 46) & 1) == 0 )
              {
                *(_BYTE *)(a5 + 21) |= 1u;
                LOBYTE(v32) = 5;
                v33 = 16;
                v30 = 4;
                goto LABEL_39;
              }
LABEL_220:
              LOBYTE(v32) = 5;
LABEL_221:
              v33 = 16;
              v30 = 4;
              goto LABEL_39;
            }
            if ( (*(_BYTE *)(a5 + 21) & 1) != 0 )
            {
              if ( v113 )
              {
LABEL_93:
                v30 = 4;
                goto LABEL_94;
              }
              v31 = *(_BYTE *)(a5 + 18);
              LOBYTE(v32) = (v111 - 1) | 0x80;
              if ( v111 != 5 )
                goto LABEL_221;
LABEL_255:
              *(_BYTE *)(a5 + 20) = 36;
              v31 |= 2u;
              LOBYTE(v32) = -124;
              goto LABEL_221;
            }
            goto LABEL_203;
          }
          if ( (v29 & 2) != 0 )
          {
            if ( (*(_BYTE *)(a5 + 21) & 1) == 0 )
            {
LABEL_203:
              v30 = 2;
              goto LABEL_204;
            }
            goto LABEL_229;
          }
LABEL_209:
          v31 = *(_BYTE *)(a5 + 18);
          if ( (*(_BYTE *)(a5 + 46) & 1) == 0 )
          {
            LOBYTE(v32) = 6;
            v33 = 8;
            v30 = 2;
            goto LABEL_39;
          }
          goto LABEL_220;
        }
        if ( v30 != (__int16)v30 )
          goto LABEL_36;
        if ( (v29 & 0x100) != 0 || (v29 & 4) == 0 )
        {
          if ( (v29 & 2) != 0 )
          {
            v30 = 1;
            if ( (*(_BYTE *)(a5 + 21) & 1) == 0 )
            {
LABEL_204:
              if ( (unsigned __int64)v111 > 8
                || (unsigned __int64)v113 > 8
                || (v98 = byte_93320[5 * byte_93348[v113] + byte_93348[v111]], v98 == 255) )
              {
LABEL_96:
                *(_DWORD *)(a5 + 24) = -11;
                return 0;
              }
              v31 = *(_BYTE *)(a5 + 18);
              v32 = v98 | (v30 << 6);
              if ( v32 == 6 )
              {
                LOBYTE(v32) = 70;
                v33 = 4;
                v30 = 1;
LABEL_39:
                *(_BYTE *)(a5 + 18) = v31 | v33 | 1;
                *a4 |= v32;
                *v115 = v28;
                v34 = *(_WORD *)(a5 + 44);
                if ( (v34 & 0x100) == 0 && (v34 & 4) != 0 && v30 <= 1 )
                  *(_WORD *)(a5 + 42) = *(_WORD *)(a5 + 42) + v30 - 3;
                *(_WORD *)(a5 + 44) = v34 | 8;
                return 1;
              }
LABEL_208:
              v33 = 4 * v30;
              goto LABEL_39;
            }
            if ( v113 )
            {
              v30 = 1;
              goto LABEL_94;
            }
            v31 = *(_BYTE *)(a5 + 18);
            if ( v111 != 5 )
            {
              v30 = 1;
              LOBYTE(v32) = (v111 - 1) | 0x40;
              goto LABEL_208;
            }
            v31 |= 2u;
            v30 = 1;
LABEL_90:
            *(_BYTE *)(a5 + 20) = 36;
            goto LABEL_253;
          }
          goto LABEL_209;
        }
        v30 = 1;
      }
      else if ( (v29 & 0x100) != 0 || (v29 & 4) == 0 )
      {
        if ( (v29 & 2) != 0 )
        {
          if ( (*(_BYTE *)(a5 + 21) & 1) == 0 )
            goto LABEL_204;
          if ( v113 )
            goto LABEL_94;
          v31 = *(_BYTE *)(a5 + 18);
          v54 = v111 - 1;
          v30 = 0;
          if ( v111 == 5 )
            goto LABEL_89;
          goto LABEL_195;
        }
        goto LABEL_209;
      }
      if ( (v29 & 2) != 0 )
      {
        v53 = v30 + (*(_WORD *)(a5 + 40) & 3);
        v30 = 2;
        if ( v53 <= 2 )
          v30 = v53;
        if ( (*(_BYTE *)(a5 + 21) & 1) == 0 )
          goto LABEL_204;
        if ( v53 <= 1 )
        {
          if ( v113 )
          {
LABEL_94:
            if ( v113 == 5 )
            {
              if ( !v116 && v111 != 5 )
              {
                v116 = 1;
                v103 = (8 * v111 - 8) | 4;
                v31 = *(_BYTE *)(a5 + 18) | 2;
                goto LABEL_251;
              }
              goto LABEL_96;
            }
            v106 = *(_BYTE *)(a5 + 18);
            v107 = 8 * v113 - 8;
            if ( v111 - 1 < 0 )
            {
              LOBYTE(v108) = -64;
              if ( v116 != 8 )
                v108 = (v116 / 2) << 6;
              *(_BYTE *)(a5 + 18) = v106 | 0x13;
              *(_BYTE *)(a5 + 20) = v107 | v108 | 5;
              *a4 |= 4u;
              *(_WORD *)(a5 + 44) |= 8u;
              *v115 = v28;
              return 1;
            }
            v31 = v106 | 2;
            v103 = (v111 - 1) | v107;
            if ( v111 != 6 || v30 )
            {
              LOBYTE(v32) = -64;
              if ( v116 == 8 )
              {
LABEL_252:
                *(_BYTE *)(a5 + 18) = v31;
                *(_BYTE *)(a5 + 20) = v103 | v32;
                LOBYTE(v32) = -124;
                if ( v30 == 4 )
                  goto LABEL_221;
                goto LABEL_253;
              }
LABEL_251:
              v32 = (v116 / 2) << 6;
              goto LABEL_252;
            }
            if ( v116 == 8 )
              *(_BYTE *)(a5 + 20) = v103 | 0xC0;
            else
              *(_BYTE *)(a5 + 20) = v103 | ((unsigned __int8)(v116 / 2) << 6);
            v30 = 1;
LABEL_253:
            v33 = 4 * v30;
            LOBYTE(v32) = ((_BYTE)v30 << 6) | 4;
            goto LABEL_39;
          }
          v31 = *(_BYTE *)(a5 + 18);
          v54 = v111 - 1;
          if ( v111 == 5 )
          {
LABEL_89:
            v31 |= 2u;
            goto LABEL_90;
          }
LABEL_195:
          v32 = v54 | (v30 << 6);
          if ( v32 == 5 )
          {
            LOBYTE(v32) = 69;
            v33 = 4;
            v30 = 1;
            goto LABEL_39;
          }
          goto LABEL_208;
        }
LABEL_229:
        if ( v113 )
          goto LABEL_93;
        v31 = *(_BYTE *)(a5 + 18);
        if ( v111 != 5 )
        {
          LOBYTE(v32) = (v111 - 1) | 0x80;
          goto LABEL_221;
        }
        goto LABEL_255;
      }
      goto LABEL_209;
    }
    v120 = v119;
    if ( (v29 & 2) != 0 )
    {
      if ( !v113 )
      {
        v100 = 0;
        if ( !v111 )
          goto LABEL_219;
        goto LABEL_238;
      }
      if ( (*(_BYTE *)(a5 + 21) & 1) == 0 )
      {
        if ( v113 == 6 )
        {
          v104 = v111;
          v111 = 6;
          v113 = v104;
          v100 = 768;
          goto LABEL_219;
        }
        if ( !v111 )
        {
          v100 = 0;
          if ( v116 <= 1 )
            v100 = (v113 == 5) << 9;
          goto LABEL_219;
        }
        goto LABEL_238;
      }
      if ( !v116 )
      {
        if ( v113 == 5 )
        {
          v105 = v111;
          v111 = 5;
          v113 = v105;
          v100 = 512;
          goto LABEL_219;
        }
        if ( v113 == 6 && v111 != 5 )
        {
          v99 = v111;
          v111 = 6;
          v113 = v99;
          v100 = 768;
LABEL_219:
          v24 = v119;
          v23 = 2;
          i = v100 | *(unsigned __int8 *)(a5 + 48);
          goto LABEL_24;
        }
        if ( !v111 )
        {
          v102 = v113;
          goto LABEL_240;
        }
        goto LABEL_238;
      }
    }
    if ( !v111 )
    {
      v100 = 0;
      if ( v116 > 1 )
        goto LABEL_219;
      v102 = v113;
      goto LABEL_239;
    }
LABEL_238:
    v102 = v111;
LABEL_239:
    v100 = 512;
    if ( v102 == 5 )
      goto LABEL_219;
LABEL_240:
    v100 = 0;
    if ( v102 == 6 )
      v100 = 768;
    goto LABEL_219;
  }
  return 0;
}

