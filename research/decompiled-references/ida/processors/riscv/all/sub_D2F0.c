__int64 __fastcall sub_D2F0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, unsigned __int8 a5)
{
  int v6; // ecx
  __int64 result; // rax
  __int16 v8; // ax
  unsigned int v9; // r12d
  __int64 v11; // rsi

  v6 = word_2AED0[a5];
  result = 0;
  *(_WORD *)(a2 + 24) = v6;
  if ( (_WORD)v6 )
  {
    v8 = *(_WORD *)(a2 + 34);
    v9 = a3 >> 15;
    *(_BYTE *)(a2 + 41) = 1;
    v11 = a2 + 80;
    *(_WORD *)(v11 - 34) = ((unsigned __int16)a3 >> 7) & 0x1F;
    *(_BYTE *)(v11 - 35) = (v8 & 4) == 0 ? 2 : 7;
    sub_BD30(a1, v11, a4, v6);
    *(_WORD *)(a2 + 86) = v9 + ((2 * (_BYTE)a4) & 0x1E);
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

