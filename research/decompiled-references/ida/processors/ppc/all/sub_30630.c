__int64 __fastcall sub_30630(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 sreg; // rdx
  __int64 v5; // rax
  unsigned int next_dword; // r13d
  char *v7; // rdx
  int i; // eax
  char *v9; // r8
  unsigned __int16 v10; // ax
  __int16 v12; // ax
  unsigned int v13; // r13d
  int v14; // eax
  int v15; // eax
  int v16; // eax

  sreg = get_sreg(*(_QWORD *)(a2 + 16), 32);
  v5 = *(_QWORD *)(a2 + 8);
  if ( sreg == 1 )
  {
    if ( (v5 & 1) != 0 )
      return 0;
    next_dword = insn_get_next_dword(a2, 32);
    if ( (unsigned int)sub_2DC00(a1, a2, a3, next_dword, (__int64)&unk_69E60, 0x96u) )
      return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    if ( (v5 & 3) != 0 )
      return 0;
    next_dword = insn_get_next_dword(a2, 32);
  }
  if ( (unsigned __int8)getinf_flag(3, 4) && (unsigned int)sub_293C0(a1, a2, a3, next_dword) )
    return *(unsigned __int16 *)(a2 + 26);
  v7 = (char *)&unk_77AC0;
  for ( i = next_dword >> 26; ; i = 64 )
  {
    while ( 1 )
    {
      v9 = &v7[10 * i];
      v10 = *(_WORD *)v9;
      *(_WORD *)(a2 + 24) = *(_WORD *)v9;
      if ( v10 <= 0xFFF0u )
        break;
      switch ( v10 )
      {
        case 0xFFF1:
          if ( (next_dword & 2) != 0 )
          {
            v12 = 169;
          }
          else
          {
            v12 = 2277;
            if ( (next_dword & 1) == 0 )
              return 0;
          }
          *(_WORD *)(a2 + 24) = v12;
          if ( (next_dword & 0x3FFF01C) != 0 )
            return 0;
          *(_BYTE *)(a2 + 41) = 5;
          v13 = (next_dword >> 5) & 0x7F;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 48) = v13;
          if ( !v13 )
            *(_BYTE *)(a2 + 44) &= ~8u;
          return *(unsigned __int16 *)(a2 + 26);
        case 0xFFF2:
          return sub_302E0(a1, a2, a3, next_dword, (__int64)v9);
        case 0xFFF3:
          if ( (*(_DWORD *)(a1 + 460) & 0xF) == 2
            && ((unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6ACA0, 127, 4, 19)
             || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AC70, 115, 4, 2)
             || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AC60, 99, 4, 1)
             || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AC00, 61, 4, 8)
             || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6ABC0, 57, 4, 5)) )
          {
            return *(unsigned __int16 *)(a2 + 26);
          }
          v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_77AA0, 15, 0, 2);
          goto LABEL_25;
        case 0xFFF4:
          if ( (*(_DWORD *)(a1 + 460) & 0xF) != 2 )
            return 0;
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6ADA0, 61, 4, 24) )
            return *(unsigned __int16 *)(a2 + 26);
          v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AD88, 33, 4, 1);
          goto LABEL_25;
        case 0xFFF5:
          if ( (next_dword & 0x7FE) == 0x2D0
            && (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_73700, 31, 16, 9) )
          {
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (*(_DWORD *)(a1 + 460) & 0xF) != 3 )
          {
            v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_73780, 1023, 1, 847);
            goto LABEL_25;
          }
          v7 = (char *)&unk_77AC0;
          i = 66;
          continue;
        case 0xFFF6:
          v7 = (char *)&unk_77AC0;
          i = 67;
          if ( (*(_DWORD *)(a1 + 460) & 0xF) != 3 )
          {
            v7 = (char *)&unk_736A0;
            i = next_dword & 7;
          }
          continue;
        case 0xFFF7:
          v7 = (char *)&unk_77AC0;
          i = 65;
          if ( (*(_DWORD *)(a1 + 460) & 0xF) != 3 )
          {
            v7 = (char *)&unk_763C0;
            i = next_dword & 3;
          }
          continue;
        case 0xFFF8:
          v15 = *(_DWORD *)(a1 + 460) & 0xF;
          if ( v15 != 1 )
            goto LABEL_38;
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_72BC0, 2047, 0, 105) )
            return sub_2DEE0(a1, a2);
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_704C0, 2047, 0, 830) )
            return sub_2DFB0(a1, a2);
          v15 = *(_DWORD *)(a1 + 460) & 0xF;
