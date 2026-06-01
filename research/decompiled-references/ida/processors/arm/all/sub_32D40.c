char __fastcall sub_32D40(__int64 a1)
{
  unsigned __int16 v1; // cx
  __int64 v2; // rax

  v1 = *(_WORD *)(a1 + 24);
  if ( v1 <= 0x21u )
  {
    if ( v1 <= 3u )
    {
      if ( v1 != 1 )
      {
        if ( v1 == 3 )
        {
          LOBYTE(v2) = *(_QWORD *)(a1 + 56) + 16LL * *(_QWORD *)a1 != *(_QWORD *)(a1 + 16)
                                                                    + *(unsigned __int16 *)(a1 + 26);
          return v2;
        }
        goto LABEL_6;
      }
    }
    else
    {
      if ( ((1LL << v1) & 0x2805000) != 0 )
      {
LABEL_14:
        LOBYTE(v2) = *(_WORD *)(a1 + 46) == 15;
        return v2;
      }
      if ( ((1LL << v1) & 0x80000010) == 0 )
      {
        if ( v1 == 33 )
          return (*(_QWORD *)(a1 + 104) >> 15) & 1LL;
        goto LABEL_6;
      }
    }
LABEL_15:
    LOBYTE(v2) = 1;
    return v2;
  }
  if ( v1 > 0x51u )
  {
    if ( v1 > 0x113u )
      LOBYTE(v2) = (unsigned __int16)(v1 - 470) <= 1u;
    else
      LOBYTE(v2) = v1 > 0x111u;
  }
  else
  {
    if ( v1 <= 0x28u )
    {
LABEL_6:
      LOBYTE(v2) = 0;
      return v2;
    }
    switch ( *(_WORD *)(a1 + 24) )
    {
      case ')':
      case '.':
      case '/':
        goto LABEL_15;
      case '*':
        v2 = (*(_QWORD *)(a1 + 64) >> 15) & 1LL;
        break;
      case ',':
      case 'P':
      case 'Q':
        goto LABEL_14;
      default:
        goto LABEL_6;
    }
  }
  return v2;
}
