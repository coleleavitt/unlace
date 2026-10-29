char __fastcall sub_12D410(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  if ( *(_DWORD *)a3 == 11 && *(_BYTE *)(a3 + 32) == 4 && *(_QWORD *)(a3 + 40) )
    return sub_12BA60(*(_QWORD *)(a1[30].m128i_i64[0] + 112), a1, a2, *(_BYTE **)(a3 + 40), a4, a5, 0);
  else
    return sub_12CDB0(a1, a2, (int *)a3, a4, a5, 0, 1);
}

