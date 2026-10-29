__int64 __fastcall sub_9E20(__int64 a1, __int64 a2, unsigned int a3, int *a4, int a5, double a6)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int *v11; // r13
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  unsigned __int64 v37; // r15
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // edx
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned int v45; // ecx
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  __int16 v48; // dx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int16 v53; // ax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int16 v59; // dx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int16 v65; // ax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  unsigned __int16 v71; // ax
  int v72; // edx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned __int16 next_word; // ax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned __int16 v80; // ax
  __int64 v81; // [rsp-8h] [rbp-50h]
  int v82; // [rsp+18h] [rbp-30h]
  int v83; // [rsp+1Ch] [rbp-2Ch]

  result = a3;
  v7 = *a4;
  *a4 = v7 + 1;
  if ( !a5 )
  {
    result = 5 * v7;
    *(_BYTE *)(a2 + 40 * v7 + 41) = 0;
    return result;
  }
  v9 = a2 + 8 * (5 * v7 + 5);
  v10 = a5 & 0x1FFFFFFF;
  v11 = a4;
  switch ( a5 & 0x1FFFFFFF )
  {
    case 1:
      goto LABEL_51;
    case 2:
      v10 = (unsigned int)(result & 7) + 8;
      if ( (result & 4) == 0 )
        v10 = result & 7;
      goto LABEL_61;
    case 3:
    case 0x28:
      goto LABEL_32;
    case 4:
      v45 = ((unsigned int)result >> 8) & 7;
      v10 = v45 + 8;
      if ( (result & 0x400) == 0 )
        v10 = v45;
      goto LABEL_61;
    case 5:
      LODWORD(result) = (unsigned int)result >> 6;
LABEL_51:
      v23 = result & 0x3F;
      if ( v23 == 62 )
        goto LABEL_52;
      goto LABEL_34;
    case 6:
      v10 = ((unsigned int)result >> 6) & 0x3F;
      if ( (result & 1) == 0 )
      {
        v22 = (result & 0xFC0) == 3968;
        v56 = a2 + 40 * v7;
        if ( !v22 )
        {
          *(_WORD *)(v56 + 46) = v10;
          *(_BYTE *)(v56 + 41) = 1;
          goto LABEL_35;
        }
        v22 = *(_BYTE *)(v56 + 40) == 0;
        *(_BYTE *)(v56 + 41) = 5;
        if ( !v22
          || (v10 = *(_QWORD *)(a1 + 16),
              v66 = *(unsigned __int16 *)(a2 + 24),
              a4 = (int *)*(unsigned int *)(v10 + 104),
              v66 < (int)a4)
          || v66 >= *(_DWORD *)(v10 + 108)
          || (*(_BYTE *)(*(_QWORD *)(v10 + 112) + 16LL * (v66 - (int)a4) + 8) & 4) == 0 )
        {
          if ( !*(_BYTE *)(a1 + 5296) )
          {
            *(_DWORD *)(a1 + 5292) = (unsigned int)insn_get_next_word(a2, a2, v10, a4, v9) << 16;
            next_word = insn_get_next_word(a2, a2, v73, v74, v75);
            *(_BYTE *)(a1 + 5296) = 1;
            *(_DWORD *)(a1 + 5292) |= next_word;
          }
          v10 = *(int *)(a1 + 5292);
          *(_QWORD *)(a2 + 40 * v7 + 48) = v10;
          goto LABEL_35;
        }
        goto LABEL_56;
      }
      result = v10 << 58 >> 58;
LABEL_43:
      v10 = a2 + 40 * v7;
      *(_QWORD *)(v10 + 48) = result;
      *(_BYTE *)(v10 + 41) = 5;
      *(_BYTE *)(v10 + 45) = 2;
      if ( a5 >= 0 )
        goto LABEL_9;
      goto LABEL_39;
    case 7:
      v10 = (unsigned int)((unsigned __int8)result >> 5) + 8;
      if ( (result & 0x80u) == 0LL )
        v10 = (unsigned __int8)result >> 5;
      goto LABEL_61;
    case 8:
      v10 = (8 * (_BYTE)result) & 0x38;
      v23 = v10 | ((unsigned __int8)result >> 5);
      if ( v23 == 62 )
        goto LABEL_52;
      goto LABEL_34;
    case 9:
      v10 = (8 * (_BYTE)result) & 0x18;
      v23 = v10 | ((unsigned __int8)result >> 5);
      if ( v23 == 30 )
        goto LABEL_52;
      goto LABEL_34;
    case 0xA:
      v33 = a2 + 40 * v7;
      *(_BYTE *)(v33 + 41) = 4;
      *(_BYTE *)(v33 + 45) = 2;
      v10 = (8 * (_BYTE)result) & 0x18;
      *(_QWORD *)(v33 + 56) = 4 * (((unsigned int)result >> 3) & 3 | ((unsigned int)result >> 8) & 4);
      result = (unsigned int)v10 | ((unsigned __int8)result >> 5);
      *(_WORD *)(v33 + 46) = result;
      goto LABEL_9;
    case 0xB:
      v10 = ((unsigned int)result >> 8) & 7;
      v23 = v10 | result & 0x18;
      if ( v23 == 30 )
        goto LABEL_52;
      goto LABEL_34;
    case 0xC:
      v10 = BYTE1(result) & 3;
      goto LABEL_61;
    case 0xD:
      v10 = (result & 0x80) != 0;
      goto LABEL_61;
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
      v17 = ((unsigned int)result >> 17) & 0x3FF | (16 * result) & 0xFFC00;
      if ( ((a5 - 14) & 0xFFFFFFFD) != 0 )
      {
        v19 = v17;
        if ( (v17 & 0x80000) != 0 )
          v19 = v17 | 0xFFFFFFFFFFF00000LL;
      }
      else
      {
        v18 = ((_DWORD)result << 20) & 0xF00000 | v17;
        v19 = v18;
        if ( (v18 & 0x800000) != 0 )
          v19 = v18 | 0xFFFFFFFFFF000000LL;
      }
      v20 = *(_QWORD *)(a2 + 8);
      if ( (unsigned int)(a5 - 16) < 2 )
        v19 &= ~1uLL;
      v10 = a2 + 40 * v7;
      *(_BYTE *)(v10 + 41) = 7;
      *(_BYTE *)(v10 + 45) = 9;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((v20 & 0xFFFFFFFFFFFFFFFCLL) + 2 * v19);
      *(_QWORD *)(v10 + 56) = result;
      goto LABEL_9;
    case 0x12:
      v10 = a2 + 40 * v7;
      v44 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL;
      *(_BYTE *)(v10 + 41) = 7;
      *(_BYTE *)(v10 + 45) = 9;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v44 + (result << 55 >> 54));
      *(_QWORD *)(v10 + 56) = result;
      goto LABEL_9;
    case 0x13:
      v42 = ((unsigned int)result >> 17) & 0x7F;
      if ( (result & 0x8000) != 0 )
        v42 = ((unsigned int)result >> 17) | 0xFFFFFFFFFFFFFF80LL;
      v43 = *(_QWORD *)(a2 + 8);
      result = a2 + 40 * v7;
      *(_BYTE *)(result + 41) = 7;
      *(_BYTE *)(result + 45) = 9;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((v43 & 0xFFFFFFFFFFFFFFFCLL) + 2 * v42);
      *(_QWORD *)(result + 56) = v10;
      goto LABEL_9;
    case 0x14:
      v10 = a2 + 40 * v7;
      v47 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL;
      *(_BYTE *)(v10 + 41) = 7;
      *(_BYTE *)(v10 + 45) = 9;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v47 + (char)(2 * result));
      *(_QWORD *)(v10 + 56) = result;
      goto LABEL_9;
    case 0x15:
      v10 = a2 + 40 * v7;
      v31 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL;
      *(_BYTE *)(v10 + 41) = 7;
      *(_BYTE *)(v10 + 45) = 9;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v31 + (result << 58 >> 57));
      *(_QWORD *)(v10 + 56) = result;
      goto LABEL_9;
    case 0x16:
      v10 = a2 + 40 * v7;
      v30 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL;
      *(_BYTE *)(v10 + 41) = 7;
      *(_BYTE *)(v10 + 45) = 9;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v30 + (result << 53 >> 51));
      *(_QWORD *)(v10 + 56) = result;
      goto LABEL_9;
    case 0x17:
      result &= 7u;
      goto LABEL_43;
    case 0x18:
    case 0x1C:
      result &= 0x1Fu;
      if ( a5 != 28 )
        goto LABEL_43;
      result *= 4;
      v55 = a2 + 40 * v7;
      *(_QWORD *)(v55 + 48) = result;
      *(_BYTE *)(v55 + 41) = 5;
      *(_BYTE *)(v55 + 45) = 2;
      return result;
    case 0x19:
      result = ((unsigned int)result >> 6) & 0x3F;
      goto LABEL_43;
    case 0x1A:
      result = ((unsigned int)result >> 5) & 0x3F;
      goto LABEL_43;
    case 0x1B:
      result &= 0x7Fu;
      goto LABEL_43;
    case 0x1D:
      result = (unsigned __int8)result;
      goto LABEL_43;
    case 0x1E:
      result = ((unsigned int)result >> 1) & 0x38 | result & 7;
      goto LABEL_43;
    case 0x1F:
      result = ((unsigned int)result >> 1) & 0x78 | result & 7;
      goto LABEL_43;
    case 0x20:
      result &= 0x3FFu;
      goto LABEL_43;
    case 0x21:
      v10 = a2 + 40 * v7;
      result = 4 * (result & 0x1F);
      *(_BYTE *)(v10 + 41) = 4;
      *(_QWORD *)(v10 + 56) = result;
      *(_WORD *)(v10 + 46) = 28;
      *(_BYTE *)(v10 + 45) = 2;
      goto LABEL_9;
    case 0x22:
      v10 = a2 + 40 * v7;
      *(_QWORD *)(v10 + 56) = 4LL * (unsigned __int8)result;
      result = 63;
      *(_BYTE *)(v10 + 41) = 4;
      *(_WORD *)(v10 + 46) = 63;
      *(_BYTE *)(v10 + 45) = 2;
      goto LABEL_9;
    case 0x23:
    case 0x24:
    case 0x25:
      v21 = result & 0x1F;
      if ( a5 == 36 )
      {
        v21 *= 2;
      }
      else if ( a5 == 37 )
      {
        v21 *= 4;
      }
      v10 = ((unsigned int)result >> 8) & 7;
      v22 = (result & 0x400) == 0;
      result = a2 + 40 * v7;
      if ( !v22 )
        v10 = (unsigned int)(v10 + 8);
      *(_BYTE *)(result + 41) = 4;
      *(_QWORD *)(result + 56) = v21;
      *(_WORD *)(result + 46) = v10;
      *(_BYTE *)(result + 45) = 2;
      goto LABEL_9;
    case 0x26:
      v37 = BYTE2(result);
      if ( (result & 0x8000) != 0 )
        v37 = WORD1(result) | 0xFFFFFFFFFFFFFF00LL;
      v38 = ((unsigned int)result >> 9) & 0x38;
      v39 = v38 | BYTE3(result) & 7;
      if ( v39 != 62 )
      {
        v10 = a2 + 40 * v7;
        *(_BYTE *)(v10 + 41) = 4;
        *(_QWORD *)(v10 + 56) = v37;
        *(_WORD *)(v10 + 46) = v39;
        goto LABEL_35;
      }
      v58 = a2 + 40 * v7;
      *(_BYTE *)(v58 + 41) = 2;
      *(_QWORD *)(v58 + 64) = v37;
      if ( !*(_BYTE *)(a1 + 5296) )
      {
        *(_DWORD *)(a1 + 5292) = (unsigned int)insn_get_next_word(a2, a2, v38, a4, v9) << 16;
        v71 = insn_get_next_word(a2, a2, v68, v69, v70);
        *(_BYTE *)(a1 + 5296) = 1;
        *(_DWORD *)(a1 + 5292) |= v71;
      }
      v59 = *(_WORD *)(a2 + 24);
      v60 = 2;
      if ( v59 == 139 )
        goto LABEL_160;
      if ( v59 > 0x8Bu )
      {
        if ( v59 != 140 )
        {
          v60 = 4;
          if ( (unsigned __int16)(v59 - 308) > 1u )
            goto LABEL_159;
LABEL_160:
          v10 = 5 * v7;
          *(_QWORD *)(a2 + 40 * v7 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(int *)(a1 + 5292) + v37 * v60);
LABEL_35:
          result = 5 * v7;
          *(_BYTE *)(a2 + 40 * v7 + 45) = 2;
          goto LABEL_36;
        }
      }
      else
      {
        if ( v59 == 3 )
        {
LABEL_181:
          v60 = 1;
          if ( (~*(_BYTE *)(a2 + 28) & 0x18) != 0 )
            goto LABEL_160;
          v72 = *(_DWORD *)(a2 + 28) & 6;
          if ( v72 != 4 )
          {
            if ( v72 )
              goto LABEL_160;
            goto LABEL_184;
          }
          v60 = 2;
          goto LABEL_160;
        }
        if ( v59 != 138 )
        {
          if ( v59 != 1 )
          {
LABEL_159:
            v60 = 1;
            goto LABEL_160;
          }
          goto LABEL_181;
        }
      }
