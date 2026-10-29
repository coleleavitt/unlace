__int64 __fastcall sub_67A60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  char v7; // al
  unsigned __int8 v8; // al
  __int64 v9; // r12
  __int16 v10; // ax
  char v11; // al
  int v12; // eax
  __int64 v13; // rdx
  char v14; // cl
  int v15; // eax
  __int64 result; // rax
  char next_byte; // r12
  char v18; // r15
  char v19; // al
  char v20; // dl
  int v21; // eax
  int v22; // eax
  char v23; // r12
  char v24; // al
  int v25; // eax
  int v26; // eax
  void *v27; // rdx
  char *v28; // r12
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  char v36; // al
  __int16 v37; // ax
  __int64 v38; // r15
  unsigned __int16 *v39; // r12
  int v40; // ecx
  unsigned __int64 v41; // rdx
  char v42; // al
  int v43; // r12d
  int v44; // eax
  char *v45; // rax
  char v46; // al
  unsigned __int8 v47; // al
  int v48; // eax
  int v49; // edx
  char v50; // cl
  int v51; // eax
  int v52; // edx
  char v53; // cl
  int v54; // eax
  int v55; // edx
  char v56; // cl
  int v57; // eax
  int v58; // ecx
  unsigned int v59; // ecx
  char v60; // al
  __int64 v61; // rdx
  unsigned int v62; // edx
  _WORD *i; // rax
  char v64; // cl
  __int16 v65; // ax
  unsigned __int16 v66; // di
  __int16 v67; // ax
  unsigned __int16 v68; // di
  __int16 v69; // ax
  __int16 v70; // ax
  char v71; // r12
  unsigned __int8 v72; // al
  __int64 v73; // rdx
  int v74; // ecx
  unsigned __int64 v75; // rax
  __int64 v76; // rsi
  int v77; // eax
  int v78; // eax
  __int64 v79; // rax
  unsigned __int64 v80; // r8
  __int64 v81; // rax
  int v82; // edx
  unsigned __int16 v83; // si
  unsigned __int8 v84; // al
  unsigned __int8 v85; // al
  unsigned __int8 v86; // al
  __int64 v87; // rcx
  char v88; // al
  bool v89; // zf
  __int64 v90; // rax
  int v91; // ecx
  char v92; // dl
  int v93; // esi
  __int64 v94; // rcx
  char v95; // cl
  int v96; // eax
  __int16 v97; // r8
  __int64 v98; // rbp
  unsigned __int8 v99; // al
  int v100; // eax
  char v101; // al
  int v102; // eax
  char v103; // al
  int v104; // eax
  char v105; // al
  int v106; // eax
  char v107; // al
  int v108; // eax
  __int16 v109; // ax
  __int16 v110; // ax
  int v111; // ecx
  int v112; // eax
  int v113; // ecx
  unsigned __int16 v114; // ax
  unsigned __int64 v115; // rax
  int v116; // ecx
  unsigned __int64 v117; // rsi
  __int64 v118; // rdi
  __int16 v119; // ax
  char v120; // al
  char v121; // cl
  _BYTE *v122; // rax
  unsigned __int16 v123; // r12
  __int16 v124; // ax
  int v125; // eax
  int v126; // eax
  int v127; // ecx
  char v128; // al
  __int16 v129; // ax
  __int64 v130; // rdi
  char v131; // cl
  __int16 v132; // ax
  __int16 v133; // ax
  __int16 v134; // si
  int v135; // eax
  __int64 v136; // rsi
  _BYTE v137[360]; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned __int64 v138; // [rsp+178h] [rbp-40h]

  v138 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 28) = 6144;
  v6 = getseg();
  v7 = *(_BYTE *)(v6 + 43);
  if ( v7 == 2 )
  {
    *(_DWORD *)(a2 + 28) |= 0x10u;
  }
  else if ( v7 == 1 )
  {
    *(_DWORD *)(a2 + 28) |= 8u;
  }
  *(_BYTE *)(a1 + 5224) = 0;
  *(_DWORD *)(a1 + 5220) = 0;
  *(_WORD *)(a1 + 5194) = 0;
  *(_OWORD *)(a1 + 5204) = 0;
  v8 = sub_65C50(a1, a2);
  v9 = v8;
  *(_BYTE *)(a1 + 5192) = v8;
  v10 = *(_WORD *)(a2 + 26);
  if ( (v10 == 2 || v10 == 3 && *(_BYTE *)(a2 + 33)) && (*(_BYTE *)(a2 + 28) & 1) != 0 )
  {
    if ( (get_flags_ex() & 0x1000) != 0 && get_first_fcref_to() != -1 )
    {
      *(_DWORD *)(a2 + 28) &= ~1u;
      *(_DWORD *)(a2 + 24) = 65642;
      return 1;
    }
    v9 = *(unsigned __int8 *)(a1 + 5192);
    v11 = *(_BYTE *)(a1 + 5192);
    if ( (_BYTE)v9 != 98 )
      goto LABEL_7;
  }
  else
  {
    v11 = v9;
    if ( (_BYTE)v9 != 98 )
      goto LABEL_7;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 || (~(unsigned __int8)get_byte() & 0xC0) == 0 )
  {
    next_byte = insn_get_next_byte();
    v18 = insn_get_next_byte();
    v19 = insn_get_next_byte();
    if ( (next_byte & 8) != 0 )
      return 0;
    if ( (v18 & 4) == 0 )
      return 0;
    v20 = v19 & 8;
    if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 && !v20 )
      return 0;
    if ( next_byte >= 0 )
      *(_BYTE *)(a2 + 33) |= 4u;
    if ( (next_byte & 0x40) == 0 )
      *(_BYTE *)(a2 + 33) |= 2u;
    if ( (next_byte & 0x20) == 0 )
      *(_BYTE *)(a2 + 33) |= 1u;
    if ( (next_byte & 0x10) == 0 )
      *(_BYTE *)(a2 + 273) |= 1u;
    if ( v18 < 0 )
      *(_BYTE *)(a2 + 33) |= 8u;
    if ( v19 < 0 )
      *(_BYTE *)(a2 + 273) |= 4u;
    if ( (v19 & 0x40) != 0 )
      *(_BYTE *)(a2 + 273) |= 2u;
    if ( (v19 & 0x20) != 0 )
      *(_BYTE *)(a2 + 33) |= 0x80u;
    if ( (v19 & 0x10) != 0 )
      *(_BYTE *)(a2 + 273) |= 8u;
    if ( !v20 )
      *(_BYTE *)(a2 + 273) |= 0x10u;
    *(_BYTE *)(a1 + 5194) = v18;
    v21 = v19 & 7;
    if ( v21 )
    {
      *(_BYTE *)(a2 + 244) |= 8u;
      *(_BYTE *)(a2 + 241) = 1;
      *(_WORD *)(a2 + 246) = (unsigned __int8)(v21 - 91);
    }
    v22 = *(_DWORD *)(a2 + 28);
    if ( (v22 & 0x10) == 0 && ((*(_BYTE *)(a2 + 33) & 7) != 0 || (*(_BYTE *)(a2 + 273) & 0x11) != 0) )
      return 0;
    v12 = v22 | 0x10000;
    v13 = next_byte & 7;
    goto LABEL_59;
  }
  v11 = *(_BYTE *)(a1 + 5192);
