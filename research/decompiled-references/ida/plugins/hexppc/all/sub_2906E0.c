__int64 __fastcall sub_2906E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 *v5; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v1 + 8) != 58 )
    return 0;
  v3 = *(_QWORD *)(v1 + 32);
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  if ( sub_251DB0(*(__int64 **)(v3 + 24)) || (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v5 = *(__int64 **)(a1 + 24);
  *(_DWORD *)(a1 + 8) = 60;
  if ( v5[4] )
  {
    sub_2519B0(v5[4]);
    clear_tinfo_t();
    j__qfree();
    v5 = *(__int64 **)(a1 + 24);
  }
  sub_251BD0(v5, v5[3]);
  return 1;
}

