bool __fastcall sub_188C0(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int16 v4; // di
  bool result; // al

  v4 = *(_WORD *)(a2 + 24);
  result = v4 == 208 || v4 == 12;
  if ( result )
  {
    result = 0;
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x3000000000400LL )
      return result;
    *a3 = 0;
    *a4 = 1;
    return 1;
  }
  if ( v4 == 214 )
  {
    *a3 = 0;
    *a4 = -1;
    return 1;
  }
  return result;
}
