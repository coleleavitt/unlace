__int64 __fastcall sub_EFA20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) >= 0 )
    v8 = (__int64 *)sub_EF2D0(a1 + 1, v6, 0, a4, a5, a6);
  else
    v8 = *(__int64 **)(v6 + 8);
  v9 = 0;
  if ( v8 )
    v9 = *v8;
  v10 = *a1;
  if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
    return sub_C9430(v10, v9, a3, a4, a5, a6);
  *(_QWORD *)v10 = v9;
  *(_WORD *)(v10 + 20) = 4;
  return 4;
}
