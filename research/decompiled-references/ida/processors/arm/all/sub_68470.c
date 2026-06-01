__int64 __fastcall sub_68470(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // r11d
  int v5; // r10d
  int v6; // r8d
  int v7; // edi
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdi
  char v17; // al
  __int16 v18; // ax
  int v19; // ecx
  int v20; // r8d
  char v21; // bl
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r11
  __int64 v25; // rdi
  char v26; // al
  int v27; // esi
  unsigned __int8 v28; // al
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int16 v35; // ax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdi
  char v39; // cl
  char v40; // si
  char v41; // r8
  unsigned __int8 v42; // cl
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdi
  char v46; // cl
  char v47; // si
  char v48; // r8
  unsigned __int8 v49; // cl
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rcx
  char v53; // si
  char v54; // di
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  char v61; // cl
  __int64 v62; // rcx
  __int64 v63; // rcx
  char v64; // si
  char v65; // di
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // si
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  char v76; // cl
  __int64 v77; // rax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = v2 >> 22;
  v4 = v2 >> 7;
  v5 = v2 >> 5;
  v6 = (v2 >> 13) & 7;
  v7 = (v2 >> 17) & 7;
  v8 = (v2 >> 1) & 7;
  v9 = (v2 >> 20) & 3;
  if ( (_DWORD)v9 == 3 )
  {
    if ( (v2 & 0x10060) == 0x40 )
    {
      if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) != 0 || (~(_BYTE)v2 & 0xD) == 0 )
        return 0;
      v51 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v51 + 46) = v6 + 45;
      *(_BYTE *)(v51 + 41) = 1;
      *(_BYTE *)(v51 + 45) = 8;
      v52 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v52 + 81) = 1;
      *(_WORD *)(v52 + 86) = v7 + 45;
      *(_BYTE *)(v52 + 85) = 8;
      if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
      {
        v53 = -109;
        v54 = 18;
      }
      else
      {
        v53 = -108;
        v54 = 3;
      }
      v55 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v55 + 126) = v2 & 0xF;
      *(_BYTE *)(v55 + 121) = 1;
      *(_BYTE *)(v55 + 125) = v54;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v53;
LABEL_63:
      v35 = (*(_DWORD *)(a1 + 16) & 0x1000) == 0 ? 306 : 418;
