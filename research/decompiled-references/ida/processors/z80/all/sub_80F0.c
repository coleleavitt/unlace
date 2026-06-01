__int64 __fastcall sub_80F0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 next_byte; // al
  char v6; // dl
  char v7; // al
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // edx
  unsigned __int16 next_word; // ax
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rdx
  int v23; // ecx
  __m128i v24; // xmm2
  unsigned __int8 v25; // al
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int16 v35; // dx
  bool v36; // zf
  __int16 v37; // ax
  char v38; // dl
  int v39; // eax
  char v40; // dl
  char v41; // dl
  int v42; // eax
  char v43; // dl
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // esi
  int v49; // eax
  int v50; // eax
  unsigned __int16 v51; // ax
  unsigned __int64 v52; // rax
  char v53; // dl
  char v54; // al
  char v55; // cl
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int16 v58; // ax
  __int64 v59; // rdx
  __int16 v60; // ax
  __int16 v61; // ax
  int v62; // eax
  int v63; // eax
  __int16 v64; // ax
  __int16 v65; // dx
  __int16 v66; // ax
  unsigned __int16 v67; // ax
  char v68; // dl
  __int16 v69; // dx
  __int16 v70; // ax
  unsigned __int16 v71; // ax
  char v72; // dl
  unsigned __int8 v73; // al
  __m128i *v74; // rdi
  __int32 *v75; // rsi
  __int64 i; // rcx
  _DWORD *v77; // rdi
  _DWORD *v78; // rsi
  __int64 j; // rcx
  _DWORD *v80; // rdi
  __m128i *v81; // rsi
  __int64 k; // rcx
  unsigned __int64 v83; // rax
  char v84; // cl
  unsigned __int16 v85; // cx
  __int16 v86; // cx
  __m128i v87; // xmm1
  __m128i v88; // xmm0
  __int64 v89; // rax
  int v90; // edx
  __m128i v91; // xmm2
  unsigned __int8 v92; // al
  void *v93; // rdx
  unsigned __int8 v94; // al
  unsigned __int8 v95; // al
  char v96; // al
  __int16 v97; // ax
  char v98; // dl
  unsigned __int16 v99; // ax
  char v100; // dl
  __int16 v101; // ax
  __int16 v102; // dx
  __int16 v103; // cx
  __m128i v104; // [rsp+0h] [rbp-48h] BYREF
  __m128i v105; // [rsp+10h] [rbp-38h]
  __int64 v106; // [rsp+20h] [rbp-28h]

  *(_WORD *)(a2 + 24) = 0;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 85) = 0;
  next_byte = insn_get_next_byte();
  v6 = next_byte & 0xC0;
  *(_DWORD *)(a1 + 228) = next_byte;
  if ( (next_byte & 0xC0) == 0x80 )
  {
    v15 = next_byte & 7;
    if ( v15 == 6 )
    {
      *(_BYTE *)(a2 + 81) = 3;
      *(_WORD *)(a2 + 86) = 10;
    }
    else
    {
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = v15;
    }
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = 7;
    v16 = (*(int *)(a1 + 228) >> 3) & 7;
LABEL_32:
    v8 = (unsigned __int16)word_110D0[v16];
LABEL_33:
    *(_BYTE *)(a2 + 44) &= ~8u;
    *(_WORD *)(a2 + 24) = v8;
    goto LABEL_14;
  }
  if ( (next_byte & 0xC0u) > 0x80 )
  {
    if ( v6 != -64 )
    {
LABEL_13:
      v8 = *(unsigned __int16 *)(a2 + 24);
      goto LABEL_14;
    }
    switch ( next_byte & 0xF )
    {
      case 0:
      case 8:
        if ( (*(_BYTE *)(a1 + 224) & 0x20) == 0 )
          goto LABEL_190;
        if ( next_byte == 0xF0 )
          goto LABEL_227;
        if ( next_byte > 0xF0u )
        {
          if ( next_byte != 0xF8 )
            goto LABEL_190;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 104;
          *(_WORD *)(a2 + 46) = 10;
          *(_BYTE *)(a2 + 81) = 4;
          *(_WORD *)(a2 + 86) = 12;
          *(_QWORD *)(a2 + 96) = (unsigned __int8)insn_get_next_byte();
          v8 = *(unsigned __int16 *)(a2 + 24);
LABEL_14:
          if ( !(_WORD)v8 )
            return 0;
          v9 = *(_DWORD *)(a1 + 224);
LABEL_17:
          v10 = v9 & 0x3B;
          goto LABEL_18;
        }
        if ( next_byte != 0xE0 )
        {
          if ( next_byte == 0xE8 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 3;
            *(_WORD *)(a2 + 46) = 12;
LABEL_61:
            *(_BYTE *)(a2 + 81) = 5;
            *(_QWORD *)(a2 + 88) = (unsigned __int8)insn_get_next_byte();
            v8 = *(unsigned __int16 *)(a2 + 24);
            goto LABEL_14;
          }
LABEL_190:
          v8 = (unsigned __int16)a56789[((int)next_byte >> 3) & 7];
          *(_WORD *)(a2 + 24) = v8;
          goto LABEL_14;
        }
LABEL_227:
        *(_BYTE *)(a2 + 41) = 2;
        *(_WORD *)(a2 + 24) = 104;
        v73 = insn_get_next_byte();
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = 7;
        *(_QWORD *)(a2 + 56) = v73 + 65280LL;
        if ( (*(_BYTE *)(a1 + 228) & 0x10) != 0 )
        {
          v74 = &v104;
          v75 = (__int32 *)(a2 + 40);
          for ( i = 10; i; --i )
          {
            v74->m128i_i32[0] = *v75++;
            v74 = (__m128i *)((char *)v74 + 4);
          }
          v77 = (_DWORD *)(a2 + 40);
          v78 = (_DWORD *)(a2 + 80);
          for ( j = 9; j; --j )
            *v77++ = *v78++;
          v80 = (_DWORD *)(a2 + 80);
          v81 = &v104;
          for ( k = 9; k; --k )
          {
            *v80 = v81->m128i_i32[0];
            v81 = (__m128i *)((char *)v81 + 4);
            ++v80;
          }
          v8 = *(unsigned __int16 *)(a2 + 24);
          goto LABEL_14;
        }
        goto LABEL_13;
      case 1:
      case 5:
        v8 = (unsigned int)((next_byte & 4) != 0) + 50;
        *(_WORD *)(a2 + 24) = v8;
        v18 = *(_DWORD *)(a1 + 228);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 46) = ((v18 >> 4) & 3) + 8;
        v9 = *(_DWORD *)(a1 + 224);
        v10 = v9 & 0x3B;
        goto LABEL_18;
      case 2:
      case 0xA:
        if ( (*(_BYTE *)(a1 + 224) & 0x20) == 0 )
          goto LABEL_192;
        if ( next_byte == 0xF2 )
          goto LABEL_214;
        if ( next_byte > 0xF2u )
        {
          if ( next_byte == 0xFA )
          {
LABEL_46:
            *(_BYTE *)(a2 + 41) = 2;
            *(_WORD *)(a2 + 24) = 104;
            next_word = insn_get_next_word();
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 7;
            *(_QWORD *)(a2 + 56) = next_word;
            v8 = *(unsigned __int16 *)(a2 + 24);
            if ( (*(_BYTE *)(a1 + 228) & 0x10) != 0 )
            {
              v20 = _mm_loadu_si128((const __m128i *)(a2 + 40));
              v21 = _mm_loadu_si128((const __m128i *)(a2 + 56));
              v22 = *(_QWORD *)(a2 + 72);
              v23 = *(_DWORD *)(a2 + 112);
              *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
              v24 = _mm_loadu_si128((const __m128i *)(a2 + 96));
              v106 = v22;
              *(_DWORD *)(a2 + 72) = v23;
              *(_DWORD *)(a2 + 112) = v22;
              v104 = v20;
              v105 = v21;
              *(__m128i *)(a2 + 56) = v24;
              *(__m128i *)(a2 + 80) = v20;
              *(__m128i *)(a2 + 96) = v21;
            }
            goto LABEL_14;
          }
        }
        else
        {
          if ( next_byte == 0xE2 )
          {
LABEL_214:
            *(_DWORD *)(a2 + 28) |= 1u;
            *(_WORD *)(a2 + 24) = 104;
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 46) = 1;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 7;
            if ( (*(_BYTE *)(a1 + 228) & 0x10) != 0 )
            {
              v87 = _mm_loadu_si128((const __m128i *)(a2 + 40));
              v88 = _mm_loadu_si128((const __m128i *)(a2 + 56));
              v89 = *(_QWORD *)(a2 + 72);
              v90 = *(_DWORD *)(a2 + 112);
              *(__m128i *)(a2 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 80));
              v91 = _mm_loadu_si128((const __m128i *)(a2 + 96));
              v106 = v89;
              *(_DWORD *)(a2 + 72) = v90;
              *(_DWORD *)(a2 + 112) = v89;
              v104 = v87;
              v105 = v88;
              *(__m128i *)(a2 + 56) = v91;
              *(__m128i *)(a2 + 80) = v87;
              *(__m128i *)(a2 + 96) = v88;
            }
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 104;
            v10 = v9 & 0x3B;
            goto LABEL_18;
          }
          if ( next_byte == 0xEA )
            goto LABEL_46;
        }