LABEL_184:
      v60 = 4;
      goto LABEL_160;
    case 0x27:
      if ( (result & 0x800000) != 0 )
      {
LABEL_32:
        v10 = ((unsigned int)result >> 9) & 0x38;
        v23 = v10 | BYTE3(result) & 7;
      }
      else
      {
        v23 = result & 0x3F;
      }
      if ( v23 == 62 )
      {
LABEL_52:
        v28 = a2 + 40 * v7;
        v22 = *(_BYTE *)(v28 + 40) == 0;
        *(_BYTE *)(v28 + 41) = 5;
        if ( v22
          && (v10 = *(_QWORD *)(a1 + 16),
              v29 = *(unsigned __int16 *)(a2 + 24),
              a4 = (int *)*(unsigned int *)(v10 + 104),
              v29 >= (int)a4)
          && v29 < *(_DWORD *)(v10 + 108)
          && (*(_BYTE *)(*(_QWORD *)(v10 + 112) + 16LL * (v29 - (int)a4) + 8) & 4) != 0 )
        {
LABEL_56:
          *(_QWORD *)(a2 + 40 * v7 + 48) = 0;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 5296) )
          {
            v49 = *(_DWORD *)(a1 + 5292);
          }
          else
          {
            *(_DWORD *)(a1 + 5292) = (unsigned int)insn_get_next_word(a2, a2, v10, a4, v9) << 16;
            v53 = insn_get_next_word(a2, a2, v50, v51, v52);
            *(_BYTE *)(a1 + 5296) = 1;
            v49 = *(_DWORD *)(a1 + 5292) | v53;
            *(_DWORD *)(a1 + 5292) = v49;
          }
          v10 = 5 * v7;
          *(_QWORD *)(a2 + 40 * v7 + 48) = v49;
        }
      }
      else
      {
LABEL_34:
        v10 = a2 + 40 * v7;
        *(_WORD *)(v10 + 46) = v23;
        *(_BYTE *)(v10 + 41) = 1;
      }
      goto LABEL_35;
    case 0x29:
    case 0x2A:
      v24 = ((unsigned int)result >> 22) & 3;
      v10 = ((unsigned int)result >> 6) & 0x3F;
      if ( (_DWORD)v24 == 2 )
      {
        v54 = v10 | ((_WORD)result << 6) & 0xFC0;
        BYTE1(v54) ^= 8u;
        v25 = v54 - 2048;
        v10 = v54 - 2048;
        goto LABEL_48;
      }
      v25 = ((unsigned int)result >> 6) & 0x3F;
      if ( (_DWORD)v24 && ((_DWORD)v24 != 3 || (result & 0x20) != 0) )
      {
LABEL_48:
        v26 = a2 + 40 * v7;
        *(_QWORD *)(v26 + 48) = v10;
        *(_BYTE *)(v26 + 41) = 5;
        *(_BYTE *)(v26 + 45) = 2;
        result = a5 & 0x7FFFFFFF;
        if ( (_DWORD)result != 42 )
          goto LABEL_36;
        goto LABEL_49;
      }
      v57 = a2 + 40 * v7;
      if ( (_DWORD)v10 == 62 )
      {
        v22 = *(_BYTE *)(v57 + 40) == 0;
        *(_BYTE *)(v57 + 41) = 5;
        if ( v22
          && (v10 = *(_QWORD *)(a1 + 16),
              v67 = *(unsigned __int16 *)(a2 + 24),
              v24 = *(unsigned int *)(v10 + 104),
              v67 >= (int)v24)
          && v67 < *(_DWORD *)(v10 + 108)
          && (*(_BYTE *)(*(_QWORD *)(v10 + 112) + 16LL * (v67 - (int)v24) + 8) & 4) != 0 )
        {
          *(_QWORD *)(a2 + 40 * v7 + 48) = 0;
        }
        else
        {
          if ( !*(_BYTE *)(a1 + 5296) )
          {
            *(_DWORD *)(a1 + 5292) = (unsigned int)insn_get_next_word(a2, a2, v10, v24, v9) << 16;
            v80 = insn_get_next_word(a2, a2, v77, v78, v79);
            *(_BYTE *)(a1 + 5296) = 1;
            *(_DWORD *)(a1 + 5292) |= v80;
          }
          *(_QWORD *)(a2 + 40 * v7 + 48) = *(int *)(a1 + 5292);
        }
      }
      else
      {
        *(_WORD *)(v57 + 46) = v10;
        *(_BYTE *)(v57 + 41) = 1;
      }
      result = a2 + 40 * v7;
      v10 = a5 & 0x7FFFFFFF;
      *(_BYTE *)(result + 45) = 2;
      if ( (_DWORD)v10 == 42 && *(_BYTE *)(result + 41) == 5 )
      {
LABEL_49:
        v10 = a2 + 40 * v7;
        v27 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFCLL;
        *(_BYTE *)(v10 + 41) = 7;
        *(_BYTE *)(v10 + 45) = 9;
        result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v27 + (int)(2 * v25));
        *(_QWORD *)(v10 + 56) = result;
        goto LABEL_9;
      }
