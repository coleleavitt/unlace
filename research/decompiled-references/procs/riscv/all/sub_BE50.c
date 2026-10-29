__int64 __fastcall sub_BE50(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int16 v5; // dx
  __int64 result; // rax

  v5 = a3 >> 7;
  if ( a4 <= 0x32u )
  {
    if ( a4 > 0x30u )
    {
      *(_BYTE *)(a2 + 5) = 7;
      result = v5 & 0x38 | (2 * a3) & 0xC0u;
      goto LABEL_6;
    }
    if ( a4 == 13 || a4 == 18 )
    {
      *(_BYTE *)(a2 + 5) = 2;
      result = (__int16)(((2 * (_BYTE)a3) & 0x40) + (v5 & 0x38 | (a3 >> 4) & 4));
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( a4 <= 0x5Eu )
  {
    if ( a4 > 0x5Cu )
    {
      *(_BYTE *)(a2 + 5) = 3;
      result = (__int16)(((2 * (_BYTE)a3) & 0x40) + (v5 & 0x38 | (a3 >> 4) & 4));
      goto LABEL_6;
    }
LABEL_5:
    result = 0;
    goto LABEL_6;
  }
  result = 0;
  if ( (unsigned __int16)(a4 - 117) <= 1u )
  {
    *(_BYTE *)(a2 + 5) = 4;
    result = v5 & 0x38 | (2 * a3) & 0xC0u;
  }
LABEL_6:
  *(_BYTE *)(a2 + 1) = 4;
  *(_QWORD *)(a2 + 16) = result;
  *(_WORD *)(a2 + 6) = (v5 & 7) + 8;
  return result;
}
