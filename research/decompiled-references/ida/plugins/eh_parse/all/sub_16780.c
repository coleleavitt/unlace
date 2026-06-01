bool __fastcall sub_16780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  bool result; // al
  __int64 v8; // rdx
  int v9; // eax
  int flags; // eax

  if ( *(_BYTE *)(a1 + 81) )
  {
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
      goto LABEL_3;
    sub_11320(*(_QWORD *)(a1 + 8), a2);
    v9 = *(_DWORD *)(a1 + 48);
    if ( v9 == 5 || v9 == 2 )
    {
      flags = get_flags_ex(a4, 4, v8);
      if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x20000000 )
        create_data(a4, 0x20000000, 4, -1);
      set_cmt(a2, "Exception handler rva", 0);
    }
  }
  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 76);
    if ( !v6 )
      goto LABEL_5;
LABEL_12:
    if ( v6 != 1 )
      return 1;
    goto LABEL_7;
  }
LABEL_3:
  if ( sub_114F0(*(_QWORD *)(a1 + 56)) )
    return 1;
  v6 = *(_DWORD *)(a1 + 76);
  if ( v6 )
    goto LABEL_12;
LABEL_5:
  result = sub_EFD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), a3);
  if ( !result )
    return result;
  if ( *(_DWORD *)(a1 + 76) == 1 )
LABEL_7:
    sub_160D0(
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 64),
      a3,
      a4,
      *(_QWORD *)(a1 + 24),
      0,
      *(_DWORD *)(a1 + 72));
  return 1;
}

