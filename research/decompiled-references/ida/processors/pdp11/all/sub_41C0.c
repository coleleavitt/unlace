__int64 __fastcall sub_41C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 81) )
  {
    result = a2 + 80;
    if ( a3 == a2 + 80 )
    {
      result = *(unsigned __int8 *)(a2 + 28);
      if ( *(_BYTE *)(a2 + 41) == 5 && *(_WORD *)(a2 + 24) == 48 )
      {
        if ( !(_BYTE)result )
        {
          if ( !a4 )
          {
            result = *(_QWORD *)(a2 + 48);
            *(_WORD *)(a1 + 144) = result;
            return result;
          }
          goto LABEL_3;
        }
        result = *(_QWORD *)(a2 + 48);
        if ( a4 )
          *(_BYTE *)(a1 + 145) = result;
        else
          *(_BYTE *)(a1 + 144) = result;
      }
      else
      {
        if ( !(_BYTE)result )
          goto LABEL_3;
        if ( a4 )
          *(_BYTE *)(a1 + 145) = -1;
        else
          *(_BYTE *)(a1 + 144) = -1;
      }
    }
  }
  else
  {
    if ( *(_WORD *)(a2 + 24) != 32 )
    {
LABEL_3:
      result = 0xFFFFFFFFLL;
      *(_WORD *)(a1 + 144) = -1;
      return result;
    }
    result = *(unsigned __int8 *)(a2 + 28);
    if ( a4 )
    {
      if ( (_BYTE)result )
      {
        *(_BYTE *)(a1 + 145) = 0;
        return result;
      }
      goto LABEL_3;
    }
    if ( (_BYTE)result )
      *(_BYTE *)(a1 + 144) = 0;
    else
      *(_WORD *)(a1 + 144) = 0;
  }
  return result;
}

