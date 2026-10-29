__int64 __fastcall sub_67F0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  unsigned __int8 v3; // bp
  char v4; // al
  char v5; // al
  __int64 result; // rax
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  __int16 v12; // dx
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // al
  unsigned __int8 v15; // dl
  char v16; // dl
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  __int16 v19; // ax
  unsigned __int8 v20; // al
  __int16 v21; // dx
  bool v22; // zf
  __int16 v23; // dx
  __int16 v24; // ax
  unsigned int next_dword; // eax
  unsigned __int8 v26; // al
  char v27; // dl
  char v28; // dl
  char v29; // al
  unsigned __int8 v30; // r13
  __int16 v31; // ax
  unsigned __int8 v32; // al
  char v33; // dl
  __int16 v34; // cx

  next_byte = insn_get_next_byte();
  v3 = next_byte;
  switch ( next_byte )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
      *(_WORD *)(a2 + 24) = aLmn0A[next_byte & 7];
      v7 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 46) = v7 >> 4;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 7;
      *(_WORD *)(a2 + 126) = (unsigned __int8)((v3 >> 3) + 84);
      *(_WORD *)(a2 + 86) = v7 & 0xF;
      return *(unsigned __int16 *)(a2 + 26);
    case 0x17u:
      v11 = insn_get_next_byte();
      v16 = (v11 >> 4) & 7;
      switch ( v16 )
      {
        case 1:
          *(_WORD *)(a2 + 24) = 86;
          break;
        case 3:
          *(_WORD *)(a2 + 24) = 84;
          break;
        case 0:
          *(_WORD *)(a2 + 24) = 85;
          break;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = v11 & 0xF;
      goto LABEL_23;
    case 0x18u:
    case 0x19u:
      v11 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      v12 = 99 - (((v11 & 0x60) == 0) - 1);
      if ( v3 == 24 )
        v12 = 101 - (((v11 & 0x60) == 0) - 1);
      *(_WORD *)(a2 + 24) = v12;
      *(_QWORD *)(a2 + 48) = ((v11 & 0x10) != 0) + 1LL;
LABEL_23:
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 7;
      *(_WORD *)(a2 + 86) = (unsigned __int8)((v11 >> 7) + 84);
      return *(unsigned __int16 *)(a2 + 26);
    case 0x27u:
      *(_WORD *)(a2 + 24) = 69;
      v20 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      v21 = v20 & 0xF;
      *(_BYTE *)(a2 + 81) = 3;
      *(_WORD *)(a2 + 86) = v20 >> 4;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 46) = v21;
      *(_BYTE *)(a2 + 85) = 1;
      *(_QWORD *)(a2 + 88) = 0;
      return result;
    case 0x2Fu:
      *(_WORD *)(a2 + 24) = 70;
      v10 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 3;
      *(_BYTE *)(a2 + 45) = 1;
      *(_QWORD *)(a2 + 48) = 0;
      *(_WORD *)(a2 + 46) = v10 >> 4;
      goto LABEL_18;
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
      *(_WORD *)(a2 + 24) = aHij[next_byte & 3];
      v8 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 86) = v8 & 0xF;
      v9 = v8 >> 4;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 126) = (unsigned __int8)(((v3 & 8) != 0) + 84);
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 46) = v9;
      *(_BYTE *)(a2 + 85) = 1;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 7;
      return result;
    case 0x60u:
    case 0x61u:
    case 0x62u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
      *(_WORD *)(a2 + 24) = *((_WORD *)&qword_F6E0[-24] + next_byte);
      v10 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = v10 >> 4;
      goto LABEL_18;
    case 0x68u:
      *(_WORD *)(a2 + 24) = 87;
      v14 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      v15 = v14;
      *(_BYTE *)(a2 + 45) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 86) = (v14 & 0xF) + 16;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 46) = v15 >> 4;
      *(_BYTE *)(a2 + 85) = 1;
      return result;
    case 0x6Au:
      *(_WORD *)(a2 + 24) = 83;
      v10 = insn_get_next_byte();
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 1;
      *(_WORD *)(a2 + 46) = (unsigned __int8)((v10 >> 4) + 16);
      goto LABEL_18;
    case 0x72u:
      v13 = insn_get_next_byte();
      if ( v13 > 0x4Fu )
        return 0;
      v24 = a84365[v13 >> 4];
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 24) = v24;
      next_dword = insn_get_next_dword();
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      *(_QWORD *)(a2 + 48) = next_dword;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 86) = v13 & 0xF;
      return result;
    case 0x76u:
      v17 = insn_get_next_byte();
      v18 = v17 >> 4;
      if ( v17 <= 0xDFu )
      {
        if ( v18 <= 0xBu )
          return 0;
        v22 = v18 == 12;
        v23 = 111;
        if ( v22 )
          v23 = 118;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 1;
        *(_WORD *)(a2 + 24) = v23;
        *(_WORD *)(a2 + 46) = v17 & 0xF;
        insn_get_next_byte();
        return *(unsigned __int16 *)(a2 + 26);
      }
      else
      {
        v19 = 118;
        if ( v18 != 14 )
          v19 = 111;
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 24) = v19;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte();
        return *(unsigned __int16 *)(a2 + 26);
      }
    default:
      if ( (unsigned __int8)sub_6230(a1, a2, next_byte) )
        return *(unsigned __int16 *)(a2 + 26);
      v4 = v3 >> 1;
      if ( v3 >> 1 == 54 )
      {
        *(_WORD *)(a2 + 24) = 109;
LABEL_46:
        v10 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)(16 * v3) & 0x10u | (v10 >> 4);