LABEL_38:
          if ( v15 == 4 )
          {
            if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_72BC0, 2047, 0, 105) )
              return sub_2DEE0(a1, a2);
            if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6E4E0, 2047, 0, 649)
              || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_70360, 0xFFFF, 0, 29) )
            {
              return sub_2DE90(a1, a2);
            }
            v15 = *(_DWORD *)(a1 + 460) & 0xF;
          }
          if ( v15 != 3 )
            goto LABEL_40;
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B500, 31, 1, 17)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B5E0, 63, 1, 4)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B620, 1023, 1, 13) )
          {
            return *(unsigned __int16 *)(a2 + 26);
          }
          v15 = *(_DWORD *)(a1 + 460) & 0xF;
LABEL_40:
          if ( !v15 )
          {
            if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B6C0, 2047, 0, 982) )
              return *(unsigned __int16 *)(a2 + 26);
            v15 = *(_DWORD *)(a1 + 460) & 0xF;
          }
          if ( v15 != 2 )
            goto LABEL_46;
          if ( (next_dword & 0x10) != 0 )
          {
            if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AEC0, 1, 4, 1) )
              return *(unsigned __int16 *)(a2 + 26);
            goto LABEL_44;
          }
          if ( (next_dword & 0x21) != 1 )
          {
LABEL_44:
            v16 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B6C0, 2047, 0, 982);
            goto LABEL_45;
          }
          v16 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AEE0, 127, 4, 16);
LABEL_45:
          if ( v16 )
            return *(unsigned __int16 *)(a2 + 26);
LABEL_46:
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B4E0, 31, 1, 1)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B440, 63, 0, 13)
            || (next_dword & 0x3F) == 0x16
            && (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B410, 3, 9, 2)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B3E0, 1023, 0, 3)
            || (next_dword & 0x3FF) == 0xD
            && (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B3A0, 31, 16, 4)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6B0C0, 2047, 0, 60) )
          {
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (next_dword & 0x7FF) != 0x642 )
            return 0;
          v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_6AFA0, 31, 16, 23);
          goto LABEL_25;
        case 0xFFF9:
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_730C0, 31, 1, 6) )
            return *(unsigned __int16 *)(a2 + 26);
          v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_73120, 1023, 1, 112);
          goto LABEL_25;
        case 0xFFFA:
          v7 = (char *)&unk_73660;
          i = next_dword & 3;
          continue;
        case 0xFFFB:
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_75F40, 255, 3, 29) )
            return *(unsigned __int16 *)(a2 + 26);
          if ( (next_dword & 0x20) == 0 )
          {
            v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_76140, 1023, 1, 46);
LABEL_25:
            if ( v14 )
              return *(unsigned __int16 *)(a2 + 26);
            return 0;
          }
          v7 = (char *)&unk_760A0;
          i = ((next_dword >> 1) & 0x1F) - 16;
          break;
        case 0xFFFC:
          v7 = (char *)&unk_76380;
          i = next_dword & 3;
          continue;
        case 0xFFFD:
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_766E0, 31, 1, 1)
            || (*(_BYTE *)(a1 + 460) & 0x20) == 0
            && (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_77860, 1023, 1, 18)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_76700, 511, 1, 26)
            || (*(_BYTE *)(a1 + 460) & 0x20) != 0
            && (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_77840, 1023, 1, 2)
            || (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_76880, 1023, 1, 336)
            || (next_dword & 0x7FE) == 0x162
            && (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_76840, 31, 16, 3) )
          {
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (*(_DWORD *)(a1 + 460) & 0xD) == 0 )
          {
            v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_764C0, 1023, 1, 45);
            goto LABEL_25;
          }
          if ( (*(_DWORD *)(a1 + 460) & 0xF) != 1 )
            return 0;
          v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_764A0, 1023, 1, 2);
          goto LABEL_25;
        case 0xFFFE:
          v7 = (char *)&unk_76400;
          i = (next_dword >> 1) & 0xF;
          continue;
        case 0xFFFF:
          if ( (unsigned int)sub_30560(a1, a2, a3, next_dword, (__int64)&unk_77A90, 31, 1, 1) )
            return *(unsigned __int16 *)(a2 + 26);
          v14 = sub_30560(a1, a2, a3, next_dword, (__int64)&unk_77940, 1023, 1, 28);
          goto LABEL_25;
      }
    }
    if ( !v10 )
      return 0;
    if ( v10 != 832 || (*(_DWORD *)(a1 + 460) & 0xF) != 3 )
      break;
    v7 = (char *)&unk_77AC0;
  }
  return sub_302E0(a1, a2, a3, next_dword, (__int64)v9);
}

