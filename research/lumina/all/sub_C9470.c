__int64 __fastcall sub_C9470(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi

  v6 = *a1;
  if ( (*(_WORD *)(v6 + 20) & 0x9000) != 0 )
    return sub_C9430(v6, a2, a3, a4, a5, a6);
  *(_QWORD *)v6 = a2;
  *(_WORD *)(v6 + 20) = 4;
  return 4;
}
