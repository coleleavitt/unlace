__int64 __fastcall sub_2C330(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // r14
  char byte; // al
  unsigned int v7; // edx
  char v8; // bp
  unsigned int v9; // r12d
  unsigned __int16 v10; // cx
  char v11; // al
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdi
  unsigned __int64 *func; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // edx

  v4 = *(_QWORD *)(a1 + 144);
  byte = get_byte();
  v8 = byte;
  if ( a3 )
    *a3 = byte;
  LOBYTE(v7) = byte == -112 || byte == 69;
  v9 = v7;
  if ( (_BYTE)v7 )
    return 1;
  if ( sub_25F80(a2) )
    *(_BYTE *)(a1 + 176) = 1;
  v10 = *(_WORD *)(a2 + 24);
  if ( v10 > 0xD8u )
  {
    if ( v10 == 450 )
    {
      if ( *(_BYTE *)(a2 + 81) != 1 )
        return v9;
    }
    else
    {
      if ( v10 <= 0x1C2u )
      {
        if ( v10 == 397 )
        {
LABEL_42:
          if ( *(_BYTE *)(a2 + 41) == 1 )
          {
            if ( *(_BYTE *)(a2 + 81) == 5 && !*(_QWORD *)(a2 + 88) )
              goto LABEL_45;
            goto LABEL_53;
          }
          goto LABEL_15;
        }
        if ( v10 != 444 )
        {
LABEL_36:
          if ( *(_BYTE *)(a2 + 41) != 11 )
            return v9;
          if ( (unsigned __int8)(*(_BYTE *)(a2 + 81) - 3) <= 1u )
          {
            LOBYTE(v9) = *(_WORD *)(a2 + 106) != 31;
            return v9;
          }
          return 1;
        }
      }
      else
      {
        if ( v10 > 0x22Bu )
        {
          if ( v10 != 594 )
            goto LABEL_36;
          goto LABEL_31;
        }
        if ( v10 <= 0x229u && v10 != 451 )
          goto LABEL_36;
      }
      if ( *(_BYTE *)(a2 + 41) != 1 )
        return v9;
      if ( *(_BYTE *)(a2 + 81) != 1 )
        return v9;
      v13 = *(unsigned __int16 *)(a2 + 46);
      if ( (unsigned int)(v13 - 64) > 0xF && (unsigned int)(v13 - 101) > 0xF )
        return v9;
    }
    v14 = *(unsigned __int16 *)(a2 + 86);
    v15 = v14 - 64;
    LOBYTE(v15) = v14 - 64 <= 0xF;
    v14 -= 101;
    LOBYTE(v14) = v14 <= 0xF;
    return v14 | v15;
  }
  if ( v10 > 0x5Bu )
  {
    switch ( v10 )
    {
      case 0x5Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
      case 0x80u:
      case 0x82u:
      case 0xA3u:
      case 0xA4u:
      case 0xA5u:
      case 0xA6u:
      case 0xA8u:
      case 0xA9u:
      case 0xAAu:
      case 0xABu:
      case 0xACu:
      case 0xADu:
      case 0xAEu:
      case 0xAFu:
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBCu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC0u:
      case 0xC1u:
      case 0xC2u:
      case 0xC3u:
      case 0xC4u:
      case 0xC5u:
      case 0xC8u:
      case 0xC9u:
      case 0xD6u:
        goto LABEL_31;
      case 0x7Au:
        goto LABEL_13;
      case 0x83u:
        goto LABEL_14;
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
        return 1;
      case 0xD1u:
      case 0xD8u:
        goto LABEL_42;
      case 0xD2u:
        goto LABEL_54;
      default:
        goto LABEL_36;
    }
  }
  if ( v10 > 0x2Cu )
    goto LABEL_36;
  if ( v10 > 0x12u )
  {
    if ( ((1LL << v10) & 0x65D80000) != 0 )
      return 1;
    if ( ((1LL << v10) & 0x160C00000000LL) == 0 )
    {
      if ( v10 == 27 )
        goto LABEL_54;
      goto LABEL_36;
    }
    goto LABEL_31;
  }
  if ( v10 != 7 )
  {
    if ( v10 > 7u )
      goto LABEL_36;
    if ( v10 != 5 )
    {
      if ( v10 == 6 )
        goto LABEL_42;
      goto LABEL_36;
    }
LABEL_31:
    if ( *(_BYTE *)(a2 + 41) == 1 )
    {
LABEL_53:
      *(_DWORD *)(a1 + 40) |= 1 << sub_71FC0(*(unsigned __int16 *)(a2 + 46), 1);
      goto LABEL_54;
    }
LABEL_15:
    if ( *(_BYTE *)(a2 + 32) == 33 )
      return v9;
    v11 = *(_BYTE *)(a2 + 41);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a2 + 41) == 1 )
  {
    v18 = *(_WORD *)(a2 + 46);
    if ( v18 == 4 )
      goto LABEL_64;
    if ( v18 == 5 && *(_BYTE *)(a2 + 81) == 5 && *(_QWORD *)(a1 + 32) != -1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 32LL) + 16LL) & ~*(_QWORD *)(a2 + 88);
      if ( (v19 & (v19 + 1)) == 0 )
        goto LABEL_64;
    }
  }
