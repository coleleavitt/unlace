__int64 __fastcall sub_4EA0(__int64 a1, __int64 a2)
{
  unsigned __int16 wide_byte; // ax
  int v5; // r13d
  unsigned __int8 v6; // r12
  __int16 v7; // ax
  int v9; // eax
  char v10; // r12
  __int16 v11; // ax
  __int16 v12; // di
  unsigned __int16 v13; // ax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // r13d
  int v25; // eax
  __int64 v26; // r12
  int v27; // eax
  int v28; // edx
  __int64 v29; // rsi
  int v30; // eax
  __int16 v31; // di
  unsigned __int16 v32; // ax
  __int64 sreg; // rax
  int v34; // edx
  int v35; // edx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rdx
  __int16 v47; // di
  int v48; // eax
  __int16 v49; // r12
  __int64 v50; // rsi
  int v51; // edx
  int v52; // eax
  __int16 v53; // di
  unsigned __int16 v54; // ax
  __int16 v55; // di
  unsigned __int16 v56; // ax
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rdx
  int v60; // edx
  int v61; // eax
  __int16 v62; // di
  unsigned __int16 v63; // ax
  int v64; // eax
  unsigned int v65; // eax
  __int16 v66; // ax
  unsigned __int16 v67; // ax
  unsigned __int16 v68; // ax
  int v69; // eax
  __m128i v70; // xmm0
  int v71; // edx
  __m128i v72; // xmm0
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int16 v75; // dx
  __int16 v76; // dx
  int v77; // eax
  __int16 v78; // di
  int v79; // eax
  __int64 v80; // rax
  int v81; // edx
  __int16 v82; // di
  unsigned __int16 v83; // ax
  __int64 v84; // rax
  int v85; // edx
  int v86; // edx
  unsigned __int16 v87; // r12
  unsigned int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // edx
  __int64 v92; // rdx
  __int16 v93; // di
  unsigned __int16 v94; // ax
  __int64 v95; // rax
  int v96; // edx
  bool v97; // zf
  __int16 v98; // di
  __int16 v99; // ax
  unsigned __int16 v100; // ax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rax
  int v105; // edx
  __int64 v106; // rdx
  __int64 v107; // rax
  int v108; // edx
  __int64 v109; // rax
  int v110; // edx
  int v111; // eax
  unsigned __int16 v112; // ax

  ++*(_WORD *)(a2 + 26);
  wide_byte = get_wide_byte();
  *(_DWORD *)(a1 + 128) = wide_byte;
  v5 = HIBYTE(wide_byte);
  v6 = HIBYTE(wide_byte) & 0xF;
  if ( *(_DWORD *)(a1 + 120) == 1 )
  {
    if ( !sub_45F0(a1, a2) )
      return 0;
    goto LABEL_4;
  }
  switch ( wide_byte >> 12 )
  {
    case 0:
      if ( (wide_byte & 0x800) == 0 )
      {
        *(_WORD *)(a2 + 24) = 53;
        goto LABEL_75;
      }
      *(_WORD *)(a2 + 24) = *((unsigned __int8 *)&qword_9218 + v6 - 8);
      if ( v6 != 12 )
        goto LABEL_63;
      v93 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      *(_BYTE *)(a2 + 81) = 5;
      *(_WORD *)(a2 + 26) = v93 + 1;
      v94 = get_wide_byte();
      *(_BYTE *)(a2 + 112) = 1;
      *(_QWORD *)(a2 + 88) = v94;
      v30 = *(_DWORD *)(a1 + 128);
      goto LABEL_116;
    case 1:
      v18 = 49;
      goto LABEL_23;
    case 2:
      v18 = 3;
      goto LABEL_23;
    case 3:
      v18 = 123;
LABEL_23:
      *(_WORD *)(a2 + 24) = v18;
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        sreg = get_sreg();
        v34 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        *(_QWORD *)(a2 + 56) = (sreg << 7) + (v34 & 0x7F);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v19 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v19 == 48 )
          return 0;
      }
      *(_BYTE *)(a2 + 81) = 5;
      *(_QWORD *)(a2 + 88) = v6;
      v7 = *(_WORD *)(a2 + 24);
      *(_BYTE *)(a2 + 112) = 2;
      if ( !v6 )
        *(_BYTE *)(a2 + 84) &= ~8u;
      goto LABEL_5;
    case 4:
      *(_WORD *)(a2 + 24) = 22;
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        v40 = get_sreg();
        v41 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        v42 = (v40 << 7) + (v41 & 0x7F);
        v7 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 56) = v42;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v20 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v20 == 48 )
          return 0;
        v7 = 22;
      }
      *(_BYTE *)(a2 + 81) = 5;
      v21 = *(_DWORD *)(a1 + 128);
      *(_BYTE *)(a2 + 112) = 3;
      *(_QWORD *)(a2 + 88) = (v21 >> 8) & 0xF;
      goto LABEL_5;
    case 5:
      *(_WORD *)(a2 + 24) = (unsigned __int8)aEfxydg[HIBYTE(wide_byte) & 0xF];
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        v36 = get_sreg();
        v37 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        *(_QWORD *)(a2 + 56) = (v36 << 7) + (v37 & 0x7F);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v25 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v25 == 48 )
          return 0;
      }
      if ( v6 > 0xBu )
      {
        v82 = *(_WORD *)(a2 + 26);
        *(_BYTE *)(a2 + 45) = 1;
        v26 = a2 + 80;
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 26) = v82 + 1;
        v83 = get_wide_byte();
        *(_BYTE *)(a2 + 72) = 0;
        *(_QWORD *)(a2 + 48) = v83;
      }
      else
      {
        v26 = a2 + 40;
      }
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(v26 + 1) = 2;
        v80 = get_sreg();
        v81 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(v26 + 32) = 0;
        *(_QWORD *)(v26 + 16) = (v80 << 7) + (v81 & 0x7F);
        v7 = *(_WORD *)(a2 + 24);
        goto LABEL_5;
      }
      *(_BYTE *)(v26 + 1) = 3;
      v27 = *(_DWORD *)(a1 + 128) & 0x70;
      *(_WORD *)(v26 + 6) = *(_WORD *)(a1 + 128) & 0x7F;
      if ( (_WORD)v27 != 48 )
        goto LABEL_4;
      return 0;
    case 6:
      v7 = *((unsigned __int8 *)qword_91F0 + (HIBYTE(wide_byte) & 0xF));
      *(_WORD *)(a2 + 24) = v7;
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        v44 = get_sreg();
        v45 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        v46 = (v44 << 7) + (v45 & 0x7F);
        v7 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 56) = v46;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v28 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v28 == 48 )
          return 0;
      }
      if ( v7 != 3 && v7 != 49 && v7 != 123 )
        goto LABEL_5;
      *(_BYTE *)(a2 + 81) = 5;
      *(_QWORD *)(a2 + 88) = 16;
      *(_BYTE *)(a2 + 112) = 2;
      return *(unsigned __int16 *)(a2 + 26);
    case 7:
      v7 = *((unsigned __int8 *)qword_91E0 + (HIBYTE(wide_byte) & 0xF));
      *(_WORD *)(a2 + 24) = v7;
      if ( (v5 & 8) != 0 )
      {
        if ( (v5 & 0xB) == 8 )
        {
LABEL_54:
          *(_BYTE *)(a2 + 45) = 0;
          *(_BYTE *)(a2 + 41) = 5;
          v29 = *(unsigned __int8 *)(a1 + 128);
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 48) = v29;
          goto LABEL_5;
        }
        v78 = *(_WORD *)(a2 + 26);
        *(_BYTE *)(a2 + 41) = 7;
        *(_WORD *)(a2 + 26) = v78 + 1;
        *(_QWORD *)(a2 + 56) = (unsigned __int16)get_wide_byte();
        if ( *(char *)(a1 + 128) >= 0 )
        {
          *(_BYTE *)(a2 + 81) = 2;
          v95 = get_sreg();
          v96 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 112) = 0;
          v97 = *(_BYTE *)(a2 + 81) == 3;
          *(_QWORD *)(a2 + 96) = (v95 << 7) + (v96 & 0x7F);
          if ( !v97 )
          {
LABEL_10:
            *(_WORD *)(a2 + 24) = 0;
            return 0;
          }
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 3;
          v79 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v79 == 48 )
            goto LABEL_10;
        }
