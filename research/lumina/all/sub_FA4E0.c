__int64 __fastcall sub_FA4E0(__int64 a1, __int64 a2, __int64 a3, __int16 a4, double a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v9; // r14
  unsigned int v10; // r8d
  __int64 *v11; // r9
  __int16 v12; // di
  __int64 v13; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  __int16 v17; // r12
  int v18; // edx
  char v19; // bp
  char v20; // al
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  char v25; // dl
  int *v26; // rax
  unsigned __int64 v27; // rax
  __int16 v28; // si
  int v29; // ebp
  __int16 v30; // dx
  __int16 v31; // ax
  int v32; // r8d
  int v33; // r8d
  __int16 v34; // cx
  unsigned __int16 v35; // ax
  __int16 v36; // di
  __int16 v37; // cx
  __int16 v38; // bp
  __int16 v39; // ax
  __int16 v40; // r8
  int v41; // eax
  __int16 v42; // cx
  unsigned __int16 v43; // ax
  __int64 v44; // rax
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // esi
  int v51; // eax
  __int16 v52; // dx
  int v53; // edx
  __int16 v54; // di
  __int16 v55; // r9
  int v56; // edx
  __int16 v57; // ax
  __int16 v58; // ax
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // r8d
  int v62; // r8d
  __int64 v63; // rbp
  __int64 v64; // r8
  int v65; // edx
  unsigned __int16 v66; // dx
  unsigned __int16 v67; // ax
  __int64 v68; // rcx
  __int16 v69; // ax
  int v70; // eax
  _QWORD **v71; // rsi
  __int64 v72; // rcx
  _QWORD **v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rsi
  __int16 v76; // ax
  unsigned __int64 v77; // rsi
  __int16 v78; // cx
  __int16 v79; // si
  __int64 v80; // rax
  __int16 i; // cx
  __int16 v82; // [rsp+18h] [rbp-110h]
  __int64 *v83; // [rsp+18h] [rbp-110h]
  __int64 *v84; // [rsp+18h] [rbp-110h]
  __int64 *v85; // [rsp+18h] [rbp-110h]
  __int64 *v86; // [rsp+18h] [rbp-110h]
  __int16 v87; // [rsp+24h] [rbp-104h]
  __int16 v88; // [rsp+26h] [rbp-102h]
  unsigned __int16 v89; // [rsp+28h] [rbp-100h]
  unsigned __int16 v90; // [rsp+2Ah] [rbp-FEh]
  int v91; // [rsp+2Ch] [rbp-FCh]
  int v92; // [rsp+30h] [rbp-F8h]
  __int16 v93; // [rsp+34h] [rbp-F4h]
  __int16 v94; // [rsp+36h] [rbp-F2h]
  __int64 v95; // [rsp+38h] [rbp-F0h]
  __int64 *v96; // [rsp+40h] [rbp-E8h]
  int v97; // [rsp+48h] [rbp-E0h]
  __int64 *v98; // [rsp+50h] [rbp-D8h]
  __int64 v99; // [rsp+58h] [rbp-D0h]
  __int64 v100; // [rsp+60h] [rbp-C8h]
  __int16 v102; // [rsp+6Ah] [rbp-BEh]
  __int64 v104[5]; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int8 v105; // [rsp+99h] [rbp-8Fh]
  unsigned __int64 v106; // [rsp+E8h] [rbp-40h]

  v5 = 7;
  v106 = __readfsqword(0x28u);
  v100 = **(_QWORD **)a1;
  v99 = *(_QWORD *)v100;
  if ( *(_BYTE *)(*(_QWORD *)v100 + 103LL) )
    return v5;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a2;
  v9 = a3;
  v92 = *(_DWORD *)(v6 + 48);
  v93 = *(_WORD *)(v6 + 26);
  v90 = *(_WORD *)(v6 + 52);
  v10 = (v92 & 0x20) == 0 ? 447 : 24;
  v94 = *(_WORD *)(v6 + 28);
  v87 = *(_WORD *)(v6 + 22);
  v102 = *(_WORD *)(v6 + 54);
  if ( (*(_BYTE *)(a3 + 99) & 4) != 0 )
    v10 = ((v92 & 0x20) == 0 ? 447 : 24) & 0xFFFFFFC3;
  v95 = *(_QWORD *)v6;
  v89 = *(_WORD *)(v6 + 24);
  v11 = (__int64 *)sub_FA360(v104, a5, *(_QWORD *)(a1 + 8), *(_DWORD *)(a2 + 64), v89, v10, (_QWORD *)a3);
  *(_WORD *)(v6 + 18) = 0;
  v88 = 0;
  v12 = **(_WORD **)(v9 + 16);
  v97 = v12;
  if ( v12 > 10 )
    v88 = sub_D5CA0(v12);
  if ( !v11 )
    goto LABEL_129;
  v96 = nullptr;
  v98 = nullptr;
  v91 = v90 + 1;
  v13 = v9;
  v15 = v6;
  v16 = v13;
  while ( 1 )
  {
    v17 = *((_WORD *)v11 + 10);
    if ( v17 == 256 || *((char *)v11 + 18) < 0 )
    {
      v18 = *(__int16 *)(*(_QWORD *)(v16 + 8) + 2LL * v89);
      if ( v18 < 0 )
      {
        if ( v18 == -1 )
        {
          v19 = 1;
          goto LABEL_46;
        }
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL)
                          + 16LL * *(__int16 *)(*(_QWORD *)(v16 + 8) + 2LL * v89)
                          + 8)
               & 0xF) != 0 )
      {
        goto LABEL_45;
      }
    }
    if ( (v11[5] & *(_QWORD *)(v15 + 8)) != 0 )
      goto LABEL_45;
    v19 = *((_BYTE *)v11 + 19) & (v17 == 16);
    if ( !v19 )
      break;
