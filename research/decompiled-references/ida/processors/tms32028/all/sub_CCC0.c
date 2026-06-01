__int64 __fastcall sub_CCC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 v4; // rax

  v3 = 5;
  if ( *(char *)(a1 + 248) < 0 )
    v3 = 132;
  *(_WORD *)(a2 + 24) = v3;
  *(_BYTE *)(a2 + 41) = 1;
  v4 = *(unsigned __int16 *)(a3 + 12);
  *(_WORD *)(a2 + 46) = v4;
  LOBYTE(v4) = *((_BYTE *)qword_1B500 + v4);
  *(_BYTE *)(a2 + 81) = 5;
  *(_BYTE *)(a2 + 45) = v4;
  LOBYTE(v4) = *(_BYTE *)(a1 + 248);
  *(_BYTE *)(a2 + 85) = 0;
  *(_QWORD *)(a2 + 88) = v4 & 0x7F;
  return *(unsigned __int16 *)(a2 + 26);
}