LABEL_4:
        v7 = *(_WORD *)(a2 + 24);
        goto LABEL_5;
      }
LABEL_68:
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        v90 = get_sreg();
        v91 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        v92 = (v90 << 7) + (v91 & 0x7F);
        v7 = *(_WORD *)(a2 + 24);
        *(_QWORD *)(a2 + 56) = v92;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v35 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v35 == 48 )
          return 0;
      }
      goto LABEL_5;
    case 8:
      if ( (wide_byte & 0x800) == 0 )
      {
        *(_WORD *)(a2 + 24) = 103;
LABEL_75:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = (unsigned __int8)(v6 + 3);
        if ( *(char *)(a1 + 128) >= 0 )
        {
LABEL_92:
          *(_BYTE *)(a2 + 81) = 2;
          v57 = get_sreg();
          v58 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 112) = 0;
          v59 = (v57 << 7) + (v58 & 0x7F);
          v7 = *(_WORD *)(a2 + 24);
          *(_QWORD *)(a2 + 96) = v59;
          goto LABEL_5;
        }
        *(_BYTE *)(a2 + 81) = 3;
        v43 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v43 != 48 )
          return *(unsigned __int16 *)(a2 + 26);
        return 0;
      }
      *(_WORD *)(a2 + 24) = *((unsigned __int8 *)&qword_9210 + v6 - 8);
      if ( v6 == 11 )
      {
        v30 = *(_DWORD *)(a1 + 128);
        if ( !(_BYTE)v30 )
        {
          *(_BYTE *)(a2 + 41) = 0;
          *(_WORD *)(a2 + 24) = 74;
          return *(unsigned __int16 *)(a2 + 26);
        }
      }
      else
      {
LABEL_63:
        if ( (unsigned __int8)(v6 - 8) <= 1u )
        {
          if ( !sub_4560(a1, a2, a2 + 40) )
            return 0;
          if ( v6 == 9 )
          {
LABEL_66:
            v31 = *(_WORD *)(a2 + 26);
            *(_BYTE *)(a2 + 81) = 2;
            *(_WORD *)(a2 + 26) = v31 + 1;
            v32 = get_wide_byte();
            *(_BYTE *)(a2 + 112) = 1;
            *(_QWORD *)(a2 + 96) = v32;
            v7 = *(_WORD *)(a2 + 24);
            goto LABEL_5;
          }
          goto LABEL_4;
        }
        v30 = *(_DWORD *)(a1 + 128);
      }
