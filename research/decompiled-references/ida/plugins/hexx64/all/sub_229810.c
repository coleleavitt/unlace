bool __fastcall sub_229810(__int64 a1, __int64 a2)
{
  int tinfo_size; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rdx
  char tinfo_property; // r12
  char v9; // r12
  char v10; // al
  char v11; // r12
  char v12; // al
  char v13; // cl
  char v14; // dl
  char v15; // al
  char v16; // bl
  bool v17; // al
  bool v18; // [rsp+Fh] [rbp-39h]

  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 0;
  tinfo_size = *(_DWORD *)(a2 + 52);
  if ( !tinfo_size )
    tinfo_size = get_tinfo_size();
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_QWORD *)(a1 + 120) == v3 ? -1LL : *(_QWORD *)(v3 + 56);
  if ( tinfo_size != *(_QWORD *)(a1 + 128) - v4 )
    return 0;
  if ( !*(_BYTE *)(a1 + 168) )
    return 1;
  v6 = *(_DWORD *)(a2 + 56);
  if ( (v6 & 0x400) != 0 )
    return 1;
  v7 = *(_QWORD *)(a1 + 176);
  if ( v7 != -1 && v7 != *(_QWORD *)(a2 + 32)
    || (*(_BYTE *)(a1 + 201) & 4) != 0
    || (v6 & 2) != 0 && *(_QWORD *)(a2 + 40) != -1 && (get_tinfo_property() & 0xF) == 0xB )
  {
    return 0;
  }
  tinfo_property = get_tinfo_property();
  if ( ((tinfo_property & 0x2F) == 13) != ((get_tinfo_property() & 0x2F) == 13) )
    return (get_tinfo_property() & 0x2F) == 13;
  v9 = get_tinfo_property();
  if ( ((get_tinfo_property() & 0xF) == 10) != ((v9 & 0xF) == 10) )
    return (get_tinfo_property() & 0xF) == 10;
  if ( !(unsigned __int8)*(_QWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(a2 + 52) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) )
      return (get_tinfo_property() & 0xF) == 11;
    return 0;
  }
  v10 = get_tinfo_property();
  if ( (v10 & 0x3E) != 0 )
  {
    v11 = (v10 & 0xFu) <= 8;
    v12 = get_tinfo_property();
    v13 = 0;
    v14 = v12;
    if ( (v12 & 0x3E) == 0 )
      goto LABEL_28;
  }
  else
  {
    v14 = get_tinfo_property();
    if ( (v14 & 0x3E) == 0 )
      goto LABEL_31;
    v11 = 0;
  }
  v13 = (v14 & 0xFu) <= 8;
LABEL_28:
  if ( v13 != v11 )
    return *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) >= (unsigned __int64)get_tinfo_size() == v11;
LABEL_31:
  v15 = get_tinfo_property();
  if ( v15 && ((v15 & 0xE) != 0 || (v15 & 0x30) == 0) )
  {
    get_tinfo_property();
    v16 = get_tinfo_property();
    clear_tinfo_t();
    v17 = (v16 & 0x3F) != 48;
  }
  else
  {
    v17 = 0;
  }
  v18 = v17;
  clear_tinfo_t();
  return v18;
}

