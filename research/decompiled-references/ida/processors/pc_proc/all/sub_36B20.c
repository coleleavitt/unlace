char __fastcall sub_36B20(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  int v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rsi
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // r13d
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  int v26; // eax
  unsigned int v27; // r8d
  __m128i si128; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+30h] [rbp-88h]

  if ( !*(_WORD *)(a2 + 26) || (*(_BYTE *)(a2 + 30) & 0x10) != 0 )
    return 0;
  if ( (unsigned __int8)get_fixups() && (unsigned __int8)get_fixup() )
  {
    remember_problem();
    return 0;
  }
  if ( (unsigned int)getinf() != 7
    && (unsigned int)getinf() != 8
    && (unsigned int)getinf() != 18
    && (unsigned int)getinf() != 25 )
  {
    if ( *(_BYTE *)(a2 + 32) == 34 )
      return 0;
    v7 = *(_DWORD *)(a2 + 28);
    v8 = *(unsigned __int16 *)(a2 + 24);
    v9 = v7 & 1;
    if ( (v7 & 1) == 0 )
      goto LABEL_21;
LABEL_9:
    if ( (unsigned __int16)v8 > 0x83u )
    {
      if ( (unsigned __int16)(v8 - 166) > 0x35u )
        return 0;
      v12 = 0x2D080000000001LL;
      if ( !_bittest64(&v12, (unsigned int)(v8 - 166)) )
        return 0;
      if ( !a3 )
      {
        v11 = v7 & 6;
        if ( (unsigned __int16)v8 <= 0xA7u )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
    else
    {
      if ( (unsigned __int16)v8 <= 0x81u )
      {
        if ( (unsigned __int16)v8 <= 0x2Cu )
        {
          if ( (unsigned __int16)v8 <= 4u )
            return 0;
          v10 = 0x10040000E0E0LL;
          if ( !_bittest64(&v10, v8) )
            return 0;
          if ( !a3 )
          {
LABEL_15:
            v11 = v7 & 6;
            goto LABEL_23;
          }
          v18 = v7 & 8;
          si128 = _mm_load_si128((const __m128i *)&xmmword_960A0);
          if ( (unsigned __int16)v8 <= 0x2Au )
          {
            if ( (unsigned __int16)v8 > 0x28u )
              goto LABEL_106;
LABEL_98:
            if ( (unsigned __int16)v8 <= 6u )
            {
              if ( (_WORD)v8 != 5 )
              {
                if ( (_WORD)v8 != 6 )
                  goto LABEL_68;
LABEL_88:
                if ( *(_BYTE *)(a2 + 41) == 1 )
                {
                  if ( *(_BYTE *)(a2 + 81) != 5 || *(_QWORD *)(a2 + 88) )
                    goto LABEL_68;
                  if ( !(unsigned __int8)get_fixup() )
                    return 0;
                }
              }
            }
            else
            {
              v25 = 1LL << v8;
              if ( ((1LL << v8) & 0x10000000300LL) != 0 )
                return 0;
              if ( (v25 & 0x8000080) == 0 )
              {
                if ( (v25 & 0x400010000LL) != 0 )
                {
                  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x4000000000100LL )
                    return 0;
                  goto LABEL_15;
                }
LABEL_68:
                if ( !v9 )
                  goto LABEL_69;
LABEL_106:
                v26 = getinf();
                if ( v26 == 18 || v26 == 25 || v26 == 11 && sub_36650() || v18 )
                  return 0;
                v7 = *(_DWORD *)(a2 + 28);
                goto LABEL_69;
              }
            }
LABEL_66:
            if ( *(_BYTE *)(a2 + 81) == 1
              && (unsigned __int8)(*(_BYTE *)(a2 + 41) - 3) <= 1u
              && ((unsigned __int8)sub_35ED0(*(unsigned __int16 *)(a2 + 86), *(unsigned __int16 *)(a2 + 46), v18 >> 3)
               || v18 && *(_BYTE *)(a2 + 72) && (unsigned __int8)sub_35ED0(v27, (unsigned int)*(char *)(a2 + 73), 1)) )
            {
              return 0;
            }
            v7 = *(_DWORD *)(a2 + 28);
            v9 = v7 & 1;
            goto LABEL_68;
          }
LABEL_64:
          v19 = (unsigned __int16)(v8 - 43);
          switch ( (int)v8 )
          {
            case 43:
            case 45:
            case 132:
            case 133:
              if ( v18 )
                return 0;
              v11 = v7 & 6;
              goto LABEL_24;
            case 44:
              if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x4000000000100LL )
                return 0;
              goto LABEL_44;
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
              v20 = getinf();
              if ( v20 != 18
                && v20 != 25
                && (v20 != 11 || !sub_36650())
                && (!v18
                 || (unsigned int)getinf() == 8
                 && (unsigned __int8)sub_62E40(
                                       a2,
                                       v19,
                                       v21,
                                       v22,
                                       v23,
                                       v24,
                                       0,
                                       si128.m128i_i64[0],
                                       si128.m128i_i64[1],
                                       0,
                                       0)) )
              {
                goto LABEL_81;
              }
              return 0;
            case 104:
            case 105:
            case 120:
            case 121:
            case 198:
            case 199:
            case 202:
            case 203:
              if ( v18 )
                return 0;
              v11 = v7 & 6;
              if ( (unsigned __int16)v8 > 0xA7u )
                goto LABEL_31;
              goto LABEL_24;
            case 122:
              if ( !sub_35C70(a2) )
                goto LABEL_66;
LABEL_81:
              v7 = *(_DWORD *)(a2 + 28);
              goto LABEL_70;
            case 124:
            case 125:
            case 126:
            case 131:
            case 214:
              goto LABEL_66;
            case 129:
            case 208:
            case 211:
            case 212:
            case 220:
            case 221:
            case 222:
              return 0;
            case 209:
            case 216:
              goto LABEL_88;
            case 223:
            case 224:
            case 227:
            case 228:
            case 257:
              if ( v18 )
                return 0;
              v11 = v7 & 6;
              break;
            default:
              goto LABEL_68;
          }
          goto LABEL_31;
        }
        if ( (_WORD)v8 != 128 )
          return 0;
        if ( a3 )
        {
          v18 = v7 & 8;
          goto LABEL_106;
        }
LABEL_44:
        v11 = v7 & 6;
        goto LABEL_38;
      }
      if ( !a3 )
        goto LABEL_44;
    }
    v18 = v7 & 8;
    si128 = _mm_load_si128((const __m128i *)&xmmword_960A0);
    goto LABEL_64;
  }
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = v7 & 1;
  if ( (v7 & 1) != 0 )
    goto LABEL_9;