LABEL_116:
      if ( (v30 & 0x80u) == 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        v84 = get_sreg();
        v85 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        *(_QWORD *)(a2 + 56) = (v84 << 7) + (v85 & 0x7F);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v69 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v69 == 48 )
          return 0;
      }
      v7 = *(_WORD *)(a2 + 24);
      if ( v6 > 0xDu )
      {
        if ( v7 == 122 )
        {
          sub_4560(a1, a2, a2 + 40);
          v7 = *(_WORD *)(a2 + 24);
        }
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 40));
        v71 = *(_DWORD *)(a2 + 72);
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v5 & 1;
        *(__m128i *)(a2 + 80) = v70;
        v72 = _mm_loadu_si128((const __m128i *)(a2 + 56));
        *(_DWORD *)(a2 + 112) = v71;
        *(_BYTE *)(a2 + 80) = 1;
        *(_BYTE *)(a2 + 72) = 0;
        *(__m128i *)(a2 + 96) = v72;
      }
      goto LABEL_5;
    case 9:
      *(_WORD *)(a2 + 24) = ((wide_byte & 0x800) == 0) + 100;
      if ( *(char *)(a1 + 128) >= 0 )
      {
        *(_BYTE *)(a2 + 41) = 2;
        v38 = get_sreg();
        v39 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 72) = 0;
        *(_QWORD *)(a2 + 56) = (v38 << 7) + (v39 & 0x7F);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 3;
        v23 = *(_DWORD *)(a1 + 128) & 0x70;
        *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
        if ( (_WORD)v23 == 48 )
          return 0;
      }
      *(_BYTE *)(a2 + 81) = 5;
      v24 = v5 & 7;
      *(_BYTE *)(a2 + 112) = 2;
      *(_QWORD *)(a2 + 88) = (unsigned __int8)v24;
      if ( !v24 )
        goto LABEL_38;
      goto LABEL_4;
    case 0xA:
      v7 = *((unsigned __int8 *)qword_91D0 + (HIBYTE(wide_byte) & 0xF));
      *(_WORD *)(a2 + 24) = v7;
      switch ( v6 )
      {
        case 0u:
          if ( *(char *)(a1 + 128) >= 0 )
          {
            *(_BYTE *)(a2 + 41) = 2;
            v107 = get_sreg();
            v108 = *(_DWORD *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            *(_QWORD *)(a2 + 56) = (v107 << 7) + (v108 & 0x7F);
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 3;
            v9 = *(_DWORD *)(a1 + 128) & 0x70;
            *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
            if ( (_WORD)v9 == 48 )
              return 0;
          }
          if ( *(char *)(a1 + 128) >= 0 )
            goto LABEL_10;
          goto LABEL_4;
        case 1u:
        case 6u:
        case 7u:
        case 0xAu:
        case 0xBu:
          goto LABEL_68;
        case 2u:
        case 3u:
        case 5u:
          v47 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 26) = v47 + 1;
          *(_QWORD *)(a2 + 56) = (unsigned __int16)get_wide_byte();
          if ( *(char *)(a1 + 128) >= 0 )
            goto LABEL_92;
          goto LABEL_82;
        case 4u:
        case 0xCu:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = 2;
          if ( *(char *)(a1 + 128) >= 0 )
            goto LABEL_92;
          *(_BYTE *)(a2 + 81) = 3;
          v51 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v51 != 48 )
            goto LABEL_5;
          return 0;
        case 8u:
          v55 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 41) = 2;
          *(_WORD *)(a2 + 26) = v55 + 1;
          v56 = get_wide_byte();
          *(_BYTE *)(a2 + 72) = 1;
          *(_QWORD *)(a2 + 56) = v56;
          if ( *(char *)(a1 + 128) >= 0 )
            goto LABEL_92;
          goto LABEL_82;
        case 9u:
          if ( *(char *)(a1 + 128) >= 0 )
          {
            *(_BYTE *)(a2 + 41) = 2;
            v109 = get_sreg();
            v110 = *(_DWORD *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            *(_QWORD *)(a2 + 56) = (v109 << 7) + (v110 & 0x7F);
            goto LABEL_66;
          }
          *(_BYTE *)(a2 + 41) = 3;
          v61 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v61 != 48 )
            goto LABEL_66;
          return 0;
        case 0xDu:
          if ( *(char *)(a1 + 128) >= 0 )
          {
            *(_BYTE *)(a2 + 41) = 2;
            v104 = get_sreg();
            v105 = *(_DWORD *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            v106 = (v104 << 7) + (v105 & 0x7F);
            v7 = *(_WORD *)(a2 + 24);
            *(_QWORD *)(a2 + 56) = v106;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 3;
            v60 = *(_DWORD *)(a1 + 128) & 0x70;
            *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
            if ( (_WORD)v60 == 48 )
              return 0;
          }
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = 2;
          goto LABEL_5;
        case 0xEu:
          v62 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 26) = v62 + 1;
          v63 = get_wide_byte();
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 48) = v63;
          if ( *(char *)(a1 + 128) >= 0 )
            goto LABEL_92;
