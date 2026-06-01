__int64 __fastcall sub_2CB60(__int64 a1, __int64 a2)
{
  char *v2; // r13
  unsigned __int16 word; // ax
  unsigned __int16 v4; // dx
  __int16 v5; // dx

  v2 = (char *)&unk_5981A - 10;
  while ( 1 )
  {
    word = get_word(&v2[a2 - ((_QWORD)&unk_5981A - 10)]);
    v4 = *(_WORD *)v2;
    if ( (unsigned __int8)*(_WORD *)v2 != (_BYTE)word && (_BYTE)v4 != 0xFF )
      break;
    v5 = HIBYTE(v4);
    if ( HIBYTE(word) != v5 && v5 != 255 )
      break;
    v2 += 2;
    if ( &unk_5981A == (_UNKNOWN *)v2 )
      return (unsigned int)get_dword(a2 + 12);
  }
  return -1;
}