LABEL_46:
    v5 = 0;
LABEL_47:
    v11 = (__int64 *)sub_F9FE0(v104, a5);
    if ( !v11 || !v19 )
    {
      v44 = v16;
      v6 = v15;
      v7 = a2;
      v9 = v44;
      goto LABEL_50;
    }
  }
  if ( (*(_BYTE *)(a2 + 60) & 0x48) != 0 && (*(_BYTE *)(*v11 + 4) & 1) == 0 )
  {
LABEL_45:
    v19 = 1;
    goto LABEL_46;
  }
  v20 = *(_BYTE *)(a1 + 32);
  if ( *(_BYTE *)(v16 + 98) && v89 == *(unsigned __int16 *)(v16 + 94) - 1 )
    *(_BYTE *)(a1 + 32) = v20 | 2;
  else
    *(_BYTE *)(a1 + 32) = v20 | 1;
  v21 = *(unsigned __int16 *)(v15 + 56);
  *(_DWORD *)(v15 + 48) = v92;
  *(_WORD *)(v15 + 24) = v89;
  *(_WORD *)(v15 + 26) = v93;
  *(_WORD *)(v15 + 28) = v94;
  v22 = v90;
  *(_WORD *)(v15 + 52) = v90;
  if ( v91 > v21 )
  {
    v83 = v11;
    if ( (unsigned int)sub_DE610(v99, v15, v91) )
      goto LABEL_128;
    v22 = *(unsigned __int16 *)(v15 + 52);
    v11 = v83;
  }
  v23 = *(_QWORD *)(v15 + 64);
  *(_WORD *)(v15 + 52) = v22 + 1;
  *(_QWORD *)(v23 + 8 * v22) = v11;
  *(_QWORD *)v15 = ~*(_QWORD *)(v15 + 8) & (v11[5] | v95);
  if ( (v17 & 1) != 0 )
  {
    v24 = *v11;
    v25 = (v88 > 9) & (*(_BYTE *)(v16 + 99) >> 7);
    if ( (*(_BYTE *)(*v11 + 5) & 8) != 0 )
    {
      v70 = *(unsigned __int16 *)(v15 + 52);
      if ( v70 - 1 <= 0 )
      {
        if ( !v25 )
        {
          v32 = *(_DWORD *)(v15 + 48);
          v28 = 46;
          v82 = a4 + 46;
          goto LABEL_30;
        }
        LOWORD(v29) = 46;
        v28 = 46;
LABEL_131:
        v86 = v11;
        v31 = sub_D5CA0(v29);
        v11 = v86;
        goto LABEL_124;
      }
      v71 = *(_QWORD ***)(v15 + 64);
      v72 = (unsigned int)(v70 - 2);
      v29 = 46;
      v73 = v71 + 1;
      v74 = (__int64)&v71[v72 + 1];
      while ( 1 )
      {
        v75 = *v71;
        if ( v75 && *v75 == v24 )
          v29 = 0;
        v71 = v73;
        if ( (_QWORD **)v74 == v73 )
          break;
        ++v73;
      }
      v28 = v29;
    }
    else
    {
      v26 = *(int **)(v24 + 32);
      if ( !v26 || (v27 = *v26, !(_DWORD)v27) )
      {
        if ( !v25 )
        {
          v32 = *(_DWORD *)(v15 + 48);
          v28 = 0;
          v82 = a4;
LABEL_30:
          v33 = v32 | 4;
          *(_DWORD *)(v15 + 48) = v33;
          goto LABEL_31;
        }
        LOWORD(v29) = 0;
        v30 = *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL * v89);
        v28 = 0;
        v31 = 0;
LABEL_124:
        if ( (__int16)(v30 + v31 - v88 + 10 - v28) >= 0 )
        {
          v32 = *(_DWORD *)(v15 + 48);
          v28 = v29;
          v82 = v29 + a4;
          goto LABEL_30;
        }
        if ( a4 <= 1 && (*(_BYTE *)(v99 + 98) & 2) == 0 )
        {
          v28 = v29;
          v82 = a4 + v29;
          v32 = *(_DWORD *)(v15 + 48) | 0x100000;
          goto LABEL_30;
        }
        goto LABEL_45;
      }
      if ( v27 > 7 )
      {
        _BitScanReverse64(&v77, v27);
        v78 = 60 - (v77 ^ 0x3F);
        v27 >>= v78;
        v79 = 10 * v78 + 30;
      }
      else
      {
        if ( v27 == 1 )
        {
          v28 = 0;
          if ( !v25 )
            goto LABEL_112;
          LOWORD(v29) = 0;
          v30 = *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL * v89);
          v31 = 0;
          goto LABEL_124;
        }
        for ( i = 40; ; i -= 10 )
        {
          v27 *= 2LL;
          if ( v27 > 7 )
            break;
        }
        v79 = i - 20;
      }
      v28 = word_1BACD0[v27 & 7] + v79;
      v29 = v28;
    }
    if ( !v25 )
    {
LABEL_112:
      v32 = *(_DWORD *)(v15 + 48);
      v82 = v28 + a4;
      goto LABEL_30;
    }
    v30 = *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL * v89);
    if ( v29 <= 10 )
    {
      v31 = 0;
      goto LABEL_124;
    }
    goto LABEL_131;
  }
  v46 = *(_DWORD *)(v15 + 48);
  if ( (v17 & 0x82) != 0 )
  {
    v33 = v46 | 1;
    v47 = *(__int16 *)(*(_QWORD *)(v16 + 8) + 2LL * v89);
    *(_DWORD *)(v15 + 48) = v46 | 1;
    if ( v47 == -1 )
      goto LABEL_117;
    if ( v47 >= 0 && !a4 )
    {
      v48 = *(unsigned __int16 *)(v16 + 94);
      if ( v89 == v48 - 1 )
      {
        if ( (*(_BYTE *)(v16 + 99) & 8) != 0 || (_WORD)v48 == 1 && *(_BYTE *)(v16 + 98) && v17 == 2 )
        {
LABEL_117:
          v33 = v46 | 0x1001;
          *(_DWORD *)(v15 + 48) = v46 | 0x1001;
        }
        else
        {
          v33 = v46 | 0x10001;
          *(_DWORD *)(v15 + 48) = v46 | 0x10001;
        }
      }
    }
    if ( v105 > 1u )
    {
      v49 = v33 | 0x200000;
      v28 = 0;
      *(_DWORD *)(v15 + 48) = v49;
      v34 = *(_WORD *)(v15 + 22);
      v82 = a4;
      if ( (v49 & 2) != 0 )
      {
LABEL_64:
        v50 = 0;
        v51 = v34;
        if ( v96 )
        {
LABEL_65:
          v52 = *((_WORD *)v96 + 8);
          if ( v52 <= 0 )
          {
            v34 += v52;
            v50 = 1;
          }
          else
          {
            v50 = 1;
            if ( *((char *)v96 + 18) >= 0 )
              v34 -= 20;
          }
        }
        v53 = 0;
        if ( v98 )
        {
LABEL_69:
          v54 = *((_WORD *)v98 + 8);
          if ( v54 <= 0 )
          {
            v34 += v54;
          }
          else if ( *((char *)v98 + 18) >= 0 )
          {
            v34 -= 20;
          }
          v53 = 1;
          if ( v96 )
          {
            if ( *((__int16 *)v96 + 8) > 0 )
            {
              v55 = v34;
              v34 -= 20;
              if ( v54 <= 0 )
                v34 = v55;
            }
          }
        }
        v56 = v51 - (v50 + v53);
        if ( v34 < 10 )
          v34 = 10;
        v57 = v34;
        if ( v34 > v56 )
          v57 = v56;
        v38 = v57;
        *(_WORD *)(v15 + 22) = v57;
LABEL_35:
        v39 = sub_CB800(
                v88,
                (__int16)(v38 + 15 * *(__int16 *)(v16 + 92) / *(__int16 *)(*(_QWORD *)(a2 + 32) + 60LL) + 1));
        if ( (v40 & 0x140) == 0 )
          v39 = sub_CB800(v39, (__int16)(v38 + 16));
        *(_WORD *)(v15 + 20) = v82 + v39;
        *(_WORD *)(v15 + 22) = v38 + v82;
        sub_CE9D0(*(_QWORD *)(a1 + 8), v15, v97);
        v5 = sub_DE680(a1, v15);
        v41 = *(_DWORD *)(v15 + 48);
        v42 = v38;
        if ( (v41 & 2) != 0 )
          v42 = v87;
        *(_WORD *)(v15 + 22) = v42;
        if ( (v41 & 0x10) == 0 )
        {
          v43 = *(_WORD *)(v15 + 24);
          if ( v43 < *(_WORD *)(v16 + 96) && (v43 < *(_WORD *)(v16 + 94) || (*(_BYTE *)(v16 + 99) & 3) != 2) )
            sub_FA4E0(a1, a2, v16, (unsigned int)v82);
        }
        v19 = v5 == 0;
        *(_WORD *)(v15 + 22) = v87;
        goto LABEL_47;
      }
LABEL_32:
      v35 = *(_WORD *)(v15 + 24) + 1;
      *(_WORD *)(v15 + 24) = v35;
      v36 = *((_WORD *)v11 + 8);
      if ( v36 > 0 || *(__int16 *)(*(_QWORD *)(v16 + 8) + 2LL * v89) < 0 )
      {
        v37 = *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL * v35) + v34 - *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL * v35 - 2);
        v38 = v37;
        *(_WORD *)(v15 + 22) = v37;
        if ( (v17 & 0x100) != 0 )
        {
          v38 = v37 + 10;
          *(_WORD *)(v15 + 22) = v37 + 10;
        }
      }
      else
      {
        v38 = v36 + v34 - v28;
        *(_WORD *)(v15 + 22) = v38;
      }
      goto LABEL_35;
    }
    v28 = 0;
    v82 = a4;
