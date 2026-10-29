__int64 __fastcall sub_11A60(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  int v4; // eax
  __int16 v5; // dx
  unsigned int v6; // edi
  __int16 v7; // ax
  int v8; // r8d
  __int16 v9; // cx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // sf
  __int16 v13; // di
  int v14; // edx
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8

  v4 = a3;
  v5 = (a3 >> 7) & 0x1F;
  v6 = v4 | (a4 << 16);
  v7 = *(_WORD *)(a2 + 34) & 4;
  v8 = (v6 >> 12) & 3;
  if ( ((v6 >> 12) & 3) == 2 )
  {
    v9 = (unsigned __int8)v5;
    if ( v7 )
      LOBYTE(v8) = 7;
    v17 = (v6 >> 5) & 0x7000 | (v6 >> 9) & 0x800 | (v6 >> 20) & 0x7FE | v6 & 0x18000 | (v6 >> 14) & 1;
    v18 = v17;
    v11 = *(_QWORD *)&v17 | 0xFFFFFFFFFFFE0000LL;
    v12 = (v6 & 0x80000000) != 0;
    v13 = 529;
    if ( !v12 )
      v11 = v18;
    LOBYTE(v14) = 0;
  }
  else if ( (_BYTE)v8 == 3 )
  {
    v9 = ((unsigned __int16)a4 >> 4) & 0x1F;
    v8 = v7 == 0 ? 2 : 7;
    v16 = (v6 >> 5) & 0x7000
        | (16 * (_WORD)v6) & 0x800
        | (v6 >> 20) & 0x7E0
        | (v6 >> 7) & 0x1E
        | v6 & 0x18000
        | (v6 >> 14) & 1;
    v11 = v16 | 0xFFFFFFFFFFFE0000LL;
    v12 = (v6 & 0x80000000) != 0;
    v13 = 535;
    if ( !v12 )
      v11 = v16;
    LOBYTE(v14) = 0;
  }
  else
  {
    v9 = (unsigned __int8)v5;
    if ( (_BYTE)v8 == 1 )
    {
      v14 = v7 == 0 ? 2 : 7;
      v19 = (v6 >> 5) & 0x7000 | (v6 >> 9) & 0x800 | (v6 >> 20) & 0x7FE | v6 & 0x18000 | (v6 >> 14) & 1;
      v11 = v19 | 0xFFFFFFFFFFFE0000LL;
      v12 = (v6 & 0x80000000) != 0;
      v13 = 539;
      if ( !v12 )
        v11 = v19;
      LOBYTE(v8) = v14;
    }
    else
    {
      v8 = v7 == 0 ? 2 : 7;
      v10 = (v6 >> 5) & 0x7000 | (v6 >> 9) & 0x800 | (v6 >> 20) & 0x7FE | v6 & 0x18000 | (v6 >> 14) & 1;
      v11 = v10 | 0xFFFFFFFFFFFE0000LL;
      v12 = (v6 & 0x80000000) != 0;
      v13 = 528;
      if ( !v12 )
        v11 = v10;
      LOBYTE(v14) = 0;
    }
  }
  *(_QWORD *)(a2 + 88) = v11;
  *(_WORD *)(a2 + 24) = v13;
  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 46) = v9;
  *(_BYTE *)(a2 + 45) = v8;
  *(_BYTE *)(a2 + 81) = 5;
  *(_BYTE *)(a2 + 85) = v14;
  return 4;
}
