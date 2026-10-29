const char *__fastcall sub_1DAE0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 v8; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // r10d
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  signed int dword; // eax
  unsigned __int8 v20; // r10
  __int16 v21; // r9
  unsigned int v22; // r8d
  int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int16 v29; // r11
  __int64 v30; // rax
  bool v31; // si
  unsigned __int8 v32; // al
  int v33; // edx
  __int64 v34; // rax
  __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // r15
  int v40; // ebp
  int v41; // r9d
  __int64 v42; // rbp
  __int64 v43; // rax
  char *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  bool v48; // cf
  bool v49; // zf
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  __int64 v54; // rax
  unsigned __int64 v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdi
  int v62; // ecx
  __int64 v63; // rax
  unsigned __int16 v64; // dx
  const char *v65; // rsi
  __int64 v66; // rcx
  char v67; // r15
  int v68; // ebp
  __int64 v69; // rcx
  char v70; // r15
  int v71; // ebp
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // esi
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int16 custom_fixup; // ax
  __int64 flags; // rax
  __int64 v80; // rax
  char *v81; // [rsp+0h] [rbp-E8h]
  unsigned __int8 v82; // [rsp+8h] [rbp-E0h]
  int v83; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v84; // [rsp+8h] [rbp-E0h]
  unsigned int v85; // [rsp+8h] [rbp-E0h]
  unsigned int v86; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v87; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v88; // [rsp+8h] [rbp-E0h]
  unsigned int v89; // [rsp+8h] [rbp-E0h]
  unsigned int v90; // [rsp+8h] [rbp-E0h]
  unsigned int v91; // [rsp+8h] [rbp-E0h]
  unsigned int v92; // [rsp+8h] [rbp-E0h]
  unsigned int v93; // [rsp+Ch] [rbp-DCh]
  __int16 v94; // [rsp+Ch] [rbp-DCh]
  unsigned int v95; // [rsp+10h] [rbp-D8h]
  bool v96; // [rsp+17h] [rbp-D1h]
  unsigned int v98; // [rsp+20h] [rbp-C8h]
  unsigned int v99; // [rsp+20h] [rbp-C8h]
  unsigned int v100; // [rsp+20h] [rbp-C8h]
  unsigned int v101; // [rsp+28h] [rbp-C0h]
  unsigned int v102; // [rsp+28h] [rbp-C0h]
  unsigned int v103; // [rsp+28h] [rbp-C0h]
  __int16 v104; // [rsp+2Ch] [rbp-BCh]
  __int16 v105; // [rsp+2Ch] [rbp-BCh]
  __int16 v106; // [rsp+2Ch] [rbp-BCh]
  __int64 v107; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v109; // [rsp+40h] [rbp-A8h]
  __int128 v110; // [rsp+48h] [rbp-A0h]
  __int16 v111; // [rsp+58h] [rbp-90h]
  __int64 v112; // [rsp+5Ch] [rbp-8Ch]
  __int16 v113; // [rsp+64h] [rbp-84h]
  __int64 v114; // [rsp+70h] [rbp-78h] BYREF
  __int64 v115; // [rsp+78h] [rbp-70h]
  unsigned __int64 v116; // [rsp+80h] [rbp-68h]
  __int128 v117; // [rsp+88h] [rbp-60h]
  __int16 v118; // [rsp+98h] [rbp-50h]
  __int64 v119; // [rsp+9Ch] [rbp-4Ch]
  __int16 v120; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v121; // [rsp+A8h] [rbp-40h]

  v10 = a2;
  v11 = a4;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(v13 + 288);
  v121 = __readfsqword(0x28u);
  if ( a3 && a3 >= v14 && v14 + 96LL * *(_QWORD *)(v13 + 296) >= a3 )
  {
    v93 = 1;
    v25 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a3 - v14) >> 5);
    v26 = *(_QWORD *)(v13 + 312);
    v16 = (unsigned int)v25;
    if ( v25 >= v26 )
    {
      v93 = 2;
      v16 = (unsigned int)(v25 - v26);
    }
    a2 = a4;
    v95 = sub_3A3D0(v13, a4);
    if ( v95 != (_DWORD)v16 )
    {
      if ( under_debugger )
        goto LABEL_204;
      interr(20074);
LABEL_192:
      if ( v48 || v49 )
      {
        if ( (unsigned int)v11 > 0x33 )
        {
LABEL_57:
          if ( v29 )
            goto LABEL_84;
          v32 = v20;
          if ( (unsigned int)v11 <= 0x3A )
          {
            v31 = 0;
LABEL_60:
            v37 = 1LL << v11;
            if ( ((1LL << v11) & 0x204000000000000LL) != 0 )
            {
LABEL_149:
              v69 = (v32 == 57) | (unsigned __int8)(v32 == 0xDE);
              if ( v31 && (unsigned __int8)(v32 + 35) < 2u )
                v69 = v32 != 57 && v32 != 0xDE;
              v70 = byte_6D9A0[v69];
              v71 = 31 << (31 - v70);
              if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 520LL) == 1 && (v22 & v71) != 0 )
              {
                v92 = v22;
                sub_BFC0(
                  (__int64)"AUTOHIDE SESSION\n"
                           "%a: there is a bug in the GNU toolchain for PowerPC. It swaps the R_PPC_VLE_HA16A and R_PPC_V"
                           "LE_HA16D relocs (and also some others). IDA by default does not do it. To repeat the bug in I"
                           "DA please change the PPC_FIX_GNU_VLEADRELOC_BUG parameter in ida.cfg",
                  a6);
                v22 = v92;
              }
              v41 = 7;
              v24 = v22 & ~(v71 | 0x7FF) | WORD1(v10) & 0x7FF | ((WORD1(v10) & 0xF800) << (20 - v70));
              goto LABEL_68;
            }
            if ( (v37 & 0x408000000000000LL) != 0 )
            {
LABEL_144:
              v66 = (v32 == 58) | (unsigned __int8)(v32 == 0xE0);
              if ( v31 && (unsigned __int8)(v32 + 33) < 2u )
                v66 = v32 != 58 && v32 != 0xE0;
              v67 = byte_6D9A0[v66];
              v68 = 31 << (31 - v67);
              if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 520LL) == 1 && (v22 & v68) != 0 )
              {
                v89 = v22;
                sub_BFC0(
                  (__int64)"AUTOHIDE SESSION\n"
                           "%a: there is a bug in the GNU toolchain for PowerPC. It swaps the R_PPC_VLE_HA16A and R_PPC_V"
                           "LE_HA16D relocs (and also some others). IDA by default does not do it. To repeat the bug in I"
                           "DA please change the PPC_FIX_GNU_VLEADRELOC_BUG parameter in ida.cfg",
                  a6);
                v22 = v89;
              }
              v41 = *(unsigned __int16 *)(a1 + 348);
              v24 = v22 & ~(v68 | 0x7FF)
                  | (WORD1(v10) + (((unsigned int)v10 >> 15) & 1)) & 0x7FF
                  | (((WORD1(v10) + (((unsigned int)v10 >> 15) & 1)) & 0xF800) << (20 - v67));
              goto LABEL_68;
            }
            if ( (v37 & 0x102000000000000LL) != 0 )
            {
LABEL_63:
              v38 = (v32 == 56) | (unsigned __int8)(v32 == 0xDC);
              if ( v31 && (unsigned __int8)(v32 + 37) < 2u )
                v38 = v32 != 56 && v32 != 0xDC;
              v39 = byte_6D9A0[v38];
              v40 = 31 << (31 - v39);
              if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 520LL) == 1 && (v22 & v40) != 0 )
              {
                v90 = v22;
                sub_BFC0(
                  (__int64)"AUTOHIDE SESSION\n"
                           "%a: there is a bug in the GNU toolchain for PowerPC. It swaps the R_PPC_VLE_HA16A and R_PPC_V"
                           "LE_HA16D relocs (and also some others). IDA by default does not do it. To repeat the bug in I"
                           "DA please change the PPC_FIX_GNU_VLEADRELOC_BUG parameter in ida.cfg",
                  a6);
                v22 = v90;
              }
              v41 = 9;
              v24 = v22 & ~(v40 | 0x7FF) | v10 & 0x7FF | ((v10 & 0xF800) << (20 - v39));
