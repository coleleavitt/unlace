_BOOL8 __fastcall sub_315D0(__int64 a1, const void *a2, char a3)
{
  bool v3; // zf
  unsigned __int64 v4; // r13
  int v5; // r15d
  bool v6; // bp
  bool v7; // al
  int v8; // eax
  bool v9; // r14
  unsigned __int64 v10; // rcx
  char v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // r14
  char *v19; // rdx
  __int64 v20; // r12
  char *v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 *v30; // rdx
  __int64 *v31; // rax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // r14d
  __int64 v36; // rsi
  _DWORD *v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // rdi
  _DWORD *v40; // rax
  int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rsi
  _DWORD *v45; // rax
  _DWORD *v46; // rcx
  int v47; // r14d
  _DWORD *v48; // rdx
  _DWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  int flags; // eax
  __int64 v58; // rax
  _DWORD *v59; // rax
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  __int64 v62; // rsi
  unsigned __int64 v63; // rdx
  __int64 v65; // [rsp+10h] [rbp-228h]
  bool v67; // [rsp+1Eh] [rbp-21Ah]
  char v68; // [rsp+1Fh] [rbp-219h]
  int v69; // [rsp+2Ch] [rbp-20Ch] BYREF
  _QWORD *v70; // [rsp+30h] [rbp-208h] BYREF
  __int128 v71; // [rsp+38h] [rbp-200h]
  __int64 v72; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v73; // [rsp+58h] [rbp-1E0h]
  _DWORD *v74; // [rsp+70h] [rbp-1C8h] BYREF
  __int128 v75; // [rsp+78h] [rbp-1C0h]
  char v76; // [rsp+88h] [rbp-1B0h]
  _QWORD v77[53]; // [rsp+90h] [rbp-1A8h] BYREF

  v77[45] = __readfsqword(0x28u);
  qmemcpy(v77, a2, 0x168u);
  v65 = getseg();
  if ( !v65 )
    return 0;
  v3 = *(_BYTE *)(a1 + 728) == 0;
  v70 = 0;
  v74 = 0;
  v76 = 1;
  v72 = 0;
  v71 = 0;
  v75 = 0;
  v73 = 0;
  if ( v3 && (unsigned int)get_auto_state() - 60 > 0x1E )
    v68 = has_jump_or_flow_xref() ^ 1;
  else
    v68 = 0;
  v67 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v76 = 1;
    v7 = sub_29790((__int64)v77, &v69);
    if ( v7 )
    {
      if ( v4 <= 0xB && (v69 & 0x4000) != 0 )
      {
        if ( (_QWORD)v73 )
          goto LABEL_131;
        if ( (a3 & 6) == 0 )
        {
          v67 = v7;
          v14 = v72;
          goto LABEL_35;
        }
        if ( v6 )
          goto LABEL_131;
        v6 = v7;
      }
      v8 = bitcount();
      v76 = 0;
      v5 += 4 * v8;
LABEL_13:
      v9 = v68 & (v5 == 0);
      if ( !v9 )
        goto LABEL_14;
      goto LABEL_45;
    }
    if ( !(unsigned __int8)sub_29880((__int64)v77, &v69, 0) )
      goto LABEL_13;
    v5 -= 4 * bitcount();
    if ( v5 < 0 )
      goto LABEL_131;
    --v4;
    v76 = 0;
    v9 = v68 & (v5 == 0);
    if ( !v9 )
    {
LABEL_14:
      if ( v6 )
        goto LABEL_15;
      v12 = LOWORD(v77[3]);
      if ( LOWORD(v77[3]) <= 0x50u )
      {
        if ( LOWORD(v77[3]) <= 0x11u )
          goto LABEL_77;
        v13 = 0x402000008701D095LL;
        if ( _bittest64(&v13, (unsigned int)LOWORD(v77[3]) - 18) )
          goto LABEL_90;
        if ( LOWORD(v77[3]) != 23 )
        {
          if ( LOWORD(v77[3]) != 24 )
            goto LABEL_33;
          goto LABEL_99;
        }
        goto LABEL_139;
      }
      if ( LOWORD(v77[3]) > 0x11Du )
      {
        if ( (unsigned __int16)(LOWORD(v77[3]) - 325) > 0x2Eu )
          goto LABEL_33;
        v58 = 0x600004000001LL;
        LOWORD(v12) = LOWORD(v77[3]) - 325;
        if ( !_bittest64(&v58, v12) )
          goto LABEL_33;
        goto LABEL_90;
      }
      if ( LOWORD(v77[3]) <= 0xFAu )
      {
        if ( LOWORD(v77[3]) != 181 )
          goto LABEL_33;
        goto LABEL_90;
      }
      v50 = 1LL << (LOBYTE(v77[3]) + 5);
      if ( (v50 & 0x408540001LL) != 0 )
        goto LABEL_90;
      if ( (v50 & 0x180000000LL) == 0 )
        goto LABEL_33;
LABEL_165:
      v52 = v77[12] + 16LL * v77[0];
      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v52 != v27 )
      {
        v27 &= v52;
        if ( v52 == -1 )
          v27 = -1;
      }
      v28 = v72;
      v29 = v73;
      v30 = (__int64 *)(v72 + 8 * v73);
      if ( (__int64 *)v72 != v30 )
      {
        v53 = (__int64 *)v72;
        while ( v27 != *v53 )
        {
          if ( v30 == ++v53 )
            goto LABEL_173;
        }
        if ( v30 != v53 )
          goto LABEL_90;
      }
      goto LABEL_173;
    }
