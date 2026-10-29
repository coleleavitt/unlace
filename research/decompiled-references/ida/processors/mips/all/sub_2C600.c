__int64 __fastcall sub_2C600(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 result; // rax
  __int64 v4; // rsi
  char v5; // bl
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+10h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = *(_WORD *)(a2 + 24);
  if ( v2 > 0x21u )
  {
    switch ( v2 )
    {
      case 0x221u:
        return *(_QWORD *)(a2 + 88);
      case 0x342u:
        return *(_QWORD *)(a2 + 48);
      case 0x220u:
        return -*(_QWORD *)(a2 + 88);
    }
    return 0;
  }
  if ( v2 <= 1u )
    return 0;
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 2:
    case 5:
      v5 = 0;
      goto LABEL_19;
    case 7:
    case 0xD:
      v5 = 1;
LABEL_19:
      if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 29 )
        return 0;
      v6 = a2 + 40;
      if ( !*(_BYTE *)(a2 + 121) )
        goto LABEL_22;
      if ( *(_WORD *)(a2 + 86) != 29 )
        return 0;
      v6 = a2 + 80;
LABEL_22:
      if ( !(unsigned __int8)sub_48730(a1, v7, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(v6 + 46)) )
        return 0;
      result = v7[0];
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        result = SLODWORD(v7[0]);
      if ( v5 )
        return -result;
      return result;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
      if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 29 )
        return 0;
      if ( *(_BYTE *)(a2 + 121) )
      {
        if ( *(_WORD *)(a2 + 86) != 29 )
          return 0;
        v4 = a2 + 80;
      }
      else
      {
        v4 = a2 + 40;
      }
      result = *(_QWORD *)(v4 + 48);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        result = (int)result;
      break;
    default:
      return 0;
  }
  return result;
}

