__int64 __fastcall sub_82E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // esi
  int v14; // ecx
  __int64 *i; // rax
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int8 v18; // al
  __int64 v19; // rax
  bool v20; // zf
  int v21; // esi
  int v22; // ecx
  __int64 *v23; // rax
  int v24; // eax
  __int16 v25; // cx

  if ( (unsigned __int8)a5 <= 0x1Fu )
  {
    if ( (unsigned __int8)a5 > 0x13u )
    {
      switch ( (int)a5 )
      {
        case 21:
          v13 = 0;
          v14 = (a4 >> 23) & 0x1F;
          for ( i = qword_FDC0; *((_DWORD *)i + 1) != (v14 & *(_DWORD *)i); i = (__int64 *)((char *)i + 12) )
          {
            if ( ++v13 == 27 )
              return 0;
          }
          v16 = *((_DWORD *)&qword_FDC0[1] + 3 * v13);
          if ( v16 == -1 )
            return 0;
LABEL_38:
          *(_BYTE *)(a3 + 1) = 1;
          *(_BYTE *)(a3 + 5) = 2;
          *(_WORD *)(a3 + 6) = v16;
          return 1;
        case 22:
          *(_BYTE *)(a3 + 1) = 5;
          *(_BYTE *)(a3 + 5) = 2;
          *(_QWORD *)(a3 + 8) = a6 & 1;
          return 1;
        case 23:
          *(_BYTE *)(a3 + 1) = 8;
          LOBYTE(a6) = a6 & 0xFE;
          *(_BYTE *)(a3 + 34) = 0;
          *(_BYTE *)(a3 + 5) = 4;
          v8 = *(unsigned __int8 *)(a2 + 32);
          if ( (unsigned __int8)v8 > 8u )
            goto LABEL_25;
          goto LABEL_23;
        case 24:
          *(_BYTE *)(a3 + 1) = 8;
          LOBYTE(a6) = a6 & 0xFE;
          v10 = 0;
          *(_BYTE *)(a3 + 34) = 0;
          *(_BYTE *)(a3 + 5) = 4;
          v11 = *(unsigned __int8 *)(a2 + 32);
          if ( (unsigned __int8)v11 > 8u )
            goto LABEL_30;
          goto LABEL_29;
        case 25:
          goto LABEL_42;
        case 26:
          goto LABEL_44;
        case 27:
          *(_BYTE *)(a3 + 1) = 5;
          *(_BYTE *)(a3 + 5) = 2;
          *(_QWORD *)(a3 + 8) = (a4 >> 8) & 0x7FFF;
          return 1;
        case 28:
          sub_8230(a1, a2, a3, a4, 16, 127);
          return 1;
        case 29:
          *(_BYTE *)(a3 + 1) = 5;
          *(_BYTE *)(a3 + 5) = 2;
          *(_QWORD *)(a3 + 8) = (unsigned __int16)a4 >> 13;
          return 1;
        case 30:
          *(_BYTE *)(a3 + 1) = 1;
          *(_BYTE *)(a3 + 5) = 2;
          *(_WORD *)(a3 + 6) = ((a4 >> 7) & 1) + 46;
          return 1;
        case 31:
          goto LABEL_22;
        default:
          v21 = 0;
          v22 = (a4 >> 18) & 0x1F;
          v23 = qword_FDC0;
          break;
      }
      while ( *((_DWORD *)v23 + 1) != (v22 & *(_DWORD *)v23) )
      {
        ++v21;
        v23 = (__int64 *)((char *)v23 + 12);
        if ( v21 == 27 )
          return 0;
      }
      v24 = *((_DWORD *)&qword_FDC0[1] + 3 * v21);
      if ( v24 == -1 )
        return 0;
      v25 = 66;
      if ( v24 != 67 )
      {
        v25 = 93;
        if ( v24 != 92 )
          v25 = *((_DWORD *)&qword_FDC0[1] + 3 * v21);
      }
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = v25;
      return 1;
    }
    switch ( a5 )
    {
      case 0LL:
        return 1;
      case 1LL:
      case 3LL:
        goto LABEL_26;
      case 2LL:
      case 4LL:
        goto LABEL_52;
      case 5LL:
      case 7LL:
        goto LABEL_22;
      case 6LL:
      case 8LL:
        goto LABEL_32;
      case 9LL:
        if ( (a6 & 0x10) != 0 )
          a6 |= 0xFFFFFFE0;
        goto LABEL_17;
      case 10LL:
LABEL_17:
        *(_BYTE *)(a3 + 1) = 5;
        *(_BYTE *)(a3 + 5) = 2;
        *(_QWORD *)(a3 + 8) = a6;
        return 1;
      default:
        if ( ((1LL << a5) & 0x2A800) != 0 )
        {
          *(_BYTE *)(a3 + 1) = 1;
          *(_BYTE *)(a3 + 5) = 1;
          v8 = *(unsigned __int8 *)(a2 + 32);
          if ( (unsigned __int8)v8 <= 8u )
            goto LABEL_23;
          goto LABEL_25;
        }
        if ( ((1LL << a5) & 0x55000) == 0 )
        {
          if ( (_BYTE)a5 != 19 )
            goto LABEL_77;
          *(_BYTE *)(a3 + 1) = 1;
          *(_BYTE *)(a3 + 5) = 1;
          if ( a6 == 6 )
          {
            *(_WORD *)(a3 + 6) = 71;
          }
          else
          {
            if ( a6 != 7 )
              return 0;
            *(_WORD *)(a3 + 6) = 72;
          }
          return 1;
        }
        *(_BYTE *)(a3 + 1) = 1;
        v10 = 0;
        *(_BYTE *)(a3 + 5) = 1;
        v11 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v11 > 8u )
          goto LABEL_30;
        break;
    }
    goto LABEL_29;
  }
  if ( (unsigned __int8)a5 <= 0x2Cu )
  {
    if ( ((1LL << a5) & 0x55500000000LL) != 0 )
    {
LABEL_26:
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 2;
      v8 = *(unsigned __int8 *)(a2 + 32);
      if ( (unsigned __int8)v8 > 8u )
        goto LABEL_25;
LABEL_23:
      v9 = 340;
      if ( !_bittest64(&v9, v8) )
      {
LABEL_25:
        *(_WORD *)(a3 + 6) = (unsigned __int8)a6;
        return 1;
      }
LABEL_24:
      LOBYTE(a6) = a6 + 32;
      goto LABEL_25;
    }
    if ( ((1LL << a5) & 0xAAA00000000LL) != 0 )
    {
LABEL_52:
      *(_BYTE *)(a3 + 1) = 1;
      v10 = 0;
      *(_BYTE *)(a3 + 5) = 2;
      v11 = *(unsigned __int8 *)(a2 + 32);
      if ( (unsigned __int8)v11 > 8u )
      {
LABEL_30:
        if ( a7 == v10 )
          goto LABEL_25;
        goto LABEL_24;
      }
LABEL_29:
      v12 = 340;
      v10 = _bittest64(&v12, v11);
      goto LABEL_30;
    }
    if ( (_BYTE)a5 == 44 )
    {
      sub_8230(a1, a2, a3, a4, 13, 1023);
      return 1;
    }
  }
  else if ( (unsigned __int8)(a5 - 45) <= 0x18u )
  {
    switch ( (int)a5 )
    {
      case '.':
        sub_8230(a1, a2, a3, a4, 7, 0x1FFFFF);
        break;
      case '/':
        v17 = *(unsigned __int8 *)(a2 + 32);
        v18 = 0;
        if ( (unsigned __int8)v17 <= 8u )
        {
          v19 = 340;
          v18 = _bittest64(&v19, v17);
        }
        v20 = v18 == a7;
        LOWORD(v16) = 35;
        if ( v20 )
          LOWORD(v16) = 3;
        goto LABEL_38;
      case '0':
      case '1':
      case '2':
      case 'D':
        goto LABEL_26;
      case '3':
      case '4':
      case '5':
      case '6':
      case '9':
      case ':':
LABEL_22:
        *(_BYTE *)(a3 + 1) = 8;
        *(_BYTE *)(a3 + 34) = 0;
        *(_BYTE *)(a3 + 5) = 7;
        v8 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v8 <= 8u )
          goto LABEL_23;
        goto LABEL_25;
      case '7':
      case '8':
      case '?':
LABEL_32:
        *(_BYTE *)(a3 + 1) = 8;
        v10 = 0;
        *(_BYTE *)(a3 + 34) = 0;
        *(_BYTE *)(a3 + 5) = 7;
        v11 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v11 > 8u )
          goto LABEL_30;
        goto LABEL_29;
      case ';':
      case '<':
        *(_BYTE *)(a3 + 1) = 8;
        *(_BYTE *)(a3 + 34) = 1;
        *(_BYTE *)(a3 + 5) = 8;
        v8 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v8 > 8u )
          goto LABEL_25;
        goto LABEL_23;
      case '=':
      case 'C':
        goto LABEL_52;
      case '>':
      case 'E':
LABEL_42:
        *(_BYTE *)(a3 + 1) = 1;
        *(_BYTE *)(a3 + 5) = 3;
        v8 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v8 > 8u )
          goto LABEL_25;
        goto LABEL_23;
      case '@':
      case 'A':
LABEL_44:
        *(_BYTE *)(a3 + 1) = 1;
        v10 = 0;
        *(_BYTE *)(a3 + 5) = 3;
        v11 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v11 > 8u )
          goto LABEL_30;
        goto LABEL_29;
      case 'B':
        *(_BYTE *)(a3 + 1) = 8;
        v10 = 0;
        *(_BYTE *)(a3 + 34) = 1;
        *(_BYTE *)(a3 + 5) = 8;
        v11 = *(unsigned __int8 *)(a2 + 32);
        if ( (unsigned __int8)v11 > 8u )
          goto LABEL_30;
        goto LABEL_29;
      default:
        sub_8230(a1, a2, a3, a4, 16, 4095);
        break;
    }
    return 1;
  }
LABEL_77:
  if ( under_debugger )
    BUG();
  interr();
  return sub_8830(257);
}