LABEL_192:
        *(_WORD *)(a2 + 24) = word_110A0[((int)next_byte >> 3) & 7];
        goto LABEL_50;
      case 3:
      case 0xB:
        switch ( ((int)next_byte >> 3) & 7 )
        {
          case 0:
            *(_WORD *)(a2 + 24) = 30;
            goto LABEL_50;
          case 1:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) == 0 )
            {
              v8 = 195;
              *(_WORD *)(a2 + 24) = 195;
              v9 = *(_DWORD *)(a1 + 224);
              v10 = v9 & 0x3B;
              goto LABEL_18;
            }
            v94 = insn_get_next_byte();
            *(_DWORD *)(a1 + 228) = v94;
            if ( (int)v94 >> 6 )
            {
              *(_BYTE *)(a2 + 41) = 5;
              v8 = (unsigned __int16)word_11048[(int)v94 >> 6];
              *(_WORD *)(a2 + 24) = v8;
              *(_QWORD *)(a2 + 48) = (*(int *)(a1 + 228) >> 3) & 7;
              v102 = *(_WORD *)(a1 + 228) & 7;
              if ( v102 == 6 )
              {
                *(_BYTE *)(a2 + 81) = 3;
                *(_WORD *)(a2 + 86) = 10;
              }
              else
              {
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = v102;
              }
              goto LABEL_14;
            }
            v95 = v94 & 7;
            if ( v95 == 6 )
            {
              *(_WORD *)(a2 + 46) = 10;
              v96 = 3;
            }
            else
            {
              *(_WORD *)(a2 + 46) = v95;
              v96 = 1;
            }
            *(_BYTE *)(a2 + 41) = v96;
            v8 = (unsigned __int16)aYW[(*(int *)(a1 + 228) >> 3) & 7];
            *(_WORD *)(a2 + 24) = v8;
            if ( (_WORD)v8 != 138 )
              goto LABEL_14;
            v9 = *(_DWORD *)(a1 + 224);
            if ( (v9 & 0x10) != 0 )
            {
              *(_WORD *)(a2 + 24) = 93;
              v97 = *(_WORD *)(a1 + 228) & 7;
              if ( v97 == 6 )
              {
                v97 = 10;
                v98 = 3;
              }
              else
              {
                v98 = 1;
              }
              *(_BYTE *)(a2 + 81) = v98;
              *(_WORD *)(a2 + 86) = v97 + 42;
              v9 = *(_DWORD *)(a1 + 224);
              v8 = 93;
              v10 = v9 & 0x3B;
            }
            else
            {
              if ( (v9 & 0x20) == 0 )
                goto LABEL_17;
              *(_WORD *)(a2 + 24) = 199;
              v9 = *(_DWORD *)(a1 + 224);
              v8 = 199;
              v10 = v9 & 0x3B;
            }
            break;
          case 2:
            *(_BYTE *)(a2 + 84) &= ~8u;
            *(_WORD *)(a2 + 24) = 48;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 7;
