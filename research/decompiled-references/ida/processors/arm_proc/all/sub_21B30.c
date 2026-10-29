char __fastcall sub_21B30(__int64 a1)
{
  unsigned __int16 v1; // cx
  __int64 v2; // rax

  v1 = *(_WORD *)(a1 + 24);
  if ( v1 > 0x51u )
  {
    if ( v1 > 0x113u )
    {
      LOBYTE(v2) = v1 == 288 || v1 == 471;
      return v2;
    }
    if ( v1 <= 0x111u )
    {
      LOBYTE(v2) = v1 == 166 || v1 == 184;
      return v2;
    }
    goto LABEL_17;
  }
  if ( v1 > 0x28u )
  {
    switch ( *(_WORD *)(a1 + 24) )
    {
      case ')':
      case '.':
      case '/':
        goto LABEL_17;
      case '*':
        v2 = (*(_QWORD *)(a1 + 64) >> 15) & 1LL;
        break;
      case ',':
      case 'P':
      case 'Q':
        goto LABEL_13;
      default:
        goto LABEL_9;
    }
  }
  else
  {
    if ( (unsigned __int16)(v1 - 1) > 0x20u )
      goto LABEL_9;
    if ( ((1LL << v1) & 0x2805000) == 0 )
    {
      if ( ((1LL << v1) & 0x8000000A) == 0 )
      {
        if ( v1 == 33 )
          return (*(_QWORD *)(a1 + 104) >> 15) & 1LL;
LABEL_9:
        LOBYTE(v2) = 0;
        return v2;
      }
LABEL_17:
      LOBYTE(v2) = 1;
      return v2;
    }
LABEL_13:
    LOBYTE(v2) = 0;
    if ( *(_BYTE *)(a1 + 41) == 1 )
      LOBYTE(v2) = *(_WORD *)(a1 + 46) == 15;
  }
  return v2;
}

