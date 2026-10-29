__int64 __fastcall sub_7F0F0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *(unsigned __int16 *)(a1 + 248);
  if ( (unsigned __int16)v1 <= 0x12u )
  {
    if ( (unsigned __int16)v1 <= 0xFu )
      return 0;
  }
  else
  {
    v2 = (unsigned int)(v1 - 86);
    if ( (unsigned __int16)v2 > 0x39u )
      return 0;
    v3 = 0x201000000000007LL;
    if ( !_bittest64(&v3, v2) )
      return 0;
  }
  if ( (*(_BYTE *)(a1 + 253) & 8) == 0 )
    return sub_7D510(a1);
  return 0;
}