LABEL_45:
    if ( !sub_312C0(a1, (__int64)v77, !v6) )
    {
      if ( LOWORD(v77[3]) != 3 )
        goto LABEL_14;
      if ( (v77[4] & 0xF) != 0xE )
      {
        if ( !v6 )
        {
          LOWORD(v12) = 3;
LABEL_77:
          if ( (unsigned __int16)(v12 - 2) > 0xEu )
            goto LABEL_33;
          if ( ((1LL << v12) & 0x1A6C4) != 0 )
            goto LABEL_90;
          if ( ((1LL << v12) & 0x5000) == 0 )
          {
            if ( (_WORD)v12 != 3 )
              goto LABEL_33;
LABEL_81:
            if ( (v77[4] & 0xF) == 0xE )
              goto LABEL_71;
            v26 = v77[7] + 16LL * v77[0];
            v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
            if ( v26 != v27 )
            {
              v27 &= v26;
              if ( v26 == -1 )
                v27 = -1;
            }
            v28 = v72;
            v29 = v73;
            v30 = (__int64 *)(v72 + 8 * v73);
            if ( (__int64 *)v72 != v30 )
            {
              v31 = (__int64 *)v72;
              while ( v27 != *v31 )
              {
                if ( v30 == ++v31 )
                  goto LABEL_173;
              }
              if ( v31 != v30 )
              {
LABEL_90:
                v32 = BYTE1(v77[10]);
                goto LABEL_91;
              }
            }
LABEL_173:
            if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v29 + 1) )
            {
              v72 = qvector_reserve((__int64)&v72, v28, v29 + 1, 8);
              v30 = (__int64 *)(v72 + 8 * v73);
            }
            *v30 = v27;
            v32 = BYTE1(v77[10]);
            *(_QWORD *)&v73 = v73 + 1;
LABEL_91:
            if ( v32 != 2 )
              goto LABEL_92;
LABEL_133:
            v42 = v71;
            v43 = v77[12];
            v44 = (__int64)v70;
            if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
            {
              v70 = (_QWORD *)qvector_reserve((__int64)&v70, (__int64)v70, v71 + 1, 8);
              v44 = (__int64)v70;
              v42 = v71;
            }
            *(_QWORD *)(v44 + 8 * v42) = v43;
            v11 = v76;
            *(_QWORD *)&v71 = v71 + 1;
            if ( v76 )
              goto LABEL_25;
LABEL_93:
            if ( v6 )
              goto LABEL_94;
            v11 = 1;
            goto LABEL_49;
          }
LABEL_114:
          v32 = BYTE1(v77[10]);
          if ( BYTE1(v77[5]) != 1 || BYTE1(v77[10]) != 1 )
            goto LABEL_91;
          if ( HIWORD(v77[10]) == 13 )
          {
            if ( BYTE1(v77[15]) == 5 )
            {
              v41 = HIWORD(v77[5]);
              if ( HIWORD(v77[5]) == 13 )
              {
                v76 = 0;
              }
              else
              {
                v62 = (__int64)v74;
                v60 = v75;
                v61 = &v74[v75];
                if ( v74 != v61 )
                {
                  v59 = v74;
LABEL_209:
                  while ( *v59 != v41 )
                  {
                    if ( ++v59 == v61 )
                      goto LABEL_211;
                  }
                  if ( v59 != v61 )
                    goto LABEL_92;
                }
LABEL_211:
                v63 = v60 + 1;
                if ( *((_QWORD *)&v75 + 1) < v63 )
                {
                  v74 = (_DWORD *)qvector_reserve((__int64)&v74, v62, v63, 4);
                  v61 = &v74[v75];
                }
                *v61 = v41;
                v32 = BYTE1(v77[10]);
                *(_QWORD *)&v75 = v75 + 1;
                if ( HIWORD(v77[5]) != 13 || HIWORD(v77[10]) != 13 )
                  goto LABEL_91;
              }
              if ( LOWORD(v77[3]) == 12 )
                v5 += LODWORD(v77[16]);
              else
                v5 -= LODWORD(v77[16]);
              goto LABEL_91;
            }
          }
          else
          {
            v39 = &v74[v75];
            v40 = v74;
            if ( v74 != v39 )
            {
              while ( HIWORD(v77[10]) != *v40 )
              {
                if ( v39 == ++v40 )
                  goto LABEL_92;
              }
              if ( v40 != v39 && BYTE1(v77[15]) == 5 )
              {
                v41 = HIWORD(v77[5]);
                if ( HIWORD(v77[5]) != 13 )
                {
                  v59 = v74;
                  v60 = v75;
                  v61 = &v74[v75];
                  v62 = (__int64)v74;
                  goto LABEL_209;
                }
                v76 = 0;
              }
            }
          }
LABEL_92:
          v11 = v76;
          if ( v76 )
            goto LABEL_25;
          goto LABEL_93;
        }