LABEL_13:
  if ( v8 == -117 && (unsigned __int8)get_byte() == 0xFF )
  {
LABEL_64:
    v20 = *(_QWORD **)(a1 + 48);
    v21 = *(_QWORD *)(a1 + 56);
    v22 = *(_QWORD *)(a2 + 16);
    v23 = &v20[v21];
    if ( v20 == v23 )
      goto LABEL_69;
    v24 = *(_QWORD **)(a1 + 48);
    while ( v22 != *v24 )
    {
      if ( v23 == ++v24 )
        goto LABEL_69;
    }
    if ( v23 == v24 )
    {
LABEL_69:
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v21 + 1) )
      {
        v28 = qvector_reserve();
        v29 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = v28;
        v23 = (_QWORD *)(v28 + 8 * v29);
      }
      *v23 = v22;
      ++*(_QWORD *)(a1 + 56);
    }
    return 1;
  }
LABEL_14:
  if ( *(_BYTE *)(a2 + 41) != 1 )
    goto LABEL_15;
  if ( !(unsigned __int8)sub_4D570(a2 + 40, a2 + 80) )
    goto LABEL_53;
LABEL_54:
  v11 = *(_BYTE *)(a2 + 41);
  if ( *(_BYTE *)(a2 + 32) == 33 )
  {
    if ( v11 != 1 )
      return v9;
    goto LABEL_45;
  }
LABEL_17:
  if ( v11 != 1 )
    return 1;
LABEL_45:
  v16 = *(_WORD *)(a2 + 46);
  if ( v16 == 4 )
    return v9;
  if ( v16 != 5 )
    return 1;
  v17 = *(_WORD *)(a2 + 24);
  if ( v17 == 122 )
  {
    if ( *(_BYTE *)(a2 + 81) == 1 )
    {
      LOBYTE(v9) = *(_WORD *)(a2 + 86) != 4;
      return v9;
    }
    return 1;
  }
  if ( v17 != 92 )
  {
LABEL_49:
    if ( v17 == 209 || v17 == 6 )
    {
      LOBYTE(v9) = *(_BYTE *)(a2 + 81) != 5;
      return v9;
    }
    return 1;
  }
  if ( (getinf() & 0xF) == 6 && (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
  {
LABEL_88:
    v17 = *(_WORD *)(a2 + 24);
    goto LABEL_49;
  }
  v25 = *(_QWORD *)(a2 + 16);
  func = (unsigned __int64 *)get_func();
  if ( *(_BYTE *)(a2 + 112) )
  {
    if ( *(_BYTE *)(a2 + 81) == 2 )
    {
      LODWORD(v27) = -1;
      if ( !func )
        goto LABEL_88;
      goto LABEL_86;
    }
    LODWORD(v27) = *(_BYTE *)(a2 + 113) & 7;
    if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 1) != 0 )
    {
      if ( !func )
        goto LABEL_88;
      LODWORD(v27) = *(_BYTE *)(a2 + 113) & 7 | 8;
      goto LABEL_86;
    }
    goto LABEL_96;
  }
  v27 = *(unsigned __int16 *)(a2 + 86);
  v30 = *(_DWORD *)(a2 + 28) & 0x1018;
  if ( v30 != 4096 && v30 != 8 )
  {
LABEL_96:
    if ( !func )
    {
LABEL_87:
      if ( (_DWORD)v27 == 4 )
        return v9;
      goto LABEL_88;
    }
LABEL_86:
    LODWORD(v27) = sub_2C040(v4, *func, *(_QWORD *)(a2 + 16), v27, -1, 0);
    goto LABEL_87;
  }
  if ( (_WORD)v27 == 0xFFFF )
  {
    LODWORD(v27) = 4;
    if ( !func )
      return v9;
    goto LABEL_86;
  }
  if ( (unsigned __int16)v27 <= 7u )
  {
    LODWORD(v27) = dword_94FA0[v27];
    goto LABEL_96;
  }
  sub_21470(v25);
  return sub_2C800();
}
