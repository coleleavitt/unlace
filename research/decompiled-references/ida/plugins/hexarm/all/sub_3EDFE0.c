bool __fastcall sub_3EDFE0(__int64 a1, __int64 a2)
{
  __int16 v2; // cx
  bool result; // al

  v2 = *(_WORD *)(a2 + 6);
  result = *(_BYTE *)(a2 + 1) == 1 || *(_BYTE *)(a2 + 1) == 12;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
  {
    if ( result )
      return (unsigned __int16)(v2 - 163) <= 0x1Fu;
  }
  else if ( result )
  {
    return (unsigned __int16)(v2 - 45) <= 0x2Fu;
  }
  return result;
}

