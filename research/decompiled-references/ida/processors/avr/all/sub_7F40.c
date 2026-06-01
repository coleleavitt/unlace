__int64 __fastcall sub_7F40(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // r15d
  int v9; // eax

  v8 = *(unsigned __int8 *)(get_module_data() + 349);
  if ( !(_BYTE)v8 || (v9 = *(_DWORD *)(a7 + 4), (v9 & 1) != 0) || (v9 & 4) != 0 || *(_QWORD *)(a7 + 32) )
  {
    v8 = 0;
    sub_7DD0((__int64)"%a: Unexpected or incorrect CUSTOM_FIXUP\n", a1);
  }
  else
  {
    if ( (get_flags_ex() & 0x600) == 0 )
      create_16bit_data();
    if ( (*(_BYTE *)(a7 + 4) & 1) == 0 && *(_QWORD *)(a7 + 16) != -1 )
      sel2para();
    op_offset_ex();
  }
  return v8;
}