LABEL_7:
  if ( (unsigned __int8)(v11 + 60) <= 1u )
  {
    v15 = *(_DWORD *)(a2 + 28);
    if ( (v15 & 0x10) == 0 )
    {
      if ( (~(unsigned __int8)get_byte() & 0xC0) != 0 )
      {
        v11 = *(_BYTE *)(a1 + 5192);
        goto LABEL_8;
      }
      v15 = *(_DWORD *)(a2 + 28);
    }
    if ( (v15 & 1) != 0
      || (v15 & 0x800) == 0
      || (unsigned __int8)((*(_BYTE *)(a1 + 5194) & 0x83) + 127) <= 2u
      || (v15 & 6) != 0
      || *(_BYTE *)(a2 + 33) )
    {
      return 0;
    }
    if ( *(_BYTE *)(a1 + 5192) == 0xC4 )
    {
      v71 = insn_get_next_byte();
      v46 = insn_get_next_byte();
      if ( v71 >= 0 )
        *(_BYTE *)(a2 + 33) |= 4u;
      if ( (v71 & 0x40) == 0 )
        *(_BYTE *)(a2 + 33) |= 2u;
      if ( (v71 & 0x20) == 0 )
        *(_BYTE *)(a2 + 33) |= 1u;
      if ( v46 < 0 )
        *(_BYTE *)(a2 + 33) |= 8u;
      v13 = v71 & 0x1F;
    }
    else
    {
      v46 = insn_get_next_byte();
      if ( v46 >= 0 )
        *(_BYTE *)(a2 + 33) |= 4u;
      v13 = 1;
    }
    if ( (v46 & 4) != 0 )
      *(_BYTE *)(a2 + 33) |= 0x80u;
    *(_BYTE *)(a1 + 5194) = v46 | 0x80;
    v12 = *(_DWORD *)(a2 + 28);
    if ( (v12 & 0x10) == 0 && (*(_BYTE *)(a2 + 33) & 6) != 0 )
      return 0;
    BYTE1(v12) |= 0x40u;
    goto LABEL_59;
  }