LABEL_82:
          *(_BYTE *)(a2 + 81) = 3;
          v48 = *(_DWORD *)(a1 + 128) & 0x70;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x7F;
          if ( (_WORD)v48 != 48 )
            goto LABEL_4;
          return 0;
        case 0xFu:
          if ( *(char *)(a1 + 128) >= 0 )
          {
            *(_BYTE *)(a2 + 41) = 2;
            v102 = get_sreg();
            v103 = *(_DWORD *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            *(_QWORD *)(a2 + 56) = (v102 << 7) + (v103 & 0x7F);
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 3;
            v52 = *(_DWORD *)(a1 + 128) & 0x70;
            *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x7F;
            if ( (_WORD)v52 == 48 )
              return 0;
          }
          v53 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 85) = 1;
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 26) = v53 + 1;
          v54 = get_wide_byte();
          *(_BYTE *)(a2 + 112) = 1;
          *(_QWORD *)(a2 + 88) = v54;
          v7 = *(_WORD *)(a2 + 24);
          break;
      }
      goto LABEL_5;
    case 0xB:
      if ( v6 != 14 )
      {
        if ( v6 != 15 )
        {
          if ( v6 == 13 )
          {
            *(_BYTE *)(a2 + 45) = 0;
            *(_WORD *)(a2 + 24) = 54;
            *(_BYTE *)(a2 + 41) = 5;
            v22 = *(unsigned __int8 *)(a1 + 128);
            *(_BYTE *)(a2 + 72) = 0;
            BYTE1(v22) |= 1u;
            *(_QWORD *)(a2 + 48) = v22;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (wide_byte & 0x800) == 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 53;
            *(_WORD *)(a2 + 46) = (unsigned __int8)(v6 + 3);
            *(_BYTE *)(a2 + 85) = 0;
            *(_BYTE *)(a2 + 81) = 5;
            v89 = *(unsigned __int8 *)(a1 + 128);
            *(_BYTE *)(a2 + 112) = 0;
            *(_QWORD *)(a2 + 88) = v89;
            return *(unsigned __int16 *)(a2 + 26);
          }
          v7 = *((unsigned __int8 *)&qword_91C0[-1] + v6);
          *(_WORD *)(a2 + 24) = v7;
          goto LABEL_54;
        }
        v86 = wide_byte >> 4;
        v87 = wide_byte & 0xF;
        v88 = v86 & 0xF;
        if ( v88 > 0xD )
        {
          if ( v88 == 14 )
          {
            *(_BYTE *)(a2 + 41) = 5;
            *(_WORD *)(a2 + 24) = 27;
            *(_QWORD *)(a2 + 48) = (unsigned __int16)(v87 + 1);
            *(_BYTE *)(a2 + 72) = 2;
            return *(unsigned __int16 *)(a2 + 26);
          }
          goto LABEL_4;
        }
        if ( (v86 & 8) != 0 )
        {
          v98 = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 45) = 1;
          v99 = *((unsigned __int8 *)&dword_9154 + (v86 & 7));
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = v99;
          *(_WORD *)(a2 + 26) = v98 + 1;
          v100 = get_wide_byte();
          *(_BYTE *)(a2 + 72) = 0;
          *(_BYTE *)(a2 + 81) = 5;
          *(_QWORD *)(a2 + 48) = v100;
          *(_QWORD *)(a2 + 88) = v87;
          *(_BYTE *)(a2 + 112) = 2;
          if ( !v87 )
          {
LABEL_38:
            *(_BYTE *)(a2 + 84) &= ~8u;
            v7 = *(_WORD *)(a2 + 24);
            goto LABEL_5;
          }
          goto LABEL_4;
        }
        if ( (v86 & 0xF) != 0 )
        {
          if ( v88 == 4 && (wide_byte & 0xC) == 4 )
          {
            *(_WORD *)(a2 + 24) = 36;
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = wide_byte & 3;
            *(_BYTE *)(a2 + 72) = 1;
            return *(unsigned __int16 *)(a2 + 26);
          }
          goto LABEL_4;
        }
        if ( (wide_byte & 8) == 0 )
        {
          *(_BYTE *)(a2 + 45) = 0;
          *(_WORD *)(a2 + 24) = 119;
          *(_BYTE *)(a2 + 41) = 5;
          v101 = *(unsigned __int8 *)(a1 + 128);
          *(_BYTE *)(a2 + 72) = 1;
          *(_QWORD *)(a2 + 48) = v101;
          return *(unsigned __int16 *)(a2 + 26);
        }
        *(_WORD *)(a2 + 24) = 53;
        v111 = *(_DWORD *)(a1 + 128);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_BYTE *)(a2 + 81) = 5;
        *(_WORD *)(a2 + 46) = (v111 & 7) + 3;
        v112 = sub_4540(a2);
        *(_BYTE *)(a2 + 112) = 0;
        *(_QWORD *)(a2 + 88) = v112;
        v7 = *(_WORD *)(a2 + 24);