LABEL_68:
              sub_42050(a1, (_DWORD)v81, v10, v24, 0, v41, 0, 0, 0);
              return nullptr;
            }
            return (_BYTE *)(&dword_0 + 2);
          }
          v33 = v10 - (_DWORD)v81;
          goto LABEL_79;
        }
        goto LABEL_27;
      }
      goto LABEL_76;
    }
    v13 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v95 = 0;
    v93 = 0;
  }
  v15 = *(_DWORD *)v10;
  v16 = *(_QWORD *)(v10 + 12);
  v81 = *(char **)(v10 + 4);
  v8 = *(_QWORD *)(v11 + 16);
  if ( *(_DWORD *)(v13 + 464) != 8 )
    v8 = (int)v8;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(unsigned int *)(v17 + 320);
  v96 = v16 >= *(_QWORD *)(v17 + 312);
  if ( (_DWORD)v18 )
  {
    a4 = v93;
    if ( (_DWORD)v18 == v93 )
    {
      a4 = v95;
      if ( *(_DWORD *)(v17 + 324) == v95 )
      {
        v83 = *(_DWORD *)v10;
        v27 = sub_1A980(a5);
        v96 = 0;
        LOBYTE(v15) = v83;
        v16 = v27;
        if ( !v27 )
          return nullptr;
      }
    }
  }
  v82 = v15;
  dword = get_dword(v81, a2, v18, a4, a5);
  v20 = v82;
  a6 = 0.0;
  v21 = 256;
  v22 = dword;
  v107 = a1;
  v23 = *(_DWORD *)(v10 + 28);
  v108 = -1;
  v11 = v82;
  v109 = 0;
  v111 = -1;
  v112 = 0;
  v113 = 256;
  v110 = 0;
  if ( v82 > 0x1Au )
  {
    if ( v82 == 251 )
    {
      v29 = -32749;
    }
    else
    {
      if ( v82 > 0xFBu )
      {
        v10 = v16 + v8;
        if ( v82 != 252 )
        {
LABEL_78:
          v32 = v20;
          v33 = v10 - (_DWORD)v81;
LABEL_79:
          v42 = (unsigned int)(v11 - 67);
          if ( (unsigned int)v42 > 0xB5 )
            return (_BYTE *)(&dword_0 + 2);
          v31 = 0;
          goto LABEL_81;
        }
        HIWORD(v112) = -32748;
        if ( v23 )
        {
          v24 = v8;
          v10 = v16 + v8;
          LOBYTE(v29) = 20;
          if ( *(_WORD *)(a1 + 348) != 0x8000 )
            goto LABEL_84;
        }
        else
        {
          v29 = -32748;
          v8 = SHIWORD(dword);
          v24 = SHIWORD(dword);
          v10 = v16 + SHIWORD(dword);
          if ( *(_WORD *)(a1 + 348) != 0x8000 )
            goto LABEL_76;
        }
        v29 = -32748;
        goto LABEL_46;
      }
      if ( v82 == 249 )
      {
        v29 = -32751;
      }
      else
      {
        v29 = -32750;
        if ( v82 != 250 )
        {
LABEL_34:
          v24 = v8;
          v10 = v8 + v16;
          if ( *(_WORD *)(a1 + 348) != 0x8000 )
          {
            if ( v82 != 109 )
            {
              v29 = 0;
              if ( v82 > 0x6Du )
              {
                if ( (unsigned int)v82 - 216 <= 9 )
                  goto LABEL_30;
                goto LABEL_78;
              }
              goto LABEL_26;
            }
            v85 = dword;
            append_abi_opts("eabi", 0);
            v22 = v85;
            return sub_1C610(a1, v81, v10, v22, a6, a7, a8);
          }
          if ( v82 <= 0x5Au )
          {
            if ( v82 <= 0x32u )
            {
              v29 = 0;
              goto LABEL_44;
            }
            v36 = 0x8000000081LL;
            if ( _bittest64(&v36, (unsigned int)v82 - 51) )
            {
              v29 = 0;
              goto LABEL_46;
            }
            v29 = 0;
            if ( v82 == 51 )
              goto LABEL_30;
LABEL_56:
            if ( (unsigned int)v82 - 56 <= 2 )
              goto LABEL_30;
            goto LABEL_57;
          }
          v29 = 0;
          if ( v82 > 0xE0u )
          {
LABEL_76:
            if ( (unsigned int)(v11 - 216) <= 9 )
              goto LABEL_30;
LABEL_77:
            if ( v29 )
              goto LABEL_84;
            goto LABEL_78;
          }
          goto LABEL_94;
        }
      }
    }
LABEL_23:
    HIWORD(v112) = v29;
    if ( v23 )
    {
      v24 = v8;
      v10 = v16 + v8;
      if ( *(_WORD *)(a1 + 348) != 0x8000 )
        goto LABEL_25;
      if ( v82 <= 0x5Au )
        goto LABEL_44;
LABEL_75:
      if ( v82 == 252 )
        goto LABEL_46;
      goto LABEL_76;
    }
    v8 = SHIWORD(dword);
    v24 = SHIWORD(dword);
    v10 = v16 + SHIWORD(dword);
    if ( *(_WORD *)(a1 + 348) != 0x8000 )
    {
LABEL_25:
      if ( v82 > 0x6Du )
        goto LABEL_84;
      goto LABEL_26;
    }
    if ( v82 <= 0x5Au )
      goto LABEL_44;
    if ( v82 > 0xE0u )
      goto LABEL_75;
LABEL_94:
    if ( v82 > 0xDEu )
    {
      v106 = v29;
      v100 = v24;
      v103 = dword;
      custom_fixup = find_custom_fixup("HIGHA16");
      v20 = v82;
      v22 = v103;
      *(_WORD *)(a1 + 348) = custom_fixup;
      v24 = v100;
      v29 = v106;
      goto LABEL_30;
    }
    v48 = v82 < 0x6Du;
    v49 = v82 == 109;
    if ( v82 == 109 )
    {
      v94 = v29;
      v86 = dword;
      append_abi_opts("eabi", 0);
      LOBYTE(v29) = v94;
      v22 = v86;
      if ( v94 )
        goto LABEL_84;
      return sub_1C610(a1, v81, v10, v22, a6, a7, a8);
    }
    goto LABEL_192;
  }
  v24 = v8;
  v10 = v16 + v8;
  if ( v82 )
  {
    switch ( v82 )
    {
      case 1u:
        HIWORD(v112) = 5;
        if ( v23 )
        {
          v10 = v16 + v8;
          v29 = 5;
          if ( *(_WORD *)(a1 + 348) == 0x8000 )
          {
LABEL_44:
            if ( (unsigned int)v82 - 6 <= 0xF )
            {
              v34 = 2228288;
              if ( !_bittest64(&v34, v82) )
                goto LABEL_50;
LABEL_46:
              v105 = v29;
              v99 = v24;
              v102 = v22;
              v35 = find_custom_fixup("HIGHA16");
              v20 = v82;
              v22 = v102;
              *(_WORD *)(a1 + 348) = v35;
              v24 = v99;
              v29 = v105;
              v21 = 256;
              if ( v82 <= 0x6Du )
              {
                if ( v82 <= 0x33u )
                {
                  if ( v82 <= 0x30u )
                  {
LABEL_49:
                    if ( (unsigned int)v11 <= 0x25 )
                    {
LABEL_50:
                      if ( !v29 )
                        goto LABEL_51;
LABEL_84:
                      if ( v96 )
                      {
                        v109 = v8;
                        v10 = v16;
                      }
                      v43 = *(_QWORD *)(a1 + 8);
                      v108 = v10;
                      if ( v16 >= *(_QWORD *)(v43 + 312) )
                        HIBYTE(v113) = 0;
                      v44 = nullptr;
                      if ( (v29 & 0x10) != 0 )
                        v44 = v81;
                      *(_QWORD *)&v110 = v44;
                      sub_1D2B0(&v107, v22);
                      sub_1D4D0(&v107, v81, v45, v46, v47, a6, a7, a8);
                      return nullptr;
                    }
                    goto LABEL_30;
                  }
                  goto LABEL_30;
                }
                goto LABEL_56;
              }
              goto LABEL_77;
            }
LABEL_27:
            if ( (unsigned int)v11 <= 0x30 )
            {
LABEL_28:
              if ( (unsigned int)v11 > 0x28 )
              {
                if ( (_DWORD)v11 != 47 )
                {
                  if ( v29 )
                    goto LABEL_84;
                  return (_BYTE *)(&dword_0 + 2);
                }
                goto LABEL_30;
              }
              goto LABEL_49;
            }
LABEL_30:
            v104 = v29;
            v98 = v24;
            v101 = v22;
            v84 = v20;
            sub_101F0(0x57u, v81, 1);
            v30 = sub_101F0(0xBC3u);
            LOBYTE(v29) = v104;
            v20 = v84;
            v22 = v101;
            v24 = v98;
            v31 = v30 == 1;
            v21 = 256;
            if ( v104 )
              goto LABEL_84;
            v32 = v84;
            v33 = v10 - (_DWORD)v81;
            if ( (unsigned int)v11 <= 0x3A )
            {
              if ( (unsigned int)v11 <= 0x30 )
                goto LABEL_33;
              goto LABEL_60;
            }
            v42 = (unsigned int)(v11 - 67);
LABEL_81:
            switch ( v42 )
            {
              case 0LL:
              case 1LL:
                sub_40E20(a1, v81, 3);
                return nullptr;
              case 11LL:
                sub_40E20(a1, v81, 3);
                goto LABEL_121;
              case 20LL:
              case 21LL:
              case 22LL:
              case 23LL:
                v88 = v20;
                if ( !(unsigned __int8)sub_43F30(v81, v8, 0) )
                  return nullptr;
                return sub_1D680(a1, (unsigned __int8)(v88 - 84), v81, v16, a3, a5, a6, a7, a8, 3u);
              case 34LL:
              case 35LL:
              case 36LL:
              case 37LL:
              case 38LL:
              case 39LL:
              case 40LL:
              case 41LL:
              case 43LL:
              case 44LL:
              case 45LL:
              case 46LL:
              case 47LL:
              case 48LL:
              case 49LL:
              case 113LL:
              case 114LL:
              case 115LL:
              case 116LL:
              case 117LL:
              case 118LL:
              case 119LL:
              case 120LL:
                return (_BYTE *)(&dword_0 + 3);
              case 42LL:
                return sub_1C610(a1, v81, v10, v22, a6, a7, a8);
              case 149LL:
LABEL_128:
                v41 = 4;
                v24 = v22 & 0xFF00FFFF | (v33 << 15) & 0xFF0000;
                goto LABEL_68;
              case 150LL:
LABEL_123:
                v41 = 4;
                v24 = v33 & 0xFFFE | v22 & 0xFFFF0001;
                goto LABEL_68;
              case 151LL:
LABEL_122:
                v41 = 4;
                v24 = v33 & 0x1FFFFFE | v22 & 0xFE000001;
                goto LABEL_68;
              case 152LL:
              case 153LL:
                goto LABEL_63;
              case 154LL:
              case 155LL:
                goto LABEL_149;
              case 156LL:
              case 157LL:
                goto LABEL_144;
              case 158LL:
LABEL_124:
                v41 = 4;
                v24 = (32 * v10) & 0x1F0000 | ((unsigned int)v10 >> 5) & 0x7800 | v10 & 0x7FF | v22 & 0xFFE08000;
                goto LABEL_68;
              case 181LL:
                sub_40E20(a1, v81, 4);
                v54 = *(_QWORD *)(a1 + 16);
                v55 = *(_QWORD *)(v54 + 456) & (v8 + *(_QWORD *)(v54 + 608));
                if ( v55 < v8 )
                  sub_40E00(v81, *(_QWORD *)(v54 + 456) & (v8 + *(_QWORD *)(v54 + 608)), v50, v51, v52);
                sub_47DB0(a1, v55, v50, v51, v52, v53);
LABEL_121:
                v24 = v10;
                v41 = 4;
                break;
              default:
                return (_BYTE *)(&dword_0 + 2);
            }
            goto LABEL_68;
          }
          break;
        }
        v29 = 5;
        goto LABEL_106;
      case 2u:
        HIWORD(v112) = 6;
        if ( v23 )
        {
          v10 = v16 + v8;
          v29 = 6;
          if ( *(_WORD *)(a1 + 348) == 0x8000 )
            goto LABEL_44;
        }
        else
        {
          v29 = 6;
LABEL_106:
          v8 = dword;
          v24 = dword;
          v10 = v16 + dword;
          if ( *(_WORD *)(a1 + 348) == 0x8000 )
            goto LABEL_44;
        }
        break;
      case 3u:
        v29 = 1;
        goto LABEL_23;
      case 4u:
        v29 = 2;
        goto LABEL_23;
      case 5u:
        v29 = 3;
        goto LABEL_23;
      case 6u:
        v29 = 4;
        goto LABEL_23;
      case 7u:
        v29 = 7;
        HIWORD(v112) = 7;
        goto LABEL_70;
      case 0xAu:
        v29 = 22;
        goto LABEL_105;
      case 0xBu:
        v29 = 23;
        HIWORD(v112) = 23;
LABEL_70:
        v24 = v8;
        v10 = v16 + v8;
        if ( *(_WORD *)(a1 + 348) == 0x8000 )
          goto LABEL_50;
        goto LABEL_28;
      case 0x1Au:
        v29 = -32747;
LABEL_105:
        HIWORD(v112) = v29;
        if ( !v23 )
          goto LABEL_106;
        v24 = v8;
        v10 = v16 + v8;
        if ( *(_WORD *)(a1 + 348) == 0x8000 )
          goto LABEL_44;
        break;
      default:
        goto LABEL_34;
    }
LABEL_26:
    if ( v82 <= 0x33u )
      goto LABEL_27;
    goto LABEL_56;
  }