LABEL_8:
  if ( v11 == -113 && (get_byte() & 0x38) != 0 )
  {
    v23 = insn_get_next_byte();
    v24 = insn_get_next_byte();
    v13 = v23 & 0x1F;
    if ( v23 >= 0 )
      *(_BYTE *)(a2 + 33) |= 4u;
    if ( (v23 & 0x40) == 0 )
      *(_BYTE *)(a2 + 33) |= 2u;
    if ( (v23 & 0x20) == 0 && (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
      *(_BYTE *)(a2 + 33) |= 1u;
    if ( v24 < 0 )
      *(_BYTE *)(a2 + 33) |= 8u;
    if ( (v24 & 4) != 0 )
      *(_BYTE *)(a2 + 33) |= 0x80u;
    *(_BYTE *)(a1 + 5194) = v24;
    v25 = *(_DWORD *)(a2 + 28);
    if ( (v25 & 0x10) == 0 && (*(_BYTE *)(a2 + 33) & 6) != 0 )
      return 0;
    v12 = v25 | 0x20000;
LABEL_59:
    *(_DWORD *)(a2 + 28) = v12;
    v14 = *(_BYTE *)(a1 + 5194) & 3;
    if ( v14 == 2 )
    {
      *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFF9 | 2;
LABEL_14:
      switch ( v13 )
      {
        case 1LL:
          v26 = *(_DWORD *)(a2 + 28);
          if ( (v26 & 0x10000) != 0 )
          {
            v27 = &unk_14C760;
          }
          else
          {
            v27 = &unk_156760;
            if ( (v26 & 0x4000) == 0 )
              return 0;
          }
LABEL_78:
          v28 = (char *)sub_64830(a1, a2, (__int64)v27);
          if ( v28 )
            goto LABEL_79;
          return 0;
        case 2LL:
          v32 = *(_DWORD *)(a2 + 28);
          if ( (v32 & 0x10000) != 0 )
          {
            v27 = &unk_CA760;
          }
          else
          {
            v27 = &unk_D4760;
            if ( (v32 & 0x4000) == 0 )
              return 0;
          }
          goto LABEL_78;
        case 3LL:
          v31 = *(_DWORD *)(a2 + 28);
          if ( (v31 & 0x10000) != 0 )
          {
            v27 = &unk_B6760;
          }
          else
          {
            v27 = &unk_C0760;
            if ( (v31 & 0x4000) == 0 )
              return 0;
          }
          goto LABEL_78;
        case 5LL:
          v27 = &unk_12E760;
          if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
            return 0;
          goto LABEL_78;
        case 6LL:
          v27 = &unk_124760;
          if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
            return 0;
          goto LABEL_78;
        case 8LL:
          v27 = &unk_A2760;
          if ( (*(_BYTE *)(a2 + 30) & 2) == 0 )
            return 0;
          goto LABEL_78;
        case 9LL:
          v27 = &unk_98760;
          if ( (*(_BYTE *)(a2 + 30) & 2) == 0 )
            return 0;
          goto LABEL_78;
        default:
          return 0;
      }
    }
LABEL_11:
    if ( v14 == 3 )
    {
      *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFF9 | 4;
    }
    else if ( v14 == 1 )
    {
      BYTE1(v12) &= ~8u;
      *(_DWORD *)(a2 + 28) = v12;
    }
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(a2 + 28);
  if ( (v12 & 0x34000) != 0 )
  {
    v13 = 0;
    v14 = *(_BYTE *)(a1 + 5194) & 3;
    if ( v14 != 2 )
      goto LABEL_11;
    *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFF9 | 2;
    return 0;
  }
  v28 = (char *)&unk_16A760 + 16 * v9;
LABEL_79:
  v29 = *((unsigned __int16 *)v28 + 2);
  *(_WORD *)(a2 + 24) = v29;
  if ( (v29 & 0x8000u) != 0 )
  {
    while ( 2 )
    {
      HIWORD(v30) = HIWORD(v29);
      LOWORD(v30) = BYTE1(v29);
      switch ( v30 )
      {
        case 128:
          if ( *(_BYTE *)(a1 + 5220) )
          {
            v34 = *(unsigned int *)(a1 + 5200);
          }
          else
          {
            *(_BYTE *)(a1 + 5220) = 1;
            v84 = insn_get_next_byte();
            *(_DWORD *)(a1 + 5196) = v84;
            v34 = ((int)v84 >> 3) & 7;
            *(_DWORD *)(a1 + 5200) = v34;
          }
          LOWORD(v29) = *((_WORD *)*(&off_181C80 + *(unsigned __int8 *)(a2 + 24)) + v34);
          *(_WORD *)(a2 + 24) = v29;
          goto LABEL_104;
        case 129:
          if ( *(_BYTE *)(a1 + 5220) )
          {
            v33 = *(unsigned int *)(a1 + 5200);
          }
          else
          {
            *(_BYTE *)(a1 + 5220) = 1;
            v85 = insn_get_next_byte();
            *(_DWORD *)(a1 + 5196) = v85;
            v33 = ((int)v85 >> 3) & 7;
            *(_DWORD *)(a1 + 5200) = v33;
          }
          v28 = (char *)*(&off_181C00 + *(unsigned __int8 *)(a2 + 24)) + 32 * v33 + 16 * ((*(char *)(a2 + 33) >> 3) & 1);
          goto LABEL_94;
        case 130:
          v28 = (char *)sub_64710(a1, a2);
          if ( !v28 )
            return 0;
          goto LABEL_94;
        case 131:
          v28 = (char *)sub_64830(a1, a2, 0);
          if ( v28 )
            goto LABEL_94;
          return 0;
        case 132:
          v45 = (char *)*(&off_1819D0 + (unsigned __int8)v29);
          if ( !*((_WORD *)v45 + 2) )
            return 0;
          while ( 1 )
          {
            v28 = v45;
            if ( (*(_DWORD *)v45 & *(_DWORD *)(a1 + 4436)) != 0 )
              break;
            v45 += 16;
            if ( !*((_WORD *)v45 + 2) )
              return 0;
          }
          if ( !v45 )
            return 0;
LABEL_94:
          v29 = *((unsigned __int16 *)v28 + 2);
          *(_WORD *)(a2 + 24) = v29;
          if ( (v29 & 0x8000u) == 0 )
            break;
          continue;
        default:
          LOWORD(v29) = *(_WORD *)(a2 + 24);
LABEL_104:
          if ( (_WORD)v29 == 0xFFFE )
          {
            if ( *(_BYTE *)(a1 + 5220) )
              goto LABEL_108;
            *(_BYTE *)(a1 + 5220) = 1;
            v47 = insn_get_next_byte();
            *(_DWORD *)(a1 + 5196) = v47;
            *(_DWORD *)(a1 + 5200) = ((int)v47 >> 3) & 7;
            LOWORD(v29) = *(_WORD *)(a2 + 24);
          }
          else
          {
            if ( (_WORD)v29 == 0xFFFF )
              goto LABEL_108;
            if ( (v29 & 0x8000u) != 0 )
            {
LABEL_644:
              if ( !under_debugger )
                interr();
              goto LABEL_646;
            }
          }
          return result;
      }
      break;
    }
  }
  if ( !(_WORD)v29 )
    return 0;
LABEL_108:
  if ( (*(_DWORD *)(a1 + 4436) & *(_DWORD *)v28) == 0 )
    return 0;
  v35 = *(_DWORD *)(a2 + 28);
  if ( (v35 & 0x10000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 5204) )
      goto LABEL_118;
    if ( *(char *)(a2 + 33) >= 0 )
      goto LABEL_159;
LABEL_640:
    if ( (v35 & 0x24000) != 0 )
      goto LABEL_456;
    goto LABEL_159;
  }
  if ( !*(_BYTE *)(a1 + 5220) )
  {
    *(_BYTE *)(a1 + 5220) = 1;
    v72 = insn_get_next_byte();
    *(_DWORD *)(a1 + 5196) = v72;
    *(_DWORD *)(a1 + 5200) = ((int)v72 >> 3) & 7;
  }
  if ( *(char *)(a2 + 33) < 0 )
  {
    v36 = *(_BYTE *)(a2 + 273);
    if ( (v36 & 2) != 0 && ((~(unsigned __int8)*(_DWORD *)(a1 + 5196) & 0xC0) != 0 || (v36 & 8) == 0) )
      return 0;
  }
  if ( sub_217C0(*(unsigned __int16 *)(a2 + 24)) )
  {
    *(__m128i *)(a1 + 5204) = _mm_shuffle_epi32(_mm_cvtsi32_si128(8u), 0);
    goto LABEL_118;
  }
  if ( (*(_BYTE *)(a2 + 273) & 8) != 0 && (~*(_BYTE *)(a1 + 5196) & 0xC0) == 0 )
  {
    *(__m128i *)(a1 + 5204) = _mm_load_si128((const __m128i *)&xmmword_961A0);
    goto LABEL_118;
  }
  if ( *(_DWORD *)(a1 + 5204) )
    goto LABEL_118;
  v35 = *(_DWORD *)(a2 + 28);
  v95 = *(_BYTE *)(a2 + 33);
  if ( (v35 & 0x10000) == 0 )
  {
    if ( v95 >= 0 )
      goto LABEL_159;
    goto LABEL_640;
  }
  if ( v95 >= 0 )
  {
    v48 = 17;
    if ( (*(_BYTE *)(a2 + 273) & 2) != 0 )
      goto LABEL_160;
    goto LABEL_159;
  }
  if ( (v35 & 0x24000) != 0 || (*(_BYTE *)(a2 + 273) & 2) == 0 )
  {
LABEL_456:
    v48 = 16;
    goto LABEL_160;
  }
LABEL_159:
  v48 = 8;
LABEL_160:
  *(_DWORD *)(a1 + 5204) = v48;
  v49 = *(_DWORD *)(a2 + 28);
  v50 = *(_BYTE *)(a2 + 33);
  if ( (v49 & 0x10000) != 0 )
  {
    if ( v50 < 0 )
    {
      v51 = 8;
      if ( (v49 & 0x24000) == 0 )
        v51 = ((*(_BYTE *)(a2 + 273) & 2) == 0) + 7;
    }
    else
    {
      v51 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 7 : 16;
    }
  }
  else
  {
    v51 = 7;
    if ( v50 < 0 )
      v51 = 8 - ((v49 & 0x24000) == 0);
  }
  *(_DWORD *)(a1 + 5208) = v51;
  v52 = *(_DWORD *)(a2 + 28);
  v53 = *(_BYTE *)(a2 + 33);
  if ( (v52 & 0x10000) != 0 )
  {
    if ( v53 < 0 )
    {
      v54 = 7;
      if ( (v52 & 0x24000) == 0 )
        v54 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 7 : 2;
    }
    else
    {
      v54 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 2 : 8;
    }
  }
  else
  {
    v54 = 2;
    if ( v53 < 0 )
    {
      v54 = 7;
      if ( (v52 & 0x24000) == 0 )
        v54 = 2;
    }
  }
  *(_DWORD *)(a1 + 5212) = v54;
  v55 = *(_DWORD *)(a2 + 28);
  v56 = *(_BYTE *)(a2 + 33);
  if ( (v55 & 0x10000) != 0 )
  {
    if ( v56 < 0 )
    {
      v57 = 2;
      if ( (v55 & 0x24000) == 0 )
        v57 = ((*(_BYTE *)(a2 + 273) & 2) == 0) + 1;
    }
    else
    {
      v57 = (*(_BYTE *)(a2 + 273) & 2) == 0 ? 1 : 7;
    }
  }
  else
  {
    v57 = 1;
    if ( v56 < 0 )
      v57 = 2 - ((v55 & 0x24000) == 0);
  }
  *(_DWORD *)(a1 + 5216) = v57;
LABEL_118:
  *(_DWORD *)(a1 + 5244) = 0;
  v37 = *(_WORD *)(a2 + 24);
  if ( v37 == 213 )
  {
    if ( !*(_BYTE *)(a2 + 32) && (*(_BYTE *)(a2 + 28) & 7) == 0 )
    {
      qmemcpy(v137, (const void *)a2, sizeof(v137));
      v86 = sub_65C50(a1, a2);
      *(_BYTE *)(a1 + 5192) = v86;
      if ( (unsigned __int8)(v86 + 40) > 7u || !(unsigned __int8)sub_65170(a1, a2, v86, 1) )
        qmemcpy((void *)a2, v137, 0x168u);
    }
  }
  else
  {
    if ( v37 != -1 )
    {
      v38 = a2 + 40;
      v39 = (unsigned __int16 *)(v28 + 6);
      while ( 1 )
      {
        v40 = *v39;
        if ( !(_WORD)v40 )
          goto LABEL_124;
        if ( !sub_667F0(a1, a2, v38, v40) )
          break;
        v38 += 40;
        ++v39;
        if ( a2 + 240 == v38 )
          goto LABEL_124;
      }
      v114 = *(_WORD *)(a2 + 24);
      if ( v114 != 1164 )
      {
        if ( v114 > 0x48Cu )
        {
          if ( v114 != 1165 )
            return 0;
          goto LABEL_461;
        }
        if ( v114 == 1163 )
        {
          if ( *(_WORD *)(a2 + 46) > 3u )
          {
LABEL_462:
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_BYTE *)(a2 + 84) &= ~8u;
            *(_DWORD *)(a2 + 28) |= 0x100000u;
            *(_WORD *)(a2 + 24) = 129;
            goto LABEL_124;
          }
LABEL_461:
          if ( *(_WORD *)(a2 + 86) > 3u )
            goto LABEL_462;
          return 0;
        }
        if ( v114 <= 0x487u )
          return 0;
      }
      if ( *(_WORD *)(a2 + 46) > 3u )
        goto LABEL_462;
      return 0;
    }
    if ( !(unsigned __int8)sub_65170(a1, a2, *(unsigned __int8 *)(a1 + 5192), 0) )
      return 0;
  }
LABEL_124:
  sub_64570(a1, a2);
  if ( !(unsigned __int8)sub_21D60(a2) )
    return 0;
  v42 = *(_BYTE *)(a1 + 5194);
  if ( v42 )
  {
    if ( !*(_BYTE *)(a1 + 5224) && (~v42 & 0x78) != 0 )
      return 0;
  }
  v43 = *(unsigned __int16 *)(a2 + 24);
  v44 = v43;
  if ( (unsigned __int16)v43 <= 0x309u )
  {
    if ( (unsigned __int16)v43 <= 0x305u )
    {
      if ( (unsigned __int16)v43 <= 0xE2u )
      {
        if ( (unsigned __int16)v43 <= 0x6Cu )
        {
          v41 = (unsigned __int16)(v43 - 6);
          switch ( *(_WORD *)(a2 + 24) )
          {
            case 6:
              if ( (*(_BYTE *)(a1 + 4452) & 0x10) != 0 )
                goto LABEL_228;
              if ( (unsigned __int16)get_word() )
                break;
              return 0;
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2C:
            case 0x2D:
            case 0x2F:
            case 0x30:
            case 0x31:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3B:
            case 0x3C:
            case 0x3D:
            case 0x3E:
            case 0x3F:
            case 0x40:
            case 0x41:
            case 0x42:
            case 0x43:
            case 0x44:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4A:
            case 0x4B:
            case 0x4C:
            case 0x4D:
            case 0x4E:
            case 0x4F:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x59:
            case 0x5A:
            case 0x5B:
            case 0x5C:
            case 0x5D:
              goto LABEL_224;
            case 0x11:
              v59 = *(_DWORD *)(a2 + 28) & 0x10;
              if ( !v59 )
                goto LABEL_189;
              if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
                *(_BYTE *)(a2 + 45) = 5;
              goto LABEL_188;
            case 0x12:
              v77 = *(_DWORD *)(a2 + 28);
              v59 = v77 & 0x10;
              if ( (v77 & 0x10) == 0 )
                goto LABEL_189;
              BYTE1(v77) |= 8u;
              *(_BYTE *)(a2 + 45) = 7;
              *(_DWORD *)(a2 + 28) = v77;
              goto LABEL_188;
            case 0x13:
            case 0x1D:
              if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 8) != 0 )
              {
                *(_WORD *)(a2 + 24) = v43 + 2;
              }
              else if ( sub_640B0(a2) )
              {
                *(_WORD *)(a2 + 24) = v43 + 1;
              }
              *(_BYTE *)(a2 + 45) = get_dtype_by_size();
              *(_BYTE *)(a1 + 5222) = 1;
              LOWORD(v44) = *(_WORD *)(a2 + 24);
              goto LABEL_224;
            case 0x25:
            case 0x32:
            case 0x5E:
              goto LABEL_229;
            case 0x2A:
              v58 = *(_DWORD *)(a2 + 28);
              if ( *(_BYTE *)(a2 + 121)
                && *(_WORD *)(a2 + 46) == *(_WORD *)(a2 + 86)
                && *(_BYTE *)(a2 + 41) == 1
                && *(_BYTE *)(a2 + 81) == 1 )
              {
                *(_BYTE *)(a2 + 84) &= ~8u;
              }
              goto LABEL_187;
            case 0x2B:
              v59 = *(_DWORD *)(a2 + 28) & 0x10;
              if ( !v59 )
                goto LABEL_189;
              if ( (*(_BYTE *)(a2 + 33) & 8) != 0 && *(_BYTE *)(a2 + 45) == 7 )
                goto LABEL_248;
              goto LABEL_188;
            case 0x2E:
              *(_QWORD *)(a2 + 88) = 4294967294LL;
              v79 = *(_QWORD *)(a2 + 48);
              v41 = *(unsigned int *)(a1 + 4452);
              if ( v79 == 32 && (v41 & 0x400) == 0 && (*(_BYTE *)(a2 + 28) & 8) != 0 )
              {
                *(_BYTE *)(a2 + 44) &= ~8u;
                *(_BYTE *)(a2 + 84) &= ~8u;
                *(_BYTE *)(a2 + 85) = 2;
                sub_650C0(a1, a2, a2 + 80);
                LOWORD(v44) = *(_WORD *)(a2 + 24);
                goto LABEL_224;
              }
              BYTE1(v41) &= 8u;
              if ( BYTE1(v41) )
                goto LABEL_228;
              if ( (unsigned __int8)sub_65980(a1, a2, v79, 0) )
                *(_DWORD *)(a2 + 28) |= 0x2000u;
              break;
            case 0x3A:
              v41 = *(unsigned int *)(a2 + 28);
              v78 = *(_DWORD *)(a2 + 28) & 0x1018;
              if ( v78 == 4112 )
              {
                *(_WORD *)(a2 + 24) = 60;
              }
              else
              {
                v41 &= 0x1008u;
                if ( !(_DWORD)v41 || v78 == 4104 )
                  *(_WORD *)(a2 + 24) = 59;
              }
              goto LABEL_258;
            default:
              v41 = (unsigned int)(v43 - 6);
              goto LABEL_228;
          }
LABEL_223:
          LOWORD(v44) = *(_WORD *)(a2 + 24);
          goto LABEL_224;
        }
        v41 = (unsigned __int16)(v43 - 109);
        switch ( *(_WORD *)(a2 + 24) )
        {
          case 0x6D:
          case 0x71:
          case 0x75:
            v41 = *(unsigned int *)(a2 + 28);
            if ( (v41 & 0x1000) == 0 )
            {
              v110 = v43 + 1;
              v41 &= 0x1008u;
              if ( (_DWORD)v41 )
                v110 = v43 - 1;
              *(_WORD *)(a2 + 24) = v110;
            }
            goto LABEL_258;
          case 0x7A:
            if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1E000000000100LL )
              return 0;
            if ( *(_BYTE *)(a1 + 5192) != 0x8C )
              goto LABEL_433;
            if ( *(_BYTE *)(a2 + 41) != 1 )
            {
              *(_BYTE *)(a2 + 45) = 1;
LABEL_433:
              if ( *(_BYTE *)(a1 + 5192) == 0x8E && *(_BYTE *)(a2 + 81) != 1 )
                *(_BYTE *)(a2 + 85) = 1;
            }
            if ( (unsigned __int8)get_byte() != 0xB8
              || (unsigned int)get_dword() != -1869599027
              || (unsigned __int8)get_byte() != 0x90
              || next_head() != -1
              || (get_flags_ex() & 0x600) != 0 && (get_flags_ex() & 0x600) != 0x200 )
            {
              goto LABEL_223;
            }
            v113 = *(_DWORD *)(a2 + 28);
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_BYTE *)(a2 + 84) &= ~8u;
            *(_BYTE *)(a2 + 41) = 5;
            v59 = v113 & 0x10;
            *(_QWORD *)(a2 + 48) = 46;
            *(_DWORD *)(a2 + 24) = (_DWORD)&unk_A002E;
            goto LABEL_188;
          case 0x81:
            goto LABEL_424;
          case 0x88:
          case 0x91:
LABEL_229:
            LODWORD(v73) = *(_DWORD *)(a2 + 28);
            if ( (v73 & 0x800) == 0 )
            {
              if ( (v73 & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 8) != 0 )
                goto LABEL_564;
              goto LABEL_232;
            }
            v131 = *(_BYTE *)(a2 + 33);
            if ( !v131 )
              goto LABEL_234;
            if ( (v73 & 0x10) == 0 )
              goto LABEL_232;
            if ( (v131 & 8) != 0 )
              goto LABEL_564;
            if ( (unsigned __int16)v43 > 0x56u )
            {
              v73 = 0x20D04000AAA00143LL;
              if ( _bittest64(&v73, (unsigned int)(v43 - 88)) )
                goto LABEL_564;
              goto LABEL_232;
            }
            v73 = 0x2000000E00005LL;
            if ( !_bittest64(&v73, (unsigned int)(v43 - 37)) )
              goto LABEL_232;
            goto LABEL_564;
          case 0x8C:
          case 0x95:
            LODWORD(v73) = *(_DWORD *)(a2 + 28) & 0x800;
            if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
            {
              if ( (_DWORD)v73 )
              {
LABEL_564:
                v44 = v43 + 2;
                *(_WORD *)(a2 + 24) = v43 + 2;
              }
            }
            else if ( !(_DWORD)v73 || *(_BYTE *)(a2 + 33) )
            {
LABEL_232:
              if ( sub_640B0(a2) )
              {
                v44 = v43 + 1;
                *(_WORD *)(a2 + 24) = v43 + 1;
              }
              else
              {
                v44 = v43 - 1;
                *(_WORD *)(a2 + 24) = v43 - 1;
              }
            }
LABEL_234:
            v74 = *(_DWORD *)(a2 + 28);
            if ( (v74 & 0x10) == 0 )
            {
              v127 = *(_DWORD *)(a2 + 28) & 0x818;
              LOBYTE(v73) = v127 == 2056;
              LOBYTE(v44) = v127 == 0;
              v41 = (v44 | (unsigned int)v73) + 1;
              goto LABEL_240;
            }
            v41 = 7;
            if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
              goto LABEL_240;
            v41 = 1;
            if ( (v74 & 0x800) == 0 )
              goto LABEL_240;
            if ( (unsigned __int16)v44 > 0x6Cu )
            {
              v41 = 7;
              v136 = 0xC050682000555LL;
              if ( _bittest64(&v136, (unsigned int)(v44 - 109)) )
                goto LABEL_240;
            }
            else
            {
              v75 = (unsigned int)(v44 - 37);
              if ( (unsigned __int16)v75 <= 0x3Bu )
              {
                v76 = 0xA1A000000E00005LL;
                v41 = 7;
                if ( _bittest64(&v76, v75) )
                {
LABEL_240:
                  *(_BYTE *)(a2 + 45) = v41;
                  *(_BYTE *)(a1 + 5222) = 1;
                  LOWORD(v44) = *(_WORD *)(a2 + 24);
LABEL_224:
                  if ( (unsigned __int16)v44 > 0x39u )
                  {
                    if ( (unsigned __int16)(v44 - 61) <= 0x18u )
                    {
LABEL_226:
                      if ( ((*(_BYTE *)(a2 + 32) - 30) & 0xFD) == 0 )
                        *(_BYTE *)(a1 + 5221) = 1;
                    }
                  }
                  else if ( (unsigned __int16)v44 > 0x34u )
                  {
                    goto LABEL_226;
                  }
LABEL_228:
                  v58 = *(_DWORD *)(a2 + 28);
LABEL_187:
                  v59 = v58 & 0x10;
                  goto LABEL_188;
                }
              }
            }
            LOBYTE(v41) = (v74 & 0x818) == 2064;
            v41 = (unsigned int)(v41 + 1);
            goto LABEL_240;
          case 0x9F:
          case 0xA0:
            v108 = *(_DWORD *)(a2 + 28);
            v41 = v108 & 0x800;
            if ( (v108 & 0x800) == 0 || *(_BYTE *)(a2 + 33) )
            {
              if ( (v108 & 0x10) != 0 && ((*(_BYTE *)(a2 + 33) & 8) != 0 || (v108 & 0x800) != 0) )
              {
                v109 = 741;
                if ( (_WORD)v43 == 159 )
                  v109 = 738;
              }
              else if ( sub_640B0(a2) )
              {
                v109 = 740;
                if ( (_WORD)v43 == 159 )
                  v109 = 737;
              }
              else
              {
                v109 = 739;
                if ( (_WORD)v43 == 159 )
                  v109 = 736;
              }
              *(_WORD *)(a2 + 24) = v109;
              *(_BYTE *)(a1 + 5222) = 1;
              LOWORD(v43) = *(_WORD *)(a2 + 24);
            }
            *(_QWORD *)(a2 + 48) = (unsigned __int16)*(_QWORD *)(a2 + 48);
            LOWORD(v44) = v43;
            goto LABEL_224;
          case 0xCB:
            if ( *(_BYTE *)(a2 + 41) == 1 )
              goto LABEL_228;
            *(_BYTE *)(a1 + 5222) = 0;
            LOWORD(v44) = *(_WORD *)(a2 + 24);
            *(_BYTE *)(a2 + 45) = 1;
            goto LABEL_224;
          case 0xD2:
            v58 = *(_DWORD *)(a2 + 28);
            if ( !*(_BYTE *)(v6 + 43) && *(_BYTE *)(a2 + 41) == 1 && *(_BYTE *)(a2 + 81) == 1 )
            {
              v41 = *(unsigned __int16 *)(a2 + 86);
              *(_WORD *)(a2 + 86) = *(_WORD *)(a2 + 46);
              *(_WORD *)(a2 + 46) = v41;
            }
            goto LABEL_187;
          case 0xD6:
            v58 = *(_DWORD *)(a2 + 28);
            if ( *(_BYTE *)(a1 + 5192) != 0x90 || (v58 & 0x800) == 0 || *(_BYTE *)(a2 + 33) )
              goto LABEL_187;
            *(_WORD *)(a2 + 24) = 129;
            *(_BYTE *)(a2 + 41) = 0;
            *(_BYTE *)(a2 + 81) = 0;
            *(_BYTE *)(a1 + 5223) = 0;
            *(_WORD *)(a1 + 5221) = 0;
LABEL_424:
            if ( *(_BYTE *)(a1 + 5192) != 15 )
              goto LABEL_425;
            v135 = *(unsigned __int8 *)(a1 + 5193);
            v41 = (unsigned __int8)v135 & 0xEF;
            if ( (*(_BYTE *)(a1 + 5193) & 0xEF) == 0xD )
              goto LABEL_601;
            v41 = (unsigned int)(v135 - 24);
            if ( (unsigned __int8)(v135 - 24) <= 1u )
              goto LABEL_601;
            if ( (_BYTE)v135 == 30 )
            {
              v58 = *(_DWORD *)(a2 + 28);
              if ( (v58 & 2) == 0 && (*(_BYTE *)(a1 + 5194) & 0x83) != 0x82
                || (unsigned int)(*(_DWORD *)(a1 + 5196) - 250) > 1 )
              {
                goto LABEL_602;
              }
            }
            else if ( (_BYTE)v135 == 31 && *(_DWORD *)(a1 + 5200) )
            {
LABEL_601:
              v58 = *(_DWORD *)(a2 + 28);
LABEL_602:
              *(_BYTE *)(a2 + 44) &= ~8u;
              *(_BYTE *)(a2 + 84) &= ~8u;
              v89 = *(_BYTE *)(a2 + 41) == 0;
              *(_WORD *)(a2 + 24) = 129;
              *(_DWORD *)(a2 + 28) = v58 | 0x100000;
              if ( !v89 )
                goto LABEL_187;
LABEL_426:
              if ( (*(_BYTE *)(a1 + 4438) & 7) != 0 && *(_BYTE *)(a1 + 5192) == 0x90 )
              {
                v111 = *(_DWORD *)(a2 + 28);
                if ( (v111 & 2) != 0 || (*(_BYTE *)(a1 + 5194) & 0x83) == 0x82 )
                {
                  v112 = *(_DWORD *)(a2 + 28);
                  *(_WORD *)(a2 + 24) = 569;
                  v59 = v111 & 0x10;
                  *(_DWORD *)(a2 + 28) = v112 & 0xFFFFFFFD;
                  goto LABEL_188;
                }
              }
              goto LABEL_223;
            }
LABEL_425:
            if ( *(_BYTE *)(a2 + 41) )
              goto LABEL_223;
            goto LABEL_426;
          case 0xE2:
            v59 = *(_DWORD *)(a2 + 28) & 0x10;
            if ( !v59 )
              goto LABEL_189;
            if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
            {
              *(_WORD *)(a2 + 24) = 595;
              *(_BYTE *)(a2 + 45) = 8;
            }
            goto LABEL_188;
          default:
            v41 = (unsigned int)(v43 - 109);
            goto LABEL_224;
        }
      }
      if ( (unsigned __int16)v43 <= 0x1ADu )
      {
        if ( (unsigned __int16)v43 <= 0x1ABu )
        {
          if ( (_WORD)v43 == 350 )
          {
            v58 = *(_DWORD *)(a2 + 28);
            if ( (*(_WORD *)(a1 + 4437) & 0x780) != 0 )
              *(_WORD *)(a2 + 24) = 589;
            goto LABEL_187;
          }
          if ( (unsigned __int16)(v43 - 398) > 1u )
            goto LABEL_228;
          v59 = *(_DWORD *)(a2 + 28) & 0x10;
          if ( !v59 )
            goto LABEL_189;
          if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
            *(_WORD *)(a2 + 24) = v43 + 1401;
          goto LABEL_188;
        }
        v41 = *(_QWORD *)(a2 + 128);
        v59 = *(_DWORD *)(a2 + 28) & 0x10;
        if ( v41 > 7 )
          goto LABEL_188;
        *(_BYTE *)(a2 + 121) = 0;
        v129 = 497;
        if ( (_WORD)v43 != 429 )
          goto LABEL_568;
        goto LABEL_570;
      }
      if ( (_WORD)v43 == 602 )
      {
LABEL_389:
        v104 = *(_DWORD *)(a2 + 28);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 0;
        v41 = v104 & 0x10;
        if ( (v104 & 0x1000) != 0 )
        {
          v105 = 7;
          if ( !(_DWORD)v41 )
            v105 = 2;
        }
        else
        {
          v105 = 1 - (((_DWORD)v41 == 0) - 1);
        }
        *(_BYTE *)(a2 + 45) = v105;
        *(_BYTE *)(a1 + 5223) = 1;
        v106 = *(_DWORD *)(a2 + 28);
        *(_WORD *)(a2 + 86) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 126) = 2;
        *(_BYTE *)(a2 + 121) = 1;
        LOBYTE(v106) = (v106 & 0x10) == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 85) = v106;
        *(_BYTE *)(a2 + 125) = v106;
        goto LABEL_223;
      }
      if ( (unsigned __int16)v43 <= 0x25Au )
      {
        if ( (unsigned __int16)(v43 - 524) > 1u )
          goto LABEL_228;
        v41 = *(_QWORD *)(a2 + 128);
        v59 = *(_DWORD *)(a2 + 28) & 0x10;
        if ( v41 > 7 )
          goto LABEL_188;
        *(_BYTE *)(a2 + 121) = 0;
        v129 = 644;
        if ( (_WORD)v43 != 525 )
        {
LABEL_568:
          v129 = 636;
          if ( (_WORD)v43 == 428 )
            v129 = 489;
        }
LABEL_570:
        *(_WORD *)(a2 + 24) = v41 + v129;
        goto LABEL_188;
      }
      if ( (_WORD)v43 != 603 )
        goto LABEL_228;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 0;
      if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
      {
LABEL_387:
        v59 = 0;
        v103 = 2;
LABEL_388:
        *(_BYTE *)(a2 + 45) = v103;
        *(_WORD *)(a2 + 86) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = v103;
        goto LABEL_188;
      }
