_BOOL8 __fastcall sub_2806B0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a2 + 8) == 48 )
    return 1;
  if ( (unsigned __int8)compare_tinfo() || *(_DWORD *)(a2 + 8) == 61 && !sub_255A30(*(__int64 **)(a2 + 24)) )
    return 1;
  return sub_280520(a1, a2, a3, nullptr);
}

