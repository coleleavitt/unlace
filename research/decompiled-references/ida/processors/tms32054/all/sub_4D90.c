__int64 __fastcall sub_4D90(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 result; // rax
  __int16 v4; // dx

  result = (unsigned int)a2 + 1;
  if ( (a3 & 8) != 0 )
  {
    if ( (int)result > 3 )
    {
      *(_WORD *)(a1 + 28) = 9985;
      return 9985;
    }
    else
    {
      result = a1 + 40LL * a2;
      *(_BYTE *)(result + 41) = 1;
      *(_BYTE *)(result + 45) = 0;
      *(_WORD *)(result + 46) = 39;
    }
  }
  else
  {
    v4 = (a3 & 0xF) + 31;
    if ( (int)result > 3 )
    {
      *(_BYTE *)(a1 + 28) = 1;
      *(_BYTE *)(a1 + 29) = v4;
    }
    else
    {
      result = a1 + 40LL * a2;
      *(_BYTE *)(result + 41) = 1;
      *(_BYTE *)(result + 45) = 0;
      *(_WORD *)(result + 46) = v4;
    }
  }
  return result;
}

