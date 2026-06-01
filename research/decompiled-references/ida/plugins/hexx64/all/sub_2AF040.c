bool __fastcall sub_2AF040(__int64 a1)
{
  int v1; // edx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 248);
  result = 1;
  if ( *(_DWORD *)(a1 + 120) >= v1 && *(_DWORD *)(a1 + 120) <= v1 )
    return sub_1377A0(a1 + 8, a1 + 136) != 0;
  return result;
}

