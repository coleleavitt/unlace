_BOOL8 __fastcall sub_166C0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  char v3; // al

  result = 0;
  if ( *(_BYTE *)(a2 + 1) == 4 )
  {
    v3 = *(_BYTE *)(a2 + 32);
    if ( v3 == 1 )
      return *(_WORD *)(a2 + 6) != 29;
    else
      return v3 == 2;
  }
  return result;
}