LABEL_15:
        if ( sub_21B30((__int64)v77) && (v77[4] & 0xF) == 0xE )
        {
          if ( !v76 )
          {
LABEL_51:
            v16 = v73;
            if ( !(_QWORD)v73 )
            {
              v67 = 1;
              v14 = v72;
              goto LABEL_35;
            }
            v14 = v72;
            v17 = 8 * v73;
            v18 = 0;
            v19 = (char *)(v72 + 8 * v73);
            v20 = v77[2] + WORD1(v77[3]);
            if ( (char *)v72 == v19 )
            {
              if ( !v6 )
              {
LABEL_198:
                v67 = 0;
                goto LABEL_35;
              }
              v20 = *(_QWORD *)(v72 - 8);
LABEL_128:
              v18 = 0;
              *(_QWORD *)&v73 = v16 - 1;
              goto LABEL_58;
            }
            goto LABEL_53;
          }
          v11 = 0;
          goto LABEL_25;
        }
        v10 = LOWORD(v77[3]);
        if ( LOWORD(v77[3]) <= 0x50u )
        {
          if ( LOWORD(v77[3]) <= 0x11u )
          {
            if ( (unsigned __int16)(LOWORD(v77[3]) - 2) <= 0xEu )
            {
              if ( ((1LL << SLOBYTE(v77[3])) & 0x1A6C4) != 0 )
                goto LABEL_90;
              if ( ((1LL << SLOBYTE(v77[3])) & 0x5000) != 0 )
                goto LABEL_114;
              if ( LOWORD(v77[3]) == 3 )
                goto LABEL_81;
            }
            goto LABEL_23;
          }
          v33 = 0x402000008701D095LL;
          if ( _bittest64(&v33, (unsigned int)LOWORD(v77[3]) - 18) )
            goto LABEL_90;
          if ( LOWORD(v77[3]) != 23 )
          {
            if ( LOWORD(v77[3]) != 24 )
              goto LABEL_23;
LABEL_99:
            v32 = BYTE1(v77[10]);
            if ( BYTE1(v77[5]) != 1 || BYTE1(v77[10]) != 1 )
              goto LABEL_91;
            if ( HIWORD(v77[10]) != 13 )
              goto LABEL_92;
            if ( BYTE1(v77[15]) != 5 )
              goto LABEL_92;
            if ( v77[16] > 0x1Fu )
              goto LABEL_92;
            v34 = 2147516544LL;
            if ( !_bittest64(&v34, v77[16]) )
              goto LABEL_92;
            v35 = HIWORD(v77[5]);
            if ( HIWORD(v77[5]) != 13 )
            {
              v36 = (__int64)v74;
              v37 = &v74[v75];
              if ( v74 == v37 )
                goto LABEL_111;
              v38 = v74;
              while ( HIWORD(v77[5]) != *v38 )
              {
                if ( v37 == ++v38 )
                  goto LABEL_111;
              }
              if ( v37 == v38 )
              {
LABEL_111:
                if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
                {
                  v74 = (_DWORD *)qvector_reserve((__int64)&v74, (__int64)v74, v75 + 1, 4);
                  v36 = (__int64)v74;
                }
                *(_DWORD *)(v36 + 4 * v75) = v35;
                v32 = BYTE1(v77[10]);
                *(_QWORD *)&v75 = v75 + 1;
                goto LABEL_91;
              }
              goto LABEL_92;
            }
LABEL_194:
            v76 = 0;
            goto LABEL_93;
          }
LABEL_139:
          v32 = BYTE1(v77[10]);
          if ( BYTE1(v77[5]) != 1 || BYTE1(v77[10]) != 1 )
            goto LABEL_91;
          if ( HIWORD(v77[10]) != 13 )
          {
            v45 = v74;
            v46 = &v74[v75];
            if ( v74 == v46 )
              goto LABEL_92;
            while ( HIWORD(v77[10]) != *v45 )
            {
              if ( v46 == ++v45 )
                goto LABEL_92;
            }
            if ( v46 == v45 )
              goto LABEL_92;
          }
          v47 = HIWORD(v77[5]);
          if ( HIWORD(v77[5]) != 13 )
          {
            v48 = &v74[v75];
            if ( v74 == v48 )
              goto LABEL_153;
            v49 = v74;
            while ( HIWORD(v77[5]) != *v49 )
            {
              if ( v48 == ++v49 )
                goto LABEL_153;
            }
            if ( v49 == v48 )
            {
LABEL_153:
              if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
              {
                v74 = (_DWORD *)qvector_reserve((__int64)&v74, (__int64)v74, v75 + 1, 4);
                v48 = &v74[v75];
              }
              *v48 = v47;
              v32 = BYTE1(v77[10]);
              *(_QWORD *)&v75 = v75 + 1;
              goto LABEL_91;
            }
            goto LABEL_92;
          }
          goto LABEL_194;
        }
        if ( LOWORD(v77[3]) > 0x11Du )
        {
          if ( (unsigned __int16)(LOWORD(v77[3]) - 325) <= 0x2Eu )
          {
            v54 = 0x600004000001LL;
            LOWORD(v10) = LOWORD(v77[3]) - 325;
            if ( _bittest64(&v54, v10) )
              goto LABEL_90;
          }
          goto LABEL_23;
        }
        if ( LOWORD(v77[3]) <= 0xFAu )
        {
          if ( LOWORD(v77[3]) == 181 )
            goto LABEL_90;
          goto LABEL_23;
        }
        v51 = 1LL << (LOBYTE(v77[3]) + 5);
        if ( (v51 & 0x408540001LL) != 0 )
          goto LABEL_90;
        if ( (v51 & 0x180000000LL) == 0 )
        {
LABEL_23:
          if ( BYTE1(v77[10]) != 2 )
          {
            v11 = v76;
            if ( !v76 )
              goto LABEL_94;
LABEL_25:
            if ( sub_2C410(a1, (__int64)v77, 13, 1u) )
              goto LABEL_131;
            if ( v6 )
              goto LABEL_50;
            goto LABEL_49;
          }
          goto LABEL_133;
        }
        goto LABEL_165;
      }
      v55 = v77[7] + 16LL * v77[0];
      v56 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v55 != v56 )
      {
        v56 &= v55;
        if ( v55 == -1 )
          v56 = -1;
      }
      flags = get_flags_ex(v56, 4);
      if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
        goto LABEL_14;
    }
    if ( v6 )
      goto LABEL_72;
    v11 = v76;
    if ( v76 )
    {
      v67 = v76;
      v5 = 0;
      v11 = 0;
      goto LABEL_25;
    }
    v67 = v9;
    v5 = 0;
