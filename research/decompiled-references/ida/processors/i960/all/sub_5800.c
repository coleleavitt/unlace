__int64 __fastcall sub_5800(__int64 a1, char a2, unsigned __int8 a3, int a4, char a5)
{
  __int64 result; // rax

  result = a1;
  if ( a5 )
  {
    if ( a2 )
    {
      if ( a4 == 2 )
      {
        *(_BYTE *)(a1 + 1) = 1;
        *(_BYTE *)(a1 + 5) = 2;
        *(_WORD *)(a1 + 6) = 70;
      }
      else if ( a4 > 2 )
      {
        if ( a4 == 3 )
        {
          *(_BYTE *)(a1 + 1) = 1;
          *(_BYTE *)(a1 + 5) = 2;
          *(_WORD *)(a1 + 6) = 71;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 1) = 1;
        *(_BYTE *)(a1 + 5) = 2;
        if ( a4 )
          *(_WORD *)(a1 + 6) = 69;
        else
          *(_WORD *)(a1 + 6) = 68;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)(a1 + 5) = 2;
      *(_WORD *)(a1 + 6) = a4;
    }
  }
  else if ( a2 )
  {
    *(_BYTE *)(a1 + 1) = 5;
    *(_BYTE *)(a1 + 5) = 2;
    *(_QWORD *)(a1 + 8) = a4;
  }
  else
  {
    *(_BYTE *)(a1 + 1) = 1;
    *(_BYTE *)(a1 + 5) = 2;
    *(_WORD *)(a1 + 6) = a4 + 32 * a3;
  }
  return result;
}

