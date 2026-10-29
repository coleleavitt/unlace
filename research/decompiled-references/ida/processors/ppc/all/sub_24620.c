__int16 __fastcall sub_24620(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *v6; // rdx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  _DWORD *v9; // rdx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // di
  _DWORD *v12; // rdx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // di
  _DWORD *v15; // rdx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // di
  __int16 result; // ax

  *(_BYTE *)(a1 + 201) = 5;
  *(_BYTE *)(a1 + 205) = 0;
  *(_BYTE *)(a1 + 161) = 5;
  *(_BYTE *)(a1 + 165) = 0;
  v6 = &unk_600A0;
  *(_QWORD *)(a1 + 208) = ((a2 & 4) != 0) | (unsigned __int8)((2 * (a2 >> 3)) & 2);
  v7 = 0;
  do
  {
    v8 = _bittest((const int *)&a2, 31 - *v6);
    v6 += 2;
    v7 = v8 | (2 * v7) & 0xF;
  }
  while ( &unk_600C0 != (_UNKNOWN *)v6 );
  *(_BYTE *)(a1 + 121) = 1;
  v9 = &unk_60200;
  *(_BYTE *)(a1 + 125) = 8;
  *(_QWORD *)(a1 + 168) = v7;
  v10 = 0;
  do
  {
    v11 = _bittest(&a3, 31 - *v9);
    v9 += 2;
    v10 = v11 | (2 * v10) & 0x3F;
  }
  while ( &unk_60230 != (_UNKNOWN *)v9 );
  *(_BYTE *)(a1 + 81) = 1;
  v12 = &unk_601C0;
  *(_BYTE *)(a1 + 85) = 8;
  *(_WORD *)(a1 + 126) = v10 + 216;
  v13 = 0;
  do
  {
    v14 = _bittest(&a3, 31 - *v12);
    v12 += 2;
    v13 = v14 | (2 * v13) & 0x3F;
  }
  while ( &unk_601F0 != (_UNKNOWN *)v12 );
  *(_BYTE *)(a1 + 41) = 1;
  v15 = &unk_60080;
  *(_BYTE *)(a1 + 45) = 17;
  *(_WORD *)(a1 + 86) = v13 + 216;
  v16 = 0;
  do
  {
    v17 = _bittest(&a3, 31 - *v15);
    v15 += 2;
    v16 = v17 | (2 * v16) & 7;
  }
  while ( v15 != (_DWORD *)&unk_60098 );
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_80C98;
  result = v16 + 314;
  *(_WORD *)(a1 + 46) = result;
  return result;
}

