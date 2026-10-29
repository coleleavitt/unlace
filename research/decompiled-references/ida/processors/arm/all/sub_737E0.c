__int64 __fastcall sub_737E0(__int64 a1, int a2, int a3)
{
  __int16 v4; // r8
  int v5; // edx
  int v6; // r9d
  int v7; // edi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // r9

  v4 = a2 & 0xF;
  v5 = (a3 >> 8) & 0xF;
  v6 = a2 & 0xF;
  v7 = (a2 >> 4) & 0x1C;
  if ( v7 != 4 )
    v6 = v5;
  v8 = word_8EEA0[(a2 >> 4) & 0x1E | (v6 == 15)];
  *(_WORD *)(a1 + 24) = v8;
  if ( !(_WORD)v8 )
    return 0;
  if ( v6 != 15 || (unsigned __int16)v8 <= 0x18u && (v11 = 16883712, _bittest64(&v11, v8)) )
  {
    *(_BYTE *)(a1 + 41) = 1;
    *(_BYTE *)(a1 + 45) = 2;
    *(_WORD *)(a1 + 86) = v4;
    *(_BYTE *)(a1 + 81) = 1;
    *(_BYTE *)(a1 + 85) = 2;
    *(_WORD *)(a1 + 46) = v5;
    v9 = a1 + 120;
  }
  else
  {
    *(_BYTE *)(a1 + 41) = 1;
    if ( v7 == 4 )
      v4 = v5;
    *(_BYTE *)(a1 + 45) = 2;
    v9 = a1 + 80;
    *(_WORD *)(a1 + 46) = v4;
  }
  if ( (a2 & 0x10) != 0 && (unsigned __int16)(v8 - 18) > 3u )
    *(_DWORD *)(a1 + 28) |= 1u;
  return v9;
}
