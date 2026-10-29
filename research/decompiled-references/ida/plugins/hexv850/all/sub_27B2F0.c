__int64 __fastcall sub_27B2F0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a2 + 8) == 48 )
    return 1;
  if ( (unsigned __int8)compare_tinfo() || *(_DWORD *)(a2 + 8) == 61 && !sub_250670(*(__int64 **)(a2 + 24)) )
    return 1;
  return sub_27B160(a1, a2, a3, 0);
}

