__int64 __fastcall sub_29B70(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  int v5; // eax
  unsigned int v7; // ebp
  char v9; // al
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r12
  _QWORD v16[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(unsigned __int16 *)(a3 + 24);
  v16[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)v5 <= 0x1A1u )
  {
    if ( (unsigned __int16)v5 <= 0x152u )
    {
      switch ( v5 )
      {
        case 30:
        case 31:
        case 32:
        case 49:
        case 71:
        case 85:
        case 86:
        case 87:
        case 88:
          goto LABEL_10;
        case 33:
        case 34:
          if ( (*(_DWORD *)(a3 + 28) & 0x40) == 0 )
            return (unsigned int)-1;
          v7 = *(unsigned __int16 *)(a3 + 46);
          v15 = -(__int64)((*(_DWORD *)(a3 + 28) & 0x10) != 0) | 1;
          break;
        case 42:
        case 43:
          v7 = 13;
          v15 = 2LL * ((_WORD)v5 != 43) - 1;
          break;
        case 115:
        case 116:
        case 117:
        case 139:
        case 140:
        case 141:
          goto LABEL_24;
        default:
          return (unsigned int)-1;
      }
      v14 = 4 * v15 * (int)bitcount();
LABEL_27:
      if ( !v14 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      goto LABEL_28;
    }
    switch ( v5 )
    {
      case 339:
      case 340:
      case 341:
      case 342:
      case 412:
      case 413:
      case 414:
      case 415:
        v12 = *(_DWORD *)(a3 + 28);
        if ( (v12 & 0x20) != 0 && *(_BYTE *)(a3 + 81) == 4 )
        {
          v7 = *(unsigned __int16 *)(a3 + 86);
          v14 = (int)sub_29720(a3);
          goto LABEL_27;
        }
        if ( (v12 & 0x80u) != 0 && *(_BYTE *)(a3 + 81) == 3 )
        {
          v7 = *(unsigned __int16 *)(a3 + 86);
          v11 = *(unsigned __int8 *)(a3 + 112);
          goto LABEL_16;
        }
        break;
      case 343:
      case 416:
LABEL_24:
        if ( (*(_DWORD *)(a3 + 28) & 0x40) == 0 )
          return (unsigned int)-1;
        v7 = *(unsigned __int16 *)(a3 + 46);
        v13 = -(__int64)((*(_DWORD *)(a3 + 28) & 0x10) != 0) | 1;
        goto LABEL_26;
      case 344:
      case 417:
        goto LABEL_10;
      case 370:
      case 371:
        v7 = 13;
        v13 = 2LL * ((_WORD)v5 != 371) - 1;
LABEL_26:
        v14 = v13 * (int)sub_29380(a3);
        goto LABEL_27;
      default:
        return (unsigned int)-1;
    }
    return (unsigned int)-1;
  }
  if ( (unsigned __int16)v5 > 0x304u )
  {
    if ( (unsigned __int16)v5 > 0x361u )
    {
      v7 = -1;
      if ( (unsigned __int16)(v5 - 871) > 1u )
        return v7;
    }
    else if ( (unsigned __int16)v5 <= 0x35Fu )
    {
      return (unsigned int)-1;
    }
  }
  else if ( (unsigned __int16)v5 <= 0x300u )
  {
    if ( (unsigned __int16)v5 > 0x1E9u )
    {
      v7 = -1;
      if ( (unsigned __int16)(v5 - 634) > 7u )
        return v7;
    }
    else if ( (unsigned __int16)v5 <= 0x1DFu )
    {
      v7 = -1;
      if ( (unsigned __int16)(v5 - 472) > 3u )
        return v7;
    }
  }
LABEL_10:
  if ( (*(_BYTE *)(a3 + 28) & 0xA0) == 0 )
    return (unsigned int)-1;
  v9 = *(_BYTE *)(a3 + 121);
  v10 = a3 + 120;
  if ( !v9 )
  {
    v9 = *(_BYTE *)(a3 + 81);
    v10 = a3 + 80;
  }
  if ( v9 == 4 )
  {
    v14 = *(_QWORD *)(v10 + 16);
    if ( !v14 )
      return (unsigned int)-1;
    v7 = *(unsigned __int16 *)(v10 + 6);
  }
  else
  {
    if ( v9 != 3 )
      return (unsigned int)-1;
    v7 = *(unsigned __int16 *)(v10 + 6);
    v11 = *(unsigned __int8 *)(v10 + 32);
LABEL_16:
    if ( !a4 || !(unsigned __int8)sub_81DB0(a1, v16, *(_QWORD *)(a3 + 16), v11, 0) || (v14 = v16[0]) == 0 )
    {
      if ( a2 )
        *a2 = 0;
      return v7;
    }
  }
LABEL_28:
  if ( a2 )
    *a2 = v14;
  return v7;
}