LABEL_504:
      v59 = 16;
      v103 = 7;
      goto LABEL_388;
    }
LABEL_185:
    v58 = *(_DWORD *)(a2 + 28);
    if ( (v58 & 0x4000) != 0 && *(char *)(a2 + 33) < 0 )
    {
      v89 = *(_BYTE *)(a2 + 121) == 13;
      *(_BYTE *)(a2 + 41) = 14;
      *(_BYTE *)(a2 + 81) = 14;
      if ( v89 )
        *(_BYTE *)(a2 + 121) = 14;
    }
    goto LABEL_187;
  }
  if ( (unsigned __int16)v43 > 0x694u )
  {
    if ( (unsigned __int16)v43 <= 0x6FCu )
    {
      if ( (unsigned __int16)v43 <= 0x6D4u )
        goto LABEL_228;
      v41 = (unsigned __int16)(v43 - 1749);
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x6D5:
          goto LABEL_389;
        case 0x6D6:
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = 3;
          if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
          {
            *(_BYTE *)(a2 + 125) = 2;
            *(_WORD *)(a2 + 46) = 0;
            *(_BYTE *)(a2 + 41) = 1;
            goto LABEL_387;
          }
          *(_BYTE *)(a2 + 125) = 7;
          *(_WORD *)(a2 + 46) = 0;
          *(_BYTE *)(a2 + 41) = 1;
          break;
        case 0x6E3:
        case 0x6E5:
          goto LABEL_380;
        case 0x6E9:
        case 0x6EB:
          v58 = *(_DWORD *)(a2 + 28);
          if ( (v58 & 8) != 0 )
            goto LABEL_187;
LABEL_380:
          v59 = *(_DWORD *)(a2 + 28) & 0x10;
          if ( !v59 )
            goto LABEL_189;
          if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
            *(_WORD *)(a2 + 24) = v43 + 1;
          goto LABEL_188;
        case 0x6F0:
          v102 = *(_DWORD *)(a2 + 28);
          v59 = v102 & 0x10;
          if ( (v102 & 0x10) == 0 )
            goto LABEL_189;
          *(_WORD *)(a2 + 24) = 129;
          *(_DWORD *)(a2 + 28) = v102 | 2;
          *(_WORD *)(a2 + 46) = 3;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          goto LABEL_188;
        case 0x6F3:
        case 0x6F4:
        case 0x6FA:
          v59 = *(_DWORD *)(a2 + 28) & 0x10;
          if ( (*(_DWORD *)(a2 + 28) & 0x1000) != 0 )
          {
            v101 = 7;
            if ( !v59 )
              v101 = 2;
          }
          else
          {
            v101 = 1 - ((v59 == 0) - 1);
          }
          *(_BYTE *)(a2 + 45) = v101;
          goto LABEL_188;
        case 0x6FC:
          v41 = *(_DWORD *)(a2 + 28) & 0x10;
          if ( (*(_DWORD *)(a2 + 28) & 0x1000) != 0 )
          {
            v107 = 7;
            if ( !(_DWORD)v41 )
              v107 = 2;
          }
          else
          {
            v107 = 1 - (((_DWORD)v41 == 0) - 1);
          }
          *(_BYTE *)(a2 + 45) = v107;
LABEL_258:
          *(_BYTE *)(a1 + 5223) = 1;
          goto LABEL_223;
        default:
          v41 = (unsigned int)(v43 - 1749);
          goto LABEL_224;
      }
      goto LABEL_504;
    }
    if ( (unsigned __int16)v43 > 0x796u )
    {
      if ( (_WORD)v43 != 0xFFFE )
        goto LABEL_228;
      v120 = insn_get_next_byte();
      v41 = 508;
      v121 = v120;
      v122 = &unk_16DC20;
      while ( v122[4] != v121 )
      {
        v41 = *((unsigned __int16 *)v122 + 7);
        v122 += 8;
        if ( !(_WORD)v41 )
          goto LABEL_533;
      }
      *(_WORD *)(a2 + 24) = v41;
LABEL_533:
      if ( !*((_WORD *)v122 + 3) )
        return 0;
      goto LABEL_223;
    }
    if ( (unsigned __int16)v43 > 0x794u )
    {
      v125 = *(_DWORD *)(a2 + 28);
      v59 = v125 & 0x10;
      if ( *(_WORD *)(a2 + 46) != 5 )
      {
        *(_BYTE *)(a2 + 44) &= ~8u;
        *(_BYTE *)(a2 + 84) &= ~8u;
        *(_WORD *)(a2 + 24) = 129;
        *(_DWORD *)(a2 + 28) = v125 | 0x100000;
      }
    }
    else if ( (_WORD)v43 == 1889 )
    {
      v59 = *(_DWORD *)(a2 + 28) & 0x10;
      if ( *(_BYTE *)(a2 + 41) == 1 )
      {
LABEL_248:
        *(_BYTE *)(a2 + 45) = 2;
      }
      else if ( *(_BYTE *)(a2 + 81) == 1 )
      {
        *(_BYTE *)(a2 + 85) = 2;
      }
    }
    else
    {
      if ( (_WORD)v43 != 1925 )
        goto LABEL_228;
      v59 = *(_DWORD *)(a2 + 28) & 0x10;
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 41) - 3) <= 1u )
      {
        *(_BYTE *)(a2 + 124) &= ~8u;
      }
      else if ( (unsigned __int8)(*(_BYTE *)(a2 + 121) - 3) <= 1u )
      {
        *(_BYTE *)(a2 + 84) &= ~8u;
      }
    }
  }
  else
  {
    if ( (unsigned __int16)v43 > 0x658u )
    {
      v41 = (unsigned __int16)(v43 - 1625);
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x659:
          v116 = *(_DWORD *)(a2 + 28);
          *(_BYTE *)(a2 + 121) = 13;
          *(_WORD *)(a2 + 126) = 0;
          v59 = v116 & 0x10;
          break;
        case 0x662:
        case 0x66B:
        case 0x66C:
        case 0x688:
          goto LABEL_489;
        case 0x663:
        case 0x664:
        case 0x665:
        case 0x666:
        case 0x667:
        case 0x668:
        case 0x669:
        case 0x66A:
          v115 = *(_QWORD *)(a2 + 168);
          v58 = *(_DWORD *)(a2 + 28);
          if ( v115 <= 7 )
          {
            *(_BYTE *)(a2 + 161) = 0;
            v41 = (unsigned __int16)(v43 - 1635);
            *(_WORD *)(a2 + 24) = word_984F0[v41] + v115;
          }
          goto LABEL_187;
        case 0x689:
        case 0x68A:
        case 0x68B:
        case 0x68C:
        case 0x68D:
        case 0x68E:
        case 0x68F:
        case 0x690:
        case 0x691:
        case 0x692:
        case 0x693:
        case 0x694:
          if ( (*(_BYTE *)(a2 + 33) & 8) == 0 )
            goto LABEL_228;
          sub_67A00((__m128i *)(a2 + 80), (__m128i *)(a2 + 120));
          v59 = *(_DWORD *)(a2 + 28) & 0x10;
          break;
        default:
          v41 = (unsigned int)(v43 - 1625);
          goto LABEL_224;
      }
      goto LABEL_188;
    }
    if ( (_WORD)v43 == 995 )
    {
      v58 = *(_DWORD *)(a2 + 28);
      if ( (v58 & 0x4000) != 0 )
      {
        v128 = *(_BYTE *)(a2 + 33);
        if ( (v128 & 8) == 0 && v128 < 0 )
        {
          *(_BYTE *)(a2 + 41) = 13;
          *(_BYTE *)(a2 + 45) = 8;
          *(_BYTE *)(a2 + 121) = 13;
          *(_BYTE *)(a2 + 125) = 8;
        }
      }
      goto LABEL_187;
    }
    if ( (unsigned __int16)v43 <= 0x3E3u )
    {
      if ( (_WORD)v43 != 912 )
      {
        if ( (unsigned __int16)v43 <= 0x390u )
        {
          if ( (unsigned __int16)(v43 - 792) <= 3u )
          {
            v41 = *(_QWORD *)(a2 + 168);
            v58 = *(_DWORD *)(a2 + 28);
            if ( v41 <= 0x1F )
            {
              *(_BYTE *)(a2 + 161) = 0;
              v119 = 1175;
              if ( (unsigned __int16)(v43 - 793) <= 2u )
                v119 = 32 * v43 - 24169;
              *(_WORD *)(a2 + 24) = v41 + v119;
            }
            goto LABEL_187;
          }
          goto LABEL_228;
        }
        if ( (unsigned __int16)v43 > 0x3DEu )
        {
          if ( (_WORD)v43 != 992 )
            goto LABEL_228;
        }
        else if ( (unsigned __int16)v43 <= 0x3DCu )
        {
          if ( (_WORD)v43 != 968 )
            goto LABEL_228;
          goto LABEL_185;
        }
        v59 = *(_DWORD *)(a2 + 28) & 0x10;
        if ( (~*(_DWORD *)(a2 + 28) & 0x4010) == 0 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) <= 7u )
          *(_BYTE *)(a2 + 45) = 7;
        goto LABEL_188;
      }
      v58 = *(_DWORD *)(a2 + 28);
      if ( (v58 & 0x10000) != 0 )
      {
        if ( *(char *)(a2 + 33) >= 0 )
        {
          if ( (*(_BYTE *)(a2 + 273) & 2) != 0 )
            goto LABEL_187;
LABEL_556:
          if ( *(_BYTE *)(a2 + 81) != 13 )
            *(_BYTE *)(a2 + 85) = 7;
          goto LABEL_187;
        }
      }
      else if ( *(char *)(a2 + 33) >= 0 )
      {
        goto LABEL_556;
      }
      if ( sub_64050(a2) )
        goto LABEL_187;
      goto LABEL_556;
    }
    if ( (unsigned __int16)v43 > 0x48Du )
    {
      v123 = v43 - 1397;
      if ( v123 > 3u )
        goto LABEL_228;
      v41 = *(_QWORD *)(a2 + 168);
      v59 = *(_DWORD *)(a2 + 28) & 0x10;
      if ( v41 )
      {
        if ( v41 > 6 || v41 == 3 )
          goto LABEL_188;
        *(_BYTE *)(a2 + 161) = 0;
        v132 = 1565;
        if ( v123 != 3 )
          v132 = word_98500[v123];
        v133 = v41 + v132;
        v134 = v133 - 2;
        v124 = v133 - 1;
        if ( v41 >= 4 )
          v124 = v134;
      }
      else
      {
        *(_BYTE *)(a2 + 161) = 0;
        v124 = 1564;
        if ( v123 != 3 )
          v124 = word_98506[v123];
      }
      *(_WORD *)(a2 + 24) = v124;
      goto LABEL_188;
    }
    if ( (unsigned __int16)v43 > 0x486u )
    {
      v126 = *(_DWORD *)(a2 + 28);
      v59 = v126 & 0x10;
      BYTE1(v126) |= 0x10u;
      *(_DWORD *)(a2 + 28) = v126;
      goto LABEL_188;
    }
    if ( (_WORD)v43 != 1115 )
    {
      if ( (unsigned __int16)(v43 - 1139) <= 0x13u )
      {
LABEL_489:
        if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
        {
          sub_67A00((__m128i *)(a2 + 120), (__m128i *)(a2 + 160));
          v59 = *(_DWORD *)(a2 + 28) & 0x10;
          goto LABEL_188;
        }
      }
      goto LABEL_228;
    }
    v59 = *(_DWORD *)(a2 + 28) & 0x10;
    if ( *(char *)(a2 + 33) >= 0 || !sub_64050(a2) )
      *(_WORD *)(a2 + 24) = 1116;
  }