LABEL_110:
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
            v8 = *(unsigned __int16 *)(a2 + 24);
            goto LABEL_14;
          case 3:
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_WORD *)(a2 + 24) = 27;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 7;
            goto LABEL_61;
          case 4:
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_WORD *)(a2 + 46) = 12;
            *(_WORD *)(a2 + 86) = 10;
            v8 = 78;
            *(_BYTE *)(a2 + 84) &= ~8u;
            *(_WORD *)(a2 + 24) = 78;
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 81) = 1;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 5:
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_BYTE *)(a2 + 84) &= ~8u;
            v8 = 77;
            *(_WORD *)(a2 + 24) = 77;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 9;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 10;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 6:
            v8 = 24;
            *(_WORD *)(a2 + 24) = 24;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 7:
            v8 = 25;
            *(_WORD *)(a2 + 24) = 25;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            goto LABEL_18;
        }
        goto LABEL_18;
      case 4:
      case 0xC:
        *(_WORD *)(a2 + 24) = asc_110B0[((int)next_byte >> 3) & 7];
        goto LABEL_50;
      case 6:
      case 0xE:
        *(_BYTE *)(a2 + 81) = 5;
        v25 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 7;
        *(_QWORD *)(a2 + 88) = v25;
        v16 = (*(int *)(a1 + 228) >> 3) & 7;
        if ( *(_BYTE *)(a2 + 81) != 5 )
          goto LABEL_32;
        v8 = word_110C0[v16];
        goto LABEL_33;
      case 7:
      case 0xF:
        *(_BYTE *)(a2 + 41) = 5;
        *(_WORD *)(a2 + 24) = 65;
        v26 = (*(int *)(a1 + 228) >> 3) & 7;
        *(_QWORD *)(a2 + 48) = v26;
        if ( (*(_BYTE *)(a1 + 224) & 0x3B) == 0 )
          return *(unsigned __int16 *)(a2 + 26);
        *(_QWORD *)(a2 + 48) = 8 * v26;
        v9 = *(_DWORD *)(a1 + 224);
        v8 = 65;
        v10 = v9 & 0x3B;
        goto LABEL_18;
      case 9:
        v29 = ((int)next_byte >> 4) & 3;
        switch ( v29 )
        {
          case 2:
            *(_WORD *)(a2 + 24) = 49;
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 49;
            v10 = v9 & 0x3B;
            break;
          case 3:
            *(_BYTE *)(a2 + 44) &= ~8u;
            *(_BYTE *)(a2 + 84) &= ~8u;
            v8 = 69;
            *(_WORD *)(a2 + 24) = 69;
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 12;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 10;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            break;
          case 1:
            v62 = *(_DWORD *)(a1 + 224);
            if ( (v62 & 0x20) != 0 )
            {
              *(_WORD *)(a2 + 24) = 117;
              v9 = *(_DWORD *)(a1 + 224);
              v8 = 117;
              v10 = v9 & 0x3B;
            }
            else
            {
              if ( (v62 & 0x3B) != 0 )
              {
                *(_WORD *)(a2 + 24) = 94;
                v9 = *(_DWORD *)(a1 + 224);
                v8 = 94;
              }
              else
              {
                *(_WORD *)(a2 + 24) = 193;
                v9 = *(_DWORD *)(a1 + 224);
                v8 = 193;
              }
              v10 = *(_DWORD *)(a1 + 224) & 0x3B;
            }
            break;
          default:
            *(_WORD *)(a2 + 24) = 52;
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 52;
            v10 = v9 & 0x3B;
            break;
        }
        goto LABEL_18;
      case 0xD:
        v30 = ((int)next_byte >> 4) & 3;
        switch ( v30 )
        {
          case 2:
            v63 = *(_DWORD *)(a1 + 224);
            if ( (v63 & 0x20) != 0 )
              return 0;
            if ( (v63 & 0x10) != 0 )
            {
              v92 = insn_get_next_byte();
              v93 = &unk_10140;
              *(_DWORD *)(a1 + 228) = v92;
              if ( v92 == 203 )
              {
                v92 = insn_get_next_byte();
                v93 = &unk_FFA0;
                *(_DWORD *)(a1 + 228) = v92;
              }
              sub_6ED0(a1, a2, (__int64)v93, v92, a3);
              v8 = *(unsigned __int16 *)(a2 + 24);
            }
            else
            {
              if ( (v63 & 0x3B) == 0 )
              {
                v8 = 194;
                *(_WORD *)(a2 + 24) = 194;
                v9 = *(_DWORD *)(a1 + 224);
                v10 = v9 & 0x3B;
                goto LABEL_18;
              }
              sub_7AA0(a1, a2);
              v8 = *(unsigned __int16 *)(a2 + 24);
            }
            goto LABEL_14;
          case 3:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
            {
              sub_6FE0(a1, a2, 0, a3);
              goto LABEL_13;
            }
            *(_WORD *)(a2 + 24) = 196;
            break;
          case 1:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
            {
              sub_6FE0(a1, a2, 1, a3);
              v8 = *(unsigned __int16 *)(a2 + 24);
              goto LABEL_14;
            }
            *(_WORD *)(a2 + 24) = 197;
            break;
          default:
            *(_WORD *)(a2 + 24) = 7;
            break;
        }
