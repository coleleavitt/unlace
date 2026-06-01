__int64 __fastcall sub_57B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 flags; // rax
  unsigned int v9; // edx

  get_module_data();
  flags = get_flags_ex(a2, 4);
  v9 = 0;
  if ( (~BYTE1(flags) & 6) == 0 )
  {
    if ( (*(_BYTE *)(a6 + 4) & 1) == 0 && *(_QWORD *)(a6 + 16) != -1 )
      sel2para();
    if ( a5 )
      handle_fixups_in_macro();
    op_offset_ex();
    return 1;
  }
  return v9;
}
