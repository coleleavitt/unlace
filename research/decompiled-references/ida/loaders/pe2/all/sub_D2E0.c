__int64 __fastcall sub_D2E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  const char *v4; // rsi
  __int64 v5; // rax
  __int16 v6; // bp

  if ( byte_379E1 )
    return 1;
  *(_DWORD *)(a1 + 8) &= ~0x20u;
  if ( (*(_BYTE *)(a2 + 23) & 0x20) == 0 )
  {
    v3 = (unsigned __int8)byte_379C0;
    if ( !byte_379C0 )
      goto LABEL_4;
LABEL_5:
    v4 = (_BYTE *)(&dword_0 + 1);
    set_processor_type();
    v5 = *(unsigned __int16 *)(a2 + 4);
    v6 = *(_WORD *)(a2 + 24);
    if ( (unsigned __int16)v5 <= 0x1F1u )
    {
      if ( (unsigned __int16)v5 <= 0x1EFu )
      {
        if ( (unsigned __int16)v5 > 0x184u )
        {
          if ( (v5 & 0xFFFD) == 0x1C0 || (_WORD)v5 == 452 )
          {
            v4 = &byte_4;
            set_compiler();
            if ( *(_WORD *)(a2 + 4) == 452 )
            {
              v4 = "ARMv7";
              sub_D220();
            }
            if ( (unsigned __int16)(*(_WORD *)(a2 + 92) - 10) <= 3u )
            {
              v4 = "ARMv7";
            }
            else
            {
              if ( *(_WORD *)(a2 + 4) != 450 )
                goto LABEL_26;
              v4 = "ARMv6T2";
            }
            sub_D220();
          }
        }
        else if ( (unsigned __int16)v5 > 0x14Bu )
        {
          LOWORD(v5) = v5 - 332;
          switch ( v5 )
          {
            case 0LL:
            case 1LL:
            case 2LL:
              byte_379E4 = *(_WORD *)(a2 + 92) == 7;
              if ( (unsigned __int8)is_debugger_on() )
                goto LABEL_34;
              goto LABEL_27;
            case 22LL:
            case 23LL:
            case 26LL:
            case 29LL:
              goto LABEL_38;
            case 28LL:
              if ( v6 != 523 )
              {
                if ( !(unsigned __int8)is_debugger_on() )
                  goto LABEL_17;
                goto LABEL_43;
              }
              if ( (unsigned __int8)is_debugger_on() )
                goto LABEL_43;
              break;
            case 56LL:
              goto LABEL_44;
            default:
              goto LABEL_26;
          }
          goto LABEL_50;
        }
LABEL_26:
        if ( !(unsigned __int8)is_debugger_on() )
          goto LABEL_27;
        goto LABEL_34;
      }
      if ( !(unsigned __int8)is_debugger_on() )
      {
        if ( v6 == 523 )
        {
LABEL_50:
          setinf_flag();
          goto LABEL_18;
        }
        goto LABEL_17;
      }
LABEL_43:
      sub_70E0((__int64)"Loading as is for debugging...\n", 1);
      goto LABEL_18;
    }
    if ( (_WORD)v5 == 2560 )
    {
      byte_379E2 = 1;
      if ( !(unsigned __int8)is_debugger_on() )
      {
LABEL_27:
        if ( v6 != 523 )
        {
          setinf_flag();
          setinf_flag();
          return 1;
        }
LABEL_32:
        setinf_flag();
        return 1;
      }
LABEL_34:
      sub_70E0((__int64)"Loading as is for debugging...\n", v4);
      return 1;
    }
    if ( (unsigned __int16)v5 > 0xA00u )
    {
      if ( (_WORD)v5 == 0x8664 || (_WORD)v5 == 0xAA64 )
      {
        byte_379E4 = *(_WORD *)(a2 + 92) == 7;
        if ( !(unsigned __int8)is_debugger_on() )
          goto LABEL_32;
        goto LABEL_34;
      }
      goto LABEL_26;
    }
    if ( (_WORD)v5 != 614 )
    {
      if ( (unsigned __int16)v5 <= 0x266u )
      {
        if ( (_WORD)v5 != 498 )
          goto LABEL_26;
        if ( (unsigned __int8)is_debugger_on() )
          goto LABEL_43;
        if ( v6 == 523 )
          goto LABEL_50;
        goto LABEL_17;
      }
      if ( (_WORD)v5 == 644 )
      {
LABEL_44:
        if ( !(unsigned __int8)is_debugger_on() )
          goto LABEL_32;
        goto LABEL_34;
      }
      if ( (unsigned __int16)v5 <= 0x283u || (((_WORD)v5 - 870) & 0xFEFF) != 0 )
        goto LABEL_26;
    }
LABEL_38:
    if ( (unsigned __int8)is_debugger_on() )
      goto LABEL_43;
    if ( v6 == 523 )
      goto LABEL_50;
LABEL_17:
    setinf_flag();
    setinf_flag();
LABEL_18:
    set_compiler();
    return 1;
  }
  getinf();
  setinf();
  v3 = (unsigned __int8)byte_379C0;
  if ( byte_379C0 )
    goto LABEL_5;
LABEL_4:
  if ( sub_7780(*(unsigned __int16 *)(a2 + 4)) )
    goto LABEL_5;
  return v3;
}

