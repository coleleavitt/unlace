__int64 __fastcall sub_666B0(__int64 a1)
{
  unsigned int v1; // edx
  __int16 v2; // ax
  __int64 v3; // rdx
  __int16 v4; // ax
  __int64 v5; // rdx
  __int16 v6; // ax

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 52) & 0x300) == 0x200 )
  {
    v2 = 884;
    if ( !*(_DWORD *)(a1 + 36) )
      v2 = 883;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v2;
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (*(_WORD *)(a1 + 32) | (2 * *(_WORD *)(a1 + 20))) + 93;
    *(_BYTE *)(v3 + 41) = 1;
    *(_WORD *)(v3 + 46) = v4;
    *(_BYTE *)(v3 + 45) = 3;
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_WORD *)(a1 + 44) | (2 * *(_WORD *)(a1 + 24));
    *(_BYTE *)(v5 + 81) = 1;
    *(_WORD *)(v5 + 86) = v6 + 93;
    *(_BYTE *)(v5 + 85) = 3;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -109;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  return v1;
}