LABEL_188:
  if ( v59 && !(unsigned __int8)sub_64330(a1, a2, v41, v59) )
    return 0;
LABEL_189:
  v60 = *(_BYTE *)(a1 + 5192);
  if ( v60 != -125 && v60 != 106 )
    goto LABEL_191;
  v89 = v60 == 106;
  v90 = a2 + 40;
  if ( !v89 )
    v90 = a2 + 80;
  *(_QWORD *)(v90 + 8) = *(char *)(v90 + 8);
  v91 = *(_DWORD *)(a2 + 28);
  if ( (v91 & 0x10) == 0 )
  {
    v92 = ((*(_DWORD *)(a2 + 28) & 0x818) == 0 || (*(_DWORD *)(a2 + 28) & 0x818) == 2056) + 1;
    goto LABEL_329;
  }
  v92 = 7;
  if ( (*(_BYTE *)(a2 + 33) & 8) != 0 )
    goto LABEL_329;
  v92 = 1;
  if ( (v91 & 0x800) == 0 )
    goto LABEL_329;
  v93 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v93 > 0x39u )
  {
    v92 = 7;
    if ( (unsigned __int16)(v93 - 61) <= 0x18u )
      goto LABEL_329;
    if ( (unsigned __int16)v93 > 0xA0u )
    {
      if ( (_WORD)v93 == 738 || (_WORD)v93 == 741 )
        goto LABEL_329;
      goto LABEL_328;
    }
    if ( (unsigned __int16)v93 > 0x6Cu )
    {
      v130 = 0xC050682000555LL;
      if ( _bittest64(&v130, (unsigned int)(v93 - 109)) )
        goto LABEL_329;
      goto LABEL_328;
    }
    goto LABEL_516;
  }
  v92 = 7;
  if ( (unsigned __int16)v93 > 0x34u )
    goto LABEL_329;
  if ( (unsigned __int16)v93 > 0x12u )
  {
LABEL_516:
    v117 = (unsigned int)(v93 - 37);
    if ( (unsigned __int16)v117 <= 0x3Bu )
    {
      v118 = 0xA1A000000E00005LL;
      v92 = 7;
      if ( _bittest64(&v118, v117) )
        goto LABEL_329;
    }
    goto LABEL_328;
  }
  if ( (unsigned __int16)v93 <= 0xFu )