LABEL_36:
      if ( a5 < 0 )
      {
        result = *(unsigned __int8 *)(a2 + 40 * v7 + 41);
        if ( (_BYTE)result == 1 )
        {
LABEL_62:
          result = a2 + 40 * v7;
          *(_BYTE *)(result + 41) = 4;
          *(_QWORD *)(result + 56) = 0;
        }
        else if ( (_BYTE)result == 5 )
        {
LABEL_39:
          result = *(unsigned __int16 *)(a2 + 24);
          v10 = (unsigned int)(result - 2);
          if ( (((_WORD)result - 2) & 0xFFFD) != 0 && (_WORD)result != 141 )
          {
            v10 = a2 + 40 * v7;
            *(_BYTE *)(v10 + 41) = (unsigned __int16)(result - 17) < 2u ? 7 : 2;
            result = *(_QWORD *)(v10 + 48) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
            *(_QWORD *)(v10 + 64) = 0;
            *(_QWORD *)(v10 + 56) = result;
          }
        }
      }
LABEL_9:
      if ( (a5 & 0x40000000) != 0 )
      {
        v12 = *v11;
        *v11 = v12 + 1;
        v10 = a2 + 40 * v7;
        if ( *(_BYTE *)(v10 + 41) != 1
          || (v10 = *(unsigned __int16 *)(v10 + 46), (unsigned __int16)v10 > 0x3Au)
          || (v10 & 1) != 0 )
        {
          result = 5 * v12;
          *(_BYTE *)(a2 + 8 * result + 41) = 0;
        }
        else
        {
          v10 = (unsigned int)(v10 + 1);
          result = a2 + 40 * v12;
          *(_BYTE *)(result + 41) = 1;
          *(_WORD *)(result + 46) = v10;
          *(_BYTE *)(result + 72) = 1;
        }
      }
      if ( (a5 & 0x20000000) != 0 )
      {
        v13 = *(_WORD *)(a2 + 24);
        if ( v13 == 308 )
        {
          v14 = 70;
        }
        else if ( v13 > 0x134u )
        {
          v14 = 71;
          if ( v13 != 309 )
            return sub_9000(
                     (__int64)"%a: unknown implicit base for indexed access\n",
                     *(_QWORD *)(a2 + 16),
                     v10,
                     v14,
                     v9);
        }
        else
        {
          if ( v13 <= 0x8Bu )
          {
            v14 = 68;
            if ( v13 > 0x89u )
              goto LABEL_17;
            return sub_9000(
                     (__int64)"%a: unknown implicit base for indexed access\n",
                     *(_QWORD *)(a2 + 16),
                     v10,
                     v14,
                     v9);
          }
          v14 = 69;
          if ( v13 != 140 )
            return sub_9000(
                     (__int64)"%a: unknown implicit base for indexed access\n",
                     *(_QWORD *)(a2 + 16),
                     v10,
                     v14,
                     v9);
        }
LABEL_17:
        result = a2 + 40 * v7;
        v15 = *(unsigned __int8 *)(result + 41);
        if ( (_BYTE)v15 == 1 )
        {
          v48 = *(_WORD *)(result + 46);
          *(_BYTE *)(result + 41) = 3;
          *(_WORD *)(result + 46) = v14;
          *(_BYTE *)(result + 72) = v48;
        }
        else if ( (_BYTE)v15 == 5 )
        {
          *(_BYTE *)(result + 41) = 4;
          v16 = *(_QWORD *)(result + 48) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          *(_WORD *)(result + 46) = v14;
          *(_QWORD *)(result + 56) = v16;
        }
        else
        {
          return sub_9000((__int64)"%a: unknown operand type for indexed access\n", *(_QWORD *)(a2 + 16), v15, v14, v9);
        }
      }
      return result;
    case 0x2B:
      v34 = BYTE3(result) & 7 | ((unsigned int)result >> 9) & 0x38;
      v35 = ((unsigned int)result >> 6) & 0x3F;
      if ( (_DWORD)v34 == 62 || (v36 = 0, (_DWORD)v35 == 62) )
      {
        if ( *(_BYTE *)(a1 + 5296) )
        {
          v36 = *(_DWORD *)(a1 + 5292);
        }
        else
        {
          v83 = v35;
          v82 = v34;
          *(_DWORD *)(a1 + 5292) = (unsigned int)insn_get_next_word(a2, a2, v34, v35, v9) << 16;
          v65 = insn_get_next_word(a2, a2, v62, v63, v64);
          LODWORD(v35) = v83;
          v9 = a2 + 8 * (5 * v7 + 5);
          *(_BYTE *)(a1 + 5296) = 1;
          v36 = *(_DWORD *)(a1 + 5292) | v65;
          LODWORD(v34) = v82;
          *(_DWORD *)(a1 + 5292) = v36;
        }
      }
      result = sub_90D0(a1, a2, v34, v35, v9, 0, v36, 0);
      goto LABEL_36;
    case 0x2C:
      v40 = (unsigned __int8)result >> 5;
      v41 = ((unsigned int)result >> 8) & 7;
      if ( (result & 0x80u) != 0LL )
        v40 += 8;
      if ( (result & 0x400) != 0 )
        v41 += 8;
      result = sub_90D0(a1, a2, v41, v40, v9, 0, 0, 0);
      v9 = v81;
      goto LABEL_36;
    case 0x2D:
      v10 = 28;
      goto LABEL_61;
    case 0x2E:
      v10 = 31;
      goto LABEL_61;
    case 0x2F:
      result = 0;
      goto LABEL_43;
    case 0x30:
      v10 = 0;
      goto LABEL_61;
    case 0x31:
      v10 = 1;
      goto LABEL_61;
    case 0x32:
      v10 = 26;
