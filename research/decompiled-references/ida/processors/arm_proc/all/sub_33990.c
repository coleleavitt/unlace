__int64 __fastcall sub_33990(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 word; // bp
  int v4; // eax
  int v5; // edx
  int v6; // eax

  result = 0;
  if ( *(_WORD *)(a2 + 26) == 2
    && (*(_QWORD *)(a2 + 24) & 0x200000000FFFFLL) == 0x29
    && *(_BYTE *)(a2 + 41) == 1
    && *(_WORD *)(a2 + 46) == 15 )
  {
    word = get_word();
    v4 = getinf_flag();
    if ( (_BYTE)v4 )
    {
      if ( *(_BYTE *)(a1 + 288) )
        word = __ROL2__(word, 8);
    }
    LOBYTE(v4) = word == 18112;
    LOBYTE(v5) = word == -16640;
    v6 = v5 | v4;
    LOBYTE(v5) = word == 0;
    return v5 | (unsigned int)v6;
  }
  return result;
}

