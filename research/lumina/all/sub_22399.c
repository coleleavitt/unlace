_BOOL8 __fastcall sub_22399(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // r13
  __int64 v9; // rcx
  __int16 v10; // dx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi

  if ( *(_WORD *)(a1 + 94) != *(_WORD *)(a2 + 94)
    || *(_WORD *)(a1 + 96) != (unsigned __int16)*(_DWORD *)(a2 + 96)
    || *(_BYTE *)(a1 + 98) != *(_BYTE *)(a2 + 98) )
  {
    return 0;
  }
  for ( i = 0; (int)i < *(unsigned __int16 *)(a2 + 94); ++i )
  {
    v9 = 2 * i;
    v10 = *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * i);
    if ( v10 != *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * i)
      || v10 == -2
      && (unsigned int)sub_F80F0(
                         0,
                         *(_QWORD *)(*(_QWORD *)(a2 + 80) + 24LL * (int)i + 8),
                         *(_QWORD *)(24LL * (int)i + *(_QWORD *)(a1 + 80) + 8),
                         0xFFFFFFFFLL) )
    {
      return 0;
    }
    v12 = *(_QWORD *)(a2 + 56);
    if ( *(_BYTE *)(v12 + i) != *(_BYTE *)(*(_QWORD *)(a1 + 56) + i) )
      return 0;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 8 * i);
    if ( v14 )
    {
      if ( !v13 || (unsigned int)sub_CA2B0(v14, v13, v12, v9, a5, a6) )
        return 0;
    }
    else if ( v13 )
    {
      return 0;
    }
  }
  return (unsigned int)sub_F80F0(0, *(_QWORD *)(a2 + 72), *(_QWORD *)(a1 + 72), 0xFFFFFFFFLL) == 0;
}
