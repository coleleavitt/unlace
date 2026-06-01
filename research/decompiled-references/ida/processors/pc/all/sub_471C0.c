bool __fastcall sub_471C0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  int v4; // edx
  int v5; // eax

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 == 88 )
  {
    v4 = *(_DWORD *)(a2 + 28);
    v5 = v4 & 0x307;
    if ( *(_BYTE *)(a2 + 32) != 32 )
      v5 = v4 & 0x387;
    return v5 == 0;
  }
  else if ( v2 == 18 )
  {
    return (*(_WORD *)(a2 + 28) & 0x387) == 0;
  }
  else
  {
    return (v2 == 86 || v2 == 16) && (*(_WORD *)(a2 + 28) & 0x387) == 0 && (unsigned int)sub_79600(a1, a2, 0) == 1;
  }
}
