__int64 __fastcall sub_270C0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( (int)sub_27030(a1, a2, 4) >= 0
      && (int)sub_27030(a1, a2 + 4, 1) >= 0
      && (int)sub_27030(a1, a2 + 5, 1) >= 0
      && (int)sub_27030(a1, a2 + 6, 2) >= 0
      && (int)sub_27030(a1, a2 + 8, *(int *)(a1 + 424)) >= 0 )
    {
      return (unsigned int)((int)sub_27030(a1, a2 + 16, *(int *)(a1 + 432)) >> 31);
    }
  }
  else if ( (int)sub_27030(a1, a2, 4) >= 0
         && (int)sub_27030(a1, a2 + 8, *(int *)(a1 + 424)) >= 0
         && (int)sub_27030(a1, a2 + 16, 4) >= 0
         && (int)sub_27030(a1, a2 + 4, 1) >= 0
         && (int)sub_27030(a1, a2 + 5, 1) >= 0 )
  {
    return (unsigned int)((int)sub_27030(a1, a2 + 6, 2) >> 31);
  }
  return 0xFFFFFFFFLL;
}

