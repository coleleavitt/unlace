__int64 __fastcall sub_5D9E0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v3; // edx

  result = 1;
  if ( (*(_BYTE *)(a1 + 94) & 1) != 0 )
  {
    v3 = *(unsigned __int16 *)(a1 + 104);
    if ( (_WORD)v3 != 0xFFFF )
    {
      *a2 = v3;
      return 0;
    }
  }
  return result;
}
