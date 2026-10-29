__int64 __fastcall sub_33A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = (*(_DWORD *)(a1 + 124) >> 21) & 0x1F;
  *(_WORD *)(a2 + 6) = (*(_DWORD *)(a1 + 124) >> 21) & 0x1F;
  if ( (*(_BYTE *)(a1 + 127) & 4) != 0 )
  {
    *(_BYTE *)(a2 + 1) = 4;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & *(__int16 *)(a1 + 124);
    *(_QWORD *)(a2 + 16) = v3;
    if ( (*(_BYTE *)(a1 + 127) & 0x10) != 0 )
      v3 &= ~1uLL;
    *(_QWORD *)(a2 + 16) = v3;
    result = (_WORD)v2 == 0 ? 2 : 4;
    *(_BYTE *)(a2 + 1) = result;
  }
  else
  {
    *(_BYTE *)(a2 + 1) = 3;
    result = (unsigned __int16)*(_DWORD *)(a1 + 124) >> 11;
    *(_QWORD *)(a2 + 16) = (unsigned __int16)result;
  }
  return result;
}

