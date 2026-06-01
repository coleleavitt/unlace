void __fastcall sub_4EB0(__int64 a1)
{
  int v2; // ebp
  unsigned __int16 v3; // ax
  __int16 v4; // dx
  unsigned __int8 v5; // r12
  __int16 v6; // ax
  __int16 v7; // r12
  __int16 v8; // ax
  unsigned __int8 v9; // r13
  __int16 v10; // di
  __int16 v11; // ax
  bool v12; // zf
  unsigned __int8 v13; // r8
  __int16 v14; // ax
  int v15; // ecx
  __int64 v16; // rsi
  char v17; // r8
  char v18; // dl
  unsigned __int16 v19; // ax
  __int16 v20; // ax
  __int64 v21; // rsi
  int v22; // ecx
  char v23; // r8
  __int64 v24; // rsi
  _DWORD *v25; // rdi
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  int v28; // eax
  int v29; // edx
  int v30; // edx
  char v31; // si
  unsigned __int8 v32; // al
  __int64 v33; // r12
  int v34; // ecx
  __int64 v35; // rbp
  int v36; // ecx
  __int64 v37; // rsi
  char v38; // r8
  __int64 v39; // rsi
  __int16 v40; // r10
  signed int v41; // edx
  unsigned __int8 v42; // r9
  __int64 v43; // rcx
  _DWORD *v44; // rsi
  _DWORD *v45; // rdi
  __int16 v46; // ax
  __int64 v47; // rcx
  _DWORD *v48; // rdi
  _DWORD *v49; // rsi
  __int16 v50; // ax
  __int64 v51; // rsi
  __int64 v52; // rcx
  _DWORD *v53; // rdi
  _DWORD *v54; // rsi
  int v55; // r8d
  char v56; // r9
  int v57; // r11d
  __int16 v58; // r10
  char v59; // r9
  __int16 v60; // ax
  __int16 v61; // ax
  __int16 v62; // cx
  __int16 v63; // dx
  int v64; // eax
  __int16 v65; // ax
  int v66; // eax
  unsigned __int8 v67; // r14
  int v68; // eax
  unsigned __int8 v69; // r14
  int v70; // eax
  unsigned __int8 v71; // r14
  int v72; // eax
  int v73; // eax
  __int16 v74; // ax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int16 v79; // ax
  int v80; // eax
  int v81; // eax
  __int16 v82; // dx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  __int16 v89; // si
  unsigned __int8 v90; // si
  __int16 v91; // ax
  int v92; // edx
  unsigned __int8 v93; // si
  __int16 v94; // ax
  __int64 wide_byte; // rax
  __int16 v96; // cx
  signed int v97; // ebp
  int v98; // esi
  __int16 v99; // cx
  char v100; // di
  __int16 v101; // di
  __int16 v102; // ax
  __int16 v103; // ax
  unsigned __int8 v104; // al
  __int16 v105; // ax
  __int16 v106; // ax
  __int16 v107; // ax
  int v108; // eax
  __int64 v109; // rcx
  __int16 v110; // ax
  __int16 v111; // ax
  signed int v112; // eax
  __int16 v113; // ax
  signed int v114; // edx
  int v115; // esi
  __int16 v116; // ax
  _BYTE v117[40]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v118; // [rsp+28h] [rbp-30h]

  v118 = __readfsqword(0x28u);
  LOWORD(v2) = get_wide_byte();
  v3 = BYTE1(v2);
  v4 = (unsigned __int16)v2 >> 9;
  *(_WORD *)(a1 + 26) = 1;
  v5 = BYTE1(v2) & 1;
  if ( BYTE1(v2) <= 0x2Fu )
  {
    *(_WORD *)(a1 + 24) = *((_WORD *)qword_C780 + (v4 & 0x7F));
    v7 = (unsigned __int8)(v5 + 1);
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
    v8 = *(_WORD *)(a1 + 24);
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
    if ( v8 == 9 || v8 == 3 || v8 == 162 )
    {
      *(_BYTE *)(a1 + 121) = 1;
      *(_WORD *)(a1 + 86) = 5;
      *(_BYTE *)(a1 + 125) = 0;
      *(_WORD *)(a1 + 126) = v7;
      return;
    }
    goto LABEL_12;
  }
  if ( v3 == 48 )
  {
    *(_WORD *)(a1 + 24) = 161;
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
    *(_WORD *)(a1 + 86) = 29;
    return;
  }
  if ( v3 == 50 )
  {
    *(_WORD *)(a1 + 24) = 161;
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
    *(_WORD *)(a1 + 86) = 3;
    return;
  }
  if ( v3 <= 0x37u )
  {
    v6 = *((_WORD *)qword_C770 + (BYTE1(v2) & 0xF));
    *(_WORD *)(a1 + 24) = v6;
    if ( !v6 )
      return;
    goto LABEL_21;
  }
  v9 = (v2 & 0x200) != 0;
  if ( v3 <= 0x3Bu )
  {
    *(_WORD *)(a1 + 24) = (unsigned __int8)(v9 + 42);
    v7 = (unsigned __int8)(v5 + 1);
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
LABEL_12:
    *(_WORD *)(a1 + 86) = v7;
    return;
  }
  v10 = (unsigned __int16)v2 >> 10;
  if ( v3 <= 0x45u )
  {
    v11 = *((_WORD *)&qword_C768 + (((unsigned __int16)v2 >> 10) & 3));
    *(_WORD *)(a1 + 24) = v11;
    if ( !v11 )
      return;
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
    v12 = *(_WORD *)(a1 + 24) == 162;
    *(_BYTE *)(a1 + 81) = 8;
    *(_BYTE *)(a1 + 85) = 0;
    *(_QWORD *)(a1 + 88) = 16;
    *(_BYTE *)(a1 + 113) = 1;
    *(_BYTE *)(a1 + 121) = 1;
    *(_BYTE *)(a1 + 125) = 0;
    if ( !v12 )
      goto LABEL_17;
LABEL_37:
    *(_WORD *)(a1 + 126) = (unsigned __int8)(v5 + 1);
    return;
  }
  if ( v3 == 70 )
  {
    *(_WORD *)(a1 + 24) = 161;
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
    *(_WORD *)(a1 + 86) = 47;
    return;
  }
  if ( v3 == 71 )
  {
    *(_WORD *)(a1 + 24) = 140;
    goto LABEL_21;
  }
  if ( v3 <= 0x4Au )
  {
    *(_WORD *)(a1 + 24) = (v2 & 0x200) == 0 ? 163 : 148;
    sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 1);
    if ( *(_WORD *)(a1 + 24) != 163 )
      return;
    goto LABEL_28;
  }
  v13 = BYTE1(v2) & 3;
  if ( v3 <= 0x4Du )
  {
    v14 = *((_WORD *)&qword_C760 + (BYTE1(v2) & 3));
    *(_WORD *)(a1 + 24) = v14;
    if ( !v14 )
      return;
LABEL_21:
    v15 = (unsigned __int16)v2;
    v16 = a1 + 40;
    v17 = 0;
    v18 = 0;
LABEL_22:
    sub_4A20(a1, v16, v18, v15, v17);
    return;
  }
  if ( v3 <= 0x4Fu )
  {
    *(_BYTE *)(a1 + 41) = 1;
    *(_WORD *)(a1 + 24) = 167;
    *(_BYTE *)(a1 + 45) = 0;
    *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
    v15 = (unsigned __int16)v2;
    v16 = a1 + 80;
    v17 = 0;
    v18 = 1;
    goto LABEL_22;
  }
  if ( v3 <= 0x5Fu )
  {
    *(_WORD *)(a1 + 24) = ::a1[v4 & 7];
    sub_4A20(a1, a1 + 40, 1, (unsigned __int16)v2, 0);
    v12 = *(_WORD *)(a1 + 24) == 44;
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 0;
    if ( v12 )
    {
      *(_WORD *)(a1 + 86) = (unsigned __int8)(v9 + 1);
      if ( v5 != v9 )
      {
        *(_BYTE *)(a1 + 121) = 1;
        *(_BYTE *)(a1 + 125) = 0;
        *(_WORD *)(a1 + 126) = (unsigned __int8)(v5 + 1);
        *(_WORD *)(a1 + 24) = 45;
      }
      return;
    }
LABEL_29:
    *(_WORD *)(a1 + 86) = (unsigned __int8)(v5 + 1);
    return;
  }
  if ( v3 > 0x67u )
  {
    if ( v3 <= 0x6Bu )
    {
      v21 = a1 + 80;
      v22 = (unsigned __int16)v2;
      v23 = 0;
      *(_WORD *)(a1 + 24) = aJnr[BYTE1(v2) & 3];
LABEL_59:
      sub_4A20(a1, v21, 0, v22, v23);
LABEL_60:
      v24 = a1 + 40;
LABEL_61:
      sub_49A0(a1, v24);
      return;
    }
    if ( v3 == 109 )
    {
      *(_WORD *)(a1 + 24) = 150;
      goto LABEL_21;
    }
    if ( v3 != 111 )
    {
      if ( (BYTE1(v2) & 0xFD) == 0x6C )
      {
        *(_WORD *)(a1 + 24) = (unsigned __int8)(v9 + 100);
        sub_4A20(a1, a1 + 80, 0, (unsigned __int16)v2, 0);
        sub_49E0(a1, a1 + 40);
        if ( *(_BYTE *)(a1 + 81) == 2 )
        {
          *(_BYTE *)(a1 + 81) = 7;
          *(_BYTE *)(a1 + 85) = 9;
        }
        return;
      }
      if ( (unsigned __int16)v2 >> 12 == 6 )
        goto LABEL_73;
      if ( v3 <= 0x73u )
      {
        v19 = *((_WORD *)&qword_C730 + (BYTE1(v2) & 3));
        *(_WORD *)(a1 + 24) = v19;
        if ( v19 == 195 )
        {
          sub_4A20(a1, a1 + 80, 0, (unsigned __int16)v2, 0);
          v39 = a1 + 40;
        }
        else
        {
          if ( v19 > 0xC3u )
          {
            if ( v19 != 196 )
              return;
            v36 = (unsigned __int16)v2;
            v37 = a1 + 40;
            v38 = 1;
          }
          else
          {
            if ( v19 != 192 )
            {
              if ( v19 != 193 )
                return;
              sub_4920(a1, a1 + 40);
LABEL_51:
              v15 = (unsigned __int16)v2;
              v16 = a1 + 80;
              v17 = 1;
              v18 = 0;
              goto LABEL_22;
            }
            v36 = (unsigned __int16)v2;
            v37 = a1 + 40;
            v38 = 0;
          }
          sub_4A20(a1, v37, 0, v36, v38);
          v39 = a1 + 80;
        }
        sub_4920(a1, v39);
        return;
      }
      if ( v3 <= 0x75u )
      {
        v31 = BYTE1(v2) & 1;
        v32 = v5 - 57;
        v33 = BYTE1(v2) & 1;
        v34 = (unsigned __int16)v2;
        *(_WORD *)(a1 + 24) = v32;
        v35 = a1 + 40 * v33;
        sub_4A20(a1, a1 + 40LL * (unsigned __int8)((v31 ^ 1) + 1), 0, v34, 0);
        *(_BYTE *)(v35 + 41) = 5;
        *(_BYTE *)(v35 + 45) = 0;
        *(_QWORD *)(v35 + 48) = get_wide_byte();
        *(_WORD *)(a1 + (-(char)v33 & 0x28) + 73) = 257;
        ++*(_WORD *)(a1 + 26);
        return;
      }
      if ( v3 <= 0x77u )
      {
        v46 = 168;
        if ( v5 )
          v46 = 174;
        *(_WORD *)(a1 + 24) = v46;
        v22 = (unsigned __int16)v2;
        v21 = a1 + 80;
        v23 = BYTE1(v2) & 1;
        goto LABEL_59;
      }
      if ( v3 <= 0x7Bu )
      {
        *(_WORD *)(a1 + 24) = 30 - v9;
        sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
        sub_4960(a1, a1 + 80);
LABEL_36:
        *(_BYTE *)(a1 + 121) = 1;
        *(_BYTE *)(a1 + 125) = 0;
        goto LABEL_37;
      }
      if ( v3 <= 0x7Du )
      {
        v50 = 198;
        if ( v5 )
          v50 = 194;
        *(_WORD *)(a1 + 24) = v50;
        sub_4A20(a1, a1 + 40LL * (unsigned __int8)(!(v2 & 0x100) + 1), 0, (unsigned __int16)v2, 0);
        v51 = a1 + 40LL * (unsigned __int8)(v5 + 1);
        goto LABEL_105;
      }
      if ( (v2 & 0x8000) == 0 )
      {
        *(_WORD *)(a1 + 24) = (unsigned __int8)(v5 - 55);
        goto LABEL_21;
      }
      if ( v3 <= 0x83u )
      {
        v60 = 171;
        if ( (v2 & 0x200) != 0 )
          v60 = 169;
        *(_WORD *)(a1 + 24) = v60;
        goto LABEL_121;
      }
      if ( v3 <= 0x87u )
      {
        v61 = 172;
        if ( (v2 & 0x200) != 0 )
          v61 = 170;
        *(_WORD *)(a1 + 24) = v61;
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 85) = 0;
        *(_WORD *)(a1 + 86) = 3;
        v15 = (unsigned __int16)v2;
        v16 = a1 + 120;
        v17 = 0;
        v18 = 0;
        goto LABEL_22;
      }
      if ( v3 <= 0x89u )
      {
        *(_WORD *)(a1 + 24) = 173;
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
        goto LABEL_51;
      }
      if ( v3 == 138 )
      {
        *(_WORD *)(a1 + 24) = 146;
        v15 = (unsigned __int16)v2;
        v16 = a1 + 40;
        v17 = 1;
        v18 = 0;
        goto LABEL_22;
      }
      if ( v3 == 139 )
      {
        *(_WORD *)(a1 + 24) = 145;
        goto LABEL_21;
      }
      if ( v3 <= 0x8Du )
      {
        *(_WORD *)(a1 + 24) = 168;
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 29);
        goto LABEL_122;
      }
      if ( v3 <= 0x8Fu )
      {
        *(_WORD *)(a1 + 24) = 175;
LABEL_121:
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
LABEL_122:
        v15 = (unsigned __int16)v2;
        v16 = a1 + 80;
        v17 = 0;
        v18 = 0;
        goto LABEL_22;
      }
      v62 = (unsigned __int16)v2 >> 4;
      if ( v3 <= 0x96u )
      {
        *(_BYTE *)(a1 + 41) = 4;
        v63 = *((_WORD *)&qword_C728 + (v4 & 3));
        *(_WORD *)(a1 + 24) = v63;
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v64 = (v62 & 0xF) >> 2;
        if ( v64 == 3 )
          LOBYTE(v64) = 11;
        *(_BYTE *)(a1 + 72) = v64;
        *(_BYTE *)(a1 + 81) = 8;
        *(_BYTE *)(a1 + 85) = 0;
        *(_QWORD *)(a1 + 88) = v2 & 0xF;
        *(_BYTE *)(a1 + 113) = 1;
        if ( v63 == 91 )
          return;
        goto LABEL_36;
      }
      if ( v3 == 151 )
        goto LABEL_73;
      if ( v3 <= 0x9Bu )
      {
        v65 = 172;
        if ( (v2 & 0x200) != 0 )
          v65 = 170;
        *(_WORD *)(a1 + 24) = v65;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 81) = 8;
        *(_WORD *)(a1 + 126) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        *(_BYTE *)(a1 + 85) = 0;
        v66 = (v62 & 0xF) >> 2;
        *(_QWORD *)(a1 + 88) = v2 & 0xF;
        *(_BYTE *)(a1 + 113) = 1;
        if ( v66 == 3 )
          LOBYTE(v66) = 11;
        *(_BYTE *)(a1 + 121) = 4;
        *(_BYTE *)(a1 + 152) = v66;
        return;
      }
      v67 = v2 & 0xF;
      if ( v3 <= 0x9Du )
      {
        *(_BYTE *)(a1 + 41) = 4;
        *(_WORD *)(a1 + 24) = 178 - v5;
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v68 = (v62 & 0xF) >> 2;
        if ( v68 == 3 )
          LOBYTE(v68) = 11;
        *(_BYTE *)(a1 + 72) = v68;
        v69 = v67 | 0x40;
        if ( sub_7DA0(v69) )
        {
          *(_BYTE *)(a1 + 81) = 9;
          *(_QWORD *)(a1 + 88) = v69;
          return;
        }
        goto LABEL_73;
      }
      if ( v3 <= 0x9Fu )
      {
        *(_WORD *)(a1 + 24) = 176;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
        *(_BYTE *)(a1 + 45) = 0;
        *(_BYTE *)(a1 + 81) = 4;
        *(_WORD *)(a1 + 86) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v70 = (v62 & 0xF) >> 2;
        if ( v70 == 3 )
          LOBYTE(v70) = 11;
        *(_BYTE *)(a1 + 112) = v70;
        v71 = v67 | 0x40;
        if ( sub_7DA0(v71) )
        {
          *(_BYTE *)(a1 + 121) = 9;
          *(_QWORD *)(a1 + 128) = v71;
          return;
        }
        goto LABEL_73;
      }
      if ( v3 <= 0xA7u )
      {
        *(_BYTE *)(a1 + 41) = 4;
        *(_WORD *)(a1 + 24) = *((_WORD *)&qword_C720 + (v4 & 3));
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v72 = (v62 & 0xF) >> 2;
        if ( v72 == 3 )
          LOBYTE(v72) = 11;
        *(_BYTE *)(a1 + 72) = v72;
        *(_BYTE *)(a1 + 81) = 4;
        *(_WORD *)(a1 + 86) = (v2 & 3) + 33;
        v73 = (v2 & 0xF) >> 2;
        if ( v73 == 3 )
          LOBYTE(v73) = 11;
        *(_BYTE *)(a1 + 112) = v73;
        goto LABEL_36;
      }
      if ( v3 <= 0xAFu )
      {
        *(_BYTE *)(a1 + 32) = 1;
        v74 = *((_WORD *)&qword_C718 + (v4 & 3));
        *(_BYTE *)(a1 + 41) = 4;
        *(_WORD *)(a1 + 24) = v74;
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v75 = (v62 & 0xF) >> 2;
        if ( v75 == 3 )
          LOBYTE(v75) = 11;
        *(_BYTE *)(a1 + 72) = v75;
        *(_BYTE *)(a1 + 81) = 1;
        *(_WORD *)(a1 + 86) = (unsigned __int8)(v5 + 1);
        *(_BYTE *)(a1 + 85) = 0;
        *(_BYTE *)(a1 + 121) = 4;
        *(_WORD *)(a1 + 126) = (v2 & 3) + 33;
        v76 = (v2 & 0xF) >> 2;
        if ( v76 == 3 )
          LOBYTE(v76) = 11;
        *(_BYTE *)(a1 + 152) = v76;
        *(_BYTE *)(a1 + 28) = 1;
        *(_BYTE *)(a1 + 29) = 2 - v5;
        return;
      }
      if ( v3 <= 0xBFu )
      {
        *(_BYTE *)(a1 + 41) = 4;
        *(_WORD *)(a1 + 24) = *((_WORD *)&qword_C710 + (((unsigned __int16)v2 >> 10) & 3));
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v77 = (v62 & 0xF) >> 2;
        if ( v77 == 3 )
          LOBYTE(v77) = 11;
        *(_BYTE *)(a1 + 72) = v77;
        *(_BYTE *)(a1 + 81) = 4;
        *(_WORD *)(a1 + 86) = (v2 & 3) + 33;
        v78 = (v2 & 0xF) >> 2;
        if ( v78 == 3 )
          LOBYTE(v78) = 11;
        *(_BYTE *)(a1 + 112) = v78;
        goto LABEL_57;
      }
      if ( v3 <= 0xDFu )
      {
        *(_BYTE *)(a1 + 32) = 1;
        v79 = *((_WORD *)qword_C700 + (v10 & 7));
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 24) = v79;
        *(_BYTE *)(a1 + 81) = 4;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
        *(_WORD *)(a1 + 86) = (v2 & 3) + 33;
        v80 = (v2 & 0xF) >> 2;
        if ( v80 == 3 )
          LOBYTE(v80) = 11;
        *(_BYTE *)(a1 + 112) = v80;
        *(_BYTE *)(a1 + 121) = 4;
        *(_WORD *)(a1 + 126) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v81 = (v62 & 0xF) >> 2;
        if ( v81 == 3 )
          LOBYTE(v81) = 11;
        *(_BYTE *)(a1 + 152) = v81;
        goto LABEL_18;
      }
      if ( v3 <= 0xE3u )
      {
        *(_BYTE *)(a1 + 41) = 4;
        v82 = aF3[BYTE1(v2) & 3];
        *(_WORD *)(a1 + 24) = v82;
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v83 = (v62 & 0xF) >> 2;
        if ( v83 == 3 )
          LOBYTE(v83) = 11;
        *(_BYTE *)(a1 + 72) = v83;
        *(_BYTE *)(a1 + 81) = 4;
        *(_WORD *)(a1 + 86) = (v2 & 3) + 33;
        v84 = (v2 & 0xF) >> 2;
        if ( v84 == 3 )
          LOBYTE(v84) = 11;
        *(_BYTE *)(a1 + 112) = v84;
        if ( v82 != 58 )
          return;
        v51 = a1 + 120;
LABEL_105:
        sub_4960(a1, v51);
        return;
      }
      if ( v3 == 229 )
      {
        *(_WORD *)(a1 + 24) = 191;
        *(_BYTE *)(a1 + 41) = 4;
        *(_WORD *)(a1 + 46) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v87 = (v62 & 0xF) >> 2;
        if ( v87 == 3 )
          LOBYTE(v87) = 11;
        *(_BYTE *)(a1 + 72) = v87;
        *(_BYTE *)(a1 + 81) = 4;
        *(_WORD *)(a1 + 86) = (v2 & 3) + 33;
        v88 = (v2 & 0xF) >> 2;
        if ( v88 == 3 )
          LOBYTE(v88) = 11;
        *(_BYTE *)(a1 + 112) = v88;
        return;
      }
      if ( v3 <= 0xE6u )
      {
        *(_WORD *)(a1 + 24) = 179;
        *(_BYTE *)(a1 + 32) = 1;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 86) = (v2 & 3) + 33;
        *(_BYTE *)(a1 + 81) = 4;
        v85 = (v2 & 0xF) >> 2;
        if ( v85 == 3 )
          LOBYTE(v85) = 11;
        *(_BYTE *)(a1 + 112) = v85;
        *(_BYTE *)(a1 + 121) = 4;
        *(_WORD *)(a1 + 126) = (((unsigned __int16)v2 >> 4) & 3) + 33;
        v86 = (v62 & 0xF) >> 2;
        if ( v86 == 3 )
          LOBYTE(v86) = 11;
        *(_BYTE *)(a1 + 152) = v86;
        *(_WORD *)(a1 + 28) = 7425;
        return;
      }
      if ( v3 == 231 )
      {
        *(_WORD *)(a1 + 24) = 197;
        sub_4D90(a1, *(_BYTE *)(a1 + 40), v62);
        sub_4D90(a1, *(_BYTE *)(a1 + 80), v2);
        return;
      }
      if ( v3 <= 0xE9u )
      {
        *(_WORD *)(a1 + 24) = 161;
        *(_BYTE *)(a1 + 41) = 5;
        *(_BYTE *)(a1 + 45) = 0;
        *(_QWORD *)(a1 + 48) = (unsigned __int8)v2;
        *(_WORD *)(a1 + 72) = 0;
        goto LABEL_28;
      }
      if ( v3 <= 0xEBu )
      {
        *(_WORD *)(a1 + 24) = 161;
        *(_BYTE *)(a1 + 41) = 5;
        *(_BYTE *)(a1 + 45) = 0;
        *(_QWORD *)(a1 + 48) = v2 & 0x1FF;
        *(_WORD *)(a1 + 72) = 0;
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 85) = 0;
        *(_WORD *)(a1 + 86) = 47;
        return;
      }
      switch ( v3 )
      {
        case 0xECu:
          *(_WORD *)(a1 + 24) = 140;
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = (unsigned __int8)v2;
          *(_WORD *)(a1 + 72) = 0;
          return;
        case 0xEDu:
          *(_WORD *)(a1 + 24) = 161;
          v112 = v2 & 0x1F;
          if ( (v2 & 0x10) != 0 )
            v112 = v2 | 0xFFFFFFF0;
          *(_BYTE *)(a1 + 41) = 8;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v112;
          *(_BYTE *)(a1 + 73) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = 3;
          return;
        case 0xEEu:
          *(_WORD *)(a1 + 24) = 144;
          if ( (v2 & 0x80u) == 0 )
            v2 = (unsigned __int8)v2;
          else
            v2 |= 0xFFFFFF80;
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v2;
          *(_WORD *)(a1 + 72) = 257;
          return;
      }
      if ( (unsigned __int16)v2 >> 12 == 14 )
        goto LABEL_73;
      if ( (_WORD)v2 == 0xF070 )
      {
        *(_WORD *)(a1 + 24) = 140;
        goto LABEL_60;
      }
      if ( (v62 & 0xFEF) == 0xF02 )
      {
        *(_WORD *)(a1 + 24) = 162;
        sub_49A0(a1, a1 + 40);
        *(_BYTE *)(a1 + 81) = 8;
        *(_BYTE *)(a1 + 85) = 0;
        *(_QWORD *)(a1 + 88) = v2 & 0xF;
        *(_BYTE *)(a1 + 113) = 1;
        goto LABEL_36;
      }
      v89 = v2 & 0xFEFF;
      if ( (v2 & 0xFEFF) == 0xF062 )
      {
        *(_WORD *)(a1 + 24) = 162;
        sub_49A0(a1, a1 + 40);
        *(_BYTE *)(a1 + 81) = 8;
        *(_BYTE *)(a1 + 85) = 0;
        *(_QWORD *)(a1 + 88) = 16;
        *(_BYTE *)(a1 + 113) = 1;
        goto LABEL_36;
      }
      if ( v89 == -3994 )
      {
        *(_WORD *)(a1 + 24) = 13;
        sub_49A0(a1, a1 + 40);
        goto LABEL_28;
      }
      if ( v89 == -3983 )
      {
        *(_WORD *)(a1 + 24) = 143;
        v24 = a1 + 80;
        *(_BYTE *)(a1 + 41) = 1;
        *(_BYTE *)(a1 + 45) = 0;
        *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
        goto LABEL_61;
      }
      v90 = v62 & 0xF;
      if ( v10 != 60 )
      {
        if ( v10 != 61 )
        {
          if ( v10 == 62 )
          {
            if ( (v2 & 0x80u) != 0 )
            {
              *(_BYTE *)(a1 + 41) = 6;
              v94 = aJxky[v13];
              *(_BYTE *)(a1 + 45) = 9;
              *(_WORD *)(a1 + 24) = v94;
              wide_byte = get_wide_byte();
              ++*(_WORD *)(a1 + 26);
              *(_QWORD *)(a1 + 56) = wide_byte | ((unsigned __int16)v2 << 16) & 0x7F0000;
              return;
            }
            *(_WORD *)(a1 + 24) = aFrht[v13];
            sub_49E0(a1, a1 + 40);
            v92 = (unsigned __int16)v2;
            v93 = 2;
          }
          else if ( v5 )
          {
            *(_WORD *)(a1 + 24) = 157;
            *(_BYTE *)(a1 + 41) = 8;
            *(_BYTE *)(a1 + 45) = 0;
            *(_QWORD *)(a1 + 48) = (char)(v9 + 1);
            *(_BYTE *)(a1 + 73) = 1;
            v92 = (unsigned __int16)v2;
            v93 = 2;
          }
          else
          {
            if ( !(_BYTE)v2 )
            {
              *(_WORD *)(a1 + 24) = (unsigned __int8)(v9 - 122);
              return;
            }
            v91 = 128;
            if ( (v2 & 0x200) != 0 )
              v91 = 131;
            *(_WORD *)(a1 + 24) = v91;
            v92 = (unsigned __int16)v2;
            v93 = 1;
          }
          sub_4B80(a1, v93, v92);
          return;
        }
        if ( (_WORD)v2 == 0xF495 )
        {
          *(_WORD *)(a1 + 24) = 151;
          return;
        }
        if ( (v2 & 0xFFF8) == 0xF4A0 )
        {
          *(_WORD *)(a1 + 24) = 161;
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v2 & 7;
          *(_WORD *)(a1 + 72) = 0;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = 4;
          return;
        }
        if ( (v2 & 0xFFE0) == 0xF4C0 )
        {
          *(_WORD *)(a1 + 24) = 123;
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v2 & 0x1F;
          *(_WORD *)(a1 + 72) = 256;
          return;
        }
        if ( (v62 & 8) == 0 )
        {
          *(_BYTE *)(a1 + 41) = 1;
          v96 = *((_WORD *)&qword_C6C8 + (((unsigned __int8)(v62 & 0xF) >> 1) & 7));
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
          *(_WORD *)(a1 + 24) = v96;
          if ( (v2 & 0x10) != 0 )
          {
            v97 = v2 | 0xFFFFFFF0;
          }
          else
          {
            v100 = v2;
            v97 = v2 & 0x1F;
            v101 = v100 & 0x1F;
            if ( v96 != 86 )
            {
              v98 = 2;
              if ( !v101 )
              {
LABEL_243:
                if ( (unsigned __int16)(v96 - 160) <= 1u || (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 1) != 0 )
                {
                  sub_48E0(a1, v98, v5);
                  *(_WORD *)(a1 + 24) = v99 + 1;
                }
                return;
              }
            }
          }
          *(_BYTE *)(a1 + 81) = 8;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = v97;
          *(_BYTE *)(a1 + 113) = 1;
          if ( v96 == 86 )
          {
            v98 = 3;
          }
          else
          {
            ++v96;
            v98 = 3;
            *(_WORD *)(a1 + 24) = v96;
          }
          goto LABEL_243;
        }
        if ( (v2 & 0x80u) == 0 )
          goto LABEL_73;
        if ( (unsigned __int8)v2 <= 0x82u )
        {
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          v102 = *((_WORD *)&qword_C6C0 + (v2 & 7));
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 24) = v102;
          *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
          *(_WORD *)(a1 + 86) = 3;
          if ( v5 == v9 )
            return;
          goto LABEL_253;
        }
        if ( (_BYTE)v2 == 0x83 && (v2 & 0x200) == 0 )
        {
          *(_WORD *)(a1 + 24) = 69;
          goto LABEL_272;
        }
        if ( (unsigned __int8)v2 <= 0x85u )
        {
          v103 = 62;
          if ( (v2 & 1) != 0 )
            v103 = 52;
          *(_WORD *)(a1 + 24) = v103;
          goto LABEL_264;
        }
        if ( (unsigned __int8)v2 <= 0x87u && (v2 & 0x200) == 0 )
        {
          *(_WORD *)(a1 + 24) = (v2 & 1) + 60;
          goto LABEL_272;
        }
        if ( (unsigned __int8)v2 <= 0x8Bu )
        {
          *(_BYTE *)(a1 + 41) = 1;
          v102 = *((_WORD *)&qword_C6B8 + (v2 & 3));
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 29;
          *(_WORD *)(a1 + 24) = v102;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (unsigned __int8)(v9 + 1);
          if ( v5 == v9 )
            return;
LABEL_253:
          *(_BYTE *)(a1 + 121) = 1;
          *(_BYTE *)(a1 + 125) = 0;
          *(_WORD *)(a1 + 126) = (unsigned __int8)(v5 + 1);
          *(_WORD *)(a1 + 24) = v102 + 1;
          return;
        }
        v104 = v2 & 0x1F;
        if ( (unsigned __int8)v2 <= 0x94u )
        {
          v103 = *((_WORD *)&qword_C6A0[-3] + v104);
          *(_WORD *)(a1 + 24) = v103;
          if ( v103 == 18 )
          {
            if ( (v2 & 0x200) != 0 )
              goto LABEL_73;
            *(_BYTE *)(a1 + 41) = 1;
            *(_BYTE *)(a1 + 45) = 0;
            *(_WORD *)(a1 + 46) = 1;
LABEL_28:
            *(_BYTE *)(a1 + 81) = 1;
            *(_BYTE *)(a1 + 85) = 0;
            goto LABEL_29;
          }
          if ( v103 == 54 || v103 == 64 )
          {
LABEL_264:
            *(_BYTE *)(a1 + 41) = 1;
            *(_BYTE *)(a1 + 45) = 0;
            *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
            if ( v5 != v9 )
            {
              *(_BYTE *)(a1 + 81) = 1;
              *(_BYTE *)(a1 + 85) = 0;
              *(_WORD *)(a1 + 86) = (unsigned __int8)(v5 + 1);
              *(_WORD *)(a1 + 24) = v103 + 1;
            }
            return;
          }
          if ( (v2 & 0x200) != 0 )
            goto LABEL_73;
LABEL_272:
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
          return;
        }
        if ( (_BYTE)v2 == 0x9B && !v5 )
        {
          *(_WORD *)(a1 + 24) = (unsigned __int8)(v9 - 118);
          return;
        }
        if ( (_BYTE)v2 == 0x9F )
        {
          *(_WORD *)(a1 + 24) = 67;
          *(_BYTE *)(a1 + 41) = 1;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
          if ( v5 != v9 )
          {
            *(_BYTE *)(a1 + 81) = 1;
            *(_BYTE *)(a1 + 85) = 0;
            *(_WORD *)(a1 + 86) = (unsigned __int8)(v5 + 1);
            *(_WORD *)(a1 + 24) = 68;
          }
          return;
        }
        if ( v90 == 10 )
        {
          *(_WORD *)(a1 + 24) = 95;
          *(_BYTE *)(a1 + 41) = 10;
          *(_QWORD *)(a1 + 48) = v13;
          *(_BYTE *)(a1 + 81) = 1;
          *(_BYTE *)(a1 + 85) = 0;
          *(_WORD *)(a1 + 86) = (unsigned __int8)((v2 & 7) + 31);
          return;
        }
        if ( v90 == 11 )
        {
          if ( (v2 & 0x200) != 0 )
          {
            switch ( v67 )
            {
              case 5u:
                v90 = 10;
                goto LABEL_324;
              case 6u:
                goto LABEL_324;
              case 7u:
                v90 = 12;
                goto LABEL_324;
              case 8u:
                v90 = 13;
                goto LABEL_324;
              case 9u:
                v90 = 14;
                goto LABEL_324;
              case 0xBu:
                v90 = 15;
                goto LABEL_324;
              case 0xCu:
                v90 = 16;
                goto LABEL_324;
              case 0xDu:
                v90 = 17;
                goto LABEL_324;
              case 0xEu:
                v90 = 46;
                goto LABEL_324;
              case 0xFu:
                v90 = 18;
                goto LABEL_324;
              default:
                goto LABEL_320;
            }
          }
          v90 = v67 - 3;
          if ( (unsigned __int8)(v67 - 9) <= 3u )
          {
LABEL_324:
            v111 = 153;
            if ( v5 )
              v111 = 155;
            *(_WORD *)(a1 + 24) = v111;
            *(_BYTE *)(a1 + 41) = 1;
            *(_BYTE *)(a1 + 45) = 0;
            *(_WORD *)(a1 + 46) = v90;
          }
          else
          {
LABEL_320:
            v110 = 154;
            if ( v5 )
              v110 = 156;
            *(_WORD *)(a1 + 24) = v110;
            *(_BYTE *)(a1 + 41) = 8;
            *(_BYTE *)(a1 + 45) = 0;
            *(_QWORD *)(a1 + 48) = v9;
            *(_BYTE *)(a1 + 73) = 1;
            *(_BYTE *)(a1 + 81) = 8;
            *(_BYTE *)(a1 + 85) = 0;
            *(_QWORD *)(a1 + 88) = v67;
            *(_BYTE *)(a1 + 113) = 1;
          }
          return;
        }
        if ( (v2 & 0xFFE0) == 0xF7C0 )
        {
          *(_WORD *)(a1 + 24) = 122;
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = v104;
          *(_WORD *)(a1 + 72) = 256;
          return;
        }
        if ( (_WORD)v2 == 0xF7E0 )
        {
          *(_WORD *)(a1 + 24) = 152;
          return;
        }
        if ( (_BYTE)v2 == 0xE1 )
        {
          *(_WORD *)(a1 + 24) = 149;
          *(_BYTE *)(a1 + 41) = 8;
          *(_BYTE *)(a1 + 45) = 0;
          *(_QWORD *)(a1 + 48) = (char)(v9 + 2 * v5 + 1);
          *(_BYTE *)(a1 + 73) = 1;
          return;
        }
        if ( v90 == 14 )
        {
          v108 = *((unsigned __int16 *)qword_C680 + (v2 & 0xF));
          *(_WORD *)(a1 + 24) = v108;
          if ( !(_WORD)v108 )
            return;
          if ( (unsigned __int16)(v108 - 98) <= 0x14u && (v109 = 1053697, _bittest64(&v109, (unsigned int)(v108 - 98))) )
          {
            *(_BYTE *)(a1 + 41) = 1;
            *(_BYTE *)(a1 + 45) = 0;
            *(_WORD *)(a1 + 46) = (unsigned __int8)(v5 + 1);
          }
          else if ( v5 )
          {
            goto LABEL_73;
          }
          if ( (v2 & 0x200) != 0 )
            *(_WORD *)(a1 + 24) = v108 + 1;
          return;
        }