LABEL_31:
    v34 = *(_WORD *)(v15 + 22);
    if ( (v33 & 2) != 0 )
      goto LABEL_64;
    goto LABEL_32;
  }
  if ( (v17 & 0x100) != 0 )
  {
    v28 = 0;
    LOBYTE(v33) = v46 | 8;
    *(_DWORD *)(v15 + 48) = v46 | 8;
    v82 = a4;
    goto LABEL_31;
  }
  if ( (v17 & 0x24) == 0 )
  {
    *(_DWORD *)(v15 + 48) = v46 | 0x12;
    v85 = v11;
    v76 = sub_F3FD0(v100, *(_DWORD *)(a2 + 64), v16, v89, v11, a5);
    v33 = *(_DWORD *)(v15 + 48);
    *(_WORD *)(v15 + 28) = v76;
    v11 = v85;
    if ( (v33 & 0x20) == 0 )
    {
      v34 = *(_WORD *)(v15 + 22);
      if ( (v33 & 2) != 0 )
      {
        v51 = v34;
        v98 = v85;
        v96 = nullptr;
        v82 = a4;
        v50 = 0;
        goto LABEL_69;
      }
      v98 = v85;
      v28 = 0;
      v96 = nullptr;
      v82 = a4;
      goto LABEL_32;
    }
    v28 = 0;
    v98 = v85;
    v96 = *(__int64 **)(*(_QWORD *)(v15 + 64) + 8LL * *(unsigned __int16 *)(v15 + 52) - 16);
    v82 = a4;
    goto LABEL_31;
  }
  *(_DWORD *)(v15 + 48) = v46 | 0x22;
  v84 = v11;
  v58 = sub_F3FD0(v100, *(_DWORD *)(a2 + 64), v16, v89, v11, a5);
  v11 = v84;
  *(_WORD *)(v15 + 26) = v58;
  if ( (*((_BYTE *)v84 + 19) & 1) == 0 )
  {
    v62 = *(_DWORD *)(v15 + 48);
    v98 = nullptr;
    goto LABEL_89;
  }
  v98 = v84 + 7;
  v59 = *(unsigned __int16 *)(v15 + 52);
  if ( (int)v59 + 1 <= *(unsigned __int16 *)(v15 + 56) )
    goto LABEL_88;
  if ( !(unsigned int)sub_DE610(v99, v15, (int)v59 + 1) )
  {
    v59 = *(unsigned __int16 *)(v15 + 52);
    v11 = v84;
LABEL_88:
    v60 = *(_QWORD *)(v15 + 64);
    *(_WORD *)(v15 + 52) = v59 + 1;
    *(_QWORD *)(v60 + 8 * v59) = v98;
    v61 = *(_DWORD *)(v15 + 48);
    *(_WORD *)(v15 + 28) = 1;
    v62 = v61 | 0x10;
    *(_DWORD *)(v15 + 48) = v62;
LABEL_89:
    v34 = *(_WORD *)(v15 + 22);
    if ( (v62 & 2) != 0 )
    {
      v51 = v34;
      v96 = v11;
      v82 = a4;
      goto LABEL_65;
    }
    v96 = v11;
    v28 = 0;
    v82 = a4;
    goto LABEL_32;
  }
