__int64 __fastcall sub_218F0(__int64 a1, __int64 a2)
{
  unsigned __int64 dword; // rbx
  char fixups; // al

  dword = (unsigned int)get_dword(a2);
  if ( *(_QWORD *)(a1 + 32) != -1 )
  {
    fixups = get_fixups(0, a2, 4);
    if ( dword <= 1 || fixups )
      return -1;
    dword = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 32) + dword);
  }
  if ( (unsigned __int8)is_spec_ea(dword) || (unsigned __int8)is_loaded(dword) )
    return dword;
  return -1;
}

