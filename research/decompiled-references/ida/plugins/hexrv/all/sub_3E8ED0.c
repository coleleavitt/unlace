unsigned int *__fastcall sub_3E8ED0(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v4 > 0xAu )
  {
    if ( (unsigned __int16)(v4 - 134) <= 5u )
    {
      LOWORD(v4) = v4 - 135;
      switch ( v4 )
      {
        case 0LL:
          v6 = 43;
          break;
        case 1LL:
          v6 = 52;
          break;
        case 2LL:
          v6 = 50;
          break;
        case 3LL:
          v6 = 51;
          break;
        case 4LL:
          v6 = 49;
          break;
        default:
          v6 = 44;
          break;
      }
      v5 = **(int **)(*(_QWORD *)(a1 + 832) + 632LL);
      v7 = 1;
      goto LABEL_7;
    }
LABEL_20:
    if ( !under_debugger )
      sub_37DDE0(0xCE23u, a4);
LABEL_25:
    BUG();
  }
  if ( (unsigned __int16)v4 <= 4u )
    goto LABEL_20;
  v5 = a3;
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 6:
      v6 = 43;
      v7 = 2;
      break;
    case 7:
      v6 = 51;
      v7 = 2;
      break;
    case 8:
      v6 = 50;
      v7 = 2;
      break;
    case 9:
      v6 = 46;
      v7 = 2;
      break;
    case 0xA:
      v6 = 45;
      v7 = 2;
      break;
    default:
      v6 = 44;
      v7 = 2;
      break;
  }
LABEL_7:
  v8 = a1 + 40 * v7;
  if ( *(_BYTE *)(v8 + 65) != 7 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE24u, a4);
    goto LABEL_25;
  }
  return sub_3E8D60(a1, v6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), a2, v5, *(_QWORD *)(v8 + 80), 0);
}