LABEL_50:
        *(_BYTE *)(a2 + 41) = 7;
        *(_QWORD *)(a2 + 56) = (unsigned __int16)insn_get_next_word();
        v8 = *(unsigned __int16 *)(a2 + 24);
        goto LABEL_14;
    }
  }
  if ( !v6 )
  {
    switch ( next_byte & 0xF )
    {
      case 0:
      case 8:
        v48 = (int)next_byte >> 3;
        if ( next_byte > 0x3Fu )
        {
LABEL_242:
          v8 = 45;
          *(_WORD *)(a2 + 24) = 45;
          v9 = *(_DWORD *)(a1 + 224);
          v10 = v9 & 0x3B;
          goto LABEL_18;
        }
        switch ( v48 )
        {
          case 0:
            goto LABEL_242;
          case 1:
            v50 = *(_DWORD *)(a1 + 224);
            if ( (v50 & 0x20) != 0 )
            {
              *(_WORD *)(a2 + 24) = 104;
              *(_BYTE *)(a2 + 41) = 2;
              v99 = insn_get_next_word();
              *(_BYTE *)(a2 + 45) = 1;
              *(_BYTE *)(a2 + 81) = 1;
              *(_QWORD *)(a2 + 56) = v99;
              v8 = *(unsigned __int16 *)(a2 + 24);
              *(_WORD *)(a2 + 86) = 12;
              goto LABEL_14;
            }
            if ( (v50 & 0x3B) != 0 )
            {
              *(_WORD *)(a2 + 24) = 93;
              v8 = 93;
              *(_BYTE *)(a2 + 41) = 1;
              *(_WORD *)(a2 + 46) = 11;
              *(_BYTE *)(a2 + 81) = 1;
              *(_WORD *)(a2 + 86) = 15;
              v9 = *(_DWORD *)(a1 + 224);
            }
            else
            {
              *(_WORD *)(a2 + 24) = 188;
              v9 = *(_DWORD *)(a1 + 224);
              v8 = 188;
            }
            v10 = *(_DWORD *)(a1 + 224) & 0x3B;
            goto LABEL_18;
          case 2:
            v49 = *(_DWORD *)(a1 + 224);
            if ( (v49 & 0x20) == 0 )
            {
              if ( (v49 & 0x3B) == 0 )
              {
                v8 = 189;
                *(_WORD *)(a2 + 24) = 189;
                v9 = *(_DWORD *)(a1 + 224);
                v10 = v9 & 0x3B;
                goto LABEL_18;
              }
              *(_WORD *)(a2 + 24) = 92;
              *(_BYTE *)(a2 + 41) = 7;
              *(_QWORD *)(a2 + 56) = (unsigned __int16)((char)insn_get_next_byte()
                                                      + *(_WORD *)(a2 + 8)
                                                      + *(_WORD *)(a2 + 26));
              v8 = *(unsigned __int16 *)(a2 + 24);
              goto LABEL_14;
            }
            if ( (unsigned __int8)insn_get_next_byte() )
              return 0;
            *(_WORD *)(a2 + 24) = 251;
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 251;
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 3:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
              goto LABEL_217;
            *(_WORD *)(a2 + 24) = 190;
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 190;
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 4:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
              goto LABEL_217;
            *(_WORD *)(a2 + 24) = 79;
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 79;
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 5:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
              goto LABEL_217;
            *(_WORD *)(a2 + 24) = 191;
            goto LABEL_110;
          case 6:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
              goto LABEL_217;
            *(_WORD *)(a2 + 24) = 80;
            v9 = *(_DWORD *)(a1 + 224);
            v8 = 80;
            v10 = v9 & 0x3B;
            goto LABEL_18;
          case 7:
            if ( (*(_BYTE *)(a1 + 224) & 0x3B) == 0 )
            {
              *(_WORD *)(a2 + 24) = 192;
              goto LABEL_110;
            }
LABEL_217:
            *(_BYTE *)(a2 + 41) = 8;
            *(_WORD *)(a2 + 24) = 103;
            v64 = word_11050[v48];
            *(_BYTE *)(a2 + 81) = 7;
            *(_WORD *)(a2 + 46) = v64;
            *(_QWORD *)(a2 + 96) = (unsigned __int16)((char)insn_get_next_byte()
                                                    + *(_WORD *)(a2 + 8)
                                                    + *(_WORD *)(a2 + 26));
            v8 = *(unsigned __int16 *)(a2 + 24);
            break;
        }
        goto LABEL_14;
      case 1:
        *(_WORD *)(a2 + 24) = 42;
        v33 = *(_DWORD *)(a1 + 228);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        v34 = (v33 >> 4) & 3;
        *(_BYTE *)(a2 + 81) = 5;
        v35 = v34 + 8;
        v36 = (_WORD)v34 == 3;
        v37 = 12;
        *(_BYTE *)(a2 + 85) = 1;
        if ( !v36 )
          v37 = v35;
        *(_WORD *)(a2 + 46) = v37;
        *(_QWORD *)(a2 + 88) = (unsigned __int16)insn_get_next_word();
        v8 = *(unsigned __int16 *)(a2 + 24);
        goto LABEL_14;
      case 2:
        if ( (next_byte & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 224) & 0x20) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 3;
            *(_WORD *)(a2 + 46) = 10;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = 7;
            v8 = (next_byte & 0x10) == 0 ? 107 : 105;
            *(_WORD *)(a2 + 24) = v8;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            goto LABEL_18;
          }
          *(_BYTE *)(a2 + 81) = 1;
          if ( (*(_BYTE *)(a1 + 228) & 0x10) != 0 )
          {
            v65 = 7;
            v66 = 70;
          }
          else
          {
            *(_BYTE *)(a2 + 45) = 1;
            v65 = 10;
            v66 = 72;
            *(_BYTE *)(a2 + 85) = 1;
          }
          *(_WORD *)(a2 + 86) = v65;
          *(_WORD *)(a2 + 24) = v66;
          *(_BYTE *)(a2 + 41) = 2;
          v67 = insn_get_next_word();
          v68 = *(_BYTE *)(a2 + 84);
          *(_QWORD *)(a2 + 56) = v67;
          v40 = v68 & 0xF7;
          v8 = *(unsigned __int16 *)(a2 + 24);
        }
        else
        {
          *(_BYTE *)(a2 + 41) = 3;
          v38 = *(_BYTE *)(a2 + 84);
          *(_WORD *)(a2 + 24) = 71;
          v39 = *(_DWORD *)(a1 + 228);
          *(_BYTE *)(a2 + 81) = 1;
          v40 = v38 & 0xF7;
          *(_WORD *)(a2 + 46) = ((v39 >> 4) & 1) + 8;
          *(_WORD *)(a2 + 86) = 7;
          v8 = 71;
        }
        *(_BYTE *)(a2 + 84) = v40;
        goto LABEL_14;
      case 3:
        *(_WORD *)(a2 + 24) = 29;
        v44 = *(_DWORD *)(a1 + 228);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        v45 = (v44 >> 4) & 3;
        *(_WORD *)(a2 + 46) = v45 + 8;
        if ( (_WORD)v45 == 3 )
          *(_WORD *)(a2 + 46) = 12;
        v9 = *(_DWORD *)(a1 + 224);
        v8 = 29;
        v10 = v9 & 0x3B;
        goto LABEL_18;
      case 4:
      case 0xC:
        *(_WORD *)(a2 + 24) = 28;
        if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
        {
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 46) = 10;
          v9 = *(_DWORD *)(a1 + 224);
          v8 = 28;
        }
        else
        {
          *(_WORD *)(a2 + 46) = (*(int *)(a1 + 228) >> 3) & 7;
          v8 = 28;
          *(_BYTE *)(a2 + 41) = 1;
          v9 = *(_DWORD *)(a1 + 224);
        }
        v10 = *(_DWORD *)(a1 + 224) & 0x3B;
        goto LABEL_18;
      case 5:
      case 0xD:
        *(_WORD *)(a2 + 24) = 22;
        if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
        {
          *(_BYTE *)(a2 + 41) = 3;
          *(_WORD *)(a2 + 46) = 10;
          v9 = *(_DWORD *)(a1 + 224);
          v8 = 22;
        }
        else
        {
          *(_WORD *)(a2 + 46) = (*(int *)(a1 + 228) >> 3) & 7;
          v8 = 22;
          *(_BYTE *)(a2 + 41) = 1;
          v9 = *(_DWORD *)(a1 + 224);
        }
        v10 = *(_DWORD *)(a1 + 224) & 0x3B;
        goto LABEL_18;
      case 6:
      case 0xE:
        *(_WORD *)(a2 + 24) = 44;
        if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
        {
          *(_WORD *)(a2 + 46) = 10;
          v27 = 3;
        }
        else
        {
          *(_WORD *)(a2 + 46) = (*(int *)(a1 + 228) >> 3) & 7;
          v27 = 1;
        }
        *(_BYTE *)(a2 + 41) = v27;
        goto LABEL_61;
      case 7:
      case 0xF:
        v28 = (int)next_byte >> 3;
        if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
          v8 = word_11060[v28];
        else
          v8 = (unsigned __int16)asc_11080[v28];
        *(_WORD *)(a2 + 24) = v8;
        goto LABEL_14;
      case 9:
        *(_BYTE *)(a2 + 44) &= ~8u;
        *(_WORD *)(a2 + 24) = 21;
        *(_WORD *)(a2 + 46) = 10;
        *(_BYTE *)(a2 + 45) = 1;
        *(_BYTE *)(a2 + 41) = 1;
        v46 = *(_DWORD *)(a1 + 228);
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        v47 = (v46 >> 4) & 3;
        *(_WORD *)(a2 + 86) = v47 + 8;
        if ( (_WORD)v47 == 3 )
        {
          v8 = 21;
          *(_WORD *)(a2 + 86) = 12;
          v9 = *(_DWORD *)(a1 + 224);
        }
        else
        {
          v9 = *(_DWORD *)(a1 + 224);
          v8 = 21;
        }
        v10 = *(_DWORD *)(a1 + 224) & 0x3B;
        goto LABEL_18;
      case 0xA:
        if ( (next_byte & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 224) & 0x20) != 0 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 46) = 7;
            *(_BYTE *)(a2 + 81) = 3;
            *(_WORD *)(a2 + 86) = 10;
            v8 = (next_byte & 0x10) == 0 ? 107 : 105;
            *(_WORD *)(a2 + 24) = v8;
            v9 = *(_DWORD *)(a1 + 224);
            v10 = v9 & 0x3B;
            goto LABEL_18;
          }
          *(_BYTE *)(a2 + 41) = 1;
          if ( (*(_BYTE *)(a1 + 228) & 0x10) != 0 )
          {
            v69 = 7;
            v70 = 39;
          }
          else
          {
            *(_BYTE *)(a2 + 45) = 1;
            v69 = 10;
            v70 = 41;
            *(_BYTE *)(a2 + 85) = 1;
          }
          *(_WORD *)(a2 + 46) = v69;
          *(_WORD *)(a2 + 24) = v70;
          *(_BYTE *)(a2 + 81) = 2;
          v71 = insn_get_next_word();
          v72 = *(_BYTE *)(a2 + 44);
          *(_QWORD *)(a2 + 96) = v71;
          v43 = v72 & 0xF7;
          v8 = *(unsigned __int16 *)(a2 + 24);
        }
        else
        {
          *(_BYTE *)(a2 + 81) = 3;
          v41 = *(_BYTE *)(a2 + 44);
          *(_WORD *)(a2 + 24) = 40;
          v42 = *(_DWORD *)(a1 + 228);
          *(_BYTE *)(a2 + 41) = 1;
          v43 = v41 & 0xF7;
          *(_WORD *)(a2 + 46) = 7;
          *(_WORD *)(a2 + 86) = ((v42 >> 4) & 1) + 8;
          v8 = 40;
        }
        *(_BYTE *)(a2 + 44) = v43;
        goto LABEL_14;
      case 0xB:
        *(_WORD *)(a2 + 24) = 23;
        v31 = *(_DWORD *)(a1 + 228);
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        v32 = (v31 >> 4) & 3;
        *(_WORD *)(a2 + 46) = v32 + 8;
        if ( (_WORD)v32 == 3 )
          *(_WORD *)(a2 + 46) = 12;
        v9 = *(_DWORD *)(a1 + 224);
        v8 = 23;
        v10 = v9 & 0x3B;
        goto LABEL_18;
    }
  }
  *(_WORD *)(a2 + 24) = 26;
  if ( *(_DWORD *)(a1 + 228) == 118 )
  {
    v9 = *(_DWORD *)(a1 + 224);
    v8 = 26;
    v10 = v9 & 0x3B;
  }
  else
  {
    *(_WORD *)(a2 + 24) = 43;
    if ( ((*(int *)(a1 + 228) >> 3) & 7) == 6 )
    {
      v7 = 3;
      *(_WORD *)(a2 + 46) = 10;
    }
    else
    {
      *(_WORD *)(a2 + 46) = (*(int *)(a1 + 228) >> 3) & 7;
      v7 = 1;
    }
    *(_BYTE *)(a2 + 41) = v7;
    if ( (*(_WORD *)(a1 + 228) & 7) == 6 )
    {
      *(_BYTE *)(a2 + 81) = 3;
      v8 = 43;
      *(_WORD *)(a2 + 86) = 10;
    }
    else
    {
      *(_WORD *)(a2 + 86) = *(_WORD *)(a1 + 228) & 7;
      v8 = 43;
      *(_BYTE *)(a2 + 81) = 1;
    }
    v9 = *(_DWORD *)(a1 + 224);
    v10 = v9 & 0x3B;
  }
