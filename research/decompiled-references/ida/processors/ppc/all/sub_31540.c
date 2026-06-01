bool __fastcall sub_31540(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  bool result; // al

  result = *(_WORD *)(a2 + 24) == 184 || *(_WORD *)(a2 + 24) == 206;
  if ( result )
  {
    *a3 = 0;
    *a4 = 1;
  }
  return result;
}