LABEL_64:
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v35;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    if ( (v2 & 0x10041) == 0 )
    {
      if ( (((unsigned __int8)v5 | (unsigned __int8)(v4 | v3)) & 1) != 0 )
        return 0;
      v31 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v31 + 46) = v6 + 45;
      *(_BYTE *)(v31 + 41) = 1;
      *(_BYTE *)(v31 + 45) = 8;
      v32 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v32 + 86) = v7 + 45;
      *(_BYTE *)(v32 + 81) = 1;
      *(_BYTE *)(v32 + 85) = 8;
      v33 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v33 + 121) = 1;
      *(_WORD *)(v33 + 126) = v8 + 45;
      *(_BYTE *)(v33 + 125) = 8;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -113;
      v34 = *(_DWORD *)(a1 + 16) & 0x1000;
      if ( (*(_DWORD *)(a1 + 16) & 0x10000000) != 0 )
        v35 = 1021 - ((v34 == 0) - 1);
      else
        v35 = 1019 - ((v34 == 0) - 1);
      goto LABEL_64;
    }
    if ( (v2 & 0x10041) == 1 )
    {
      if ( (((unsigned __int8)v5 | (unsigned __int8)(v4 | v3)) & 1) != 0 )
        return 0;
      v67 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v67 + 46) = v6 + 45;
      *(_BYTE *)(v67 + 41) = 1;
      *(_BYTE *)(v67 + 45) = 8;
      v68 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v68 + 86) = v7 + 45;
      *(_BYTE *)(v68 + 81) = 1;
      *(_BYTE *)(v68 + 85) = 8;
      v69 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v69 + 121) = 1;
      *(_WORD *)(v69 + 126) = v8 + 45;
      *(_BYTE *)(v69 + 125) = 8;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = ((*(_BYTE *)(a1 + 19) & 0x10) != 0) - 122;
      v35 = ((*(_BYTE *)(a1 + 17) & 0x10) != 0) + 1023;
      goto LABEL_64;
    }
    if ( (v2 & 0x10060) == 0x60 )
    {
      if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) != 0 || (~(_BYTE)v2 & 0xD) == 0 )
        return 0;
      v62 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v62 + 46) = v6 + 45;
      *(_BYTE *)(v62 + 41) = 1;
      *(_BYTE *)(v62 + 45) = 8;
      v63 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v63 + 81) = 1;
      *(_WORD *)(v63 + 86) = v7 + 45;
      *(_BYTE *)(v63 + 85) = 8;
      if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
      {
        v64 = -121;
        v65 = 2;
      }
      else
      {
        v64 = -122;
        v65 = 1;
      }
      v66 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v66 + 126) = v2 & 0xF;
      *(_BYTE *)(v66 + 121) = 1;
      *(_BYTE *)(v66 + 125) = v65;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v64;
      v35 = ((*(_BYTE *)(a1 + 17) & 0x10) != 0) + 1023;
      goto LABEL_64;
    }
    if ( (v2 & 0x10011041) == 0x10010001 )
    {
      if ( (((unsigned __int8)v5 | (unsigned __int8)(v4 | v3)) & 1) != 0 )
        return 0;
      v73 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v73 + 46) = v6 + 45;
      *(_BYTE *)(v73 + 41) = 1;
      *(_BYTE *)(v73 + 45) = 8;
      v74 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v74 + 86) = v7 + 45;
      *(_BYTE *)(v74 + 81) = 1;
      *(_BYTE *)(v74 + 85) = 8;
      v75 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v75 + 121) = 1;
      *(_WORD *)(v75 + 126) = v8 + 45;
      *(_BYTE *)(v75 + 125) = 8;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1025;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    else
    {
      if ( (v2 & 0x10000) == 0 )
        return 0;
      v19 = v2 & 0x40E000;
      v20 = v2 & 0x40;
      if ( (v2 & 0x40) != 0 )
      {
        if ( (v2 & 0xF) == 0xD )
        {
          if ( (v2 & 0x10000000) == 0 )
            return 0;
          v77 = *(_QWORD *)(a1 + 8);
          if ( !v19 )
          {
            *(_WORD *)(v77 + 24) = 1028;
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          *(_WORD *)(v77 + 24) = 1029;
          goto LABEL_38;
        }
        if ( (v2 & 0x1020) == 0x20 )
          return 0;
        goto LABEL_26;
      }
      if ( (v2 & 0x1020) != 0x20 )
      {
        v21 = v2;
        goto LABEL_27;
      }
      if ( under_debugger )
        BUG();
      interr(10502);
      return sub_68E40();
    }
  }
  else
  {
    if ( (v2 & 0x10010060) != (_DWORD)&stru_10060 )
    {
      if ( (v2 & 0x10040) == 0x40 )
      {
        if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) != 0 || (~(_BYTE)v2 & 0xD) == 0 )
          return 0;
        v43 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v43 + 41) = 1;
        *(_WORD *)(v43 + 46) = v6 + 45;
        *(_BYTE *)(v43 + 45) = 8;
        v44 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v44 + 81) = 1;
        *(_WORD *)(v44 + 86) = v7 + 45;
        *(_BYTE *)(v44 + 85) = 8;
        v45 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
          v46 = byte_8E218[v9];
        else
          v46 = byte_8E21C[v9];
        v47 = 7;
        if ( v46 )
        {
          v48 = v46;
          v49 = v46 - 1;
          *(_BYTE *)(v45 + 33) = v48 | 0x80;
          v45 = *(_QWORD *)(a1 + 8);
          if ( v49 <= 0x14u )
            v47 = byte_8DB20[v49];
        }
        *(_BYTE *)(v45 + 121) = 1;
        *(_WORD *)(v45 + 126) = v2 & 0xF;
        *(_BYTE *)(v45 + 125) = v47;
        v50 = *(_DWORD *)(a1 + 16) & 0x1000;
        if ( (*(_DWORD *)(a1 + 16) & 0x20) != 0 )
          v35 = v50 == 0 ? 373 : 389;
        else
          v35 = 337 - ((v50 == 0) - 1);
        goto LABEL_64;
      }
      if ( (v2 & 0x10010060) != 0x10040 )
      {
        if ( (v2 & 0x10041) == 0 )
        {
          if ( (((unsigned __int8)v5 | (unsigned __int8)(v4 | v3)) & 1) == 0 && ((_DWORD)v9 != 2 || v6 != v8) )
          {
            v56 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v56 + 41) = 1;
            *(_WORD *)(v56 + 46) = v6 + 45;
            *(_BYTE *)(v56 + 45) = 8;
            v57 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v57 + 81) = 1;
            *(_WORD *)(v57 + 86) = v7 + 45;
            *(_BYTE *)(v57 + 85) = 8;
            v58 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v58 + 121) = 1;
            *(_WORD *)(v58 + 126) = v8 + 45;
            *(_BYTE *)(v58 + 125) = 8;
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 161LL) = 5;
            v59 = -(__int64)((*(_DWORD *)(a1 + 16) & 0x1000) == 0);
            LOBYTE(v59) = v59 & 0x4C;
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = v59 + 270;
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 165LL) = 2;
            v60 = *(_QWORD *)(a1 + 8);
            if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
            {
              v76 = byte_8E214[v9];
              if ( v76 )
              {
                *(_BYTE *)(v60 + 33) = v76 | 0x80;
                v60 = *(_QWORD *)(a1 + 8);
              }
              *(_WORD *)(v60 + 24) = 1018;
            }
            else
            {
              v61 = byte_8E21C[v9];
              if ( v61 )
              {
                *(_BYTE *)(v60 + 33) = v61 | 0x80;
                v60 = *(_QWORD *)(a1 + 8);
              }
              *(_WORD *)(v60 + 24) = 1017;
            }
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return 0;
        }
        v19 = v2 & 0x40E000;
        if ( (~v2 & 0x10010000) != 0 )
          return 0;
        v21 = v2;
        v20 = v2 & 0x40;
        if ( (v2 & 0x40) == 0 )
        {
LABEL_27:
          v22 = (2 * v21) & 2 | (v2 >> 7) & 1 | ((unsigned int)v2 >> 10) & 4;
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41LL) = 14;
          v23 = dword_8DB00[v22];
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 0;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = v23;
          v24 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v24 + 81) = 1;
          *(_WORD *)(v24 + 86) = v7 + 45;
          *(_BYTE *)(v24 + 85) = 8;
          v25 = *(_QWORD *)(a1 + 8);
          if ( (_DWORD)v9 == 3 )
          {
            if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
            {
              v71 = -109;
              v72 = 19;
            }
            else
            {
              v71 = -108;
              v72 = 20;
            }
            *(_BYTE *)(v25 + 33) = v71;
            if ( v20 )
            {
              v28 = v72 - 1;
              v27 = *(_DWORD *)(a1 + 16) & 0xF;
              if ( v27 == 13 )
                return 0;
LABEL_34:
              v25 = *(_QWORD *)(a1 + 8);
              v29 = byte_8DB20[v28];
LABEL_35:
              *(_WORD *)(v25 + 126) = v27;
              *(_BYTE *)(v25 + 121) = 1;
              *(_BYTE *)(v25 + 125) = v29;
LABEL_36:
              v30 = *(_QWORD *)(a1 + 8);
              if ( !v19 )
              {
                *(_WORD *)(v30 + 24) = 1026;
                return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
              }
              *(_WORD *)(v30 + 24) = 1027;
LABEL_38:
              *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) & 0xFF87FFFF
                                                      | (((*(int *)(a1 + 16) >> 13) & 7
                                                        | (*(_DWORD *)(a1 + 16) >> 19) & 8) << 19);
              return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
            }
            goto LABEL_81;
          }
          if ( v22 <= 1 )
          {
            v26 = byte_8E214[v9];
            if ( !v26 )
              goto LABEL_90;
          }
          else
          {
            if ( v22 <= 3 )
            {
              v26 = byte_8E218[v9];
              if ( v26 )
                goto LABEL_31;
LABEL_90:
              if ( v20 )
              {
                v27 = *(_DWORD *)(a1 + 16) & 0xF;
                if ( v27 == 13 )
                  return 0;
                goto LABEL_92;
              }
LABEL_81:
              if ( (v5 & 1) != 0 )
                return 0;
              v70 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(v70 + 121) = 1;
              *(_WORD *)(v70 + 126) = v8 + 45;
              *(_BYTE *)(v70 + 125) = 8;
              goto LABEL_36;
            }
            v26 = byte_8E21C[v9];
            if ( !v26 )
              goto LABEL_90;
          }
