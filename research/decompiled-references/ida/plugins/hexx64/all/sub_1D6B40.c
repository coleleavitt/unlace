__int64 __fastcall sub_1D6B40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 flags; // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rax

  v2 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  flags = get_flags_ex();
  if ( (flags & 0x1000) != 0 || (~BYTE1(flags) & 6) != 0 )
    return 0;
  v5 = *(_QWORD **)(a1 + 8);
  v6 = sub_330F80(v5, v2);
  return sub_332920((__int64)(v5 + 1), v6);
}

