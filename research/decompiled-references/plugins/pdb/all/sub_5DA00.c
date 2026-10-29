__int64 __fastcall sub_5DA00(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v3; // edx

  result = 1;
  if ( (*(_BYTE *)(a1 + 94) & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    if ( v3 != -1 )
    {
      *a2 = v3;
      return 0;
    }
  }
  return result;
}
