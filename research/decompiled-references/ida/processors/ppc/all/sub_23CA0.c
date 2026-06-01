__int16 __fastcall sub_23CA0(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v3; // rsi
  unsigned __int8 v5; // al
  unsigned __int8 v6; // di
  _DWORD *v7; // rsi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // di
  _DWORD *v10; // rsi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // di
  _DWORD *v13; // rsi
  unsigned __int8 v14; // al
  unsigned __int8 v15; // di
  __int16 result; // ax

  *(_BYTE *)(a1 + 161) = 1;
  v3 = &unk_60240;
  v5 = 0;
  *(_BYTE *)(a1 + 165) = 8;
  do
  {
    v6 = _bittest(&a3, 31 - *v3);
    v3 += 2;
    v5 = v6 | (2 * v5) & 0x3F;
  }
  while ( &unk_60270 != (_UNKNOWN *)v3 );
  *(_BYTE *)(a1 + 121) = 1;
  v7 = &unk_60200;
  *(_BYTE *)(a1 + 125) = 8;
  *(_WORD *)(a1 + 166) = v5 + 216;
  v8 = 0;
  do
  {
    v9 = _bittest(&a3, 31 - *v7);
    v7 += 2;
    v8 = v9 | (2 * v8) & 0x3F;
  }
  while ( &unk_60230 != (_UNKNOWN *)v7 );
  *(_BYTE *)(a1 + 81) = 1;
  v10 = &unk_601C0;
  *(_BYTE *)(a1 + 85) = 8;
  *(_WORD *)(a1 + 126) = v8 + 216;
  v11 = 0;
  do
  {
    v12 = _bittest(&a3, 31 - *v10);
    v10 += 2;
    v11 = v12 | (2 * v11) & 0x3F;
  }
  while ( &unk_601F0 != (_UNKNOWN *)v10 );
  *(_BYTE *)(a1 + 41) = 1;
  v13 = &unk_60180;
  *(_BYTE *)(a1 + 45) = 8;
  *(_WORD *)(a1 + 86) = v11 + 216;
  v14 = 0;
  do
  {
    v15 = _bittest(&a3, 31 - *v13);
    v13 += 2;
    v14 = v15 | (2 * v14) & 0x3F;
  }
  while ( v13 != (_DWORD *)&unk_601B0 );
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_80D58;
  result = v14 + 216;
  *(_WORD *)(a1 + 46) = result;
  return result;
}

