_BYTE *__fastcall sub_19470(__int64 a1, int a2, _BYTE *a3)
{
  int v4; // r8d

  *a3 = 0;
  if ( a2 <= 2 )
  {
    if ( a2 == 1 )
      v4 = *(unsigned __int16 *)(a1 + 33271);
    else
      v4 = *(unsigned __int16 *)(a1 + 33147);
    qsnprintf(a3, 126, " for %s#%u", off_2CAC0[(unsigned __int8)a2], v4);
  }
  return a3;
}
