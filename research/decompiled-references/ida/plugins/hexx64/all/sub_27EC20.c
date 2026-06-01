_BOOL8 __fastcall sub_27EC20(__int64 a1, __int64 a2, double a3)
{
  _BOOL8 result; // rax
  unsigned int v4; // eax

  if ( sub_259AA0(a2, *(_QWORD *)(a1 + 64), a3) )
  {
    v4 = *(_DWORD *)(a2 + 8);
    if ( v4 <= 0x12 )
      return v4 > 0x10;
    if ( v4 == 57 )
    {
      *(_BYTE *)(a1 + 73) = *(_BYTE *)(a1 + 74);
      return 0;
    }
  }
  else
  {
    result = 1;
    if ( *(_BYTE *)(a1 + 72) )
      return result;
    *(_DWORD *)(a1 + 8) |= 1u;
    *(_WORD *)(a1 + 72) = 257;
  }
  return 0;
}

