__int64 __fastcall sub_36D670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax

  v3 = *(_QWORD *)(a1 + 1504);
  if ( (*(_BYTE *)(v3 + 49) & 8) == 0 )
    return 0;
  v4 = *(_DWORD *)(v3 + 80);
  if ( *(_DWORD *)(a3 + 88) != v4
    || *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 131LL) == v4
    || (get_tinfo_property() & 0xF) != 8 )
  {
    return 0;
  }
  copy_tinfo_t();
  clear_tinfo_t();
  return 1;
}

