__int64 __fastcall sub_85470(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax

  v2 = a2[32];
  if ( (unsigned __int8)(v2 - 80) <= 0x1Fu )
    return (unsigned int)(v2 - 80);
  if ( (unsigned __int8)(v2 - 112) <= 0x1Fu )
    return (unsigned int)(v2 - 112);
  if ( (v2 & 0xFD) == 0x90 )
    return *(unsigned int *)a2;
  return 0xFFFFFFFFLL;
}
