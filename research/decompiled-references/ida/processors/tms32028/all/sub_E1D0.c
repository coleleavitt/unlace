__int64 __fastcall sub_E1D0(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1[248] != 0xAC )
    return sub_CD30(a1, a2, a3);
  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 24) = 136;
  result = *(unsigned __int16 *)(a2 + 26);
  *(_WORD *)(a2 + 46) = 0;
  *(_BYTE *)(a2 + 45) = 1;
  *(_BYTE *)(a2 + 81) = 1;
  *(_WORD *)(a2 + 86) = 22;
  *(_BYTE *)(a2 + 85) = 1;
  *(_BYTE *)(a2 + 115) = 48;
  return result;
}