LABEL_18:
  if ( !v10 )
    return *(unsigned __int16 *)(a2 + 26);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 0x40) != 0 )
  {
    switch ( v8 )
    {
      case 2LL:
        if ( (*(_QWORD *)(a2 + 40) & 0xFF000000FF00LL) == 0x10000000100LL )
        {
          v58 = *(_WORD *)(a2 + 46);
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_WORD *)(a2 + 24) = 171;
          if ( v58 == 13 )
          {
            *(_WORD *)(a2 + 24) = 172;
          }
          else if ( v58 == 14 )
          {
            *(_WORD *)(a2 + 24) = 173;
          }
          goto LABEL_161;
        }
        break;
      case 3LL:
        v56 = *(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL;
        if ( v56 == 0xD000000000100LL )
        {
          v83 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_WORD *)(a2 + 24) = 169;
          if ( v83 != 0xD000000000100LL )
            goto LABEL_21;
          goto LABEL_156;
        }
        if ( v56 == 0xE000000000100LL )
        {
          v57 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_WORD *)(a2 + 24) = 170;
          if ( v57 != 0xE000000000100LL )
            goto LABEL_21;
          goto LABEL_156;
        }
        break;
      case 27LL:
        if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1000000000300LL )
        {
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_WORD *)(a2 + 24) = 136;
          v9 = *(_DWORD *)(a1 + 224);
        }
        break;
      case 43LL:
        v53 = *(_BYTE *)(a2 + 44);
        *(_BYTE *)(a2 + 44) = v53 | 8;
        v54 = *(_BYTE *)(a2 + 84);
        *(_BYTE *)(a2 + 84) = v54 | 8;
        v55 = *(_BYTE *)(a2 + 41);
        if ( v55 == 1 )
        {
          v84 = *(_BYTE *)(a2 + 81);
          if ( v84 == 2 )
          {
            switch ( *(_WORD *)(a2 + 46) )
            {
              case 8:
                v100 = v53 & 0xF7;
                v101 = 149;
                break;
              case 9:
                v100 = v53 & 0xF7;
                v101 = 150;
                break;
              case 0xC:
                v100 = v53 & 0xF7;
                v101 = 151;
                break;
              case 0xD:
                v100 = v53 & 0xF7;
                v101 = 152;
                break;
              case 0xE:
                v100 = v53 & 0xF7;
                v101 = 153;
                break;
              default:
                goto LABEL_21;
            }
            *(_WORD *)(a2 + 24) = v101;
            *(_BYTE *)(a2 + 44) = v100;
            v9 = *(_DWORD *)(a1 + 224);
            break;
          }
          if ( v84 != 1 )
            goto LABEL_21;
          v85 = *(_WORD *)(a2 + 46);
          if ( v85 == 16 )
          {
            *(_WORD *)(a2 + 24) = 165;
          }
          else if ( v85 > 0x10u )
          {
            if ( v85 != 17 )
              goto LABEL_21;
            *(_WORD *)(a2 + 24) = 166;
          }
          else
          {
            if ( v85 != 7 )
            {
              if ( v85 != 12 )
                goto LABEL_21;
              v86 = *(_WORD *)(a2 + 86);
              if ( v86 == 13 )
              {
                *(_WORD *)(a2 + 24) = 161;
                *(_BYTE *)(a2 + 44) = v53 & 0xF7;
                *(_BYTE *)(a2 + 84) = v54 & 0xF7;
                v9 = *(_DWORD *)(a1 + 224);
              }
              else
              {
                if ( v86 != 14 )
                  goto LABEL_21;
                *(_WORD *)(a2 + 24) = 162;
                *(_BYTE *)(a2 + 44) = v53 & 0xF7;
                *(_BYTE *)(a2 + 84) = v54 & 0xF7;
                v9 = *(_DWORD *)(a1 + 224);
              }
              break;
            }
            v103 = *(_WORD *)(a2 + 86);
            if ( v103 == 16 )
            {
              *(_WORD *)(a2 + 24) = 167;
            }
            else
            {
              if ( v103 != 17 )
                goto LABEL_21;
              *(_WORD *)(a2 + 24) = 168;
            }
          }
          *(_BYTE *)(a2 + 44) = v53 & 0xF7;
          *(_BYTE *)(a2 + 84) = v54 & 0xF7;
          v9 = *(_DWORD *)(a1 + 224);
          break;
        }
        if ( v55 != 2 || *(_BYTE *)(a2 + 81) != 1 )
          goto LABEL_21;
        switch ( *(_WORD *)(a2 + 86) )
        {
          case 8:
            *(_WORD *)(a2 + 24) = 154;
            *(_BYTE *)(a2 + 84) = v54 & 0xF7;
            v9 = *(_DWORD *)(a1 + 224);
            break;
          case 9:
            *(_WORD *)(a2 + 24) = 155;
            *(_BYTE *)(a2 + 84) = v54 & 0xF7;
            v9 = *(_DWORD *)(a1 + 224);
            break;
          case 0xC:
            *(_WORD *)(a2 + 24) = 156;
            *(_BYTE *)(a2 + 84) = v54 & 0xF7;
            v9 = *(_DWORD *)(a1 + 224);
            break;
          case 0xD:
            *(_WORD *)(a2 + 24) = 157;
            *(_BYTE *)(a2 + 84) = v54 & 0xF7;
            v9 = *(_DWORD *)(a1 + 224);
            break;
          case 0xE:
            *(_WORD *)(a2 + 24) = 158;
            *(_BYTE *)(a2 + 84) = v54 & 0xF7;
            v9 = *(_DWORD *)(a1 + 224);
            break;
          default:
            goto LABEL_21;
        }
        break;
      case 48LL:
        if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1000000000300LL )
        {
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_WORD *)(a2 + 24) = 137;
          v9 = *(_DWORD *)(a1 + 224);
        }
        break;
      case 84LL:
        *(_WORD *)(a2 + 24) = 16;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 86LL:
        *(_WORD *)(a2 + 24) = 182;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 88LL:
        *(_WORD *)(a2 + 24) = 181;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 90LL:
        *(_WORD *)(a2 + 24) = 19;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 91LL:
        *(_WORD *)(a2 + 24) = 22;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 93LL:
        v61 = *(_WORD *)(a2 + 86);
        *(_BYTE *)(a2 + 44) &= ~8u;
        *(_BYTE *)(a2 + 84) &= ~8u;
        if ( v61 == 13 )
        {
          *(_WORD *)(a2 + 24) = 159;
          v9 = *(_DWORD *)(a1 + 224);
        }
        else
        {
          if ( v61 != 14 )
            goto LABEL_21;
          *(_WORD *)(a2 + 24) = 160;
          v9 = *(_DWORD *)(a1 + 224);
        }
        break;
      case 96LL:
        v59 = *(_QWORD *)(a2 + 48);
        v60 = 183;
        if ( v59 )
          v60 = (v59 != 1) + 184;
        *(_BYTE *)(a2 + 44) &= ~8u;
        *(_WORD *)(a2 + 24) = v60;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 97LL:
        *(_WORD *)(a2 + 24) = 28;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 102LL:
        v52 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
        if ( v52 == 0xD000000000300LL )
        {
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_WORD *)(a2 + 24) = 163;
          v9 = *(_DWORD *)(a1 + 224);
        }
        else if ( v52 == 0xE000000000300LL )
        {
          *(_BYTE *)(a2 + 84) &= ~8u;
          *(_WORD *)(a2 + 24) = 164;
          v9 = *(_DWORD *)(a1 + 224);
        }
        break;
      case 103LL:
        v51 = *(_WORD *)(a2 + 46);
        *(_BYTE *)(a2 + 44) &= ~8u;
        if ( v51 == 2 )
        {
          *(_WORD *)(a2 + 24) = 178;
          v9 = *(_DWORD *)(a1 + 224);
        }
        else if ( v51 > 2u )
        {
          if ( v51 != 3 )
            goto LABEL_21;
          *(_WORD *)(a2 + 24) = 177;
          v9 = *(_DWORD *)(a1 + 224);
        }
        else
        {
          if ( v51 )
            *(_WORD *)(a2 + 24) = 179;
          else
            *(_WORD *)(a2 + 24) = 180;
          v9 = *(_DWORD *)(a1 + 224);
        }
        break;
      case 113LL:
        *(_WORD *)(a2 + 24) = 186;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 114LL:
        *(_WORD *)(a2 + 24) = 187;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 119LL:
      case 120LL:
        *(_WORD *)(a2 + 24) = 61;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 122LL:
        *(_WORD *)(a2 + 24) = 62;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 124LL:
      case 125LL:
        *(_WORD *)(a2 + 24) = 63;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 127LL:
        *(_WORD *)(a2 + 24) = 64;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 129LL:
        *(_WORD *)(a2 + 24) = 68;
        v9 = *(_DWORD *)(a1 + 224);
        break;
      case 130LL:
        if ( (*(_QWORD *)(a2 + 40) & 0xFF000000FF00LL) == 0x10000000100LL )
        {
          v58 = *(_WORD *)(a2 + 46);
          *(_BYTE *)(a2 + 44) &= ~8u;
          *(_WORD *)(a2 + 24) = 174;
          if ( v58 == 13 )
          {
            *(_WORD *)(a2 + 24) = 175;
          }
          else if ( v58 == 14 )
          {
            *(_WORD *)(a2 + 24) = 176;
          }
LABEL_161:
          if ( *(_BYTE *)(a2 + 81) != 1 || v58 != *(_WORD *)(a2 + 86) )
            goto LABEL_21;
LABEL_156:
          *(_WORD *)(a2 + 86) = 10;
          v9 = *(_DWORD *)(a1 + 224);
        }
        break;
      default:
        break;
    }
  }
  else
  {
    sub_6BD0(a1, a2);
LABEL_21:
    v9 = *(_DWORD *)(a1 + 224);
  }
  if ( (v9 & 0x20) != 0 )
  {
    v12 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)v12 > 0x87u )
    {
      if ( (_WORD)v12 == 199 || (unsigned __int16)(v12 - 250) <= 1u )
        return *(unsigned __int16 *)(a2 + 26);
      return 0;
    }
    if ( (unsigned __int16)v12 > 0x49u )
    {
      v17 = 0x3FBDEE12F0A30F81LL;
      if ( !_bittest64(&v17, (unsigned int)(v12 - 74)) )
        return 0;
    }
    else
    {
      if ( (unsigned __int16)v12 > 3u )
      {
        v13 = (unsigned int)(v12 - 20);
        if ( (unsigned __int16)v13 <= 0x2Du )
        {
          v14 = 0x2000C2000031LL;
          if ( _bittest64(&v14, v13) )
            return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      if ( (unsigned __int16)v12 <= 1u )
        return 0;
    }
  }
  return *(unsigned __int16 *)(a2 + 26);
}

