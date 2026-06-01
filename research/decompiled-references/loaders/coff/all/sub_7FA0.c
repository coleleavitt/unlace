__int64 __fastcall sub_7FA0(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  void *v4; // rax

  v2 = *a1;
  result = 64;
  if ( (((_WORD)v2 - 387) & 0xFFFD) != 0 )
  {
    result = 40;
    if ( (_WORD)v2 != 21020 )
    {
      result = 48;
      if ( (_WORD)v2 != 194 )
      {
        if ( a2 || (result = 44, (unsigned __int16)(v2 - 352) > 1u) )
        {
          LOWORD(v2) = v2 - 487;
          result = 40;
          if ( (unsigned __int16)v2 <= 0x10u )
          {
            v4 = &loc_10101;
            return _bittest64((const __int64 *)&v4, v2) == 0 ? 40 : 72;
          }
        }
      }
    }
  }
  return result;
}
