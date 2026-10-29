__int64 __fastcall sub_27BE30(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a2 + 8) == 48 )
    return 1;
  if ( (unsigned __int8)compare_tinfo() || *(_DWORD *)(a2 + 8) == 61 && !sub_2511B0(*(__int64 **)(a2 + 24)) )
    return 1;
  return sub_27BCA0(a1, a2, a3, 0);
}

