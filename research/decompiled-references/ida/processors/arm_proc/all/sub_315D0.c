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
  char *v14; // rcx
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
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 *v30; // rax
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // r14d
  __int64 v35; // rsi
  _DWORD *v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rdi
  _DWORD *v39; // rax
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rsi
  _DWORD *v44; // rax
  _DWORD *v45; // rcx
  int v46; // r14d
  _DWORD *v47; // rdx
  _DWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rax
  int flags; // eax
  __int64 v55; // rax
  _DWORD *v56; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rcx
  __int64 v60; // [rsp+10h] [rbp-228h]
  bool v62; // [rsp+1Eh] [rbp-21Ah]
  char v63; // [rsp+1Fh] [rbp-219h]
  int v64; // [rsp+2Ch] [rbp-20Ch] BYREF
  __int64 v65; // [rsp+30h] [rbp-208h]
  __int128 v66; // [rsp+38h] [rbp-200h]
  __int64 v67; // [rsp+50h] [rbp-1E8h]
  __int128 v68; // [rsp+58h] [rbp-1E0h]
  __int64 v69; // [rsp+70h] [rbp-1C8h]
  __int128 v70; // [rsp+78h] [rbp-1C0h]
  char v71; // [rsp+88h] [rbp-1B0h]
  _QWORD v72[53]; // [rsp+90h] [rbp-1A8h] BYREF

  v72[45] = __readfsqword(0x28u);
  qmemcpy(v72, a2, 0x168u);
  v60 = getseg();
  if ( !v60 )
    return 0;
  v3 = *(_BYTE *)(a1 + 728) == 0;
  v65 = 0;
  v69 = 0;
  v71 = 1;
  v67 = 0;
  v66 = 0;
  v70 = 0;
  v68 = 0;
  if ( v3 && (unsigned int)get_auto_state() - 60 > 0x1E )
    v63 = has_jump_or_flow_xref() ^ 1;
  else
    v63 = 0;
  v62 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v71 = 1;
    v7 = sub_29790((__int64)v72, &v64);
    if ( v7 )
    {
      if ( v4 <= 0xB && (v64 & 0x4000) != 0 )
      {
        if ( (_QWORD)v68 )
          goto LABEL_131;
        if ( (a3 & 6) == 0 )
        {
          v62 = v7;
          v14 = (char *)v67;
          goto LABEL_35;
        }
        if ( v6 )
          goto LABEL_131;
        v6 = v7;
      }
      v8 = bitcount();
      v71 = 0;
      v5 += 4 * v8;
LABEL_13:
      v9 = v63 & (v5 == 0);
      if ( !v9 )
        goto LABEL_14;
      goto LABEL_45;
    }
    if ( !(unsigned __int8)sub_29880((__int64)v72, &v64, 0) )
      goto LABEL_13;
    v5 -= 4 * bitcount();
    if ( v5 < 0 )
      goto LABEL_131;
    --v4;
    v71 = 0;
    v9 = v63 & (v5 == 0);
    if ( !v9 )
    {
LABEL_14:
      if ( v6 )
        goto LABEL_15;
      v12 = LOWORD(v72[3]);
      if ( LOWORD(v72[3]) <= 0x50u )
      {
        if ( LOWORD(v72[3]) <= 0x11u )
          goto LABEL_77;
        v13 = 0x402000008701D095LL;
        if ( _bittest64(&v13, (unsigned int)LOWORD(v72[3]) - 18) )
          goto LABEL_90;
        if ( LOWORD(v72[3]) != 23 )
        {
          if ( LOWORD(v72[3]) != 24 )
            goto LABEL_33;
          goto LABEL_99;
        }
        goto LABEL_139;
      }
      if ( LOWORD(v72[3]) > 0x11Du )
      {
        if ( (unsigned __int16)(LOWORD(v72[3]) - 325) > 0x2Eu )
          goto LABEL_33;
        v55 = 0x600004000001LL;
        LOWORD(v12) = LOWORD(v72[3]) - 325;
        if ( !_bittest64(&v55, v12) )
          goto LABEL_33;
        goto LABEL_90;
      }
      if ( LOWORD(v72[3]) <= 0xFAu )
      {
        if ( LOWORD(v72[3]) != 181 )
          goto LABEL_33;
        goto LABEL_90;
      }
      v49 = 1LL << (LOBYTE(v72[3]) + 5);
      if ( (v49 & 0x408540001LL) != 0 )
        goto LABEL_90;
      if ( (v49 & 0x180000000LL) == 0 )
        goto LABEL_33;
LABEL_165:
      v51 = v72[12] + 16LL * v72[0];
      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v51 != v27 )
      {
        v27 &= v51;
        if ( v51 == -1 )
          v27 = -1;
      }
      v28 = v68;
      v29 = (__int64 *)(v67 + 8 * v68);
      if ( (__int64 *)v67 != v29 )
      {
        v52 = (__int64 *)v67;
        while ( v27 != *v52 )
        {
          if ( v29 == ++v52 )
            goto LABEL_173;
        }
        if ( v29 != v52 )
          goto LABEL_90;
      }
      goto LABEL_173;
    }
