bool __fastcall sub_3EE2E0(__int64 a1, __int64 a2)
{
  bool result; // al

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    return *(_QWORD *)(a2 + 8) == 0 && *(_BYTE *)(a2 + 34) > 0;
  result = *(_BYTE *)(a2 + 1) == 12 || *(_BYTE *)(a2 + 1) == 1;
  if ( result )
  {
    result = 0;
    if ( (unsigned __int16)(*(_WORD *)(a2 + 6) - 163) <= 0x1Fu && *(char *)(a2 + 32) > 0 )
      return *(_BYTE *)(a2 + 34) > 0;
  }
  return result;
}

