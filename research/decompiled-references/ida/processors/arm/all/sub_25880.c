bool __fastcall sub_25880(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int16 word; // ax
  bool result; // al
  __int64 v6; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)(a1 + 212) )
  {
    if ( (unsigned __int64)(get_sreg(v3, 20) - 1) > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_4;
    v3 = *(_QWORD *)(a2 + 16);
  }
  word = get_word(v3);
  HIBYTE(word) &= 0xF8u;
  if ( word == -24576
    || (unsigned __int16)get_word(*(_QWORD *)(a2 + 16)) == 0xF20F
    && (get_word(*(_QWORD *)(a2 + 16) + 2LL) & 0xF0FF) == 0 )
  {
    return 1;
  }
LABEL_4:
  result = 0;
  if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 12 )
  {
    v6 = get_dword(*(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26)) & 0xFF0FF000LL;
    if ( (_DWORD)v6 == -502480896 )
      v6 = get_dword(*(_QWORD *)(a2 + 16) + 2 * *(unsigned __int16 *)(a2 + 26)) & 0xFF0FF000LL;
    return (_DWORD)v6 == -452136960;
  }
  return result;
}
