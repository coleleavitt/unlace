__int64 __fastcall sub_16E80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int16 v4; // r12
  char *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // r13
  __int16 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  __int16 v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // r14
  _QWORD *v17; // rsi
  int v18; // r8d
  unsigned int v19; // edx
  int v20; // ecx
  char i; // al
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rdx
  __int16 v28; // r14
  __int64 v29; // rdx
  __int16 v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rbp
  __int64 v36; // rax
  __int64 *v37; // r12
  int v38; // [rsp+8h] [rbp-4E0h]
  unsigned __int8 v39; // [rsp+8h] [rbp-4E0h]
  char v40; // [rsp+8h] [rbp-4E0h]
  __int64 v41; // [rsp+10h] [rbp-4D8h]
  __int64 *v42; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v43; // [rsp+28h] [rbp-4C0h]
  _QWORD v44[2]; // [rsp+40h] [rbp-4A8h] BYREF
  char v45; // [rsp+50h] [rbp-498h]
  _BYTE v46[360]; // [rsp+60h] [rbp-488h] BYREF
  char v47[8]; // [rsp+1C8h] [rbp-320h] BYREF
  _QWORD v48[45]; // [rsp+1D0h] [rbp-318h] BYREF
  __int64 v49; // [rsp+338h] [rbp-1B0h] BYREF
  _BYTE v50[16]; // [rsp+340h] [rbp-1A8h] BYREF
  __int64 *v51; // [rsp+350h] [rbp-198h]
  __int16 v52; // [rsp+358h] [rbp-190h]
  char v53; // [rsp+369h] [rbp-17Fh]
  __int16 v54; // [rsp+36Eh] [rbp-17Ah]
  unsigned __int64 v55; // [rsp+4A8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  result = 0;
  if ( *(_WORD *)(a2 + 24) != 97 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) == 1 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = *(_WORD *)(a2 + 46);
    v43 = 0;
    v42 = nullptr;
    v42 = (__int64 *)qvector_reserve(&v42, 0, 1, 8);
    v42[(_QWORD)v43] = v3;
    v5 = &v46[40];
    *(_QWORD *)&v43 = v43 + 1;
    *(_QWORD *)&v46[24] = 0;
    *(_QWORD *)&v46[32] = 0;
    *(_OWORD *)v46 = -1;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 40;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *((_QWORD *)v5 - 2) = 0;
    }
    while ( v47 != v5 );
    v6 = *(__int64 **)(a2 + 16);
    *(_QWORD *)&v46[16] = v6;
    if ( decode_prev_insn(v46, v6, v47, 0.0) == -1
      || *(_WORD *)&v46[24] != 6
      || v46[41] != 1
      || v4 != *(_WORD *)&v46[46]
      || v46[81] != 3
      || !v46[112]
      || v46[113] != 2 )
    {
      goto LABEL_45;
    }
    v9 = v43;
    v10 = *(_WORD *)&v46[88];
    v11 = *(_WORD *)&v46[86];
    v12 = *(_QWORD *)&v46[16];
    if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
    {
      v42 = (__int64 *)qvector_reserve(&v42, v42, v43 + 1, 8);
      v9 = v43;
    }
    v13 = (__int64)v42;
    v42[v9] = v12;
    v6 = *(__int64 **)&v46[16];
    *(_QWORD *)&v43 = v43 + 1;
    if ( decode_prev_insn(v46, *(_QWORD *)&v46[16], v13, 0.0) == -1 )
      goto LABEL_45;
    if ( *(_WORD *)&v46[24] == 93 )
    {
      if ( v46[41] != 1 || v11 != *(_WORD *)&v46[46] )
        goto LABEL_45;
      if ( v46[81] == 2 )
      {
        v41 = *(_QWORD *)&v46[96];
      }
      else
      {
        if ( v46[81] != 5 )
          goto LABEL_45;
        v41 = *(_QWORD *)&v46[88];
      }
    }
    else
    {
      if ( *(_WORD *)&v46[24] != 118 )
        goto LABEL_45;
      if ( v46[41] != 1 )
        goto LABEL_45;
      if ( v11 != *(_WORD *)&v46[46] )
        goto LABEL_45;
      if ( v46[81] != 1 )
        goto LABEL_45;
      if ( v11 != *(_WORD *)&v46[86] )
        goto LABEL_45;
      if ( v46[121] != 5 )
        goto LABEL_45;
      v14 = *(_WORD *)&v46[128];
      sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
      v6 = *(__int64 **)&v46[16];
      if ( decode_prev_insn(v46, *(_QWORD *)&v46[16], v15, 0.0) == -1
        || *(_WORD *)&v46[24] != 94
        || v46[41] != 1
        || v11 != *(_WORD *)&v46[46]
        || v46[81] != 5 )
      {
        goto LABEL_45;
      }
      v41 = v14 & 0xFFFu | (*(_DWORD *)&v46[88] << 12);
    }
    sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
    v16 = *(_QWORD **)&v46[16];
    sub_CEC0((__int64)v48);
    v17 = v16;
    v18 = 30;
    do
    {
      v38 = v18;
      if ( decode_prev_insn(v48, v17, v7, 0.0) == -1 )
        break;
      LOBYTE(v19) = LOWORD(v48[3]) == 105;
      LOBYTE(v20) = LOWORD(v48[3]) == 478;
      v7 = v20 | v19;
      if ( LOWORD(v48[3]) == 477 || LOWORD(v48[3]) == 104 || (_BYTE)v7 )
      {
        if ( (unsigned __int16)(LOWORD(v48[3]) - 477) <= 1u )
        {
          if ( BYTE1(v48[5]) != 7 )
            goto LABEL_60;
          v25 = v48[7];
        }
        else
        {
          if ( BYTE1(v48[10]) != 7 )
            goto LABEL_60;
          v25 = v48[12];
        }
        if ( v25 == -1
          || !(_BYTE)v7
          || (v17 = (_QWORD *)v48[2], v25 >= v48[2]) && v25 - (unsigned __int64)v16 + 16 <= 0x24 )
        {
LABEL_60:
          qmemcpy(v46, v48, sizeof(v46));
          v6 = &v49;
          v8 = 0;
          if ( *(_WORD *)&v46[24] != 104 )
          {
            if ( *(_WORD *)&v46[24] == 477 )
            {
              if ( v46[41] != 7 )
                goto LABEL_45;
              v26 = *(_QWORD *)&v46[56];
              sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
LABEL_66:
              v40 = 1;
              v28 = 15;
            }
            else
            {
              if ( *(_WORD *)&v46[24] != 105 )
              {
                if ( *(_WORD *)&v46[24] == 478 && v46[41] == 7 )
                {
                  v26 = *(_QWORD *)&v46[16] + *(unsigned __int16 *)&v46[26];
                  sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
                  goto LABEL_66;
                }
LABEL_45:
                result = 0;
LABEL_46:
                if ( v42 )
                {
                  v39 = result;
                  *(_QWORD *)&v43 = 0;
                  qfree(v42, v6, v7, v8);
                  return v39;
                }
                return result;
              }
              if ( v46[41] != 1 || v46[81] != 7 )
                goto LABEL_45;
              v28 = *(_WORD *)&v46[46];
              v26 = *(_QWORD *)&v46[16] + *(unsigned __int16 *)&v46[26];
              sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
LABEL_97:
              v40 = 0;
            }
            v6 = *(__int64 **)&v46[16];
            if ( decode_prev_insn(v46, *(_QWORD *)&v46[16], v27, 0.0) != -1
              && (*(_WORD *)&v46[24] == 469 || *(_WORD *)&v46[24] == 484) )
            {
              sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
              v6 = *(__int64 **)&v46[16];
            }
            if ( decode_prev_insn(v46, v6, v29, 0.0) == -1 || (unsigned __int16)(*(_WORD *)&v46[24] - 122) > 1u )
              goto LABEL_45;
            v7 = v46[41];
            if ( (*(_WORD *)&v46[28] & 0x1FF) == 0x2D )
            {
              LOBYTE(v7) = v46[41] - 1;
              if ( v46[41] != 1 || !v40 && v28 != *(_WORD *)&v46[46] || v10 != *(_WORD *)&v46[46] || v46[81] != 5 )
                goto LABEL_45;
              v30 = *(_WORD *)&v46[88];
            }
            else
            {
              LOBYTE(v7) = v46[41] - 1;
              if ( v46[41] != 1
                || v28 != *(_WORD *)&v46[46]
                || v46[81] != 1
                || v10 != *(_WORD *)&v46[86]
                || v46[121] != 5 )
              {
                goto LABEL_45;
              }
              v30 = *(_WORD *)&v46[128];
            }
            sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
            v31 = *(_QWORD *)&v46[16];
            sub_CEC0((__int64)v50);
            v6 = *(__int64 **)&v46[16];
            if ( decode_prev_insn(v50, *(_QWORD *)&v46[16], v32, 0.0) != -1 && v52 == 114 && v53 == 1 && v10 == v54 )
            {
              v6 = v51;
              sub_15D10((__int64 *)&v42, (__int64)v51);
              v31 = (__int64)v51;
            }
            sub_15E00(a1, (__int64)v6, v33, v34);
            *(_QWORD *)(a1 + 32) = v31;
            v7 = 0;
            v35 = v42;
            *(_QWORD *)(a1 + 24) = v26;
            *(_QWORD *)(a1 + 8) = v41;
            v36 = v43;
            *(_WORD *)(a1 + 4) = v30;
            *(_DWORD *)a1 = 1056772;
            v37 = &v35[v36];
            *(_DWORD *)(a1 + 64) = v10;
            *(_BYTE *)(a1 + 68) = 2;
            *(_QWORD *)(a1 + 56) = 0;
            while ( v37 != v35 )
            {
              v6 = (__int64 *)*v35;
              sub_15D70((__int64 *)(a1 + 96), *v35++);
            }
            result = 1;
            goto LABEL_46;
          }
          if ( v46[41] != 1 || v46[81] != 7 )
            goto LABEL_45;
          v28 = *(_WORD *)&v46[46];
          v26 = *(_QWORD *)&v46[96];
          sub_15D10((__int64 *)&v42, *(__int64 *)&v46[16]);
          goto LABEL_97;
        }
      }
      else
      {
        v17 = (_QWORD *)v48[2];
      }
      v18 = v38 - 1;
    }
    while ( v38 != 1 );
    v6 = v16;
    for ( i = xrefblk_t_first_to(v44, v16, 0); ; i = xrefblk_t_next_to(v44) )
    {
      if ( !i )
        goto LABEL_45;
      if ( v45 )
      {
        v6 = (__int64 *)v44[0];
        if ( (unsigned int)decode_insn(v48, v44[0], v7, v8, v22, v23, 0.0) )
        {
          v7 = (unsigned int)LOWORD(v48[3]) - 477;
          if ( (unsigned __int16)(LOWORD(v48[3]) - 104) > 1u )
          {
            if ( (unsigned __int16)(LOWORD(v48[3]) - 477) > 1u || BYTE1(v48[5]) != 7 )
              continue;
            v24 = v48[7];
          }
          else
          {
            if ( BYTE1(v48[10]) != 7 )
              continue;
            v24 = v48[12];
          }
          if ( v24 != -1 && (unsigned __int64)(v24 - (_QWORD)v16) <= 0x14 )
            goto LABEL_60;
        }
      }
    }
  }
  return result;
}

