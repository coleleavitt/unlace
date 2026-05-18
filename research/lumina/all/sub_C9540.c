__int64 __fastcall sub_C9540(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // rsi

  v6 = *a1;
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 120LL);
  if ( (*(_WORD *)(v6 + 20) & 0x9000) != 0 )
    return sub_C9430(v6, v7, a3, a4, a5, a6);
  *(_QWORD *)v6 = v7;
  *(_WORD *)(v6 + 20) = 4;
  return 4;
}