LABEL_31:
          *(_BYTE *)(v25 + 33) = v26 | 0x80;
          if ( v20 )
          {
            v27 = *(_DWORD *)(a1 + 16) & 0xF;
            if ( v27 == 13 )
              return 0;
            v28 = v26 - 1;
            if ( v28 <= 0x14u )
              goto LABEL_34;
            v25 = *(_QWORD *)(a1 + 8);
LABEL_92:
            v29 = 7;
            goto LABEL_35;
          }
          goto LABEL_81;
        }
LABEL_26:
        v21 = v2 >> 5;
        v20 = 64;
        goto LABEL_27;
      }
      if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) != 0 || (~(_BYTE)v2 & 0xD) == 0 )
        return 0;
      v36 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v36 + 41) = 1;
      *(_WORD *)(v36 + 46) = v6 + 45;
      *(_BYTE *)(v36 + 45) = 8;
      v37 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v37 + 81) = 1;
      *(_WORD *)(v37 + 86) = v7 + 45;
      *(_BYTE *)(v37 + 85) = 8;
      v38 = *(_QWORD *)(a1 + 8);
      v39 = byte_8E214[v9];
      v40 = 7;
      if ( v39 )
      {
        v41 = v39;
        v42 = v39 - 1;
        *(_BYTE *)(v38 + 33) = v41 | 0x80;
        v38 = *(_QWORD *)(a1 + 8);
        if ( v42 <= 0x14u )
          v40 = byte_8DB20[v42];
      }
      *(_BYTE *)(v38 + 121) = 1;
      *(_WORD *)(v38 + 126) = v2 & 0xF;
      *(_BYTE *)(v38 + 125) = v40;
      goto LABEL_63;
    }
    if ( v8 == 6 || (v3 & 1) != 0 )
      return 0;
    v11 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v11 + 41) = 1;
    *(_WORD *)(v11 + 46) = v6 + 45;
    *(_BYTE *)(v11 + 45) = 8;
    v12 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v12 + 86) = 2 * v7;
    *(_BYTE *)(v12 + 81) = 1;
    *(_BYTE *)(v12 + 85) = 2;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v13 + 120;
    if ( v8 != 7 )
    {
      *(_BYTE *)(v13 + 121) = 1;
      v14 = v13 + 160;
      *(_WORD *)(v13 + 126) = 2 * v8 + 1;
      *(_BYTE *)(v13 + 125) = 2;
    }
    *(_BYTE *)(v14 + 1) = 5;
    v15 = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(v14 + 5) = 2;
    *(_QWORD *)(v14 + 8) = 1 << (v15 & 1 | (v15 >> 6) & 2);
    v16 = *(_QWORD *)(a1 + 8);
    v17 = byte_8E218[v9];
    if ( v17 )
    {
      *(_BYTE *)(v16 + 33) = v17 | 0x80;
      v16 = *(_QWORD *)(a1 + 8);
    }
    v18 = 1015 - (((*(_DWORD *)(a1 + 16) & 0x1000) == 0) - 1);
    if ( v8 == 7 )
      v18 = 1013 - (((*(_DWORD *)(a1 + 16) & 0x1000) == 0) - 1);
    *(_WORD *)(v16 + 24) = v18;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
}
