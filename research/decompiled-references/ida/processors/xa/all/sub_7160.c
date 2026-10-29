__int64 __fastcall sub_7160(__int64 a1, int a2, int a3, char a4, __int64 a5, char a6, __int64 a7)
{
  int v11; // eax
  __int64 result; // rax

  if ( a2 )
  {
    if ( decode_prev_insn() == -1 )
      return 0;
    v11 = *(unsigned __int16 *)(a1 + 24);
    if ( a3 != 43 )
      goto LABEL_3;
LABEL_24:
    if ( (((_WORD)v11 - 43) & 0xFFFD) != 0 )
      return 0;
    goto LABEL_6;
  }
  v11 = *(unsigned __int16 *)(a1 + 24);
  if ( a3 == 43 )
    goto LABEL_24;
LABEL_3:
  if ( (a3 == 67 || a3 == 1) && (_WORD)v11 == 3 )
  {
    if ( !a4 )
      goto LABEL_15;
    goto LABEL_7;
  }
  if ( v11 != a3 )
    return 0;
LABEL_6:
  if ( !a4 )
    goto LABEL_15;
LABEL_7:
  if ( *(_BYTE *)(a1 + 41) != a4 )
    return 0;
  if ( a5 != -1 )
  {
    if ( (a4 & 0xFD) == 1 )
    {
      if ( *(unsigned __int16 *)(a1 + 46) != a5 )
        return 0;
    }
    else if ( *(_QWORD *)(a1 + 56) != a5 )
    {
      return 0;
    }
  }
LABEL_15:
  result = 1;
  if ( !a6 )
    return result;
  if ( *(_BYTE *)(a1 + 81) != a6 )
    return 0;
  if ( a7 != -1 )
  {
    if ( a6 != 3 )
    {
      if ( a6 == 5 )
        return *(_QWORD *)(a1 + 88) == a7;
      if ( a6 != 1 )
        return *(_QWORD *)(a1 + 96) == a7;
    }
    return *(unsigned __int16 *)(a1 + 86) == a7;
  }
  return result;
}

