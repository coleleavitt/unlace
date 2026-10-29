__int64 __fastcall sub_6DC80(__int64 a1, __int64 a2)
{
  int v2; // edx

  v2 = *(unsigned __int16 *)(a1 + 40);
  if ( !*(_WORD *)(a1 + 40) )
    v2 = (1 << (get_func_bitness() + 4)) / 8;
  return *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 56) - v2;
}
