__int64 __fastcall sub_3410(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // esi

  result = a2;
  v3 = (*(_DWORD *)(a1 + 124) >> 21) & 0x1F;
  *(_WORD *)(a2 + 6) = (*(_DWORD *)(a1 + 124) >> 21) & 0x1F;
  if ( (*(_BYTE *)(a1 + 127) & 4) != 0 )
  {
    *(_BYTE *)(a2 + 1) = 4;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & *(__int16 *)(a1 + 124);
    *(_QWORD *)(result + 16) = v4;
    if ( (*(_BYTE *)(a1 + 127) & 0x10) != 0 )
      v4 &= ~1uLL;
    *(_QWORD *)(result + 16) = v4;
    *(_BYTE *)(result + 1) = (_WORD)v3 == 0 ? 2 : 4;
    if ( (*(_BYTE *)(a1 + 124) & 1) == 0
      || (*(_WORD *)(result + 6) = -(__int16)v3, (((_WORD)v3 == 0 ? 0 : 2) & 0xFD) == 0) )
    {
      v5 = *(_QWORD *)(result + 16);
      *(_QWORD *)(result + 16) = v5 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
        goto LABEL_13;
      *(_QWORD *)(result + 16) = v5 & 0xFFFFFFFFFFFFFFF8LL;
    }
    goto LABEL_8;
  }
  *(_BYTE *)(a2 + 1) = 3;
  *(_QWORD *)(a2 + 16) = *(_WORD *)(a1 + 124) >> 11;
  v6 = *(_DWORD *)(a1 + 124);
  if ( (v6 & 1) != 0 )
  {
    *(_WORD *)(result + 6) = -(__int16)v3;
LABEL_8:
    v6 = *(_DWORD *)(a1 + 124);
  }
  if ( (v6 & 2) == 0 )
  {
    *(_BYTE *)(result + 5) = ((v6 & 4) != 0) + 7;
    return result;
  }
LABEL_13:
  *(_BYTE *)(result + 5) = 2;
  return result;
}