LABEL_18:
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 1;
        *(_WORD *)(a2 + 86) = v10 & 0xF;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v4 == 55 )
      {
        *(_WORD *)(a2 + 24) = 108;
        goto LABEL_46;
      }
      if ( v4 == 15 )
      {
        v26 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 24) = aOpqr[(v26 >> 4) & 3];
        v27 = (2 * v3) & 2 | ((v26 & 0x40) != 0);
        if ( v27 )
        {
          if ( v27 == 2 )
          {
            *(_QWORD *)(a2 + 48) = 0;
          }
          else if ( v27 == 3 )
          {
            *(_QWORD *)(a2 + 48) = 1;
          }
        }
        else
        {
          *(_QWORD *)(a2 + 48) = 2;
        }
        *(_BYTE *)(a2 + 81) = 1;
        v28 = v26 >> 7;
        *(_WORD *)(a2 + 126) = v26 & 0xF;
        result = *(unsigned __int16 *)(a2 + 26);
        *(_BYTE *)(a2 + 85) = 7;
        *(_BYTE *)(a2 + 121) = 1;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v28 + 84);
        *(_BYTE *)(a2 + 125) = 1;
        return result;
      }
      if ( (v3 & 0xF3) != 0x70 )
      {
        if ( (v3 & 0xF3) == 0x73 )
        {
          *(_WORD *)(a2 + 24) = 87;
          v29 = insn_get_next_byte();
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 1;
          *(_WORD *)(a2 + 86) = (v29 & 0xF) + 16;
          sub_57D0(a1, a2, v3 >> 2);
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (unsigned int)(v3 >> 4) - 2 <= 1 )
        {
          *(_WORD *)(a2 + 24) = 3 * (v3 >> 4 != 2) + 68;
          *(_BYTE *)(a2 + 33) = (v3 & 3) + 1;
          v32 = insn_get_next_byte();
          v33 = (v3 >> 2) & 3;
          v34 = v32 & 0xF;
          if ( (unsigned __int8)(v33 - 2) <= 1u )
          {
            *(_BYTE *)(a2 + 41) = 3;
            *(_BYTE *)(a2 + 45) = 1;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 46) = v32 >> 4;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 72) = (v33 != 2) + 43;
            *(_BYTE *)(a2 + 85) = 1;
            *(_WORD *)(a2 + 86) = v34;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 1;
            *(_WORD *)(a2 + 46) = v34;
            *(_WORD *)(a2 + 86) = v32 >> 4;
            result = *(unsigned __int16 *)(a2 + 26);
            *(_BYTE *)(a2 + 81) = 3;
            *(_BYTE *)(a2 + 85) = 1;
            *(_BYTE *)(a2 + 112) = 43 - ((v33 == 0) - 1);
          }
          return result;
        }
        v5 = v3 >> 5;
        if ( v3 >> 5 == 6 )
        {
          *(_WORD *)(a2 + 24) = 137;
          return sub_5B30(a1, a2, v3);
        }
        if ( v5 != 7 )
        {
          if ( v5 == 4 )
          {
            *(_WORD *)(a2 + 24) = 138;
            return sub_5B30(a1, a2, v3);
          }
          if ( v5 == 5 )
          {
            *(_WORD *)(a2 + 24) = 136;
            return sub_5B30(a1, a2, v3);
          }
          return 0;
        }
        v10 = insn_get_next_byte();
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = v3 & 0x1F;
        *(_WORD *)(a2 + 24) = *((_WORD *)qword_F800 + (v10 >> 4));
        goto LABEL_18;
      }
      v30 = insn_get_next_byte();
      v31 = *((_WORD *)qword_F6A0 + (v30 >> 4));
      *(_WORD *)(a2 + 24) = v31;
      if ( !v31 )
        return 0;
      sub_57D0(a1, a2, v3 >> 2);
      *(_BYTE *)(a2 + 81) = 1;
      result = *(unsigned __int16 *)(a2 + 26);
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = v30 & 0xF;
      return result;
  }
}

