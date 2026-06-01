__int64 __fastcall sub_6A630(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  __int64 v4; // rdi
  __int16 v5; // si
  int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // rsi
  char v11; // dl

  v1 = *(_DWORD *)(a1 + 16);
  v3 = v1 & 0x400000;
  if ( (v1 & 0x400000) != 0 )
    return 0;
  if ( (~BYTE2(v1) & 0xD) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = BYTE2(v1) & 0xF;
    v6 = (v1 >> 20) & 3;
    if ( (~(_WORD)v1 & 0x2800) != 0 )
    {
      *(_BYTE *)(v4 + 41) = 1;
      *(_WORD *)(v4 + 46) = 14;
      *(_BYTE *)(v4 + 45) = 2;
      v7 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v7 + 86) = v5;
      *(_BYTE *)(v7 + 81) = 1;
      *(_BYTE *)(v7 + 85) = 2;
      v8 = *(_DWORD *)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 8);
      if ( (v8 & 0x2000) != 0 )
      {
        *(_WORD *)(v9 + 24) = 1105;
      }
      else
      {
        *(_BYTE *)(v9 + 121) = 7;
        *(_BYTE *)(v9 + 125) = 9;
        *(_QWORD *)(v9 + 136) = ((2 * (_WORD)v8) & 0xFFC | (v8 >> 10) & 2) + (unsigned int)*(_QWORD *)(v9 + 8) + 4;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1104;
      }
    }
    else
    {
      *(_WORD *)(v4 + 46) = v5;
      *(_BYTE *)(v4 + 41) = 1;
      *(_BYTE *)(v4 + 45) = 2;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1096;
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = byte_8E210[v6];
    if ( v11 )
    {
      *(_BYTE *)(v10 + 33) = v11 | 0x80;
      v10 = *(_QWORD *)(a1 + 8);
    }
    return *(unsigned __int16 *)(v10 + 26);
  }
  return v3;
}
