bool __fastcall sub_593C0(__int64 a1, int a2)
{
  bool result; // al

  result = 1;
  if ( *(_DWORD *)(a1 + 4LL * a2 + 140) == 2 )
  {
    result = 0;
    if ( !a2 )
      return *(_DWORD *)(a1 + 176) != 2;
  }
  return result;
}

