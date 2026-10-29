__int64 __fastcall sub_EA20(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // esi

  v3 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)(v3 - 1879048193) <= 1 )
    return 0;
  if ( (debug & 0x10) == 0 )
    return a3;
  sub_E950((__int64)"Unsupported or unknown section type 0x%X, skipped\n", v3);
  return a3;
}
