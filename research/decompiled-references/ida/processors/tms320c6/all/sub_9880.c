__int64 __fastcall sub_9880(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned __int16 word; // ax
  unsigned __int8 v7; // cf
  unsigned __int16 v8; // r13
  __int64 *v9; // rbx
  int v10; // ebp
  int v11; // eax

  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  v5 = *(_QWORD *)(a2 + 16) >> 1;
  word = get_word();
  v7 = _bittest((const int *)&a3, v5 & 0xF);
  *(_WORD *)(a2 + 26) = 2;
  v8 = word;
  if ( v7 )
    *(_BYTE *)(a2 + 29) |= 1u;
  v9 = qword_13E40;
  v10 = 0;
  *(_WORD *)(a2 + 24) = 0;
  do
  {
    if ( (v8 & *((_WORD *)v9 + 1)) == *(_WORD *)v9
      && ((unsigned __int8)(a3 >> 14) & *((_BYTE *)v9 + 5) & 0x7F) == *((_BYTE *)v9 + 4) )
    {
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v9[1])(a1, a2, a3, v8);
      if ( *(_WORD *)(a2 + 24) )
      {
        v11 = qword_13E40[3 * v10 + 2];
        if ( v11 )
        {
          if ( ((unsigned __int16)v11 & v8) != 0 )
            *(_BYTE *)(a2 + 29) |= 4u;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
    }
    ++v10;
    v9 += 3;
  }
  while ( v10 != 36 );
  if ( !*(_WORD *)(a2 + 24) )
    return 0;
  return *(unsigned __int16 *)(a2 + 26);
}

