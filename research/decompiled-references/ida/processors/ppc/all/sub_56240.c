unsigned __int64 __fastcall sub_56240(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 insn; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  char *v7; // rdx
  char v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r8
  int v13; // r9d
  _BYTE *v14; // r10
  _BYTE *v15; // r13
  char *v17; // r13
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int16 v25; // ax
  __int16 v26; // r13
  _WORD *v27; // rax
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  char *v33; // r12
  char v34; // al
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int16 v42; // r11
  _WORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  __int16 v46; // ax
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  _WORD *v51; // rax
  _WORD *v52; // rax
  unsigned __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // rsi
  size_t v59; // rdx
  __int64 v60; // r12
  unsigned __int64 v61; // rax
  char *v62; // r12
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  char v69; // [rsp+Fh] [rbp-349h]
  __int64 v70; // [rsp+10h] [rbp-348h]
  _DWORD *v71; // [rsp+20h] [rbp-338h]
  unsigned __int64 v72; // [rsp+20h] [rbp-338h]
  __int64 v73; // [rsp+20h] [rbp-338h]
  _DWORD *v74; // [rsp+20h] [rbp-338h]
  _DWORD *v75; // [rsp+20h] [rbp-338h]
  __int64 v76; // [rsp+20h] [rbp-338h]
  __int16 v77; // [rsp+20h] [rbp-338h]
  _DWORD *v78; // [rsp+20h] [rbp-338h]
  _DWORD *v79; // [rsp+28h] [rbp-330h]
  int v80; // [rsp+28h] [rbp-330h]
  __int64 v81; // [rsp+28h] [rbp-330h]
  int v82; // [rsp+28h] [rbp-330h]
  __int64 v83; // [rsp+28h] [rbp-330h]
  _BYTE *v84; // [rsp+30h] [rbp-328h]
  __int64 v85; // [rsp+30h] [rbp-328h]
  _BYTE *v86; // [rsp+30h] [rbp-328h]
  __int64 v87; // [rsp+30h] [rbp-328h]
  _DWORD *v88; // [rsp+38h] [rbp-320h]
  _DWORD *v89; // [rsp+38h] [rbp-320h]
  _BYTE v90[360]; // [rsp+40h] [rbp-318h] BYREF
  char v91; // [rsp+1A8h] [rbp-1B0h] BYREF
  _BYTE v92[360]; // [rsp+1B0h] [rbp-1A8h] BYREF
  unsigned __int64 v93; // [rsp+318h] [rbp-40h]

  v2 = a1 + 96;
  v93 = __readfsqword(0x28u);
  insn = (__int64)a2;
  *(_WORD *)(a1 + 170) = 1;
  v5 = *(_QWORD *)(a1 + 96);
  v70 = v2;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v5, a2);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v6, a2);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v7 = &v90[40];
  memset(v90, 255, 24);
  *(_QWORD *)&v90[24] = 0;
  *(_QWORD *)&v90[32] = 0;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( &v91 != v7 );
  v69 = 0;
  v8 = 1;
  do
  {
    if ( (get_flags_ex(insn, 4) & 0x10000) == 0 )
      break;
    v9 = insn;
    insn = decode_prev_insn(v90, insn, 0.0);
    if ( insn == -1 )
      break;
    if ( *(_WORD *)&v90[24] > 0x84u )
    {
      switch ( *(_WORD *)&v90[24] )
      {
        case 0x124:
          if ( !v69 )
          {
            LOBYTE(v11) = *(_WORD *)&v90[86] == 0;
            LOBYTE(v10) = *(_WORD *)&v90[86] == 0 || *(_WORD *)&v90[86] == 11;
            if ( (_BYTE)v10 )
            {
              v33 = (char *)(a1 + 216);
              if ( *(_WORD *)&v90[86] )
                v33 = (char *)(a1 + 256);
LABEL_81:
              v34 = *v33;
              v35 = *((_QWORD *)v33 + 2);
              *((_WORD *)v33 + 4) = 280;
              v36 = *(_QWORD *)&v90[16];
              *v33 = v34 & 0xFC | 2;
              if ( v35 )
              {
                *((_QWORD *)v33 + 3) = 0;
                qfree(v35, (const char *)v9);
                v10 = *((_QWORD *)v33 + 3);
                v11 = 0;
                v37 = 0;
                *((_QWORD *)v33 + 2) = 0;
                *((_QWORD *)v33 + 4) = 0;
                v9 = v10 + 1;
                if ( v10 == -1 )
                {
LABEL_83:
                  *(_QWORD *)(v37 + 8 * v10) = v36;
                  v69 = 1;
                  ++*((_QWORD *)v33 + 3);
                  v8 = 0;
                  continue;
                }
              }
              else
              {
                v10 = *((_QWORD *)v33 + 3);
                v11 = *((_QWORD *)v33 + 4);
                v37 = 0;
                v9 = v10 + 1;
                if ( v11 >= v10 + 1 )
                  goto LABEL_83;
              }
              v54 = v9;
              v9 = 0;
              v37 = qvector_reserve(v33 + 16, 0, v54, 8);
              v10 = *((_QWORD *)v33 + 3);
              *((_QWORD *)v33 + 2) = v37;
              goto LABEL_83;
            }
            if ( *(_WORD *)&v90[86] == 12 )
            {
              v33 = (char *)(a1 + 296);
              goto LABEL_81;
            }
          }
          break;
        case 0x483:
          goto LABEL_74;
        case 0x119:
          if ( v90[41] == 1 && *(_WORD *)&v90[46] == 1 )
          {
            if ( *(_WORD *)&v90[86] == 11 || !*(_WORD *)&v90[86] )
            {
              v17 = (char *)(a1 + 256);
              if ( !*(_WORD *)&v90[86] )
                v17 = (char *)(a1 + 216);
            }
            else
            {
              v17 = (char *)(a1 + 296);
              if ( *(_WORD *)&v90[86] != 12 )
                break;
            }
            *(_WORD *)(a1 + 170) = *(_WORD *)&v90[86];
            v18 = *v17;
            v19 = *((_QWORD *)v17 + 2);
            v12 = *(_DWORD **)&v90[16];
            *((_WORD *)v17 + 4) = 1;
            *v17 = v18 & 0xFC | 2;
            if ( v19 )
            {
              *((_QWORD *)v17 + 3) = 0;
              v71 = v12;
              qfree(v19, (_BYTE *)&dword_0 + 1);
              *((_QWORD *)v17 + 2) = 0;
              v12 = v71;
              v11 = 0;
              *((_QWORD *)v17 + 4) = 0;
            }
            else
            {
              v11 = *((_QWORD *)v17 + 4);
            }
            v20 = *((_QWORD *)v17 + 3);
            v21 = 0;
            if ( v11 < v20 + 1 )
            {
              v75 = v12;
              v21 = qvector_reserve(v17 + 16, 0, v20 + 1, 8);
              v20 = *((_QWORD *)v17 + 3);
              v12 = v75;
              *((_QWORD *)v17 + 2) = v21;
            }
            *(_QWORD *)(v21 + 8 * v20) = v12;
            ++*((_QWORD *)v17 + 3);
            v22 = *(_QWORD *)(a1 + 152);
            goto LABEL_95;
          }
          break;
        default:
          goto LABEL_15;
      }
    }
    else if ( *(_WORD *)&v90[24] <= 0x57u )
    {
      if ( *(_WORD *)&v90[24] <= 5u )
      {
        if ( *(_WORD *)&v90[24] > 3u )
        {
LABEL_74:
          if ( v90[41] != 1 || *(_WORD *)(a1 + 170) != *(_WORD *)&v90[46] )
            goto LABEL_22;
          goto LABEL_76;
        }
LABEL_15:
        v13 = 0;
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v11 = *(unsigned int *)(v10 + 104);
        if ( *(unsigned __int16 *)&v90[24] >= (int)v11 && *(unsigned __int16 *)&v90[24] < *(int *)(v10 + 108) )
          v13 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * (*(unsigned __int16 *)&v90[24] - (int)v11) + 8);
        v12 = dword_7A240;
        v14 = &v90[80];
        v15 = v90;
        while ( 2 )
        {
          if ( (*v12 & v13) == 0 || v15[41] != 1 )
          {
LABEL_21:
            v15 += 40;
            ++v12;
            if ( v14 == v15 )
              goto LABEL_22;
            continue;
          }
          break;
        }
        v42 = *((_WORD *)v15 + 23);
        if ( !v42 || v42 == 11 )
        {
          v10 = a1 + 256;
          v48 = a1 + 216;
          if ( v42 )
            v48 = a1 + 256;
        }
        else
        {
          if ( v42 != 12 )
          {
            LOBYTE(v10) = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 288LL) - 5) > 1;
            if ( ((v42 == 2) & (unsigned __int8)v10) != 0
              || (unsigned __int16)(v42 - 13) <= 0x12u
              || (unsigned __int16)(v42 - 49) <= 0x11u )
            {
              v9 = *(_QWORD *)(a1 + 72);
              v11 = *(_QWORD *)(a1 + 80);
              v10 = v9 + 2 * v11;
              v43 = (_WORD *)v9;
              if ( v9 == v10 )
                goto LABEL_108;
              while ( v42 != *v43 )
              {
                if ( (_WORD *)v10 == ++v43 )
                  goto LABEL_108;
              }
              if ( v43 == (_WORD *)v10 )
              {
LABEL_108:
                if ( *(_QWORD *)(a1 + 88) < v11 + 1 )
                {
                  v89 = v12;
                  v86 = v14;
                  v82 = v13;
                  v77 = *((_WORD *)v15 + 23);
                  v64 = qvector_reserve(a1 + 72, v9, v11 + 1, 2);
                  v65 = *(_QWORD *)(a1 + 80);
                  v12 = v89;
                  v14 = v86;
                  v13 = v82;
                  *(_QWORD *)(a1 + 72) = v64;
                  v42 = v77;
                  v10 = v64 + 2 * v65;
                }
                *(_WORD *)v10 = v42;
                ++*(_QWORD *)(a1 + 80);
              }
            }
            goto LABEL_21;
          }
          v48 = a1 + 296;
        }
        v49 = *(_QWORD *)(v48 + 16);
        *(_BYTE *)v48 = 0;
        if ( v49 )
        {
          *(_QWORD *)(v48 + 24) = 0;
          v88 = v12;
          v84 = v14;
          v80 = v13;
          v73 = v48;
          qfree(v49, (const char *)v9);
          v13 = v80;
          v14 = v84;
          v12 = v88;
          *(_QWORD *)(v73 + 16) = 0;
          *(_QWORD *)(v73 + 32) = 0;
        }
        goto LABEL_21;
      }
      if ( *(_WORD *)&v90[24] != 13 )
        goto LABEL_15;
      if ( v90[41] == 7 )
      {
        v23 = *(_QWORD *)&v90[56] + 16LL * *(_QWORD *)v90;
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL);
        if ( v23 != v9 )
        {
          v9 &= v23;
          if ( v23 == -1 )
            v9 = -1;
        }
        if ( (unsigned __int8)sub_421C0(0, (const char *)v9) )
        {
          qmemcpy(v92, v90, sizeof(v92));
          v24 = decode_prev_insn(v90, *(_QWORD *)&v90[16], 0.0);
          v22 = *(_QWORD *)(a1 + 152);
          if ( v24 != -1
            && (*(_WORD *)&v90[24] == 4 || *(_WORD *)&v90[24] == 1155)
            && v90[41] == 1
            && *(_WORD *)&v90[46] == 11
            && (*(_WORD *)&v90[86] == 1 || *(_WORD *)&v90[86] == *(_WORD *)(a1 + 170)) )
          {
            v12 = *(_DWORD **)&v90[16];
            v55 = *(_QWORD *)(a1 + 144);
            if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v22 + 1) )
            {
              v78 = *(_DWORD **)&v90[16];
              v68 = qvector_reserve(a1 + 144, v55, v22 + 1, 8);
              v12 = v78;
              *(_QWORD *)(a1 + 144) = v68;
              v55 = v68;
              v22 = *(_QWORD *)(a1 + 152);
            }
            *(_QWORD *)(v55 + 8 * v22) = v12;
            v22 = *(_QWORD *)(a1 + 152) + 1LL;
            *(_QWORD *)(a1 + 152) = v22;
          }
          qmemcpy(v90, v92, sizeof(v90));
          v11 = 0;
          goto LABEL_95;
        }
      }
    }
    else
    {
      v11 = (unsigned int)*(unsigned __int16 *)&v90[24] - 88;
      v10 = (1LL << (v90[24] - 88)) & 0x42000021;
      if ( ((1LL << (v90[24] - 88)) & 0x42000021) == 0 )
      {
        if ( *(_WORD *)&v90[24] != 132 )
        {
          if ( *(_WORD *)&v90[24] != 110 )
            goto LABEL_15;
          v28 = *(unsigned __int16 *)&v90[46];
          LOBYTE(v10) = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 288LL) - 5) > 1;
          if ( ((*(_WORD *)&v90[46] == 2) & (unsigned __int8)v10) != 0
            || *(_WORD *)&v90[46] == 13
            || (unsigned __int16)(*(_WORD *)&v90[46] - 14) <= 0x11u )
          {
            if ( *(_WORD *)(a1 + 170) != *(_WORD *)&v90[86] )
              goto LABEL_22;
            v29 = *(_QWORD *)(a1 + 104);
            do
            {
              v30 = *(_QWORD *)(a1 + 96);
              if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v29 + 1) )
              {
                v31 = qvector_reserve(v70, v30, v29 + 1, 2);
                *(_QWORD *)(a1 + 96) = v31;
                v30 = v31;
                v29 = *(_QWORD *)(a1 + 104);
              }
              *(_WORD *)(v30 + 2 * v29) = v28++;
              v29 = *(_QWORD *)(a1 + 104) + 1LL;
              *(_QWORD *)(a1 + 104) = v29;
            }
            while ( (_WORD)v28 != 32 );
          }
          else if ( (unsigned __int16)(*(_WORD *)&v90[46] - 49) > 0x11u || *(_WORD *)(a1 + 170) != *(_WORD *)&v90[86] )
          {
            goto LABEL_22;
          }
          goto LABEL_76;
        }
        if ( !*(_BYTE *)(a1 + 169) )
          goto LABEL_22;
        if ( !*(_WORD *)&v90[86] || *(_WORD *)&v90[86] == 11 )
        {
          v32 = a1 + 216;
          if ( *(_WORD *)&v90[86] )
            v32 = a1 + 256;
        }
        else
        {
          if ( *(_WORD *)&v90[86] != 12 )
            goto LABEL_22;
          v32 = a1 + 296;
        }
        v38 = *(_QWORD *)(v32 + 16);
        v12 = *(_DWORD **)&v90[16];
        *(_BYTE *)v32 = *(_BYTE *)v32 & 0xFC | 2;
        *(_WORD *)(v32 + 8) = 83;
        if ( v38 )
        {
          *(_QWORD *)(v32 + 24) = 0;
          v79 = v12;
          v72 = v10;
          qfree(v38, (const char *)v9);
          v11 = *(_QWORD *)(v32 + 24);
          v39 = 0;
          *(_QWORD *)(v32 + 16) = 0;
          v12 = v79;
          v40 = v11 + 1;
          *(_QWORD *)(v32 + 32) = 0;
          if ( v72 >= v11 + 1 )
          {
LABEL_94:
            *(_QWORD *)(v39 + 8 * v11) = v12;
            ++*(_QWORD *)(v32 + 24);
            v22 = *(_QWORD *)(a1 + 152);
            goto LABEL_95;
          }
        }
        else
        {
          v11 = *(_QWORD *)(v32 + 24);
          v39 = 0;
          v40 = v11 + 1;
          if ( *(_QWORD *)(v32 + 32) >= v11 + 1 )
            goto LABEL_94;
        }
        v74 = v12;
        v39 = qvector_reserve(v32 + 16, 0, v40, 8);
        v11 = *(_QWORD *)(v32 + 24);
        v12 = v74;
        *(_QWORD *)(v32 + 16) = v39;
        goto LABEL_94;
      }
      v10 = *(unsigned __int16 *)&v90[86];
      v25 = *(_WORD *)(a1 + 170);
      if ( *(_WORD *)&v90[86] != v25 && (v90[41] != 1 || *(_WORD *)&v90[46] != v25 || *(_WORD *)&v90[86] != 1) )
        goto LABEL_22;
      v26 = *(_WORD *)&v90[46];
      if ( !*(_WORD *)&v90[46] || *(_WORD *)&v90[46] == 11 )
      {
        v44 = a1 + 256;
        v12 = (_DWORD *)(a1 + 216);
        if ( !*(_WORD *)&v90[46] )
          v44 = a1 + 216;
        v45 = v44;
LABEL_114:
        if ( (*(_BYTE *)v45 & 3) != 2 )
          goto LABEL_22;
        v46 = *(_WORD *)(v45 + 8);
        if ( v46 == 280 )
        {
          v47 = *(_QWORD *)(v45 + 16);
          v8 = 1;
          v56 = 8LL * *(_QWORD *)(v45 + 24);
          v11 = v56 >> 3;
          v76 = v56 >> 3;
          if ( v56 >> 3 )
          {
            v57 = *(_QWORD *)(a1 + 152);
            v58 = *(_QWORD *)(a1 + 144);
            v59 = 0;
            v60 = 8 * v57;
            v61 = v11 + v57;
            if ( *(_QWORD *)(a1 + 160) < v61 )
            {
              v87 = 8LL * *(_QWORD *)(v45 + 24);
              v83 = *(_QWORD *)(v45 + 16);
              v66 = qvector_reserve(a1 + 144, v58, v61, 8);
              v56 = v87;
              v47 = v83;
              *(_QWORD *)(a1 + 144) = v66;
              v58 = v66;
              v59 = 8LL * *(_QWORD *)(a1 + 152) - v60;
            }
            v62 = (char *)(v58 + v60);
            v85 = v47;
            v9 = (__int64)v62;
            v81 = v56;
            memmove(&v62[v56], v62, v59);
            v63 = 0;
            if ( v81 )
            {
              do
              {
                *(_QWORD *)&v62[v63] = *(_QWORD *)(v85 + v63);
                v63 += 8;
              }
              while ( v81 != v63 );
            }
            v8 = 1;
            *(_QWORD *)(a1 + 152) += v76;
            v47 = *(_QWORD *)(v45 + 16);
          }
        }
        else
        {
          if ( v46 == 1 )
            *(_WORD *)(a1 + 170) = 1;
          v47 = *(_QWORD *)(v45 + 16);
        }
        *(_BYTE *)v45 = 0;
        if ( v47 )
        {
          *(_QWORD *)(v45 + 24) = 0;
          qfree(v47, (const char *)v9);
          *(_QWORD *)(v45 + 16) = 0;
          *(_QWORD *)(v45 + 32) = 0;
          v22 = *(_QWORD *)(a1 + 152);
          goto LABEL_95;
        }
LABEL_76:
        v22 = *(_QWORD *)(a1 + 152);
LABEL_95:
        v9 = *(_QWORD *)(a1 + 144);
        v10 = v22 + 1;
        if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v22 + 1) )
        {
          v41 = qvector_reserve(a1 + 144, v9, v10, 8);
          *(_QWORD *)(a1 + 144) = v41;
          v9 = v41;
          v22 = *(_QWORD *)(a1 + 152);
        }
        *(_QWORD *)(v9 + 8 * v22) = insn;
        ++*(_QWORD *)(a1 + 152);
        goto LABEL_22;
      }
      if ( *(_WORD *)&v90[46] == 12 )
      {
        v45 = a1 + 296;
        goto LABEL_114;
      }
      LOBYTE(v10) = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 288LL) - 5) > 1;
      if ( ((*(_WORD *)&v90[46] == 2) & (unsigned __int8)v10) == 0
        && (unsigned __int16)(*(_WORD *)&v90[46] - 13) > 0x12u
        && (unsigned __int16)(*(_WORD *)&v90[46] - 49) > 0x11u )
      {
        if ( *(_WORD *)&v90[46] != 1 )
          goto LABEL_22;
        goto LABEL_76;
      }
      v27 = *(_WORD **)(a1 + 16);
      v10 = (__int64)&v27[*(_QWORD *)(a1 + 24)];
      if ( v27 != (_WORD *)v10 )
      {
        while ( *(_WORD *)&v90[46] != *v27 )
        {
          if ( (_WORD *)v10 == ++v27 )
            goto LABEL_22;
        }
        if ( (_WORD *)v10 != v27 )
        {
          v9 = *(_QWORD *)(a1 + 96);
          v50 = *(_QWORD *)(a1 + 104);
          v10 = v9 + 2 * v50;
          if ( v9 == v10 )
            goto LABEL_133;
          v51 = *(_WORD **)(a1 + 96);
          while ( *(_WORD *)&v90[46] != *v51 )
          {
            if ( (_WORD *)v10 == ++v51 )
              goto LABEL_133;
          }
          if ( (_WORD *)v10 == v51 )
          {
LABEL_133:
            v52 = *(_WORD **)(a1 + 72);
            v11 = (unsigned __int64)&v52[*(_QWORD *)(a1 + 80)];
            if ( v52 == (_WORD *)v11 )
              goto LABEL_138;
            while ( *(_WORD *)&v90[46] != *v52 )
            {
              if ( (_WORD *)v11 == ++v52 )
                goto LABEL_138;
            }
            if ( (_WORD *)v11 == v52 )
            {
LABEL_138:
              v53 = v50 + 1;
              if ( *(_QWORD *)(a1 + 112) < v53 )
              {
                v67 = qvector_reserve(v70, v9, v53, 2);
                *(_QWORD *)(a1 + 96) = v67;
                v10 = 2LL * *(_QWORD *)(a1 + 104) + v67;
              }
              *(_WORD *)v10 = v26;
              v22 = *(_QWORD *)(a1 + 152);
              ++*(_QWORD *)(a1 + 104);
              goto LABEL_95;
            }
          }
        }
      }
    }
LABEL_22:
    if ( v8 && get_first_fcref_to(insn, v9, v10, v11, v12) != -1 )
      return v93 - __readfsqword(0x28u);
  }
  while ( get_first_fcref_from(insn, v9, v10, v11, v12) == -1 );
  return v93 - __readfsqword(0x28u);
}

