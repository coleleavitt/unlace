bool __fastcall sub_61E40(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a1 + 28) & 8) != 0 )
  {
    result = *(_QWORD *)(a1 + 48) == 32 || *(_QWORD *)(a1 + 48) == 46;
    if ( result )
      return (*(_BYTE *)(a1 + 44) & 8) == 0;
  }
  return result;
}