LABEL_49:
    if ( sub_2C410(a1, (__int64)v77, 14, 1u) )
      goto LABEL_33;
LABEL_50:
    if ( !v11 )
      goto LABEL_51;
LABEL_94:
    v16 = v73;
    v14 = v72;
    v18 = 1;
    v17 = 8 * v73;
    v20 = v77[2] + WORD1(v77[3]);
    v19 = (char *)(v72 + 8 * v73);
    if ( v19 == (char *)v72 )
      goto LABEL_95;
LABEL_53:
    v21 = (char *)v14;
    while ( v20 != *(_QWORD *)v21 )
    {
      v21 += 8;
      if ( v21 == v19 )
        goto LABEL_125;
    }
    if ( v21 != v19 )
    {
      v18 = 0;
      memmove(v21, v21 + 8, v19 - v21 - 8);
      *(_QWORD *)&v73 = v73 - 1;
      goto LABEL_58;
    }
LABEL_125:
    if ( v18 )
    {
LABEL_95:
      v18 = !v6;
      goto LABEL_58;
    }
    if ( !v6 )
      goto LABEL_198;
    v20 = *(_QWORD *)(v14 + v17 - 8);
    if ( v16 )
      goto LABEL_128;
LABEL_58:
    v22 = v70;
    v23 = &v70[v71];
    if ( v70 != v23 )
    {
      while ( *v22 != v20 )
      {
        if ( v23 == ++v22 )
          goto LABEL_63;
      }
      if ( v22 != v23 )
        goto LABEL_131;
    }
LABEL_63:
    if ( v65 != getseg() )
      goto LABEL_131;
    v24 = get_flags_ex(v20, 4);
    if ( v18 && (v24 & 0x1000) != 0 )
    {
LABEL_71:
      if ( v6 )
      {
LABEL_72:
        v67 = v6;
        v14 = v72;
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    v25 = v24 & 0x600;
    if ( v25 == 1536 )
    {
      if ( (v24 & 0x10000000) != 0 )
        break;
    }
    else if ( ((v25 - 512) & 0xFFFFFFFFFFFFFC00LL) == 0 )
    {
      break;
    }
    if ( (v24 & 0x4000) != 0 || !sub_283C0(a1, (__int64)v77, v20, a3) )
      break;
    if ( ++v4 == 20 )
      goto LABEL_71;
  }
  if ( v6 )
  {
LABEL_131:
    v67 = 0;
    v14 = v72;
    goto LABEL_35;
  }
LABEL_33:
  v14 = v72;
  if ( v67 )
    v67 = (_QWORD)v73 == 0;
LABEL_35:
  if ( v14 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v14);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree((__int64)v74);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree((__int64)v70);
  }
  return v67;
}
