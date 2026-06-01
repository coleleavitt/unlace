__int64 __fastcall sub_B760(unsigned __int64 a1, char a2, int a3)
{
  unsigned __int64 head; // rbx
  unsigned __int8 byte; // al
  int v5; // eax
  int flags; // eax
  __int64 result; // rax
  int v8; // eax
  unsigned __int8 v9; // al
  int v10; // eax
  unsigned __int64 v11; // rbp
  int v12; // eax
  unsigned __int8 v13; // r13
  int v14; // r12d
  int v15; // eax
  unsigned __int8 v16; // r13
  int v17; // r12d
  int v18; // eax
  unsigned __int8 v19; // r12
  int v20; // r13d
  int v21; // r12d
  __int16 v22; // ax

LABEL_1:
  while ( 2 )
  {
    head = a1;
    switch ( a3 )
    {
      case 1:
        while ( 1 )
        {
          if ( head <= 3 )
            return 0xFFFFFFFFLL;
          head = prev_head();
          if ( head == -1 )
            return 0xFFFFFFFFLL;
          flags = get_flags_ex();
          if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) != 0 )
            return 0xFFFFFFFFLL;
          byte = get_byte();
          v5 = *(_DWORD *)sub_4930(byte);
          if ( (unsigned __int8)(v5 - 43) <= 9u )
            break;
          if ( (unsigned __int8)(v5 - 53) <= 5u )
            return 0xFFFFFFFFLL;
        }
        switch ( (char)v5 )
        {
          case '+':
            LOWORD(result) = get_word();
            if ( a2 == 1 )
              LOWORD(result) = (unsigned __int8)result;
            goto LABEL_52;
          case '-':
            v21 = get_word() + head + 3;
            v22 = -1;
            if ( a2 == 1 )
              v22 = 255;
            result = (unsigned __int16)(v21 & v22);
            break;
          case '.':
            goto LABEL_15;
          case '/':
          case '0':
          case '1':
            goto LABEL_56;
          case '3':
            a3 = 3;
            goto LABEL_16;
          case '4':
            a3 = 4;
            goto LABEL_16;
          default:
            return 0xFFFFFFFFLL;
        }
        return result;
      case 2:
        if ( a1 > 3 )
        {
          do
          {
            v11 = prev_head();
            if ( v11 == -1 )
              break;
            v18 = get_flags_ex();
            if ( (~(_WORD)v18 & 0x600) != 0 || (v18 & 0x10000000) != 0 )
              break;
            v19 = get_byte();
            v20 = *(_DWORD *)sub_4930(v19);
            a2 = (get_sreg() == 0) + 1;
            switch ( (char)v20 )
            {
              case 1:
              case 2:
              case 3:
              case 24:
              case 27:
              case 28:
              case 39:
              case 40:
              case 42:
              case 65:
              case 91:
                return 0xFFFFFFFFLL;
              case 35:
                if ( v19 != 0xA9 )
                  return 0xFFFFFFFFLL;
                goto LABEL_44;
              case 38:
                if ( v19 == 74 )
                  return 0xFFFFFFFFLL;
                break;
              case 53:
                goto LABEL_37;
              case 60:
              case 61:
                if ( (v19 & 0xBF) == 0x30 )
                  return 0xFFFFFFFFLL;
                break;
              case 79:
              case 82:
                goto LABEL_56;
              case 84:
                goto LABEL_42;
              case 87:
                goto LABEL_46;
              default:
                break;
            }
          }
          while ( v11 > 3 );
        }
        return 0xFFFFFFFFLL;
      case 3:
        v11 = a1;
LABEL_24:
        if ( v11 <= 3 )
          return 0xFFFFFFFFLL;
        v11 = prev_head();
        if ( v11 == -1 )
          return 0xFFFFFFFFLL;
        v15 = get_flags_ex();
        if ( (~(_WORD)v15 & 0x600) != 0 || (v15 & 0x10000000) != 0 )
          return 0xFFFFFFFFLL;
        v16 = get_byte();
        v17 = *(_DWORD *)sub_4930(v16);
        a2 = (get_sreg() == 0) + 1;
        switch ( (char)v17 )
        {
          case 25:
          case 29:
          case 39:
          case 40:
            return 0xFFFFFFFFLL;
          case 36:
            if ( v16 != 0xA2 )
              return 0xFFFFFFFFLL;
            goto LABEL_44;
          case 57:
            goto LABEL_37;
          case 75:
            goto LABEL_41;
          case 83:
LABEL_56:
            result = get_sreg();
            break;
          case 88:
LABEL_46:
            a3 = 4;
            a1 = v11;
            continue;
          default:
            goto LABEL_24;
        }
        return result;
      case 4:
        v11 = a1;
LABEL_18:
        if ( v11 <= 3 )
          return 0xFFFFFFFFLL;
        v11 = prev_head();
        if ( v11 == -1 )
          return 0xFFFFFFFFLL;
        v12 = get_flags_ex();
        if ( (~(_WORD)v12 & 0x600) != 0 || (v12 & 0x10000000) != 0 )
          return 0xFFFFFFFFLL;
        v13 = get_byte();
        v14 = *(_DWORD *)sub_4930(v13);
        a2 = (get_sreg() == 0) + 1;
        switch ( (char)v14 )
        {
          case 26:
          case 30:
          case 39:
          case 40:
            return 0xFFFFFFFFLL;
          case 37:
            if ( v13 != 0xA0 )
              return 0xFFFFFFFFLL;
LABEL_44:
            if ( (_BYTE)a1 - (_BYTE)v11 == 3 )
            {
              LOWORD(result) = get_word();
LABEL_52:
              result = (unsigned __int16)result;
            }
            else
            {
              result = (unsigned __int8)get_byte();
            }
            break;
          case 58:
LABEL_37:
            a3 = 1;
            a1 = v11;
            continue;
          case 76:
LABEL_41:
            a3 = 2;
            a1 = v11;
            continue;
          case 86:
LABEL_42:
            a3 = 3;
            a1 = v11;
            continue;
          default:
            goto LABEL_18;
        }
        return result;
      case 5:
        goto LABEL_9;
      default:
        sub_81D0((__int64)"WARNING: backtrack_value() of unsupported BT-type: %d\n", a3);
        return 0xFFFFFFFFLL;
    }
  }
LABEL_9:
  while ( head > 3 )
  {
    head = prev_head();
    if ( head == -1 )
      break;
    v8 = get_flags_ex();
    if ( (~(_WORD)v8 & 0x600) != 0 || (v8 & 0x10000000) != 0 )
      break;
    v9 = get_byte();
    v10 = (unsigned __int8)*sub_4930(v9);
    if ( v10 == 55 )
    {
      a3 = 1;
      goto LABEL_16;
    }
    if ( v10 == 77 )
    {
LABEL_15:
      a3 = 2;
LABEL_16:
      a1 = head;
      goto LABEL_1;
    }
  }
  return 0xFFFFFFFFLL;
}