LABEL_45:
    if ( !sub_312C0(a1, (__int64)v72, !v6) )
    {
      if ( LOWORD(v72[3]) != 3 )
        goto LABEL_14;
      if ( (v72[4] & 0xF) != 0xE )
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
            if ( (v72[4] & 0xF) == 0xE )
              goto LABEL_71;
            v26 = v72[7] + 16LL * v72[0];
            v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
            if ( v26 != v27 )
            {
              v27 &= v26;
              if ( v26 == -1 )
                v27 = -1;
            }
            v28 = v68;
            v29 = (__int64 *)(v67 + 8 * v68);
            if ( (__int64 *)v67 != v29 )
            {
              v30 = (__int64 *)v67;
              while ( v27 != *v30 )
              {
                if ( v29 == ++v30 )
                  goto LABEL_173;
              }
              if ( v30 != v29 )
              {
LABEL_90:
                v31 = BYTE1(v72[10]);
                goto LABEL_91;
              }
            }
LABEL_173:
            if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v28 + 1) )
            {
              v67 = qvector_reserve();
              v29 = (__int64 *)(v67 + 8 * v68);
            }
            *v29 = v27;
            v31 = BYTE1(v72[10]);
            *(_QWORD *)&v68 = v68 + 1;
LABEL_91:
            if ( v31 != 2 )
              goto LABEL_92;
LABEL_133:
            v41 = v66;
            v42 = v72[12];
            v43 = v65;
            if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 1) )
            {
              v65 = qvector_reserve();
              v43 = v65;
              v41 = v66;
            }
            *(_QWORD *)(v43 + 8 * v41) = v42;
            v11 = v71;
            *(_QWORD *)&v66 = v66 + 1;
            if ( v71 )
              goto LABEL_25;
LABEL_93:
            if ( v6 )
              goto LABEL_94;
            v11 = 1;
            goto LABEL_49;
          }
LABEL_114:
          v31 = BYTE1(v72[10]);
          if ( BYTE1(v72[5]) != 1 || BYTE1(v72[10]) != 1 )
            goto LABEL_91;
          if ( HIWORD(v72[10]) == 13 )
          {
            if ( BYTE1(v72[15]) == 5 )
            {
              v40 = HIWORD(v72[5]);
              if ( HIWORD(v72[5]) == 13 )
              {
                v71 = 0;
              }
              else
              {
                v57 = v70;
                v58 = (_DWORD *)(v69 + 4 * v70);
                if ( (_DWORD *)v69 != v58 )
                {
                  v56 = (_DWORD *)v69;
LABEL_206:
                  while ( *v56 != v40 )
                  {
                    if ( ++v56 == v58 )
                      goto LABEL_208;
                  }
                  if ( v56 != v58 )
                    goto LABEL_92;
                }
LABEL_208:
                if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v57 + 1) )
                {
                  v69 = qvector_reserve();
                  v58 = (_DWORD *)(v69 + 4 * v70);
                }
                *v58 = v40;
                v31 = BYTE1(v72[10]);
                *(_QWORD *)&v70 = v70 + 1;
                if ( HIWORD(v72[5]) != 13 || HIWORD(v72[10]) != 13 )
                  goto LABEL_91;
              }
              if ( LOWORD(v72[3]) == 12 )
                v5 += LODWORD(v72[16]);
              else
                v5 -= LODWORD(v72[16]);
              goto LABEL_91;
            }
          }
          else
          {
            v38 = (_DWORD *)(v69 + 4 * v70);
            v39 = (_DWORD *)v69;
            if ( (_DWORD *)v69 != v38 )
            {
              while ( HIWORD(v72[10]) != *v39 )
              {
                if ( v38 == ++v39 )
                  goto LABEL_92;
              }
              if ( v39 != v38 && BYTE1(v72[15]) == 5 )
              {
                v40 = HIWORD(v72[5]);
                if ( HIWORD(v72[5]) != 13 )
                {
                  v56 = (_DWORD *)v69;
                  v57 = v70;
                  v58 = (_DWORD *)(v69 + 4 * v70);
                  goto LABEL_206;
                }
                v71 = 0;
              }
            }
          }
