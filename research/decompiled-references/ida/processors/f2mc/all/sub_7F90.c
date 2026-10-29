__int64 __fastcall sub_7F90(unsigned int a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  ++a2[32];
  *((_WORD *)a2 + 3) = a1 + 13;
  a2[1] = 3;
  a2[5] = 2;
  if ( a1 > 7 )
    goto LABEL_6;
  v3 = 1LL << a1;
  if ( ((1LL << a1) & 0x33) != 0 )
  {
    *(_BYTE *)(a3 + 32) = 26;
    result = *a2;
    *(_BYTE *)(a3 + 28) = result;
  }
  else
  {
    if ( (v3 & 0x44) == 0 )
    {
      if ( (v3 & 0x88) != 0 )
        *(_BYTE *)(a3 + 32) = 34;
LABEL_6:
      result = *a2;
      *(_BYTE *)(a3 + 28) = result;
      return result;
    }
    *(_BYTE *)(a3 + 32) = 27;
    result = *a2;
    *(_BYTE *)(a3 + 28) = result;
  }
  return result;
}

