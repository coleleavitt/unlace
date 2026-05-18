__int64 __fastcall sub_E01A0(int *a1)
{
  __int64 v1; // rsi
  int v2; // eax

  v1 = (unsigned int)(a1[4] + *a1);
  if ( (int)v1 <= 0 )
  {
    if ( (a1[5] & 0x10) == 0 )
      return 0;
    v1 = 1;
  }
  if ( !(unsigned int)sub_E0020((__int64)a1, v1, 1) )
  {
    memset((void *)(*((_QWORD *)a1 + 1) + a1[4]), 0, *a1);
    v2 = *a1;
    *((_WORD *)a1 + 10) &= 0xF9FFu;
    a1[4] += v2;
    return 0;
  }
  return 7;
}
