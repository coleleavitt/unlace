__int16 __fastcall sub_CF5E0(__int64 a1, __int16 a2)
{
  __int64 v2; // r9
  _WORD *v3; // rdx
  __int64 v4; // rsi
  __int16 result; // ax
  int v6; // esi

  v2 = *(_QWORD *)(a1 + 8);
  if ( a2 <= 0 )
  {
    result = 0;
    LOWORD(v6) = 0;
  }
  else
  {
    v3 = (_WORD *)(v2 + 14);
    v4 = (unsigned int)(a2 - 1);
    result = 0;
    do
    {
      result += (*v3 & 0x20) == 0;
      v3 += 8;
    }
    while ( v3 != (_WORD *)(v2 + 16 * v4 + 30) );
    v6 = v4 + 1;
    v2 += 16LL * v6;
  }
  if ( (*(_BYTE *)(v2 + 14) & 0x20) != 0 )
    return v6 - result + *(_WORD *)(a1 + 56);
  return result;
}
