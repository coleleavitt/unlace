__int64 __fastcall sub_59C0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r12
  int v4; // eax
  unsigned __int16 v5; // bx
  unsigned __int16 v7; // r13
  __int64 sreg; // rax
  __int64 v9; // rax

  v3 = a3;
  v4 = *(_DWORD *)(a1 + 224);
  if ( v4 == 1 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 1) == 0 )
      return a3;
    v7 = a3;
    sreg = get_sreg();
    if ( sreg != -1 )
      return (unsigned __int16)(((_WORD)sreg << 8) | a3);
    return v7;
  }
  else
  {
    if ( v4 != 3 )
      return a3;
    v5 = a3 + 0x8000;
    if ( *(_WORD *)(a2 + 24) == 144 && *(_BYTE *)(a2 + 41) == 5 )
    {
      if ( v5 <= 0x3FFFu )
        return a3 + (*(_QWORD *)(a2 + 48) << 16);
      return a3;
    }
    if ( v5 > 0x3FFFu )
      return a3;
    v9 = get_sreg();
    if ( v9 == -1 )
      v9 = *(_QWORD *)(a2 + 16) >> 16;
    return v3 + (v9 << 16);
  }
}

