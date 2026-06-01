__int64 __fastcall sub_58C0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rdx

  v4 = 0;
  v5 = HIBYTE(a3);
  if ( a3 <= 0x1FFFFFFF && ((*(_BYTE *)(a1 + 232) & 1) == 0 || (a3 & 1) == 0) )
  {
    v6 = *((unsigned __int16 *)qword_A680 + (int)v5);
    *(_WORD *)(a2 + 24) = v6;
    if ( v5 > 0xF )
      *(_DWORD *)(a2 + 28) |= ((a3 & 2) != 0) + 1;
    if ( (BYTE1(off_D6A0[2 * v6 + 1]) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      v7 = a3 & 0xFFFFFC | 0xFFFFFFFFFF000000LL;
      v8 = (a3 & 0x800000) == 0;
      v9 = a3 & 0xFFFFFC;
      if ( !v8 )
        v9 = v7;
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 8) + v9);
    }
    return 1;
  }
  return v4;
}