LABEL_328:
    v92 = ((*(_DWORD *)(a2 + 28) & 0x818) == 2064) + 1;
LABEL_329:
  *(_BYTE *)(v90 + 5) = v92;
  *(_BYTE *)(a1 + 5222) = 1;
LABEL_191:
  v61 = a2 + 41;
  do
  {
    if ( !*(_BYTE *)v61 )
      break;
    switch ( *(_BYTE *)v61 )
    {
      case 0xC:
        v70 = *(_WORD *)(v61 + 5);
        *(_BYTE *)(v61 + 4) = 7;
        *(_BYTE *)v61 = 1;
        *(_WORD *)(v61 + 5) = (v70 & 7) + 56;
        break;
      case 0xD:
        v68 = *(_WORD *)(v61 + 5);
        *(_BYTE *)(v61 + 4) = 8;
        *(_BYTE *)v61 = 1;
        v69 = v68 + 85;
        if ( v68 <= 0xFu )
          v69 = v68 + 64;
        *(_WORD *)(v61 + 5) = v69;
        break;
      case 0xE:
        v66 = *(_WORD *)(v61 + 5);
        *(_BYTE *)(v61 + 4) = 16;
        *(_BYTE *)v61 = 1;
        v67 = v66 + 101;
        if ( v66 <= 0xFu )
          v67 = v66 + 81;
        *(_WORD *)(v61 + 5) = v67;
        break;
      case 0xF:
        *(_WORD *)(v61 + 5) += 133;
        *(_BYTE *)(v61 + 4) = 17;
        *(_BYTE *)v61 = 1;
        break;
      case 0x10:
        v65 = *(_WORD *)(v61 + 5);
        *(_BYTE *)(v61 + 4) = 7;
        *(_BYTE *)v61 = 1;
        *(_WORD *)(v61 + 5) = (v65 & 7) + 165;
        break;
      default:
        break;
    }
    v61 += 40;
  }
  while ( a2 + 361 != v61 );
  v62 = *(_DWORD *)(a2 + 28);
  if ( (v62 & 0x10) != 0 )
  {
    for ( i = (_WORD *)(a2 + 46); i != (_WORD *)(a2 + 366); i += 20 )
    {
      v64 = *((_BYTE *)i - 5);
      if ( !v64 )
        break;
      if ( v64 == 11 && *i > 7u )
      {
        if ( (*(_BYTE *)(a2 + 33) & 1) == 0 )
          return 0;
        *i &= 7u;
      }
    }
  }
  v80 = *(unsigned __int16 *)(a2 + 24);
  if ( (v62 & 4) != 0 )
  {
    if ( (_WORD)v80 != 18 )
    {
      if ( (unsigned __int16)v80 <= 0x12u )
      {
        if ( (_WORD)v80 == 16 )
        {
          if ( *(_BYTE *)(a1 + 5192) != 0xE8 )
          {
            if ( (v62 & 1) != 0 && (unsigned __int8)(*(_BYTE *)(a2 + 41) - 2) <= 2u )
            {
LABEL_277:
              v81 = 0x10040000E0E0LL;
              if ( _bittest64(&v81, v80) )
                goto LABEL_278;
            }
LABEL_308:
            if ( (*(_QWORD *)(a2 + 24) & 0x30000FFFFLL) != 0x20000007ALL )
              goto LABEL_282;
            v88 = *(_BYTE *)(a1 + 5192);
            if ( (unsigned __int8)(v88 + 120) > 1u && (unsigned __int8)(v88 + 58) > 1u )
              goto LABEL_282;
LABEL_278:
            if ( (v62 & 4) == 0 )
              goto LABEL_280;
            goto LABEL_279;
          }
          goto LABEL_397;
        }
LABEL_470:
        if ( (v62 & 1) == 0 || (unsigned __int8)(*(_BYTE *)(a2 + 41) - 2) > 2u )
          goto LABEL_308;
        goto LABEL_472;
      }
      if ( (unsigned __int16)v80 > 0x58u )
      {
        if ( (_WORD)v80 != 159 )
        {
          if ( (_WORD)v80 == 214 )
          {
LABEL_279:
            v62 = v62 & 0xFFFBFFFB | 0x40000;
            *(_DWORD *)(a2 + 28) = v62;
            goto LABEL_280;
          }
          goto LABEL_331;
        }
        goto LABEL_397;
      }
      if ( (unsigned __int16)v80 <= 0x34u )
        goto LABEL_470;
      v87 = 0x99F809E0DLL;
      if ( !_bittest64(&v87, (unsigned int)(v80 - 53)) )
      {
        if ( (_WORD)v80 != 86 )
          goto LABEL_470;
        if ( (*(_BYTE *)(a1 + 5192) & 0xFD) != 0xE9 )
          goto LABEL_308;
      }
    }
LABEL_397:
    v62 &= ~4u;
    BYTE1(v62) |= 0x80u;
    *(_DWORD *)(a2 + 28) = v62;
LABEL_331:
    if ( (v62 & 1) == 0 || (unsigned __int8)(*(_BYTE *)(a2 + 41) - 2) > 2u )
      goto LABEL_308;
    if ( (unsigned __int16)v80 > 0x83u )
    {
      if ( (unsigned __int16)(v80 - 166) <= 0x3Cu )
      {
        v94 = 0x102C080000000001LL;
        if ( _bittest64(&v94, (unsigned int)(v80 - 166)) )
          goto LABEL_278;
      }
      goto LABEL_308;
    }
LABEL_472:
    if ( (unsigned __int16)v80 > 0x81u )
      goto LABEL_278;
    if ( (unsigned __int16)v80 > 0x2Cu )
    {
      if ( (_WORD)v80 == 128 )
        goto LABEL_278;
      goto LABEL_308;
    }
    if ( (unsigned __int16)v80 > 4u )
      goto LABEL_277;
    goto LABEL_308;
  }
  if ( (_WORD)v80 != 214 )
    goto LABEL_331;
