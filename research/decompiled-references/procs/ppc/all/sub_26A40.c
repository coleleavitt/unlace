__int16 __fastcall sub_26A40(__int64 a1, int a2, int a3)
{
  unsigned __int8 v6; // al
  _DWORD *v7; // rdx
  unsigned __int8 v8; // r8
  _DWORD *v9; // rdx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r8
  _DWORD *v12; // rdx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r8
  _DWORD *v15; // rdx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // di
  _DWORD *v18; // rdx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // di
  _DWORD *v21; // rdx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // di
  __int16 result; // ax

  v6 = 0;
  *(_BYTE *)(a1 + 241) = 5;
  v7 = &unk_60000;
  *(_BYTE *)(a1 + 245) = 0;
  do
  {
    v8 = _bittest(&a2, 31 - *v7);
    v7 += 2;
    v6 = v8 | (2 * v6);
  }
  while ( &unk_60040 != (_UNKNOWN *)v7 );
  *(_BYTE *)(a1 + 201) = 5;
  v9 = &unk_60060;
  *(_BYTE *)(a1 + 205) = 0;
  *(_QWORD *)(a1 + 248) = v6;
  v10 = 0;
  do
  {
    v11 = _bittest(&a2, 31 - *v9);
    v9 += 2;
    v10 = v11 | (2 * v10) & 0xF;
  }
  while ( &unk_60080 != (_UNKNOWN *)v9 );
  *(_BYTE *)(a1 + 161) = 5;
  v12 = &unk_600A0;
  *(_BYTE *)(a1 + 165) = 0;
  *(_QWORD *)(a1 + 208) = v10;
  v13 = 0;
  do
  {
    v14 = _bittest(&a2, 31 - *v12);
    v12 += 2;
    v13 = v14 | (2 * v13) & 0xF;
  }
  while ( &unk_600C0 != (_UNKNOWN *)v12 );
  *(_BYTE *)(a1 + 121) = 1;
  v15 = &unk_60200;
  *(_BYTE *)(a1 + 125) = 8;
  *(_QWORD *)(a1 + 168) = v13;
  v16 = 0;
  do
  {
    v17 = _bittest(&a3, 31 - *v15);
    v15 += 2;
    v16 = v17 | (2 * v16) & 0x3F;
  }
  while ( &unk_60230 != (_UNKNOWN *)v15 );
  *(_BYTE *)(a1 + 81) = 1;
  v18 = &unk_601C0;
  *(_BYTE *)(a1 + 85) = 8;
  *(_WORD *)(a1 + 126) = v16 + 216;
  v19 = 0;
  do
  {
    v20 = _bittest(&a3, 31 - *v18);
    v18 += 2;
    v19 = v20 | (2 * v19) & 0x3F;
  }
  while ( &unk_601F0 != (_UNKNOWN *)v18 );
  *(_BYTE *)(a1 + 41) = 1;
  v21 = &unk_60080;
  *(_BYTE *)(a1 + 45) = 17;
  *(_WORD *)(a1 + 86) = v19 + 216;
  v22 = 0;
  do
  {
    v23 = _bittest(&a3, 31 - *v21);
    v21 += 2;
    v22 = v23 | (2 * v22) & 7;
  }
  while ( v21 != (_DWORD *)&unk_60098 );
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_80CA0;
  result = v22 + 314;
  *(_WORD *)(a1 + 46) = result;
  return result;
}