LABEL_92:
          v11 = v71;
          if ( v71 )
            goto LABEL_25;
          goto LABEL_93;
        }
LABEL_15:
        if ( sub_21B30((__int64)v72) && (v72[4] & 0xF) == 0xE )
        {
          if ( !v71 )
          {
LABEL_51:
            v16 = v68;
            if ( !(_QWORD)v68 )
            {
              v62 = 1;
              v14 = (char *)v67;
              goto LABEL_35;
            }
            v14 = (char *)v67;
            v17 = 8 * v68;
            v18 = 0;
            v19 = (char *)(v67 + 8 * v68);
            v20 = v72[2] + WORD1(v72[3]);
            if ( (char *)v67 == v19 )
            {
              if ( !v6 )
              {
LABEL_195:
                v62 = 0;
                goto LABEL_35;
              }
              v20 = *(_QWORD *)(v67 - 8);
LABEL_128:
              v18 = 0;
              *(_QWORD *)&v68 = v16 - 1;
              goto LABEL_58;
            }
            goto LABEL_53;
          }
          v11 = 0;
          goto LABEL_25;
        }
        v10 = LOWORD(v72[3]);
        if ( LOWORD(v72[3]) <= 0x50u )
        {
          if ( LOWORD(v72[3]) <= 0x11u )
          {
            if ( (unsigned __int16)(LOWORD(v72[3]) - 2) <= 0xEu )
            {
              if ( ((1LL << SLOBYTE(v72[3])) & 0x1A6C4) != 0 )
                goto LABEL_90;
              if ( ((1LL << SLOBYTE(v72[3])) & 0x5000) != 0 )
                goto LABEL_114;
              if ( LOWORD(v72[3]) == 3 )
                goto LABEL_81;
            }
            goto LABEL_23;
          }
          v32 = 0x402000008701D095LL;
          if ( _bittest64(&v32, (unsigned int)LOWORD(v72[3]) - 18) )
            goto LABEL_90;
          if ( LOWORD(v72[3]) != 23 )
          {
            if ( LOWORD(v72[3]) != 24 )
              goto LABEL_23;
LABEL_99:
            v31 = BYTE1(v72[10]);
            if ( BYTE1(v72[5]) != 1 || BYTE1(v72[10]) != 1 )
              goto LABEL_91;
            if ( HIWORD(v72[10]) != 13 )
              goto LABEL_92;
            if ( BYTE1(v72[15]) != 5 )
              goto LABEL_92;
            if ( v72[16] > 0x1Fu )
              goto LABEL_92;
            v33 = 2147516544LL;
            if ( !_bittest64(&v33, v72[16]) )
              goto LABEL_92;
            v34 = HIWORD(v72[5]);
            if ( HIWORD(v72[5]) != 13 )
            {
              v35 = v69;
              v36 = (_DWORD *)(v69 + 4 * v70);
              if ( (_DWORD *)v69 == v36 )
                goto LABEL_111;
              v37 = (_DWORD *)v69;
              while ( HIWORD(v72[5]) != *v37 )
              {
                if ( v36 == ++v37 )
                  goto LABEL_111;
              }
              if ( v36 == v37 )
              {
LABEL_111:
                if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
                {
                  v69 = qvector_reserve();
                  v35 = v69;
                }
                *(_DWORD *)(v35 + 4 * v70) = v34;
                v31 = BYTE1(v72[10]);
                *(_QWORD *)&v70 = v70 + 1;
                goto LABEL_91;
              }
              goto LABEL_92;
            }
LABEL_191:
            v71 = 0;
            goto LABEL_93;
          }
LABEL_139:
          v31 = BYTE1(v72[10]);
          if ( BYTE1(v72[5]) != 1 || BYTE1(v72[10]) != 1 )
            goto LABEL_91;
          if ( HIWORD(v72[10]) != 13 )
          {
            v44 = (_DWORD *)v69;
            v45 = (_DWORD *)(v69 + 4 * v70);
            if ( (_DWORD *)v69 == v45 )
              goto LABEL_92;
            while ( HIWORD(v72[10]) != *v44 )
            {
              if ( v45 == ++v44 )
                goto LABEL_92;
            }
            if ( v45 == v44 )
              goto LABEL_92;
          }
          v46 = HIWORD(v72[5]);
          if ( HIWORD(v72[5]) != 13 )
          {
            v47 = (_DWORD *)(v69 + 4 * v70);
            if ( (_DWORD *)v69 == v47 )
              goto LABEL_153;
            v48 = (_DWORD *)v69;
            while ( HIWORD(v72[5]) != *v48 )
            {
              if ( v47 == ++v48 )
                goto LABEL_153;
            }
            if ( v48 == v47 )
            {
LABEL_153:
              if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
              {
                v69 = qvector_reserve();
                v47 = (_DWORD *)(v69 + 4 * v70);
              }
              *v47 = v46;
              v31 = BYTE1(v72[10]);
              *(_QWORD *)&v70 = v70 + 1;
              goto LABEL_91;
            }
            goto LABEL_92;
          }
          goto LABEL_191;
        }
        if ( LOWORD(v72[3]) > 0x11Du )
        {
          if ( (unsigned __int16)(LOWORD(v72[3]) - 325) <= 0x2Eu )
          {
            v53 = 0x600004000001LL;
            LOWORD(v10) = LOWORD(v72[3]) - 325;
            if ( _bittest64(&v53, v10) )
              goto LABEL_90;
          }
          goto LABEL_23;
        }
        if ( LOWORD(v72[3]) <= 0xFAu )
        {
          if ( LOWORD(v72[3]) == 181 )
            goto LABEL_90;
          goto LABEL_23;
        }
        v50 = 1LL << (LOBYTE(v72[3]) + 5);
        if ( (v50 & 0x408540001LL) != 0 )
          goto LABEL_90;
        if ( (v50 & 0x180000000LL) == 0 )
        {
LABEL_23:
          if ( BYTE1(v72[10]) != 2 )
          {
            v11 = v71;
            if ( !v71 )
              goto LABEL_94;
LABEL_25:
            if ( sub_2C410(a1, (__int64)v72, 13, 1u) )
              goto LABEL_131;
            if ( v6 )
              goto LABEL_50;
            goto LABEL_49;
          }
          goto LABEL_133;
        }
        goto LABEL_165;
      }
      flags = get_flags_ex();
      if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
        goto LABEL_14;
    }
    if ( v6 )
      goto LABEL_72;
    v11 = v71;
    if ( v71 )
    {
      v62 = v71;
      v5 = 0;
      v11 = 0;
      goto LABEL_25;
    }
    v62 = v9;
    v5 = 0;