LABEL_61:
      result = a2 + 40 * v7;
      *(_WORD *)(result + 46) = v10;
      *(_BYTE *)(result + 41) = 1;
      *(_BYTE *)(result + 45) = 2;
      if ( a5 < 0 )
        goto LABEL_62;
      goto LABEL_9;
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
      result = result << 55 >> 55;
      if ( a5 == 52 )
      {
        result *= 2;
      }
      else if ( a5 != 51 )
      {
        result *= 4;
        if ( a5 == 54 )
        {
          v61 = a2 + 40 * v7;
          *(_QWORD *)(v61 + 48) = result;
          *(_BYTE *)(v61 + 41) = 5;
          *(_BYTE *)(v61 + 45) = 2;
          return result;
        }
      }
      v10 = a2 + 40 * v7;
      *(_BYTE *)(v10 + 41) = 4;
      *(_QWORD *)(v10 + 56) = result;
      *(_WORD *)(v10 + 46) = 26;
      *(_BYTE *)(v10 + 45) = 2;
      goto LABEL_9;
    case 0x37:
      v32 = a2 + 40 * v7;
      *(_BYTE *)(v32 + 41) = 4;
      *(_BYTE *)(v32 + 45) = 2;
      v10 = (__int64)((unsigned __int64)((unsigned int)result >> 5) << 58) >> 53;
      *(_QWORD *)(v32 + 56) = v10 | (4 * (_BYTE)result) & 0x1C;
      result = 26;
      *(_WORD *)(v32 + 46) = 26;
      goto LABEL_9;
    case 0x38:
      result = BYTE1(result) & 7;
      if ( (_DWORD)result == 7 )
        result = -1;
      goto LABEL_43;
    case 0x39:
      v46 = a2 + 40 * v7;
      *(_BYTE *)(v46 + 41) = 8;
      v10 = ((unsigned int)result >> 4) & 0x70;
      *(_BYTE *)(v46 + 45) = 2;
      result = (unsigned int)v10 | ((unsigned int)result >> 1) & 0xF;
      *(_QWORD *)(v46 + 64) = (unsigned int)result;
      goto LABEL_9;
    default:
      return sub_9000(
               (__int64)"%a: cannot decode operand %d (opkind=%u)\n",
               a6,
               *(_QWORD *)(a2 + 16),
               *(unsigned __int8 *)(a2 + 40 * v7 + 40));
  }
}

