__int64 __fastcall sub_83B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)result == 341 )
    goto LABEL_6;
  if ( (unsigned __int16)result <= 0x155u )
  {
    if ( (_WORD)result != 336 )
    {
      if ( (_WORD)result == 340 )
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 0;
        *(_WORD *)(a2 + 46) = (unsigned __int8)a3 >> 4;
      }
      return result;
    }
LABEL_6:
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    *(_QWORD *)(a2 + 48) = (a3 >> 4) & 0x1F;
    return result;
  }
  if ( (_WORD)result == 342 )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 0;
    result = (unsigned __int8)a3 >> 4;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 46) = result;
    *(_BYTE *)(a2 + 85) = 0;
    *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
  }
  return result;
}

