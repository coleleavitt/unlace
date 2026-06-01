__int64 __fastcall sub_5F060(__int64 a1, __int64 a2)
{
  int v2; // edx

  v2 = 4;
  if ( *(_WORD *)(a1 + 86) != 5121 )
    v2 = 8;
  *(_DWORD *)(a1 + 48) |= v2 | 2;
  if ( (unsigned __int8)sub_73980(a1 + 104, a2) )
    return sub_73980(a1 + 112, a2);
  else
    return 0;
}

