__int64 __fastcall sub_92D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v4; // cx
  unsigned __int64 v5; // rsi
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r9
  __int16 v10; // r8
  char v11; // di

  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 81) = 5;
  v4 = *((_WORD *)&qword_F3E0 + ((unsigned __int8)a3 >> 6));
  v5 = *(unsigned __int8 *)(a2 + 32);
  *(_BYTE *)(a2 + 121) = 1;
  *(_WORD *)(a2 + 24) = v4;
  *(_QWORD *)(a2 + 48) = (a3 >> 13) & 0x1F;
  *(_QWORD *)(a2 + 88) = (a3 >> 8) & 0x1F;
  v7 = (a3 >> 18) & 0x1F;
  v8 = (a3 >> 23) & 0x1F;
  if ( (unsigned __int8)v5 > 8u || (v9 = 340, v10 = v8 + 32, v11 = v7 + 32, !_bittest64(&v9, v5)) )
  {
    v10 = v8;
    v11 = v7;
  }
  *(_BYTE *)(a2 + 29) |= 2u;
  *(_WORD *)(a2 + 126) = v10;
  *(_BYTE *)(a2 + 73) = v11;
  return *(unsigned __int16 *)(a2 + 26);
}

