bool __fastcall sub_25880(__int64 a1, __int64 a2)
{
  __int16 word; // ax
  bool result; // al
  __int64 v4; // rax

  if ( !*(_DWORD *)(a1 + 212) || (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    word = get_word();
    HIBYTE(word) &= 0xF8u;
    if ( word == -24576 || (unsigned __int16)get_word() == 0xF20F && (get_word() & 0xF0FF) == 0 )
      return 1;
  }
  result = 0;
  if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 12 )
  {
    v4 = get_dword() & 0xFF0FF000LL;
    if ( (_DWORD)v4 == -502480896 )
      v4 = get_dword() & 0xFF0FF000LL;
    return (_DWORD)v4 == -452136960;
  }
  return result;
}

