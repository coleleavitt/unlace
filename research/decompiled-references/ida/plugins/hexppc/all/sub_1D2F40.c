__int64 __fastcall sub_1D2F40(__int64 a1)
{
  __int64 flags; // rax
  __int64 v3; // rbp
  __int64 v4; // rax

  flags = get_flags_ex();
  if ( (flags & 0x1000) != 0 || (~BYTE1(flags) & 6) != 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_32CB20(v3);
  return sub_32E510(v3 + 8, v4);
}

