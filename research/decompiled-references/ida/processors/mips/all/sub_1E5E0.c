unsigned __int8 __fastcall sub_1E5E0(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 result; // al
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 260) != 2 )
  {
    result = a3 ^ 1;
    if ( (_WORD)a2 != 203 )
    {
      if ( (unsigned __int16)a2 <= 0xCBu )
      {
        v5 = (unsigned int)(a2 - 99);
        if ( (unsigned __int16)v5 > 0x13u )
        {
          return 0;
        }
        else
        {
          v6 = 819971;
          return _bittest64(&v6, v5);
        }
      }
      else if ( (_WORD)a2 == 517 )
      {
        return 1;
      }
      else
      {
        LOWORD(a2) = a2 - 821;
        result = 0;
        if ( (unsigned __int16)a2 <= 0xFu )
        {
          v4 = 54273;
          return _bittest64(&v4, a2);
        }
      }
    }
  }
  return result;
}