LABEL_128:
  v80 = v16;
  v6 = v15;
  v7 = a2;
  v9 = v80;
LABEL_129:
  v5 = 0;
LABEL_50:
  *(_WORD *)(v6 + 28) = v94;
  *(_QWORD *)v6 = v95;
  *(_WORD *)(v6 + 26) = v93;
  *(_DWORD *)(v6 + 48) = v92;
  *(_WORD *)(v6 + 24) = v89;
  *(_WORD *)(v6 + 54) = v102;
  *(_WORD *)(v6 + 22) = v87;
  *(_WORD *)(v6 + 52) = v90;
  if ( v89 == v102
    && v89 + 1 < *(unsigned __int16 *)(v9 + 94)
    && v89 == v90
    && (*(_BYTE *)(v9 + 99) & 0xC0) == 0x80
    && (*(_BYTE *)(v99 + 97) & 0x40) == 0 )
  {
    v63 = v89 + 1LL;
    v64 = 2 * v63;
    if ( *(__int16 *)(*(_QWORD *)(v9 + 16) + 2 * v63) > 41 )
    {
      v65 = v90 + 1;
      if ( v65 <= *(unsigned __int16 *)(v6 + 56) )
      {
        v66 = v89;
        v67 = v89;
LABEL_99:
        v68 = *(_QWORD *)(v6 + 64);
        *(_WORD *)(v6 + 54) = v67 + 1;
        *(_WORD *)(v6 + 24) = v66 + 1;
        v5 = 0;
        *(_WORD *)(v6 + 52) = v90 + 1;
        *(_QWORD *)(v68 + 8LL * v90) = 0;
        *(_DWORD *)(v6 + 48) |= 0x8000u;
        v69 = *(_WORD *)(*(_QWORD *)(v9 + 16) + v64 - 2) - *(_WORD *)(*(_QWORD *)(v9 + 16) + 2 * v63);
        *(_WORD *)(v6 + 22) -= v69;
        sub_FA4E0(a1, v7, v9, (unsigned int)(__int16)(v69 + a4 + 5));
        *(_WORD *)(v6 + 22) = v87;
        *(_WORD *)(v6 + 24) = v89;
        *(_WORD *)(v6 + 54) = v102;
        *(_DWORD *)(v6 + 48) = v92;
      }
      else
      {
        v5 = sub_DE610(v99, v6, v65);
        v64 = 2 * v63;
        if ( !v5 )
        {
          v66 = *(_WORD *)(v6 + 24);
          v67 = *(_WORD *)(v6 + 54);
          v90 = *(_WORD *)(v6 + 52);
          goto LABEL_99;
        }
      }
    }
  }
  return v5;
}
