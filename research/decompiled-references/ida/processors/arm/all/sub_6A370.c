__int64 __fastcall sub_6A370(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ecx
  int v4; // edi
  int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  signed int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // esi

  v1 = *(_DWORD *)(a1 + 16);
  v3 = v1 & 0x100000;
  if ( (v1 & 0x100000) == 0 )
    return v3;
  v4 = *(_DWORD *)(a1 + 16) & 0xF;
  v5 = (v1 >> 9) & 7;
  if ( v4 == 15 )
  {
    v3 = v1 & 0x8000;
    if ( (v1 & 0x8000) == 0 )
    {
      if ( v5 == 7 )
      {
        v19 = v1 >> 16;
        if ( (~(_BYTE)v19 & 0xD) == 0 )
          return v3;
        v20 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v20 + 46) = v19 & 0xF;
        *(_BYTE *)(v20 + 41) = 1;
        *(_BYTE *)(v20 + 45) = 2;
        v21 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 5;
        v22 = (v21 >> 6) & 3 | ((unsigned int)v21 >> 10) & 0x1C;
        if ( !v22 )
          v22 = 32;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) = v22;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 2;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DB50[(*(int *)(a1 + 16) >> 4) & 3];
      }
      else
      {
        if ( v5 == 6 )
          return v3;
        v7 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v7 + 46) = BYTE2(v1) & 0xE;
        *(_BYTE *)(v7 + 41) = 1;
        *(_BYTE *)(v7 + 45) = 2;
        v8 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v8 + 86) = 2 * v5 + 1;
        *(_BYTE *)(v8 + 81) = 1;
        *(_BYTE *)(v8 + 85) = 2;
        LODWORD(v8) = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 121LL) = 5;
        v9 = ((int)v8 >> 6) & 3 | ((unsigned int)v8 >> 10) & 0x1C;
        if ( !v9 )
          v9 = 32;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = v9;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DB60[4 * ((*(int *)(a1 + 16) >> 16) & 1)
                                                          + ((*(int *)(a1 + 16) >> 4) & 3)];
      }
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
  }
  else
  {
    v3 = 0;
    if ( v4 != 13 )
      return v3;
    v3 = v1 & 0x10;
    if ( (v1 & 0x10) == 0 )
    {
      if ( (~(unsigned __int8)(v1 >> 12) & 0xD) == 0 )
        return v3;
      v10 = (v1 >> 12) & 0xF;
      if ( v5 == 7 )
      {
        v23 = BYTE2(v1) & 0xF;
        if ( (~BYTE2(v1) & 0xD) == 0 || v10 == v23 )
          return v3;
        v24 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v24 + 46) = v23;
        *(_BYTE *)(v24 + 41) = 1;
        *(_BYTE *)(v24 + 45) = 2;
        v25 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v25 + 86) = v10;
        *(_BYTE *)(v25 + 81) = 1;
        *(_BYTE *)(v25 + 85) = 2;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DB38[(*(int *)(a1 + 16) >> 5) & 1];
      }
      else
      {
        v11 = (v1 >> 17) & 7;
        if ( v5 == 6 )
          return v3;
        v12 = 2 * v11;
        if ( v12 == v10 )
          return v3;
        v13 = 2 * v5 + 1;
        if ( v13 == v10 )
          return v3;
        v14 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v14 + 46) = v12;
        *(_BYTE *)(v14 + 41) = 1;
        *(_BYTE *)(v14 + 45) = 2;
        v15 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v15 + 86) = v13;
        *(_BYTE *)(v15 + 81) = 1;
        *(_BYTE *)(v15 + 85) = 2;
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *(_WORD *)(a1 + 18) & 1;
        if ( v17 )
        {
          *(_BYTE *)(v16 + 121) = 5;
          v26 = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(v16 + 125) = 2;
          v18 = v16 + 160;
          *(_QWORD *)(v18 - 32) = (v26 & 0x80) == 0 ? 64LL : 48LL;
        }
        else
        {
          v18 = v16 + 120;
        }
        *(_WORD *)(v18 + 6) = v10;
        *(_BYTE *)(v18 + 1) = 1;
        *(_BYTE *)(v18 + 5) = 2;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DB40[4 * v17 + ((*(int *)(a1 + 16) >> 5) & 1)];
      }
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
  }
  return 0;
}
