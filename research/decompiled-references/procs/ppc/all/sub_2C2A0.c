__int64 __fastcall sub_2C2A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  unsigned __int64 v5; // rax
  char v7; // dl
  int v8; // eax
  __int16 v9; // ax
  bool v10; // zf

  v3 = *(_WORD *)(a2 + 24);
  if ( v3 != 2290 )
  {
    switch ( v3 )
    {
      case 2307:
        switch ( *(_QWORD *)(a2 + 128) )
        {
          case 0LL:
            break;
          case 1LL:
            *(_WORD *)(a2 + 24) = 2308;
            break;
          case 6LL:
            *(_WORD *)(a2 + 24) = 2342;
            goto LABEL_18;
          case 7LL:
            *(_WORD *)(a2 + 24) = 2343;
            goto LABEL_18;
          case 8LL:
            *(_WORD *)(a2 + 24) = 2345;
            goto LABEL_18;
          case 9LL:
            *(_WORD *)(a2 + 24) = 2346;
            goto LABEL_18;
          case 0xALL:
            *(_WORD *)(a2 + 24) = 2347;
            goto LABEL_18;
          case 0x10LL:
            *(_WORD *)(a2 + 24) = 2323;
            goto LABEL_18;
          case 0x11LL:
            *(_WORD *)(a2 + 24) = 2325;
            goto LABEL_18;
          case 0x18LL:
            *(_WORD *)(a2 + 24) = 2324;
            goto LABEL_18;
          case 0x19LL:
            *(_WORD *)(a2 + 24) = 2326;
            goto LABEL_18;
          case 0x1ALL:
            *(_WORD *)(a2 + 24) = 2327;
            goto LABEL_18;
          case 0x1BLL:
            *(_WORD *)(a2 + 24) = 3325;
            goto LABEL_18;
          case 0x1CLL:
            *(_WORD *)(a2 + 24) = 2315;
            goto LABEL_18;
          case 0x1DLL:
            *(_WORD *)(a2 + 24) = 2316;
            goto LABEL_18;
          case 0x1ELL:
            *(_WORD *)(a2 + 24) = 2317;
            goto LABEL_18;
          case 0x1FLL:
            *(_WORD *)(a2 + 24) = 2318;
            goto LABEL_18;
          default:
            return 0;
        }
        *(_WORD *)(a2 + 46) -= 88;
        goto LABEL_18;
      case 2381:
        switch ( *(_QWORD *)(a2 + 128) )
        {
          case 0LL:
            *(_WORD *)(a2 + 24) = 3377;
            goto LABEL_12;
          case 1LL:
            *(_WORD *)(a2 + 24) = 2386;
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          case 2LL:
            *(_WORD *)(a2 + 24) = 2388;
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          case 3LL:
            *(_WORD *)(a2 + 24) = 3379;
            goto LABEL_12;
          case 8LL:
            *(_WORD *)(a2 + 24) = 3376;
            goto LABEL_12;
          case 9LL:
            *(_WORD *)(a2 + 24) = 2384;
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          case 0xALL:
            *(_WORD *)(a2 + 24) = 2387;
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          case 0xBLL:
            *(_WORD *)(a2 + 24) = 3378;
LABEL_12:
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              return 0;
            goto LABEL_18;
          case 0x11LL:
            *(_WORD *)(a2 + 24) = 2385;
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          case 0x14LL:
            *(_WORD *)(a2 + 24) = 2382;
            if ( (a3 & 1) != 0 )
LABEL_62:
              *(_DWORD *)(a2 + 28) |= 1u;
            goto LABEL_18;
          case 0x16LL:
LABEL_17:
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          case 0x19LL:
            *(_WORD *)(a2 + 24) = 2383;
            if ( (a3 & 1) == 0 )
              goto LABEL_18;
            return 0;
          default:
            return 0;
        }
      case 2375:
        switch ( *(_QWORD *)(a2 + 128) )
        {
          case 0LL:
            goto LABEL_17;
          case 2LL:
            *(_WORD *)(a2 + 24) = 2400;
            goto LABEL_17;
          case 8LL:
            *(_WORD *)(a2 + 24) = 2394;
            goto LABEL_17;
          case 0x10LL:
            *(_WORD *)(a2 + 24) = 2395;
            goto LABEL_17;
          case 0x12LL:
            *(_WORD *)(a2 + 24) = 2401;
            goto LABEL_17;
          case 0x1BLL:
            *(_WORD *)(a2 + 24) = 2398;
            if ( (a3 & 1) != 0 )
              goto LABEL_62;
            goto LABEL_18;
          default:
            return 0;
        }
    }
    if ( v3 != 2425 )
    {
      if ( v3 == 2429 )
      {
        switch ( *(_QWORD *)(a2 + 128) )
        {
          case 0LL:
            goto LABEL_18;
          case 1LL:
            *(_WORD *)(a2 + 24) = 2431;
            goto LABEL_18;
          case 2LL:
            *(_BYTE *)(a2 + 41) = 11;
            *(_WORD *)(a2 + 24) = 3413;
            *(_BYTE *)(a2 + 45) = 0;
            *(_WORD *)(a2 + 46) = (a3 >> 23) & 7;
            goto LABEL_12;
          case 7LL:
            *(_WORD *)(a2 + 24) = 2434;
            goto LABEL_18;
          case 8LL:
            *(_WORD *)(a2 + 24) = 2430;
            goto LABEL_18;
          case 9LL:
            *(_WORD *)(a2 + 24) = 2432;
            goto LABEL_18;
          case 0xFLL:
            *(_WORD *)(a2 + 24) = 2436;
            goto LABEL_18;
          case 0x10LL:
            *(_WORD *)(a2 + 24) = 3387;
            goto LABEL_12;
          case 0x11LL:
            *(_WORD *)(a2 + 24) = 3388;
            goto LABEL_12;
          case 0x17LL:
            *(_WORD *)(a2 + 24) = 2433;
            goto LABEL_18;
          case 0x18LL:
            *(_WORD *)(a2 + 24) = 2437;
            goto LABEL_18;
          case 0x19LL:
            *(_WORD *)(a2 + 24) = 2438;
            goto LABEL_18;
          case 0x1FLL:
            *(_WORD *)(a2 + 24) = 2435;
            goto LABEL_18;
          default:
            return 0;
        }
      }
      if ( v3 != 126 )
      {
        if ( v3 != 223 )
          return 1;
        v9 = *(_WORD *)(a2 + 46);
        if ( (v9 & 0xFFEF) == 0 )
        {
          if ( v9 == 16 )
            *(_WORD *)(a2 + 24) = 2496;
          *(_BYTE *)(a2 + 44) &= ~8u;
          return 1;
        }
        return 0;
      }
      switch ( *(_QWORD *)(a2 + 128) )
      {
        case 0LL:
          if ( (a3 & 0xF800) != 0 )
            return 0;
          if ( (a3 & 1) != 0 )
            *(_DWORD *)(a2 + 28) |= 2u;
          goto LABEL_18;
        case 1LL:
          if ( (a3 & 0xF801) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 2442;
          goto LABEL_18;
        case 0x14LL:
          if ( (a3 & 1) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 2443;
          goto LABEL_101;
        case 0x15LL:
          if ( (a3 & 0xC001) != 0 )
            return 0;
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 24) = 2444;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 88) = (a3 >> 11) & 7;
          goto LABEL_18;
        case 0x16LL:
          if ( (a3 & 1) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 2445;
LABEL_101:
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 4;
          *(_WORD *)(a2 + 86) = ((unsigned __int16)a3 >> 11) + 35;
          break;
        case 0x17LL:
          if ( (a3 & 0xE001) != 0 )
            return 0;
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 24) = 2446;
          *(_BYTE *)(a2 + 85) = 0;
          *(_QWORD *)(a2 + 88) = (a3 >> 11) & 3;
          break;
        case 0x18LL:
          if ( (a3 & 0xF801) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 2447;
          break;
        default:
          return 0;
      }
      goto LABEL_18;
    }
    v5 = *(_QWORD *)(a2 + 128);
    if ( v5 == 16 )
    {
      *(_WORD *)(a2 + 24) = 2428;
    }
    else
    {
      if ( v5 <= 0x10 )
      {
        if ( !v5 )
        {
LABEL_25:
          v7 = 2;
          v8 = (a3 >> 21) & 0x1F;
LABEL_26:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = v7;
          *(_WORD *)(a2 + 46) = v8;
LABEL_18:
          *(_BYTE *)(a2 + 124) &= ~8u;
          return 1;
        }
        if ( v5 == 1 )
        {
          *(_WORD *)(a2 + 24) = 2426;
          goto LABEL_25;
        }
        return 0;
      }
      if ( v5 != 17 )
        return 0;
      *(_WORD *)(a2 + 24) = 2427;
    }
    v8 = (a3 >> 21) & 0x1F | (32 * (_BYTE)a3) & 0x20;
    v7 = 8;
    LOWORD(v8) = v8 + 216;
    goto LABEL_26;
  }
  switch ( *(_QWORD *)(a2 + 168) )
  {
    case 0LL:
      v10 = *(_QWORD *)(a2 + 128) == 0;
      *(_WORD *)(a2 + 24) = 2294;
      if ( v10 )
        goto LABEL_18;
      result = 0;
      break;
    case 2LL:
      *(_WORD *)(a2 + 24) = 2295;
      return 1;
    case 4LL:
      *(_WORD *)(a2 + 24) = 2293;
      return 1;
    case 5LL:
      v10 = *(_QWORD *)(a2 + 128) == 0;
      *(_WORD *)(a2 + 24) = 2292;
      if ( v10 )
        goto LABEL_18;
      result = 0;
      break;
    case 6LL:
      *(_WORD *)(a2 + 24) = 2291;
      return 1;
    case 7LL:
      return 1;
    case 0x1FLL:
      *(_WORD *)(a2 + 24) = 2296;
      return 1;
    default:
      return 0;
  }
  return result;
}