LABEL_21:
  if ( !a3 )
    goto LABEL_22;
  v18 = v7 & 8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_960A0);
  if ( (unsigned __int16)v8 <= 0x101u )
  {
    if ( (unsigned __int16)v8 > 0x2Au )
      goto LABEL_64;
    if ( (unsigned __int16)v8 <= 0x28u )
      goto LABEL_98;
  }
LABEL_69:
  if ( (v7 & 0x380) != 0 )
    return 0;
LABEL_70:
  v8 = *(unsigned __int16 *)(a2 + 24);
LABEL_22:
  v11 = v7 & 6;
  if ( (unsigned __int16)v8 > 0xA7u )
  {
LABEL_29:
    LOWORD(v8) = v8 - 198;
    if ( (unsigned __int16)v8 > 0x3Bu )
      goto LABEL_38;
    v13 = 0x800000067C06433LL;
    if ( !_bittest64(&v13, v8) )
    {
      if ( (_WORD)v8 == 9 )
      {
LABEL_39:
        if ( (unsigned __int8)sub_36780(a1, a2, (unsigned __int8 *)(a2 + 40)) )
          return sub_36780(a1, a2, (unsigned __int8 *)(a2 + 80));
        return 0;
      }
      goto LABEL_38;
    }
LABEL_31:
    if ( !v11 )
    {
LABEL_32:
      v14 = getinf();
      switch ( v14 )
      {
        case 8:
          return 1;
        case 22:
          return *(_WORD *)(a2 + 24) == 47 || *(_WORD *)(a2 + 24) == 50;
        case 2:
          return 1;
      }
      get_loader_name();
      if ( v29 == 0x64616F6C707865LL )
        return 1;
    }
    return 0;
  }
LABEL_23:
  if ( (unsigned __int16)v8 > 7u )
  {
LABEL_24:
    switch ( (int)v8 )
    {
      case 8:
      case 9:
      case 40:
      case 47:
      case 49:
      case 50:
      case 51:
      case 104:
      case 105:
      case 120:
      case 121:
        goto LABEL_31;
      case 28:
      case 107:
      case 124:
      case 167:
        goto LABEL_39;
      case 43:
      case 132:
        if ( v11 )
          return 0;
        goto LABEL_46;
      case 45:
      case 133:
LABEL_46:
        v15 = getinf();
        v16 = v15;
        if ( v15 == 18 || v15 == 25 )
          return 0;
        result = 1;
        if ( v16 == 11 )
          return sub_36650() ^ 1;
        return result;
      case 46:
        if ( *(_QWORD *)(a2 + 48) <= 1u || v11 )
          return 0;
        if ( (v7 & 0x18) == 0 )
          return 1;
        v17 = getinf();
        if ( v17 == 11 )
          return *(_QWORD *)(a2 + 48) == 41;
        if ( v17 == 18 && *(_QWORD *)(a2 + 48) == 128 )
          return 1;
        goto LABEL_32;
      case 48:
        if ( a3 || (unsigned __int8)get_byte() == 0xCC )
          return 0;
        return (*(_WORD *)(a2 + 28) & 0x387) == 0;
      case 108:
      case 109:
      case 110:
      case 112:
      case 113:
      case 114:
      case 116:
      case 117:
      case 118:
        if ( *(_QWORD *)(a2 + 8) >= *(_QWORD *)(a2 + 56) )
          break;
        return 0;
      case 159:
      case 160:
        if ( *(_BYTE *)(a2 + 41) != 5 )
          return 1;
        return *(_QWORD *)(a2 + 48) <= 0x3FFu;
      default:
        break;
    }
  }
LABEL_38:
  if ( !v11 )
    goto LABEL_39;
  return 0;
}