LABEL_5:
        if ( v7 )
          return *(unsigned __int16 *)(a2 + 26);
        return 0;
      }
      v49 = wide_byte & 0xF;
      v50 = wide_byte & 0xF;
      switch ( (unsigned __int8)wide_byte >> 4 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          v7 = *((unsigned __int8 *)qword_9180 + (wide_byte & 0x3F));
          *(_WORD *)(a2 + 24) = v7;
          goto LABEL_5;
        case 4:
          *(_WORD *)(a2 + 24) = (wide_byte & 1) == 0 ? 34 : 109;
          v65 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 41) = 8;
          *(_QWORD *)(a2 + 48) = (v65 >> 1) & 7;
          return *(unsigned __int16 *)(a2 + 26);
        case 5:
          v7 = *((unsigned __int8 *)qword_9160 + v50);
          *(_WORD *)(a2 + 24) = v7;
          goto LABEL_5;
        case 6:
        case 7:
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 47;
          v64 = *(_DWORD *)(a1 + 128);
          *(_BYTE *)(a2 + 72) = 1;
          *(_QWORD *)(a2 + 48) = v64 & 0x1F;
          return *(unsigned __int16 *)(a2 + 26);
        case 8:
          if ( (wide_byte & 0xC) != 0 )
            goto LABEL_4;
          *(_BYTE *)(a2 + 45) = 1;
          v66 = *((unsigned __int8 *)word_915A + v50);
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = v66;
          v67 = sub_4540(a2);
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 48) = v67;
          v7 = *(_WORD *)(a2 + 24);
          if ( v49 )
          {
            *(_BYTE *)(a2 + 81) = 5;
            *(_QWORD *)(a2 + 88) = 16;
            *(_BYTE *)(a2 + 112) = 2;
          }
          goto LABEL_5;
        case 9:
          if ( (wide_byte & 0xF) != 0 )
            goto LABEL_4;
          *(_WORD *)(a2 + 24) = 42;
          return *(unsigned __int16 *)(a2 + 26);
        case 12:
          switch ( v49 )
          {
            case 5:
              *(_WORD *)(a2 + 24) = 98;
              break;
            case 6:
              *(_WORD *)(a2 + 24) = 97;
              *(_BYTE *)(a2 + 41) = 7;
              *(_QWORD *)(a2 + 56) = (unsigned __int16)sub_4540(a2);
              v7 = *(_WORD *)(a2 + 24);
              goto LABEL_5;
            case 4:
              *(_WORD *)(a2 + 24) = 96;
              break;
            default:
              goto LABEL_4;
          }
          *(_BYTE *)(a2 + 45) = 1;
          *(_BYTE *)(a2 + 41) = 5;
          v68 = sub_4540(a2);
          *(_BYTE *)(a2 + 72) = 0;
          *(_QWORD *)(a2 + 48) = v68;
          v7 = *(_WORD *)(a2 + 24);
          goto LABEL_5;
        default:
          goto LABEL_4;
      }
    case 0xC:
    case 0xD:
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 24) = 68;
      *(_BYTE *)(a2 + 41) = 5;
      v16 = *(_DWORD *)(a1 + 128);
      *(_BYTE *)(a2 + 72) = 0;
      v17 = v16 & 0x1FFF;
      if ( (v16 & 0x1000) != 0 )
        v17 = v16 | 0xFFFFFFFFFFFFE000LL;
      *(_QWORD *)(a2 + 48) = v17;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xE:
    case 0xF:
      v10 = v6 >> 2;
      switch ( v10 )
      {
        case 2:
          v11 = ((wide_byte & 0x1000) != 0) + 32;
          goto LABEL_16;
        case 3:
          v75 = wide_byte;
          HIBYTE(wide_byte) &= ~0x10u;
          v76 = v75 & 0x1000;
          if ( wide_byte == 0xEF00 )
          {
            *(_WORD *)(a2 + 24) = v76 == 0 ? 86 : 89;
            return *(unsigned __int16 *)(a2 + 26);
          }
          *(_BYTE *)(a2 + 41) = 10;
          *(_WORD *)(a2 + 24) = 87 - ((v76 == 0) - 1);
          v77 = ~*(_DWORD *)(a1 + 128);
          v74 = *(_DWORD *)(a1 + 128) & 0x3FF;
          *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 128) & 0x3FF;
          *(_QWORD *)(a2 + 48) = v74;
          if ( (v77 & 0xC) != 0 )
            return *(unsigned __int16 *)(a2 + 26);
          break;
        case 1:
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 131;
          v73 = (*(_BYTE *)(a1 + 129) & 0x10) != 0;
          *(_BYTE *)(a2 + 72) = 1;
          *(_BYTE *)(a2 + 81) = 10;
          *(_QWORD *)(a2 + 48) = v73 + 1;
          LODWORD(v73) = ~*(_DWORD *)(a1 + 128);
          v74 = *(_DWORD *)(a1 + 128) & 0x3FF;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x3FF;
          *(_QWORD *)(a2 + 88) = v74;
          if ( (v73 & 0xC) != 0 )
            return *(unsigned __int16 *)(a2 + 26);
          break;
        default:
          v11 = ((wide_byte & 0x1000) != 0) + 19;
LABEL_16:
          v12 = *(_WORD *)(a2 + 26);
          *(_WORD *)(a2 + 24) = v11;
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 26) = v12 + 1;
          v13 = get_wide_byte();
          *(_BYTE *)(a2 + 81) = 10;
          *(_QWORD *)(a2 + 56) = v13;
          v14 = ~*(_DWORD *)(a1 + 128);
          v15 = *(_DWORD *)(a1 + 128) & 0x3FF;
          *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 128) & 0x3FF;
          *(_QWORD *)(a2 + 88) = v15;
          if ( (v14 & 0xC) == 0 && (v15 & 0x80) == 0 )
            return 0;
          goto LABEL_4;
      }
      if ( (v74 & 0x80) != 0 )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
  }
}

