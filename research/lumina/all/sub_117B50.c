__int64 __fastcall sub_117B50(__int64 a1, __int64 *a2)
{
  *a2 = 0;
  if ( a1 && (*(_WORD *)(a1 + 20) & 0xFBF) == 0xA01 && *(_BYTE *)(a1 + 23) == 112 )
    return sub_117960(a1, a2, 0);
  else
    return 21;
}
