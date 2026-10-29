__int64 __fastcall sub_18920(__int64 a1, char a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int16 v5; // di
  __int16 v6; // di

  result = 0;
  if ( a3 != 1 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      if ( (*(_WORD *)((_BYTE *)&unk_30718 + v4) & (unsigned __int16)a3) != 0 )
        v5 |= *(_WORD *)((char *)&unk_30720 + v4);
      v4 += 2;
    }
    while ( v4 != 8 );
    if ( a2 )
      v6 = word_3A5A4 & 8 | v5;
    else
      v6 = word_3A5A4 & ~v5;
    word_3A5A4 = v6;
    return 1;
  }
  return result;
}

