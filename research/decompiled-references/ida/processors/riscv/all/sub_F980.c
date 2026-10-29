__int64 __fastcall sub_F980(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int16 v5; // si
  bool v6; // cf
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx
  char v9; // cl
  __int64 v10; // rdi

  *(_BYTE *)(a2 + 28) = 5;
  result = a2;
  v5 = *(_WORD *)(a2 + 34);
  *(_BYTE *)(result + 41) = 1;
  v6 = (v5 & 4) == 0;
  v7 = *(unsigned __int16 *)(result + 24);
  *(_WORD *)(result + 46) = (char)(((a3 >> 7) & 0x1F) + 64);
  v8 = v6 ? 2 : 7;
  *(_BYTE *)(result + 45) = v6 ? 2 : 7;
  v9 = ((a4 >> 4) & 0x1F) + 64;
  if ( (unsigned __int16)v7 <= 0x104u )
  {
    if ( (unsigned __int16)v7 > 0x100u )
    {
LABEL_4:
      *(_BYTE *)(result + 121) = 1;
      *(_WORD *)(result + 126) = v9;
      *(_BYTE *)(result + 125) = v8;
      return result;
    }
  }
  else
  {
    LOWORD(v7) = v7 - 272;
    if ( (unsigned __int16)v7 <= 0x37u )
    {
      v10 = 0xF01FE00000000FLL;
      if ( _bittest64(&v10, v7) )
        goto LABEL_4;
    }
  }
  *(_BYTE *)(result + 81) = 1;
  *(_WORD *)(result + 86) = v9;
  *(_BYTE *)(result + 85) = v8;
  return result;
}

