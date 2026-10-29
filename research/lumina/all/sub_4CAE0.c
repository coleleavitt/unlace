char __fastcall sub_4CAE0(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 352) && (*(_DWORD *)a2 || *(_WORD *)(a2 + 4)) )
    return sub_4CA50(a1, a1 + 200, a2);
  else
    return 0;
}
