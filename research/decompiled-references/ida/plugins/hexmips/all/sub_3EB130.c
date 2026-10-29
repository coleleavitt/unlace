void __fastcall sub_3EB130(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v7; // dx
  int v8; // r12d
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v5 + 644) > a2 || *(_DWORD *)(v5 + 672) < a2 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCBEu, a4);
LABEL_44:
    BUG();
  }
  v7 = *(_WORD *)(a1 + 48);
  if ( v7 != 91 )
  {
    if ( v7 <= 0x5Bu )
    {
      if ( (v7 & 0xFFFB) != 0x53 )
        goto LABEL_6;
      v8 = -1;
      if ( a3 == 2 )
        goto LABEL_15;
LABEL_17:
      v10 = *(_QWORD *)(v5 + 760);
      if ( !v10 )
        sub_3E5460(a4);
      v11 = *(int *)(*(_QWORD *)(v5 + 752) + 4 * v10 - 4);
      *(_QWORD *)(v5 + 760) = v10 - 1;
      v8 = v11;
      sub_3EAB70(a1, 6u, 1, a2, 0x3BEA45E214ADDC55LL, v11, 0);
      v4 = v8;
      if ( a3 )
        goto LABEL_19;
      goto LABEL_11;
    }
    if ( v7 != 95 )
    {
LABEL_6:
      if ( !under_debugger )
        sub_37E160(0xCCBFu, a4);
      goto LABEL_44;
    }
  }
  v8 = -1;
  if ( a3 == 2 )
    goto LABEL_17;
  if ( a3 )
  {
LABEL_19:
    v5 = *(_QWORD *)(a1 + 832);
LABEL_15:
    sub_3EAB70(a1, 4u, 1, v4, 0x3BEA45E214ADDC55LL, *(int *)(v5 + 352), 0);
    goto LABEL_16;
  }
LABEL_11:
  v9 = *(_WORD *)(a1 + 48);
  if ( v9 <= 0xC9u )
  {
    if ( v9 <= 0xC5u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
          v12 = *(_BYTE *)(a1 + 105) != 0;
          goto LABEL_29;
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          goto LABEL_35;
        case 'n':
        case 'o':
        case 'p':
        case 'q':
          goto LABEL_34;
        case 's':
        case 'u':
        case 'v':
          goto LABEL_37;
        default:
          goto LABEL_26;
      }
    }
    goto LABEL_35;
  }
  if ( v9 > 0x341u )
  {
    if ( v9 != 1739 )
    {
      if ( v9 <= 0x6CBu )
      {
        if ( (unsigned __int16)(v9 - 1736) <= 1u )
        {
          v12 = 0;
          goto LABEL_29;
        }
        goto LABEL_26;
      }
      if ( (unsigned __int16)(v9 - 1743) > 0xDu )
      {
LABEL_26:
        if ( !under_debugger )
          sub_37E160(0xCC4Fu, a4);
        goto LABEL_44;
      }
    }
  }
  else
  {
    if ( v9 > 0x33Du )
    {
LABEL_35:
      v12 = 1;
      goto LABEL_29;
    }
    if ( v9 > 0x241u )
    {
      if ( v9 != 821 )
        goto LABEL_26;
      goto LABEL_37;
    }
    if ( v9 <= 0x23Du )
    {
      if ( v9 > 0xCBu && (unsigned __int16)(v9 - 439) > 1u )
        goto LABEL_26;
LABEL_37:
      v12 = 0;
      goto LABEL_29;
    }
  }
LABEL_34:
  v12 = 2;
LABEL_29:
  v13 = a1 + 40 * v12;
  if ( *(_BYTE *)(v13 + 65) != 7 )
    sub_3E5390(a4);
  sub_3EAB70(a1, 0x2Au, 1, v4, 0x3BEA45E214ADDC55LL, *(_QWORD *)(v13 + 80), 0);
LABEL_16:
  sub_3E8540(*(_QWORD *)(a1 + 832), v8);
}

