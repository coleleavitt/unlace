__int64 __fastcall sub_36B0(__int64 a1, __int64 a2)
{
  unsigned int dword; // eax
  __int64 v3; // rbx
  int v4; // r13d
  unsigned int v6; // eax

  create_data(a1, 0x20000000, 4, -1);
  dword = get_dword(a1);
  v3 = a2 + dword;
  v4 = dword & 1;
  op_offset(a1, 0, 2, -1, a2, dword & 1);
  if ( v4 )
  {
    v3 &= ~1uLL;
    v6 = str2reg("T");
    split_sreg_range(v3, v6, 1, 3, 1);
  }
  auto_mark_range(v3, v3 + 1, 20);
  return auto_mark_range(v3, v3 + 1, 30);
}

