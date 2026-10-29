__int64 __fastcall sub_4E40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 next_word; // ax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // r12d
  __int64 v9; // rdx
  int v10; // ecx

  next_word = insn_get_next_word();
  v5 = next_word;
  v6 = (unsigned __int16)aWyz[((int)next_word >> 12) | next_word & 0xF0];
  *(_WORD *)(a2 + 24) = v6;
  if ( (_WORD)v6 )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 45) = 1;
    *(_WORD *)(a2 + 46) = (v5 >> 8) & 0xF;
    v7 = a3;
    v8 = a3 & 0xF;
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 1;
    *(_WORD *)(a2 + 86) = (v7 >> 8) & 0xF;
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_DWORD *)(v9 + 104);
    if ( v6 >= v10 && v6 < *(_DWORD *)(v9 + 108) && (*(_BYTE *)(*(_QWORD *)(v9 + 112) + 16LL * (v6 - v10) + 9) & 4) != 0 )
    {
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = v8;
      *(_BYTE *)(a2 + 125) = 1;
      return *(unsigned __int16 *)(a2 + 26);
    }
    if ( !v8 )
      return *(unsigned __int16 *)(a2 + 26);
  }
  return 0;
}

