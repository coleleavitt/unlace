__int64 __fastcall sub_302B0(_BYTE *a1)
{
  if ( (unsigned __int8)(a1[41] - 2) <= 2u )
    return 0;
  if ( (unsigned __int8)(a1[81] - 2) <= 2u )
    return 1;
  return (unsigned __int8)(a1[121] - 2) < 3u ? 2 : -1;
}
