__int64 __fastcall sub_2A3E0(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 48);
  result = 0;
  if ( v3 == 31
    && *(_BYTE *)(a1 + 81) == 1
    && *(_BYTE *)(a1 + 121) == 1
    && !*(_WORD *)(a1 + 86)
    && !*(_WORD *)(a1 + 126) )
  {
    *(_WORD *)(a1 + 24) = a3;
    *(_BYTE *)(a1 + 121) = 0;
    *(_BYTE *)(a1 + 81) = 0;
    *(_BYTE *)(a1 + 41) = 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = byte_6ABB0[result];
      if ( v3 == v5 )
        break;
      if ( ++result == 11 )
        return result;
    }
    if ( (_BYTE)v5 == 31 )
    {
      result = *(unsigned __int16 *)(a1 + 24);
      if ( (_WORD)result == 224 )
      {
        *(_WORD *)(a1 + 24) = 2081;
      }
      else if ( (unsigned __int16)result > 0xE0u )
      {
        if ( (_WORD)result == 225 )
          *(_WORD *)(a1 + 24) = 2080;
      }
      else if ( (_WORD)result == 219 )
      {
        result = 2079;
        *(_WORD *)(a1 + 24) = 2079;
      }
      else if ( (_WORD)result == 220 )
      {
        *(_WORD *)(a1 + 24) = 2078;
      }
    }
    else
    {
      *(_WORD *)(a1 + 24) = result + a2;
    }
    *(_BYTE *)(a1 + 44) &= ~8u;
    *(_DWORD *)(a1 + 28) &= ~0x400u;
  }
  return result;
}
