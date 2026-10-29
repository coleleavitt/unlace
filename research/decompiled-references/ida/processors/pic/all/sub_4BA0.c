__int64 __fastcall sub_4BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // kr10_8
  __int64 result; // rax

  LODWORD(result) = *(unsigned __int16 *)(a2 + 24) - 11;
  v2 = (unsigned int)result;
  result = (unsigned __int16)result;
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 0xB:
      result = 39;
      if ( !*(_WORD *)(a2 + 86) )
        result = 38;
      *(_WORD *)(a2 + 24) = result;
      *(_BYTE *)(a2 + 81) = 0;
      return result;
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
      return result;
    case 0x13:
      result = sub_5E80();
      if ( (_BYTE)result )
      {
        result = *(_QWORD *)(a2 + 88);
        switch ( result )
        {
          case 1LL:
            result = 43;
            goto LABEL_7;
          case 2LL:
            result = 44;
            goto LABEL_7;
          case 0LL:
            result = 42;
            goto LABEL_7;
        }
      }
      return result;
    case 0x14:
      result = sub_5E80();
      if ( (_BYTE)result )
      {
        result = *(_QWORD *)(a2 + 88);
        switch ( result )
        {
          case 1LL:
            result = 46;
            goto LABEL_7;
          case 2LL:
            result = 47;
            goto LABEL_7;
          case 0LL:
            result = 45;
            goto LABEL_7;
        }
      }
      return result;
    case 0x15:
      result = sub_5E80();
      if ( (_BYTE)result )
      {
        result = *(_QWORD *)(a2 + 88);
        switch ( result )
        {
          case 1LL:
            result = 51;
            goto LABEL_7;
          case 2LL:
            result = 52;
            goto LABEL_7;
          case 0LL:
            result = 50;
            goto LABEL_7;
        }
      }
      return result;
    case 0x16:
      result = sub_5E80();
      if ( !(_BYTE)result )
        return result;
      result = *(_QWORD *)(a2 + 88);
      if ( result == 1 )
      {
        result = 49;
      }
      else if ( result == 2 )
      {
        result = 53;
      }
      else
      {
        if ( result )
          return result;
        result = 48;
      }
LABEL_7:
      *(_WORD *)(a2 + 24) = result;
      *(_BYTE *)(a2 + 41) = 0;
      *(_BYTE *)(a2 + 81) = 0;
      return result;
    case 0x1B:
      *(_WORD *)(a2 + 24) = 41;
      return 41;
    default:
      return v2;
  }
}

