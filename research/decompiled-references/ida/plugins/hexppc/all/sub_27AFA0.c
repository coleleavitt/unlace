_BOOL8 __fastcall sub_27AFA0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  unsigned int v3; // eax

  if ( sub_255E20(a2, *(_QWORD *)(a1 + 64)) )
  {
    v3 = *(_DWORD *)(a2 + 8);
    if ( v3 <= 0x12 )
      return v3 > 0x10;
    if ( v3 == 57 )
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