LABEL_49:
    if ( sub_2C410(a1, (__int64)v72, 14, 1u) )
      goto LABEL_33;
LABEL_50:
    if ( !v11 )
      goto LABEL_51;
LABEL_94:
    v16 = v68;
    v14 = (char *)v67;
    v18 = 1;
    v17 = 8 * v68;
    v20 = v72[2] + WORD1(v72[3]);
    v19 = (char *)(v67 + 8 * v68);
    if ( v19 == (char *)v67 )
      goto LABEL_95;
LABEL_53:
    v21 = v14;
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
      *(_QWORD *)&v68 = v68 - 1;
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
      goto LABEL_195;
    v20 = *(_QWORD *)&v14[v17 - 8];
    if ( v16 )
      goto LABEL_128;
LABEL_58:
    v22 = (_QWORD *)v65;
    v23 = (_QWORD *)(v65 + 8 * v66);
    if ( (_QWORD *)v65 != v23 )
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
    if ( v60 != getseg() )
      goto LABEL_131;
    v24 = get_flags_ex();
    if ( v18 && (v24 & 0x1000) != 0 )
    {
LABEL_71:
      if ( v6 )
      {
LABEL_72:
        v62 = v6;
        v14 = (char *)v67;
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
    if ( (v24 & 0x4000) != 0 || !sub_283C0(a1, (__int64)v72, v20, a3) )
      break;
    if ( ++v4 == 20 )
      goto LABEL_71;
  }
  if ( v6 )
  {
LABEL_131:
    v62 = 0;
    v14 = (char *)v67;
    goto LABEL_35;
  }
LABEL_33:
  v14 = (char *)v67;
  if ( v62 )
    v62 = (_QWORD)v68 == 0;
LABEL_35:
  if ( v14 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  return v62;
}