LABEL_280:
  if ( (v62 & 2) != 0 )
  {
    v62 = v62 & 0xFFF7FFFD | 0x80000;
    *(_DWORD *)(a2 + 28) = v62;
  }
LABEL_282:
  if ( (v62 & 0x800) == 0 && !*(_BYTE *)(a1 + 5222) )
  {
    BYTE1(v62) |= 1u;
    *(_DWORD *)(a2 + 28) = v62;
  }
  if ( (v62 & 0x1000) == 0 && !*(_BYTE *)(a1 + 5223) )
  {
    BYTE1(v62) |= 2u;
    *(_DWORD *)(a2 + 28) = v62;
  }
  if ( *(_BYTE *)(a2 + 32) )
  {
    v82 = *(_DWORD *)(a2 + 28);
    if ( *(_BYTE *)(a1 + 5221) != 1
      || (_WORD)v80 == 92
      || (v82 & 0x10) != 0 && (unsigned int)(*(char *)(a2 + 32) - 33) > 1 )
    {
      LOBYTE(v82) = v82 | 0x80;
      *(_DWORD *)(a2 + 28) = v82;
    }
  }
  v83 = *(_WORD *)(a2 + 26);
  if ( !v83 )
    return v83;
  v96 = sub_64220(a2);
  if ( v96 == 1 )
  {
    *(_BYTE *)(a2 + 44) &= ~8u;
    *(_BYTE *)(a2 + 84) &= ~8u;
  }
  else if ( !v96 )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 || v97 == 133 )
      *(_BYTE *)(a2 + 44) |= 8u;
    if ( *(_BYTE *)(a2 + 81) != 1 )
    {
      *(_BYTE *)(a2 + 84) |= 8u;
      if ( !a3 )
        return v83;
      goto LABEL_353;
    }
  }
  if ( a3 )
  {
LABEL_353:
    v98 = a2 + 40;
    while ( 1 )
    {
      v99 = *(_BYTE *)(v98 + 1);
      if ( !v99 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( v99 == 5 )
        break;
      if ( v99 <= 5u )
      {
        if ( v99 != 2 )
        {
          if ( v99 != 4 )
            goto LABEL_357;
          goto LABEL_356;
        }
      }
      else if ( (unsigned __int8)(v99 - 6) > 1u || !(unsigned __int8)sub_7E160(a2, v98) )
      {
        goto LABEL_357;
      }
LABEL_363:
      v100 = sub_64A20(a2, v98);
      if ( *(unsigned __int16 *)(a2 + 26) <= v100 )
      {
        if ( !under_debugger )
        {
          interr();
          goto LABEL_644;
        }
LABEL_646:
        BUG();
      }
      sub_64100(a3, 8 * (*(char *)(v98 + 2) + v100), 8 * (*(char *)(v98 + 2) + v100), 8 * *(char *)(v98 + 2));
LABEL_357:
      v98 += 40;
      if ( v98 == a2 + 360 )
        return *(unsigned __int16 *)(a2 + 26);
    }
    if ( !*(_BYTE *)(v98 + 2) )
      goto LABEL_357;
LABEL_356:
    get_flags_ex();
    if ( !(unsigned __int8)is_off() )
      goto LABEL_357;
    goto LABEL_363;
  }
  return v83;
}

