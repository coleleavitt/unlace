__int64 __fastcall sub_1C9A0(__int64 a1, __int64 a2, unsigned int a3)
{
  _WORD *v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // dx

  v4 = &unk_54480;
  if ( *(_WORD *)(a2 + 24) != 137 )
    v4 = &unk_54460;
  if ( (a3 & 0x8000) != 0 )
    return 0;
  v5 = (unsigned __int16)a3 >> 11;
  v6 = v4[v5];
  *(_WORD *)(a2 + 24) = v6;
  if ( !v6 || (a3 & 0x40) != 0 )
    return 0;
  *(_BYTE *)(a2 + 41) = 9;
  *(_BYTE *)(a2 + 45) = 2;
  *(_BYTE *)(a2 + 81) = 4;
  *(_WORD *)(a2 + 46) = BYTE2(a3) & 0x1F;
  *(_WORD *)(a2 + 73) = 262;
  *(_BYTE *)(a2 + 72) = (a3 >> 7) & 0xF;
  *(_BYTE *)(a2 + 85) = byte_54440[v5];
  *(_WORD *)(a2 + 86) = (a3 >> 21) & 0x1F;
  *(_QWORD *)(a2 + 96) = a3 & 0x3F;
  if ( (a3 & 0x20) != 0 )
  {
    if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000) == 0x5000000 )
      *(_QWORD *)(a2 + 96) |= 0xFFFFFFFFFFFFFFC0LL;
    v6 = *(_WORD *)(a2 + 24);
  }
  sub_1B6E0(a1, a2, v6, (unsigned __int8 *)(a2 + 80), 6, 0, -1, -1, -1, -1);
  return 1;
}