LABEL_51:
  v33 = v10 - (_DWORD)v81;
LABEL_33:
  switch ( v11 )
  {
    case 0uLL:
      return nullptr;
    case 8uLL:
    case 9uLL:
    case 0xCuLL:
    case 0xDuLL:
    case 0x18uLL:
    case 0x19uLL:
    case 0x1BuLL:
    case 0x1CuLL:
    case 0x1DuLL:
    case 0x1EuLL:
    case 0x1FuLL:
    case 0x20uLL:
    case 0x21uLL:
    case 0x22uLL:
    case 0x23uLL:
    case 0x24uLL:
      return (_BYTE *)(&dword_0 + 3);
    case 0xEuLL:
    case 0xFuLL:
    case 0x10uLL:
    case 0x11uLL:
      v87 = v20;
      if ( !(unsigned __int8)sub_43F30(v81, v8, 0) )
        return nullptr;
      return sub_1D680(a1, (unsigned __int8)(v87 - 11), v81, v16, a3, a5, a6, a7, a8, 0xFFFFFFFF);
    case 0x12uLL:
      v114 = a1;
      v116 = 0;
      *((_QWORD *)&v117 + 1) = 0;
      v118 = -1;
      v119 = 0x16000000000000LL;
      v120 = 0;
      v115 = v16;
      goto LABEL_127;
    case 0x13uLL:
      sub_40E20(a1, v81, 2);
      return nullptr;
    case 0x14uLL:
      goto LABEL_121;
    case 0x15uLL:
      v60 = *(_DWORD *)(a1 + 352);
      if ( v60 )
        goto LABEL_166;
      if ( !*(_QWORD *)(*(_QWORD *)a5 + 192LL) )
        return "Invalid JMP_SLOT relocation (no PLT)";
      v61 = *(_QWORD *)(a1 + 356);
      if ( v61 == -1 )
      {
        v65 = "Illegal PLT (no DT_PLTGOT)";
        goto LABEL_139;
      }
      if ( !*(_QWORD *)(*(_QWORD *)a5 + 208LL) )
      {
        v65 = "Illegal PLT (no DT_PLTRELSZ)";
LABEL_139:
        sub_BFC0((__int64)"AUTOHIDE SESSION\n%s", v65);
        *(_DWORD *)(a1 + 352) = 1;
        return "Invalid JMP_SLOT relocation (illegal .plt)";
      }
      v62 = *(unsigned __int8 *)(a1 + 372) + 2;
      *(_DWORD *)(a1 + 352) = v62;
      v63 = *(_QWORD *)a5;
      if ( *(_DWORD *)(*(_QWORD *)a5 + 480LL) == 7 )
        v64 = *(_WORD *)(v63 + 120);
      else
        v64 = *(_WORD *)(v63 + 88);
      v65 = "Illegal PLT (zero size entries)";
      if ( !v64 )
        goto LABEL_139;
      v72 = *(_QWORD *)(v63 + 208) / (unsigned __int64)v64;
      v73 = (unsigned int)(4 * v72);
      v74 = 4 * v72;
      if ( v62 != 3 )
      {
        if ( (unsigned int)v72 > 0x2000 )
          v75 = 16 * v72 - 65464;
        else
          v75 = 8 * v72 + 72;
        v73 = (unsigned int)(v75 + v74);
      }
      *(_QWORD *)(a1 + 364) = v73;
      v76 = getseg(v61);
      if ( !v76
        || (v77 = *(_QWORD *)(a1 + 364)) == 0
        || *(_QWORD *)(v76 + 8) < (unsigned __int64)(*(_QWORD *)(a1 + 356) + v77) )
      {
        v65 = "Illegal PLT (not in segment)";
        goto LABEL_139;
      }
      v60 = *(_DWORD *)(a1 + 352);
LABEL_166:
      if ( (unsigned int)(v60 - 2) > 2 )
        return "Invalid JMP_SLOT relocation (illegal .plt)";
      return sub_1CC80(a1, a3, (__int64)v81, v10);
    case 0x16uLL:
      LODWORD(v10) = v8;
      v41 = 4;
      goto LABEL_68;
    case 0x17uLL:
      a6 = 0.0;
      v114 = a1;
      v119 = 0x16000000000000LL;
      v59 = *(_QWORD *)(a1 + 8);
      v115 = -1;
      v116 = 0;
      v118 = -1;
      v120 = v21;
      v117 = 0;
      if ( *(_DWORD *)(v59 + 320) != v93 || *(_DWORD *)(v59 + 324) != v95 || v8 != -4 )
      {
        v115 = v16;
        v116 = v8;
        if ( v16 < *(_QWORD *)(v59 + 312) )
        {
LABEL_127:
          *(_QWORD *)&v117 = v81;
          sub_1D2B0(&v114, v22);
          sub_1D4D0(&v114, v81, v56, v57, v58, a6, a7, a8);
          return nullptr;
        }
LABEL_131:
        HIBYTE(v120) = 0;
        goto LABEL_127;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 249LL) )
      {
        v91 = v22;
        flags = get_flags_ex(v10, 4);
        v22 = v91;
        if ( (flags & 0x4000) == 0 )
        {
          put_dword(v10, 1317011489);
          create_insn(v10, 0);
          set_name(v10, "..load_got", 6144);
          v22 = v91;
        }
        v80 = *(_QWORD *)(a1 + 8);
        v115 = v10;
        if ( v10 < *(_QWORD *)(v80 + 312) )
          goto LABEL_127;
        goto LABEL_131;
      }
      if ( !under_debugger )
        interr(20076);
      break;
    case 0x26uLL:
      goto LABEL_128;
    case 0x27uLL:
      goto LABEL_123;
    case 0x28uLL:
      goto LABEL_122;
    case 0x2FuLL:
      goto LABEL_124;
    default:
      return (_BYTE *)(&dword_0 + 2);
  }
LABEL_204:
  BUG();
}
