__int64 __fastcall sub_23780(__int64 a1, unsigned int a2, unsigned int a3)
{
  char *v4; // rdx
  int v5; // eax
  unsigned int v6; // r11d
  char *v7; // rsi
  unsigned __int16 v8; // dx
  __int64 v9; // rax
  unsigned int v10; // r11d
  int *v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  int *v14; // rdx
  unsigned __int8 v15; // si
  _DWORD *v16; // rdx
  __int64 result; // rax
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  unsigned __int8 v20; // dl

  *(_BYTE *)(a1 + 121) = 5;
  v4 = (char *)&unk_60440;
  *(_BYTE *)(a1 + 125) = 7;
  *(_BYTE *)(a1 + 161) = 5;
  *(_BYTE *)(a1 + 165) = 0;
  *(_QWORD *)(a1 + 168) = (a2 >> 20) & 1;
  v5 = 0;
  do
  {
    v6 = a2 >> (31 - *v4);
    v4 += 8;
    v5 = (int)((v6 & 1 | (2 * v5)) << 14) >> 14;
  }
  while ( &unk_604D0 != (_UNKNOWN *)v4 );
  v7 = (char *)&unk_60340;
  v8 = 0;
  v9 = (__int64)v5 << 16;
  do
  {
    v10 = a3 >> (31 - *v7);
    v7 += 8;
    v8 = v10 & 1 | (2 * v8);
  }
  while ( &unk_603C0 != (_UNKNOWN *)v7 );
  *(_BYTE *)(a1 + 114) = 1;
  v11 = (int *)&unk_60560;
  v12 = v9 | v8;
  v13 = 0;
  *(_QWORD *)(a1 + 128) = v12;
  v14 = (int *)&unk_60560;
  do
  {
    v15 = _bittest((const int *)&a3, 31 - *v14);
    v14 += 2;
    v13 = v15 | (2 * v13) & 0x1F;
  }
  while ( &dword_60588 != v14 );
  if ( v13 )
  {
    *(_BYTE *)(a1 + 81) = 1;
    v19 = 0;
    *(_BYTE *)(a1 + 85) = 2;
    do
    {
      v20 = _bittest((const int *)&a3, 31 - *v11);
      v11 += 2;
      v19 = v20 | (2 * v19) & 0x1F;
    }
    while ( &dword_60588 != v11 );
    *(_WORD *)(a1 + 86) = v19;
  }
  else
  {
    *(_BYTE *)(a1 + 81) = 5;
    *(_BYTE *)(a1 + 85) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( (*(_QWORD *)(a1 + 80) & 0xFF000000FF00LL) == 0x20000000100LL )
    *(_BYTE *)(a1 + 85) = 7;
  *(_BYTE *)(a1 + 74) = 0;
  v16 = &unk_60100;
  LOBYTE(result) = 0;
  *(_BYTE *)(a1 + 41) = 1;
  *(_BYTE *)(a1 + 45) = 2;
  do
  {
    v18 = _bittest((const int *)&a3, 31 - *v16);
    v16 += 2;
    LOBYTE(result) = v18 | (2 * result) & 0x1F;
  }
  while ( v16 != (_DWORD *)&unk_60128 );
  result = (unsigned __int8)result;
  *(_BYTE *)(a1 + 45) = 7;
  *(_WORD *)(a1 + 46) = (unsigned __int8)result;
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_80C79;
  return result;
}
