__int64 __fastcall sub_5DD10(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 100) == 11 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    result = 1;
    if ( !*(_DWORD *)(a1 + 96) )
    {
      *a2 = 1;
      return 0;
    }
  }
  return result;
}
