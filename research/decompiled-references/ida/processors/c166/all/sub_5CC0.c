__int64 __fastcall sub_5CC0(__int64 a1, char *a2, int a3, int a4, double a5)
{
  char *v5; // r15
  int next_byte; // ebp
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  int v15; // ecx
  unsigned int v16; // edx
  __int16 v17; // cx
  char v18; // al
  __int64 *v19; // rbx
  int v20; // edx
  char v22; // al
  __int16 v23; // cx
  char v24; // al
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  const char *v27; // rdx
  int v28; // eax
  __int16 v29; // r12
  int v30; // eax
  __int16 v31; // r12
  int v32; // edx
  __int16 v33; // r12
  int v34; // edx
  char v35; // al
  int v36; // edx
  int v37; // eax

  v5 = a2;
  next_byte = (unsigned __int8)insn_get_next_byte();
  if ( a3 == 179 )
  {
    v19 = qword_EB90;
  }
  else
  {
    if ( a3 != 195 )
    {
      v9 = 0;
      v10 = &byte_EBA1[-1];
      while ( next_byte != (unsigned __int8)byte_EBA1[8 * v9] || a3 != (unsigned __int8)v10[8 * v9] )
      {
        if ( ++v9 == 177 )
          return 0;
      }
      v11 = (int)v9;
      *((_WORD *)v5 + 12) = *(_WORD *)&v10[8 * (int)v9 + 2];
      *((_DWORD *)v5 + 7) = (unsigned __int8)v10[8 * (int)v9 + 4];
      v12 = insn_get_next_byte();
      v13 = *(_DWORD *)(a1 + 272);
      a2 = byte_EBA0;
      v14 = (unsigned __int8)byte_EBA0[8 * v11 + 5];
      if ( v13 != 1 )
      {
LABEL_8:
        if ( v13 != 2 && v13 != 4 )
          goto LABEL_10;
        goto LABEL_21;
      }
      if ( byte_EBA0[8 * v11 + 6] )
      {
        v5[32] = ((unsigned __int8)v12 >> 3) + 1;
        if ( (unsigned __int8)v12 >> 3 )
        {
          *((_DWORD *)v5 + 7) |= 0x40u;
          v13 = *(_DWORD *)(a1 + 272);
          goto LABEL_8;
        }
        v13 = *(_DWORD *)(a1 + 272);
        if ( v13 == 2 )
        {
          if ( next_byte != 90 || a3 != 147 )
            goto LABEL_32;
          goto LABEL_13;
        }
        if ( v13 == 4 )
        {
          if ( (unsigned __int8)(v14 - 1) <= 1u )
            goto LABEL_10;
          goto LABEL_26;
        }
      }
      else if ( (_BYTE)v12 )
      {
        return 0;
      }
      if ( next_byte != 90 || a3 != 147 )
        goto LABEL_31;
LABEL_13:
      v15 = a4 >> 4;
      v16 = (v13 - 2) & 0xFFFFFFFD;
      if ( a4 >> 4 != 1 )
      {
        if ( v16 || (a4 & 0xF) != 0 )
        {
LABEL_16:
          v17 = v15 & 0xF;
          v5[41] = 12;
          *((_WORD *)v5 + 23) = v17;
          v5[45] = 1;
          if ( (v17 & 7) != 0 )
          {
            v18 = v12 & 7;
            v5[81] = 13;
            v5[85] = 1;
            *((_WORD *)v5 + 43) = a4 & 0xF;
            LOBYTE(v16) = v18 != 0;
            v5[112] = v18;
            return v16;
          }
          return 0;
        }
LABEL_54:
        v23 = v15 & 0xF;
        v5[41] = 12;
        *((_WORD *)v5 + 23) = v23;
        v5[45] = 1;
        LOBYTE(v16) = (v23 & 7) != 0;
        return v16;
      }
      if ( v16 )
      {
LABEL_55:
        LOWORD(a4) = a4 & 0xF;
      }
      else
      {
        a4 &= 0xFu;
        if ( !a4 )
          goto LABEL_54;
      }
LABEL_56:
      v24 = v12 & 7;
      v5[41] = 13;
      v5[45] = 1;
      *((_WORD *)v5 + 23) = a4;
      LOBYTE(v16) = v24 != 0;
      v5[72] = v24;
      return v16;
    }
    v19 = &qword_EB88;
  }
  *((_WORD *)a2 + 12) = 101;
  *((_DWORD *)a2 + 7) = *((unsigned __int8 *)v19 + 4);
  v12 = insn_get_next_byte();
  v20 = *(_DWORD *)(a1 + 272);
  v14 = *((unsigned __int8 *)v19 + 5);
  if ( v20 == 1 )
  {
    if ( (_BYTE)v12 )
      return 0;
  }
  else if ( v20 == 2 || v20 == 4 )
  {
LABEL_21:
    if ( (unsigned __int8)(v14 - 1) > 1u && (v12 & 0x18) != 0 )
      return 0;
LABEL_26:
    LODWORD(a2) = v12;
    LOBYTE(a2) = (unsigned __int8)v12 >> 5;
    if ( (unsigned int)((unsigned __int8)v12 >> 5) - 2 <= 1 )
    {
      *((_DWORD *)v5 + 7) |= 0x40u;
      v5[32] = (char)a2;
    }
    else if ( (_BYTE)a2 )
    {
      return 0;
    }
LABEL_10:
    if ( a3 == 147 && next_byte == 90 )
    {
      v13 = *(_DWORD *)(a1 + 272);
      goto LABEL_13;
    }
  }
  if ( a3 == 179 )
  {
    v22 = v12 & 7;
    v5[41] = 13;
    v5[45] = 1;
    *((_WORD *)v5 + 23) = a4 & 0xF;
    v5[72] = v22;
    if ( v22 )
    {
      v5[81] = 1;
      v5[85] = 1;
      if ( (unsigned int)next_byte <= 0x37 )
      {
        switch ( next_byte >> 3 )
        {
          case 0:
LABEL_63:
            *((_WORD *)v5 + 43) = 33;
            return 1;
          case 1:
LABEL_58:
            *((_WORD *)v5 + 43) = 34;
            return 1;
          case 2:
LABEL_62:
            *((_WORD *)v5 + 43) = 35;
            return 1;
          case 3:
            return 0;
          case 4:
LABEL_61:
            *((_WORD *)v5 + 43) = 36;
            return 1;
          case 5:
LABEL_60:
            *((_WORD *)v5 + 43) = 37;
            return 1;
          case 6:
LABEL_59:
            *((_WORD *)v5 + 43) = 38;
            return 1;
        }
      }
    }
    return 0;
  }
LABEL_31:
  if ( a3 == 195 )
  {
    v5[41] = 1;
    v5[45] = 1;
    *((_WORD *)v5 + 23) = a4 & 0xF;
    if ( *(_DWORD *)(a1 + 272) != 1 || !(_BYTE)v12 )
    {
      v5[81] = 1;
      v5[85] = 1;
      if ( (unsigned int)next_byte <= 0x37 )
      {
        switch ( next_byte >> 3 )
        {
          case 0:
            goto LABEL_63;
          case 1:
            goto LABEL_58;
          case 2:
            goto LABEL_62;
          case 3:
            return 0;
          case 4:
            goto LABEL_61;
          case 5:
            goto LABEL_60;
          case 6:
            goto LABEL_59;
        }
      }
    }
    return 0;
  }
LABEL_32:
  LOBYTE(a2) = a4 == 0;
  v16 = (unsigned int)a2;
  if ( a3 != 163 || a4 )
  {
    switch ( v14 )
    {
      case 0LL:
        goto LABEL_70;
      case 1LL:
        goto LABEL_73;
      case 2LL:
        v5[81] = 1;
        v5[85] = 1;
        *((_WORD *)v5 + 43) = 45;
LABEL_73:
        if ( a4 )
          return 0;
LABEL_74:
        v25 = v12 & 0x1F;
        if ( *(_DWORD *)(a1 + 272) == 1 )
          v25 = (unsigned __int8)v12 >> 3;
        v5[41] = 5;
        v5[45] = 0;
        *((_QWORD *)v5 + 6) = v25;
        return 1;
      case 3LL:
LABEL_99:
        v31 = a4 & 0xF;
        goto LABEL_88;
      case 4LL:
LABEL_93:
        v37 = a4;
        v29 = a4 & 0xF;
        v30 = v37 >> 4;
        goto LABEL_84;
      case 5LL:
LABEL_83:
        v5[121] = 1;
        v28 = a4;
        v29 = a4 & 0xF;
        v5[125] = 1;
        v30 = v28 >> 4;
        *((_WORD *)v5 + 63) = 45;
LABEL_84:
        v5[41] = 1;
        v5[45] = 1;
        *((_WORD *)v5 + 23) = v30 & 0xF;
        v5[81] = 1;
        v5[85] = 1;
        *((_WORD *)v5 + 43) = v29;
        return 1;
      case 6LL:
LABEL_92:
        v36 = a4;
        v33 = a4 & 0xF;
        v34 = v36 >> 4;
        goto LABEL_90;
      case 7LL:
LABEL_89:
        v5[121] = 1;
        v32 = a4;
        v33 = a4 & 0xF;
        v5[125] = 1;
        v34 = v32 >> 4;
        *((_WORD *)v5 + 63) = 45;
LABEL_90:
        v35 = v12 & 7;
        v16 = v34 & 0xF;
        v5[41] = 1;
        *((_WORD *)v5 + 23) = v16;
        v5[45] = 1;
        LOBYTE(v16) = v35 != 0;
        v5[81] = 13;
        v5[85] = 1;
        *((_WORD *)v5 + 43) = v33;
        v5[112] = v35;
        return v16;
      case 8LL:
LABEL_87:
        v5[81] = 1;
        v31 = a4 & 0xF;
        v5[85] = 1;
        *((_WORD *)v5 + 43) = 45;
LABEL_88:
        v5[41] = 1;
        v5[45] = 1;
        *((_WORD *)v5 + 23) = v31;
        return 1;
      case 9LL:
        v15 = a4 >> 4;
        goto LABEL_16;
      case 10LL:
LABEL_86:
        v5[121] = 1;
        v5[125] = 1;
        v15 = a4 >> 4;
        *((_WORD *)v5 + 63) = 45;
        goto LABEL_16;
      case 11LL:
        goto LABEL_55;
      case 12LL:
LABEL_85:
        v16 = 45;
        v5[81] = 1;
        LOWORD(a4) = a4 & 0xF;
        v5[85] = 1;
        *((_WORD *)v5 + 43) = 45;
        goto LABEL_56;
      case 13LL:
LABEL_69:
        v5[41] = 1;
        v5[45] = 1;
        *((_WORD *)v5 + 23) = 45;
LABEL_70:
        if ( *(_DWORD *)(a1 + 272) == 1 )
        {
          LOBYTE(v16) = a4 != 0;
          LOBYTE(v12) = (_BYTE)v12 != 0;
          return (v12 | v16) ^ 1;
        }
        return v16;
      case 14LL:
LABEL_98:
        v15 = a4 >> 4;
        goto LABEL_54;
      default:
LABEL_80:
        v26 = *((unsigned __int16 *)v5 + 12);
        v27 = nullptr;
        if ( (unsigned __int16)v26 <= 0x68u )
          v27 = *((const char **)&off_12CE0 + 2 * v26);
        sub_5B90((__int64)"%a(%s): internal error in %s", a5, *((const char **)v5 + 2), v27);
        return 1;
    }
  }
  if ( next_byte != 178 || (_BYTE)v12 )
  {
    switch ( v14 )
    {
      case 0LL:
        goto LABEL_70;
      case 1LL:
        goto LABEL_74;
      case 2LL:
        v5[81] = 1;
        v5[85] = 1;
        *((_WORD *)v5 + 43) = 45;
        goto LABEL_74;
      case 3LL:
        goto LABEL_99;
      case 4LL:
        goto LABEL_93;
      case 5LL:
        goto LABEL_83;
      case 6LL:
        goto LABEL_92;
      case 7LL:
        goto LABEL_89;
      case 8LL:
        goto LABEL_87;
      case 9LL:
        v5[41] = 12;
        v5[45] = 1;
        *((_WORD *)v5 + 23) = 0;
        return 0;
      case 10LL:
        goto LABEL_86;
      case 11LL:
        goto LABEL_55;
      case 12LL:
        goto LABEL_85;
      case 13LL:
        goto LABEL_69;
      case 14LL:
        goto LABEL_98;
      default:
        goto LABEL_80;
    }
  }
  *((_WORD *)v5 + 12) = 98;
  return 1;
}

