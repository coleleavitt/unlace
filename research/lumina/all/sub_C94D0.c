__int64 __fastcall sub_C94D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // rdi

  v6 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)a3 + 21LL) & 8) != 0 )
    v6 = *(unsigned __int8 *)(*(_QWORD *)a3 + 23LL);
  v7 = *a1;
  if ( (*(_WORD *)(v7 + 20) & 0x9000) != 0 )
    return sub_C9430(v7, v6, a3, a4, a5, a6);
  *(_QWORD *)v7 = v6;
  *(_WORD *)(v7 + 20) = 4;
  return 4;
}
