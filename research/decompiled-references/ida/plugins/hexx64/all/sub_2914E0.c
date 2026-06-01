__int64 __fastcall sub_2914E0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // r13

  v3 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v3 + 8) != 48 )
    return 0;
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL);
  if ( v5 != get_tinfo_size() )
    return 0;
  v6 = *(_QWORD *)(v3 + 24);
  if ( v5 < get_tinfo_size()
    || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
    || (get_tinfo_property() & 0x2F) == 0xD )
  {
    return 0;
  }
  sub_255850((__int64 *)v3, v6, *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

