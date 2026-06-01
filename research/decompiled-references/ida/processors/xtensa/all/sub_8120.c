__int64 __fastcall sub_8120(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v4; // cx
  __int16 v5; // dx
  __int64 result; // rax

  v4 = *(_WORD *)(a2 + 24);
  v5 = (unsigned __int16)a3 >> 12;
  result = (a3 >> 8) & 0xF;
  if ( v4 <= 0xF4u )
  {
    if ( v4 > 0xF2u )
    {
LABEL_7:
      result = (unsigned int)(result + 20);
      goto LABEL_4;
    }
LABEL_6:
    v5 += 20;
    goto LABEL_7;
  }
  if ( v4 != 277 )
    goto LABEL_6;
  v5 += 20;
LABEL_4:
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = v5;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = result;
  return result;
}

