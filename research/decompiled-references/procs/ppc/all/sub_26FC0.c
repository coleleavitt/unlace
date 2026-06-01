__int16 __fastcall sub_26FC0(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rsi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  _DWORD *v8; // rsi
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r8
  _DWORD *v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r8
  _DWORD *v14; // rsi
  unsigned __int8 v15; // al
  unsigned __int8 v16; // di
  _DWORD *v17; // rsi
  unsigned __int8 v18; // al
  unsigned __int8 v19; // di
  _DWORD *v20; // rsi
  unsigned __int8 v21; // al
  unsigned __int8 v22; // di
  __int16 result; // ax

  v5 = &unk_60040;
  v6 = 0;
  *(_BYTE *)(a1 + 241) = 5;
  *(_BYTE *)(a1 + 245) = 0;
  do
  {
    v7 = _bittest(&a2, 31 - *v5);
    v5 += 2;
    v6 = v7 | (2 * v6) & 0xF;
  }
  while ( &unk_60060 != (_UNKNOWN *)v5 );
  *(_BYTE *)(a1 + 201) = 5;
  v8 = &unk_60060;
  *(_BYTE *)(a1 + 205) = 0;
  *(_QWORD *)(a1 + 248) = v6;
  v9 = 0;
  do
  {
    v10 = _bittest(&a2, 31 - *v8);
    v8 += 2;
    v9 = v10 | (2 * v9) & 0xF;
  }
  while ( &unk_60080 != (_UNKNOWN *)v8 );
  *(_BYTE *)(a1 + 161) = 5;
  v11 = &unk_600A0;
  *(_BYTE *)(a1 + 165) = 0;
  *(_QWORD *)(a1 + 208) = v9;
  v12 = 0;
  do
  {
    v13 = _bittest(&a2, 31 - *v11);
    v11 += 2;
    v12 = v13 | (2 * v12) & 0xF;
  }
  while ( &unk_600C0 != (_UNKNOWN *)v11 );
  *(_BYTE *)(a1 + 121) = 1;
  v14 = &unk_60200;
  *(_BYTE *)(a1 + 125) = 8;
  *(_QWORD *)(a1 + 168) = v12;
  v15 = 0;
  do
  {
    v16 = _bittest(&a3, 31 - *v14);
    v14 += 2;
    v15 = v16 | (2 * v15) & 0x3F;
  }
  while ( &unk_60230 != (_UNKNOWN *)v14 );
  *(_BYTE *)(a1 + 81) = 1;
  v17 = &unk_601C0;
  *(_BYTE *)(a1 + 85) = 8;
  *(_WORD *)(a1 + 126) = v15 + 216;
  v18 = 0;
  do
  {
    v19 = _bittest(&a3, 31 - *v17);
    v17 += 2;
    v18 = v19 | (2 * v18) & 0x3F;
  }
  while ( &unk_601F0 != (_UNKNOWN *)v17 );
  *(_BYTE *)(a1 + 41) = 1;
  v20 = &unk_60080;
  *(_BYTE *)(a1 + 45) = 17;
  *(_WORD *)(a1 + 86) = v18 + 216;
  v21 = 0;
  do
  {
    v22 = _bittest(&a3, 31 - *v20);
    v20 += 2;
    v21 = v22 | (2 * v21) & 7;
  }
  while ( v20 != (_DWORD *)&unk_60098 );
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_80CA1;
  result = v21 + 314;
  *(_WORD *)(a1 + 46) = result;
  return result;
}
