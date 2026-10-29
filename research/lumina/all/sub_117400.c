__int64 __fastcall sub_117400(__int64 a1)
{
  bool v1; // zf
  __int16 v2; // ax

  *(_BYTE *)(a1 + 1) &= 0xF1u;
  v1 = *(_BYTE *)a1 == 0;
  *(_WORD *)(a1 + 70) = 0;
  if ( !v1 )
    return sub_1172E0(a1);
  v2 = *(_WORD *)(a1 + 86);
  if ( !v2 || !*(_BYTE *)(*(_QWORD *)(a1 + 136) + 8LL) )
    return sub_1172E0(a1);
  *(_WORD *)(a1 + 86) = v2 - 1;
  return 0;
}
