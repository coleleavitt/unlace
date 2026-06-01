__int64 __fastcall sub_294360(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbp

  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v2 + 8) != 58 )
    return 0;
  v4 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v4 + 8) != 61 )
    return 0;
  if ( sub_255A30(*(__int64 **)(v4 + 24)) || (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v6 = *(__int64 **)(a1 + 24);
  *(_DWORD *)(a1 + 8) = 60;
  v7 = v6[4];
  if ( v7 )
  {
    sub_255630(v6[4], a2);
    clear_tinfo_t();
    j__qfree(v7);
    v6 = *(__int64 **)(a1 + 24);
  }
  sub_255850(v6, v6[3], a2);
  return 1;
}

