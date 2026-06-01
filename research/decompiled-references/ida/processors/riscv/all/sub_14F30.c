__int64 __fastcall sub_14F30(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int16 v4; // ax
  unsigned int v5; // esi

  v4 = *(_WORD *)(a2 + 24);
  v5 = 0;
  if ( (v4 & 0xFFDF) == 0x12 )
  {
    *a3 = 0;
    v5 = 1;
    *a4 = 1;
  }
  return v5;
}

