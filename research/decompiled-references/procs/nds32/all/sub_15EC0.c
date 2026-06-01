__int64 __fastcall sub_15EC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int16 v5; // r12
  __int64 v7; // r13
  char *v8; // rax
  __int64 v9; // rsi
  unsigned __int64 j; // rdx
  __int64 *i; // rcx
  __int16 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r12
  unsigned __int16 v17; // r13
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r15
  bool v20; // zf
  bool v21; // cl
  bool v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // r12
  __int16 v29; // r15
  int v30; // ebp
  __int16 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rbx
  __int64 v37; // rax
  __int64 *v38; // rbp
  __int64 v39; // r15
  char k; // al
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // eax
  __int64 *v45; // [rsp+0h] [rbp-518h]
  __int16 v46; // [rsp+8h] [rbp-510h]
  int v47; // [rsp+8h] [rbp-510h]
  __int64 v48; // [rsp+8h] [rbp-510h]
  unsigned __int8 v49; // [rsp+10h] [rbp-508h]
  int v50; // [rsp+10h] [rbp-508h]
  __int64 *v51; // [rsp+18h] [rbp-500h]
  int v52; // [rsp+20h] [rbp-4F8h]
  int v53; // [rsp+24h] [rbp-4F4h]
  int v54; // [rsp+24h] [rbp-4F4h]
  unsigned __int64 v55; // [rsp+28h] [rbp-4F0h]
  __int64 *v56; // [rsp+30h] [rbp-4E8h] BYREF
  __int128 v57; // [rsp+38h] [rbp-4E0h]
  _QWORD v58[2]; // [rsp+50h] [rbp-4C8h] BYREF
  char v59; // [rsp+60h] [rbp-4B8h]
  __int64 *v60; // [rsp+70h] [rbp-4A8h] BYREF
  __int128 v61; // [rsp+78h] [rbp-4A0h]
  char v62; // [rsp+88h] [rbp-490h]
  _BYTE v63[360]; // [rsp+90h] [rbp-488h] BYREF
  char v64[8]; // [rsp+1F8h] [rbp-320h] BYREF
  _QWORD v65[45]; // [rsp+200h] [rbp-318h] BYREF
  __int64 v66; // [rsp+368h] [rbp-1B0h] BYREF
  _QWORD v67[2]; // [rsp+370h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+380h] [rbp-198h]
  unsigned __int16 v69; // [rsp+388h] [rbp-190h]
  unsigned __int16 v70; // [rsp+38Ah] [rbp-18Eh]
  char v71; // [rsp+399h] [rbp-17Fh]
  __int16 v72; // [rsp+39Eh] [rbp-17Ah]
  char v73; // [rsp+3E9h] [rbp-12Fh]
  __int64 v74; // [rsp+3F0h] [rbp-128h]
  unsigned __int64 v75; // [rsp+4D8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) != 97 )
    return 0;
  v3 = 0;
  if ( *(_BYTE *)(a2 + 41) == 1 )
  {
    v5 = *(_WORD *)(a2 + 46);
    v7 = *(_QWORD *)(a2 + 16);
    v57 = 0;
    v56 = nullptr;
    v56 = (__int64 *)qvector_reserve(&v56, 0, 1, 8);
    v56[(_QWORD)v57] = v7;
    v8 = &v63[40];
    *(_QWORD *)&v57 = v57 + 1;
    *(_QWORD *)&v63[24] = 0;
    *(_QWORD *)&v63[32] = 0;
    *(_OWORD *)v63 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 40;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *((_QWORD *)v8 - 2) = 0;
    }
    while ( v8 != v64 );
    v9 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)&v63[16] = v9;
    if ( decode_prev_insn(v63, v9, v64, 0.0) == -1
      || *(_WORD *)&v63[24] != 31
      || v63[41] != 1
      || *(_WORD *)&v63[46] != v5
      || v63[81] != 1 )
    {
      goto LABEL_96;
    }
    v12 = *(_WORD *)&v63[86];
    if ( *(_WORD *)&v63[86] == v5 )
    {
      if ( v63[121] != 1 )
        goto LABEL_96;
      v12 = *(_WORD *)&v63[126];
      if ( *(_WORD *)&v63[126] == v5 )
        goto LABEL_96;
    }
    else if ( v63[121] != 1 || *(_WORD *)&v63[126] != v5 )
    {
      goto LABEL_96;
    }
    v13 = v57;
    v14 = *(_QWORD *)&v63[16];
    if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
    {
      v56 = (__int64 *)qvector_reserve(&v56, v56, v57 + 1, 8);
      v13 = v57;
    }
    v15 = (__int64)v56;
    v56[v13] = v14;
    v9 = *(_QWORD *)&v63[16];
    *(_QWORD *)&v57 = v57 + 1;
    if ( decode_prev_insn(v63, *(_QWORD *)&v63[16], v15, 0.0) == -1 )
      goto LABEL_96;
    switch ( *(_WORD *)&v63[24] )
    {
      case 4:
        v52 = 2;
        break;
      case 6:
        v52 = 4;
        break;
      case 2:
        v52 = 1;
        break;
      default:
        goto LABEL_96;
    }
    if ( v63[41] == 1
      && *(_WORD *)&v63[46] == v12
      && v63[81] == 3
      && v63[112]
      && (v52 != 4 || v63[113] == 2)
      && (v52 != 2 || v63[113] == 1) )
    {
      LOBYTE(j) = v52 == 1;
      if ( v63[113] == 0 || v52 != 1 )
      {
        v16 = *(_QWORD *)&v63[16];
        v17 = *(_WORD *)&v63[86];
        v51 = *(__int64 **)&v63[88];
        v46 = *(_WORD *)&v63[86];
        sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
        v60 = nullptr;
        v9 = v17;
        v62 = 0;
        v61 = 0;
        if ( !(unsigned __int8)sub_1D1E0(&v60, v17, v16, a3, 0) || (unsigned __int8)(v62 - 10) > 1u )
          goto LABEL_114;
        v45 = (__int64 *)*v60;
        if ( (_QWORD)v61 != 1 )
        {
          j = 24 * v61;
          for ( i = v60 + 3; ; i += 3 )
          {
            if ( i == &v60[3 * (_QWORD)v61] )
              goto LABEL_38;
            v9 = *v60;
            if ( v45 != (__int64 *)*i )
              break;
          }
LABEL_114:
          v3 = 0;
LABEL_115:
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree(v60, v9, j, 0);
          }
          goto LABEL_97;
        }
LABEL_38:
        v3 = is_mapped(v45);
        if ( !(_BYTE)v3 )
          goto LABEL_114;
        v9 = v16;
        if ( decode_prev_insn(v63, v16, j, 0.0) == -1 )
          goto LABEL_114;
        if ( *(_WORD *)&v63[24] == 31 && v63[41] == 1 && *(_WORD *)&v63[46] == v46 )
        {
          j = 0x1D000000000100LL;
          if ( (*(_QWORD *)&v63[80] & 0xFFFF00000000FF00LL) == 0x1D000000000100LL
            || (*(_QWORD *)&v63[120] & 0xFFFF00000000FF00LL) == 0x1D000000000100LL )
          {
            sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
          }
        }
        if ( decode_prev_insn(v63, *(_QWORD *)&v63[16], j, 0.0) != -1 && *(_WORD *)&v63[24] == 93 )
          sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
        v18 = *(_QWORD *)&v63[16];
        sub_CEC0((__int64)v65);
        v19 = v18;
        v53 = 30;
        while ( decode_prev_insn(v65, v19, j, 0.0) != -1 )
        {
          v21 = LOWORD(v65[3]) == 478 || LOWORD(v65[3]) == 105;
          LOBYTE(j) = LOWORD(v65[3]) == 477 || LOWORD(v65[3]) == 104;
          if ( !(_BYTE)j && !v21 )
            goto LABEL_47;
          if ( (unsigned __int16)(LOWORD(v65[3]) - 477) <= 1u )
          {
            if ( BYTE1(v65[5]) != 7 )
            {
LABEL_52:
              v22 = 0;
              v23 = -1;
              goto LABEL_53;
            }
            v23 = v65[7];
          }
          else
          {
            if ( BYTE1(v65[10]) != 7 )
              goto LABEL_52;
            v23 = v65[12];
          }
          v22 = v23 != -1;
          if ( v23 != -1 && v21 )
          {
            if ( v23 - v18 + 20 <= 0x28 )
              goto LABEL_63;
            goto LABEL_47;
          }
LABEL_53:
          if ( (_BYTE)j )
          {
            j = v18 - v65[2];
            if ( v18 - v65[2] <= 0x28 && v23 != v18 )
            {
              sub_CEC0((__int64)v67);
              for ( j = v65[2] + WORD1(v65[3]); j < v18; j = v70 + v55 )
              {
                v55 = j;
                v27 = decode_insn(v67, j, j, v24, v25, v26, 0.0);
                j = v55;
                if ( !v27 )
                  break;
                if ( v69 == 95 || (unsigned __int16)(v69 - 97) <= 1u )
                  goto LABEL_47;
              }
              if ( v22 )
              {
LABEL_63:
                qmemcpy(v63, v65, sizeof(v63));
                v9 = (__int64)&v66;
                i = nullptr;
                switch ( *(_WORD *)&v63[24] )
                {
                  case 0x68:
                    if ( v63[41] != 1 || v63[81] != 7 )
                      goto LABEL_114;
                    v29 = *(_WORD *)&v63[46];
                    v28 = *(_QWORD *)&v63[96];
                    sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
                    j = 0;
                    break;
                  case 0x1DD:
                    if ( v63[41] != 7 )
                      goto LABEL_114;
                    v28 = *(_QWORD *)&v63[56];
                    sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
LABEL_69:
                    j = v3;
                    v29 = 15;
                    break;
                  case 0x69:
                    if ( v63[41] != 1 || v63[81] != 7 )
                      goto LABEL_114;
                    v29 = *(_WORD *)&v63[46];
                    v28 = *(_QWORD *)&v63[16] + *(unsigned __int16 *)&v63[26];
                    sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
                    j = 0;
                    break;
                  default:
                    if ( *(_WORD *)&v63[24] != 478 || v63[41] != 7 )
                      goto LABEL_114;
                    v28 = *(_QWORD *)&v63[16] + *(unsigned __int16 *)&v63[26];
                    sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
                    goto LABEL_69;
                }
                v47 = 10;
                v9 = *(_QWORD *)&v63[16];
                while ( 1 )
                {
                  v49 = j;
                  if ( decode_prev_insn(v63, v9, j, 0.0) == -1 )
                    goto LABEL_114;
                  j = v49;
                  i = (__int64 *)((unsigned int)*(unsigned __int16 *)&v63[24] - 122);
                  if ( (unsigned __int16)(*(_WORD *)&v63[24] - 122) > 1u )
                  {
                    if ( *(_WORD *)&v63[24] == 469 || *(_WORD *)&v63[24] == 484 )
                    {
                      sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
                      j = v49;
                    }
                  }
                  else
                  {
                    LOBYTE(v9) = v29 == *(_WORD *)&v63[46];
                    i = (__int64 *)(*(_WORD *)&v63[28] & 0x1FF);
                    if ( (_DWORD)i == 45 )
                    {
                      if ( v49 || v29 == *(_WORD *)&v63[46] )
                      {
                        if ( v63[41] != 1 || !v49 && v29 != *(_WORD *)&v63[46] )
                          goto LABEL_114;
                        i = v51;
                        v30 = (unsigned __int16)v51;
                        if ( *(_WORD *)&v63[46] != (_WORD)v51 || v63[81] != 5 )
                          goto LABEL_114;
                        v31 = *(_WORD *)&v63[88];
                        goto LABEL_84;
                      }
                    }
                    else if ( v63[41] == 1 && v29 == *(_WORD *)&v63[46] )
                    {
                      if ( v63[81] != 1 )
                        goto LABEL_114;
                      v30 = (unsigned __int16)v51;
                      if ( *(_WORD *)&v63[86] != (_WORD)v51 || v63[121] != 5 )
                        goto LABEL_114;
                      v31 = *(_WORD *)&v63[128];
LABEL_84:
                      sub_15D10((__int64 *)&v56, *(__int64 *)&v63[16]);
                      v48 = *(_QWORD *)&v63[16];
                      sub_CEC0((__int64)v67);
                      v9 = *(_QWORD *)&v63[16];
                      if ( decode_prev_insn(v67, *(_QWORD *)&v63[16], v32, 0.0) == -1 )
                      {
                        v35 = 0;
                      }
                      else
                      {
                        v33 = v69;
                        if ( v69 == 114 || (v35 = 0, v69 == 119) )
                        {
                          v35 = 0;
                          if ( v71 == 1 && v72 == (_WORD)v30 )
                          {
                            v9 = v68;
                            sub_15D10((__int64 *)&v56, v68);
                            v48 = v68;
                            v35 = 0;
                            if ( v73 == 5 )
                            {
                              v33 = v74;
                              v35 = v74;
                              if ( v69 != 119 )
                                v35 = -(int)v74;
                            }
                          }
                        }
                      }
                      v50 = v35;
                      sub_15E00(a1, v9, v33, v34);
                      *(_DWORD *)a1 = 1057280;
                      *(_WORD *)(a1 + 4) = v31;
                      *(_QWORD *)(a1 + 8) = v45;
                      if ( v52 != 2 )
                      {
                        if ( v52 == 4 )
                          *(_DWORD *)a1 = 1057284;
                        else
                          *(_DWORD *)a1 = 1058304;
                      }
                      *(_QWORD *)(a1 + 16) = v50;
                      v36 = v56;
                      v37 = v57;
                      *(_DWORD *)(a1 + 64) = v30;
                      *(_QWORD *)(a1 + 32) = v48;
                      i = v45;
                      *(_BYTE *)(a1 + 68) = 2;
                      v38 = &v36[v37];
                      *(_QWORD *)(a1 + 24) = v28;
                      *(_QWORD *)(a1 + 56) = v45;
                      while ( v38 != v36 )
                      {
                        v9 = *v36;
                        sub_15D70((__int64 *)(a1 + 96), *v36++);
                      }
                      goto LABEL_115;
                    }
                  }
                  v20 = v47-- == 1;
                  v9 = *(_QWORD *)&v63[16];
                  if ( v20 )
                    goto LABEL_114;
                }
              }
            }
          }
LABEL_47:
          v20 = v53-- == 1;
          v19 = v65[2];
          if ( v20 )
            break;
        }
        v67[0] = v18;
        v67[1] = v19;
        if ( v18 == v19 )
          v54 = 1;
        else
          v54 = 2;
        v39 = 0;
LABEL_104:
        v9 = v67[v39];
        for ( k = xrefblk_t_first_to(v58, v9, 4); ; k = xrefblk_t_next_to(v58) )
        {
          if ( !k )
          {
            v44 = v39 + 1;
            v39 = 1;
            if ( v54 <= v44 )
              goto LABEL_114;
            goto LABEL_104;
          }
          if ( v59 )
          {
            v9 = v58[0];
            if ( (unsigned int)decode_insn(v65, v58[0], j, i, v41, v42, 0.0) )
            {
              j = (unsigned int)LOWORD(v65[3]) - 477;
              if ( (unsigned __int16)(LOWORD(v65[3]) - 104) > 1u )
              {
                if ( (unsigned __int16)(LOWORD(v65[3]) - 477) > 1u || BYTE1(v65[5]) != 7 )
                  continue;
                v43 = v65[7];
              }
              else
              {
                if ( BYTE1(v65[10]) != 7 )
                  continue;
                v43 = v65[12];
              }
              if ( v43 != -1 && v43 - v18 + 20 <= 0x28 )
                goto LABEL_63;
            }
          }
        }
      }
    }
LABEL_96:
    v3 = 0;
LABEL_97:
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56, v9, j, i);
    }
  }
  return v3;
}
