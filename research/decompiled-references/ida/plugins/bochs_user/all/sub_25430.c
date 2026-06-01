_BOOL8 __fastcall sub_25430(__int64 a1)
{
  int v2; // eax

  if ( !*(_BYTE *)(a1 + 1208) )
    return 1;
  *(_DWORD *)(a1 + 2600) = 0;
  v2 = sub_26FA0();
  *(_DWORD *)(a1 + 1192) = v2;
  return v2 == 0;
}

