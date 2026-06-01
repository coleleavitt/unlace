__int64 __fastcall sub_7C40(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v3; // cx
  __int64 result; // rax

  v3 = *(_WORD *)(a2 + 24);
  result = (a3 >> 8) & 0xF;
  if ( v3 == 101 )
  {
    LOBYTE(result) = a3 & 0x10 | BYTE1(a3) & 0xF;
    goto LABEL_16;
  }
  if ( v3 <= 0x65u )
  {
    if ( v3 == 83 )
      goto LABEL_16;
    if ( v3 == 84 )
    {
      result = BYTE1(a3) & 0xF;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_WORD *)(a2 + 46) = (unsigned __int8)a3 >> 4;
      *(_BYTE *)(a2 + 81) = 5;
      *(_BYTE *)(a2 + 85) = 0;
      *(_QWORD *)(a2 + 88) = (unsigned __int8)result;
    }
  }
  else
  {
    if ( v3 != 334 )
    {
      if ( v3 > 0x14Eu || v3 != 108 && v3 != 171 )
        return result;
LABEL_16:
      result = (unsigned __int8)result;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 0;
      *(_QWORD *)(a2 + 48) = (unsigned __int8)result;
      return result;
    }
    *(_BYTE *)(a2 + 41) = 5;
    LOBYTE(result) = (unsigned __int8)a3 >> 4;
    *(_BYTE *)(a2 + 45) = 2;
    if ( (a3 & 0x80) != 0 )
      LOBYTE(result) = ((unsigned __int8)a3 >> 4) - 16;
    result = (char)result;
    *(_QWORD *)(a2 + 48) = (char)result;
  }
  return result;
}
