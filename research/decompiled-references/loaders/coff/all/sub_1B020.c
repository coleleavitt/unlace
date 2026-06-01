unsigned __int64 __fastcall sub_1B020(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdx

  v7 = a4;
  sub_178B0(a1, a2, a3, (unsigned __int16)a4, a5, a6);
  result = (unsigned __int64)off_22C28;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = off_22C28;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  if ( (unsigned __int16)v7 > 0x1C4u )
  {
    if ( (_WORD)v7 == 3772 )
    {
      *(_QWORD *)(a1 + 104) = sub_19770;
      return (unsigned __int64)sub_19770;
    }
    else if ( (unsigned __int16)v7 > 0xEBCu )
    {
      switch ( (_WORD)v7 )
      {
        case 0x8664:
          *(_QWORD *)(a1 + 104) = sub_197D0;
          return (unsigned __int64)sub_197D0;
        case 0xAA64:
          *(_QWORD *)(a1 + 104) = sub_19920;
          return (unsigned __int64)sub_19920;
        case 0x521C:
          *(_QWORD *)(a1 + 104) = sub_19910;
          return (unsigned __int64)sub_19910;
      }
    }
    else if ( (unsigned __int16)v7 > 0x1F7u )
    {
      if ( (_WORD)v7 == 2560 )
      {
        *(_QWORD *)(a1 + 104) = sub_1A540;
        return (unsigned __int64)sub_1A540;
      }
    }
    else if ( (unsigned __int16)v7 > 0x1D7u )
    {
      result = 1LL << ((unsigned __int8)v7 + 40);
      if ( (result & 0x80A1) != 0 )
      {
        *(_QWORD *)(a1 + 104) = sub_1AA80;
        return (unsigned __int64)sub_1AA80;
      }
      else if ( (result & 0x7000000) != 0 )
      {
        *(_QWORD *)(a1 + 104) = sub_1AC70;
        return (unsigned __int64)sub_1AC70;
      }
      else if ( (result & 0x80800000) != 0 )
      {
        *(_QWORD *)(a1 + 104) = sub_1AA90;
        return (unsigned __int64)sub_1AA90;
      }
    }
  }
  else if ( (unsigned __int16)v7 > 0x1BFu )
  {
    LOWORD(v7) = v7 - 448;
    result = 21;
    if ( _bittest64((const __int64 *)&result, v7) )
    {
      *(_QWORD *)(a1 + 104) = sub_1A630;
      return (unsigned __int64)sub_1A630;
    }
  }
  else
  {
    if ( (unsigned __int16)v7 > 0x185u )
      return result;
    if ( (unsigned __int16)v7 <= 0x14Bu )
    {
      if ( (_WORD)v7 == 147 || (unsigned __int16)(v7 - 193) <= 1u )
      {
        result = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 24LL);
        if ( (unsigned int)result > 0x36 )
        {
          if ( (_DWORD)result == 470 || (_DWORD)result == 55 )
          {
            *(_QWORD *)(a1 + 104) = sub_1A8C0;
            return (unsigned __int64)sub_1A8C0;
          }
        }
        else
        {
          v9 = 0xFFBFFFFFEFFFFFF7LL;
          if ( !_bittest64((const __int64 *)&v9, result) )
            return result;
        }
LABEL_26:
        *(_QWORD *)(a1 + 104) = sub_19A50;
        return (unsigned __int64)sub_19A50;
      }
    }
    else
    {
      LOWORD(v7) = v7 - 332;
      switch ( v7 )
      {
        case 0uLL:
          result = (unsigned __int64)sub_1A820;
          *(_QWORD *)(a1 + 104) = sub_1A820;
          return result;
        case 4uLL:
          goto LABEL_26;
        case 0x14uLL:
          if ( !a5 )
            goto LABEL_7;
          return result;
        case 0x15uLL:
LABEL_7:
          result = (unsigned __int64)sub_19980;
          *(_QWORD *)(a1 + 104) = sub_19980;
          break;
        case 0x1AuLL:
          result = (unsigned __int64)sub_1A210;
          *(_QWORD *)(a1 + 104) = sub_1A210;
          break;
        case 0x37uLL:
        case 0x39uLL:
          result = (unsigned __int64)sub_199D0;
          *(_QWORD *)(a1 + 104) = sub_199D0;
          break;
        case 0x38uLL:
          result = (unsigned __int64)sub_1AF00;
          *(_QWORD *)(a1 + 104) = sub_1AF00;
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
