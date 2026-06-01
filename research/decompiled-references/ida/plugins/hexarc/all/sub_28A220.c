__int64 __fastcall sub_28A220(__int64 a1, __int64 a2)
{
  char v3; // r12
  int tinfo_size; // r12d

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 48 )
    return 0;
  v3 = get_tinfo_property() & 0xF;
  if ( ((get_tinfo_property() & 0xF) == 9) != (v3 == 9) && ((get_tinfo_property() & 0xF) != 9 || v3 != 9) )
    return 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size > (int)get_tinfo_size() )
    return 0;
  sub_24E4D0(*(__int64 **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL));
  if ( (unsigned __int8)sub_27C780(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