LABEL_73:
        *(_WORD *)(a1 + 24) = 0;
        return;
      }
      if ( v90 <= 5u )
      {
        v105 = *((_WORD *)qword_C6E8 + (v62 & 0xF));
        *(_WORD *)(a1 + 24) = v105;
        if ( !v105 )
          return;
        sub_49A0(a1, a1 + 40);
        v106 = (unsigned __int8)(v9 + 1);
        if ( v67 )
        {
          *(_BYTE *)(a1 + 81) = 8;
          *(_BYTE *)(a1 + 85) = 0;
          *(_QWORD *)(a1 + 88) = v67;
          *(_BYTE *)(a1 + 113) = 1;
          *(_BYTE *)(a1 + 121) = 1;
          *(_BYTE *)(a1 + 125) = 0;
          *(_WORD *)(a1 + 126) = v106;
          if ( v5 != v9 )
            goto LABEL_18;
          return;
        }
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 85) = 0;
        *(_WORD *)(a1 + 86) = v106;
        if ( v5 == v9 )
        {
          --*(_WORD *)(a1 + 24);
          return;
        }
        goto LABEL_36;
      }
      if ( v67 <= 5u && v90 == 6 )
      {
        v107 = *((_WORD *)qword_C6E8 + (v2 & 0xF));
        *(_WORD *)(a1 + 24) = v107;
        if ( !v107 )
          return;
        sub_49A0(a1, a1 + 40);
        *(_BYTE *)(a1 + 81) = 8;
        *(_BYTE *)(a1 + 85) = 0;
        *(_QWORD *)(a1 + 88) = 16;
        *(_BYTE *)(a1 + 113) = 1;
        goto LABEL_57;
      }
      if ( v67 == 7 && v90 == 6 )
      {
        *(_WORD *)(a1 + 24) = 19;
        sub_49A0(a1, a1 + 40);
        *(_BYTE *)(a1 + 81) = 1;
        *(_BYTE *)(a1 + 85) = 0;
        *(_WORD *)(a1 + 86) = (unsigned __int8)(v9 + 1);
        if ( v5 != v9 )
        {
          ++*(_WORD *)(a1 + 24);
          *(_BYTE *)(a1 + 121) = 1;
          *(_BYTE *)(a1 + 125) = 0;
          *(_WORD *)(a1 + 126) = (unsigned __int8)(v5 + 1);
        }
        return;
      }
      if ( (unsigned __int8)(v62 & 0xF) >> 1 == 3 )
      {
        if ( (((unsigned __int16)v2 >> 3) & 0x3F) == 0xE )
        {
          v116 = *((_WORD *)qword_C6D0 + (v2 & 7));
          *(_WORD *)(a1 + 24) = v116;
          if ( v116 )
          {
            if ( (v2 & 0x200) != 0 )
            {
              switch ( v116 )
              {
                case 112:
                  *(_WORD *)(a1 + 24) = 113;
                  break;
                case 141:
                  *(_WORD *)(a1 + 24) = 142;
                  break;
                case 96:
                  *(_WORD *)(a1 + 24) = 97;
                  break;
              }
            }
            sub_49E0(a1, a1 + 40);
          }
          return;
        }
        goto LABEL_73;
      }
      *(_BYTE *)(a1 + 41) = 1;
      v113 = aGkoy[((unsigned __int8)(v62 & 0xF) >> 1) & 3];
      *(_BYTE *)(a1 + 45) = 0;
      *(_WORD *)(a1 + 46) = (unsigned __int8)(v9 + 1);
      *(_WORD *)(a1 + 24) = v113;
      if ( (v2 & 0x10) != 0 )
      {
        v114 = v2 | 0xFFFFFFF0;
      }
      else
      {
        v114 = v2 & 0x1F;
        if ( (v2 & 0x1F) == 0 )
        {
          v115 = 2;
          if ( v113 != 89 )
          {
LABEL_357:
            if ( v5 != v9 )
            {
              sub_48E0(a1, v115, v5);
              ++*(_WORD *)(a1 + 24);
            }
            return;
          }
        }
      }
      *(_BYTE *)(a1 + 81) = 8;
      *(_BYTE *)(a1 + 85) = 0;
      *(_QWORD *)(a1 + 88) = v114;
      *(_BYTE *)(a1 + 113) = 1;
      if ( v113 != 89 )
        *(_WORD *)(a1 + 24) = v113 + 1;
      v115 = 3;
      goto LABEL_357;
    }
    v25 = v117;
    v26 = 9;
    v27 = (_DWORD *)(a1 + 40);
    while ( v26 )
    {
      *v25++ = *v27++;
      --v26;
    }
    sub_4A20(a1, (__int64)v117, 0, (unsigned __int16)v2, 0);
    v28 = get_wide_byte();
    ++*(_WORD *)(a1 + 26);
    v29 = v28 & 0xFEE0;
    switch ( v29 )
    {
      case 3136:
        v40 = 161;
        break;
      case 3168:
        v40 = 169;
        break;
      case 3200:
        v40 = 171;
        break;
      default:
        v30 = v28 & 0xFCE0;
        if ( v30 == 3072 )
        {
          v40 = 2;
        }
        else
        {
          if ( v30 != 3104 )
            goto LABEL_73;
          v40 = 8;
        }
        break;
    }
    *(_WORD *)(a1 + 24) = v40;
    if ( (v28 & 0x10) != 0 )
    {
      v41 = v28 | 0xFFFFFFF0;
    }
    else
    {
      v42 = 2;
      v41 = v28 & 0x1F;
      if ( (v28 & 0x1F) == 0 )
      {
LABEL_84:
        if ( (unsigned __int16)(v40 - 161) <= 1u )
        {
          v117[0] = 0;
          v47 = 9;
          v48 = (_DWORD *)(a1 + 40);
          v49 = v117;
          while ( v47 )
          {
            *v48++ = *v49++;
            --v47;
          }
          sub_48E0(a1, v42, SBYTE1(v28));
        }
        else if ( (unsigned __int16)(v40 - 169) > 3u )
        {
          if ( (unsigned __int16)(v40 - 8) <= 1u || (unsigned __int16)(v40 - 2) <= 1u )
          {
            v117[0] = 0;
            v52 = 9;
            v53 = (_DWORD *)(a1 + 40);
            v54 = v117;
            while ( v52 )
            {
              *v53++ = *v54++;
              --v52;
            }
            sub_48E0(a1, v42, (v28 >> 9) & 1);
            if ( v57 != v55 )
            {
              sub_48E0(a1, (unsigned __int8)(v56 + 1), v55);
              if ( v59 == 3 )
                *(_WORD *)(a1 + 24) = v58 + 1;
            }
          }
        }
        else
        {
          *(_BYTE *)(a1 + 41) = 1;
          v43 = 9;
          v44 = v117;
          *(_BYTE *)(a1 + 45) = 0;
          *(_WORD *)(a1 + 46) = 2 - ((v28 & 0x100) == 0);
          v117[0] = v42 - 1;
          v45 = (_DWORD *)(a1 + 40LL * v42);
          while ( v43 )
          {
            *v45++ = *v44++;
            --v43;
          }
        }
        return;
      }
    }
    ++v40;
    *(_BYTE *)(a1 + 81) = 8;
    v42 = 3;
    *(_BYTE *)(a1 + 85) = 0;
    *(_QWORD *)(a1 + 88) = v41;
    *(_BYTE *)(a1 + 113) = 1;
    *(_WORD *)(a1 + 24) = v40;
    goto LABEL_84;
  }
  *(_WORD *)(a1 + 24) = *((_WORD *)qword_C740 + (BYTE1(v2) & 0xF));
  sub_4A20(a1, a1 + 40, 0, (unsigned __int16)v2, 0);
  sub_49A0(a1, a1 + 80);
  v20 = *(_WORD *)(a1 + 24);
  if ( v20 == 14 )
    goto LABEL_36;
  if ( v20 != 20 )
    return;
LABEL_57:
  *(_BYTE *)(a1 + 121) = 1;
  *(_BYTE *)(a1 + 125) = 0;
LABEL_17:
  *(_WORD *)(a1 + 126) = (unsigned __int8)(v9 + 1);
  if ( v5 != v9 )
  {
LABEL_18:
    *(_BYTE *)(a1 + 28) = 1;
    *(_BYTE *)(a1 + 29) = v5 + 1;
  }
}

