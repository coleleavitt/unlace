__int64 __fastcall sub_28F800(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int v4; // eax
  char tinfo_property; // r13
  unsigned __int8 v7; // r13
  int v8; // r14d
  int v9; // r15d
  int v10; // eax
  int v11; // r8d
  int tinfo_size; // eax
  int v13; // [rsp+8h] [rbp-40h]
  int v14; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 8) & 8;
  if ( v2 )
    goto LABEL_33;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    if ( v3 > 0x3D )
      goto LABEL_6;
    if ( v3 > 0x1F )
    {
      switch ( v3 )
      {
        case ' ':
        case '!':
        case '"':
          if ( !(unsigned __int8)sub_28D2D0(a2) )
            goto LABEL_30;
          goto LABEL_31;
        case '#':
        case '$':
          if ( (unsigned __int8)sub_28AD40(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '%':
          if ( sub_287C30(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '&':
        case '\'':
LABEL_30:
          if ( sub_285EF0(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '0':
          if ( (unsigned __int8)sub_28DCC0(a1, a2) || (unsigned __int8)sub_28B6B0(a1, a2) )
            goto LABEL_31;
          tinfo_property = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
            goto LABEL_6;
          if ( (unsigned __int8)sub_28C9A0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28B7F0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28BD20(a1, (__int64 *)a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28E1D0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28E7E0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28EA10(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28EDB0(a1, a2) )
            goto LABEL_31;
          v7 = sub_28DE50(a1, a2);
          if ( v7 )
            goto LABEL_31;
          v8 = get_tinfo_property();
          v13 = get_tinfo_property();
          v9 = 8 * get_tinfo_size();
          v10 = sub_280D70(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
          v11 = v13;
          if ( (__int16)v10 <= v9 )
          {
            v14 = (__int16)v10;
            if ( v8 != v11 )
            {
              tinfo_size = get_tinfo_size();
              if ( v14 == v9 )
              {
                v7 = 1;
              }
              else if ( v8 == 1 )
              {
                v7 = 8 * tinfo_size == v14;
              }
              if ( (unsigned int)sub_2816C0(a1, a2, tinfo_size, v7, 0) )
                goto LABEL_6;
            }
          }
          else if ( v8 != 1 || v13 != 1 || (__int16)v10 - (v10 >> 16) > v9 )
          {
            goto LABEL_6;
          }
          if ( !(unsigned __int8)sub_28CA80(a1, (__int64 *)a2)
            && !(unsigned __int8)sub_28D6E0(a1, (__int64 *)a2)
            && !(unsigned __int8)sub_28C720(a1, a2) )
          {
            goto LABEL_6;
          }
          break;
        case '1':
          if ( (unsigned __int8)sub_288A00(a1, (__int64 *)a2)
            || (unsigned __int8)sub_288AB0(a1, a2)
            || (unsigned __int8)sub_288DE0(a1, a2)
            || (unsigned __int8)sub_288EE0(a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '3':
          if ( (unsigned __int8)sub_287E40((__int64 *)a2)
            || (unsigned __int8)sub_28D350(a1, (__int64 *)a2)
            || (unsigned __int8)sub_2856A0((_QWORD *)a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '4':
          if ( (unsigned __int8)sub_28A5A0((_QWORD *)a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '9':
          if ( (unsigned __int8)sub_287EA0(a1, a2) || (unsigned __int8)sub_288540(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ':':
          if ( (unsigned __int8)sub_28C8E0(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ';':
          if ( (unsigned __int8)sub_28F760(a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '=':
          if ( (unsigned __int8)sub_288FF0(a1, a2)
            || (unsigned __int8)sub_28FEF0(a1, a2)
            || (unsigned __int8)sub_2901E0(a1, a2)
            || (unsigned __int8)sub_28DB80((_QWORD *)a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        default:
          goto LABEL_6;
      }
      goto LABEL_31;
    }
    if ( v3 <= 0x14 )
      break;
    if ( v3 == 31 )
      goto LABEL_6;
    if ( ((1LL << v3) & 0x55000000) != 0 )
    {
      if ( !(unsigned __int8)sub_28A6F0(a1, a2) )
        goto LABEL_6;
    }
    else if ( ((1LL << v3) & 0xC00000) != 0 )
    {
      if ( !(unsigned __int8)sub_287A20(a1, a2) && !(unsigned __int8)sub_288CB0(a1, a2) )
        goto LABEL_6;
    }
    else if ( v3 != 21
           || !(unsigned __int8)sub_28B5F0(a1, a2)
           && !(unsigned __int8)sub_285B10(a1, a2)
           && !(unsigned __int8)sub_288CB0(a1, a2)
           && !(unsigned __int8)sub_288E50(a1, a2)
           && !(unsigned __int8)sub_28AA90((_QWORD *)a1, a2) )
    {
      goto LABEL_6;
    }
LABEL_31:
    v4 = *(_DWORD *)(a1 + 8);
    ++v2;
    if ( (v4 & 8) != 0 )
    {
      if ( !v2 )
      {
LABEL_33:
        if ( !under_debugger )
          sub_37DDE0(50612);
        BUG();
      }
      goto LABEL_8;
    }
  }
  if ( v3 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 1:
        if ( (unsigned __int8)sub_2887D0(a1, a2) )
          goto LABEL_31;
        break;
      case 2:
        if ( !(unsigned __int8)sub_28DF60(a1, a2)
          && !(unsigned __int8)sub_2407C0(a2, *(_QWORD *)(a1 + 72))
          && !(unsigned __int8)sub_28EFB0(a1, a2) )
        {
          goto LABEL_26;
        }
        goto LABEL_31;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
LABEL_26:
        if ( (unsigned __int8)sub_28C230(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), a2)
          || (unsigned __int8)sub_28B060(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x10:
        if ( !(unsigned __int8)sub_28AE70(a1, a2) )
          break;
        goto LABEL_31;
      case 0x13:
        if ( (unsigned __int8)sub_28E0F0(a1, a2)
          || (unsigned __int8)sub_288E50(a1, a2)
          || (unsigned __int8)sub_285B10(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x14:
        if ( (unsigned __int8)sub_288CB0(a1, a2) || (unsigned __int8)sub_28ACB0(a1, a2) )
          goto LABEL_31;
        break;
      default:
        break;
    }
  }
LABEL_6:
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 8);
LABEL_8:
    *(_DWORD *)(a1 + 8) = v4 | 8;
  }
  return v2;
}

