__int64 __fastcall sub_1EA00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v5; // rax
  __int16 v6; // ax
  __int16 v7; // dx
  char v8; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v9; // [rsp+188h] [rbp-40h] BYREF

  v9 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 81) != 5 )
    return 0;
  v5 = (unsigned __int64 *)&v8;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v9 != v5 );
  if ( (*(_BYTE *)(a3 + 34) & 4) != 0 || (v6 = getinf(), v7 = *(_WORD *)(a3 + 24), (v6 & 0x1006) == 0x1002) )
  {
    if ( *(_WORD *)(a3 + 24) != 497 )
      return 0;
LABEL_7:
    decode_insn();
    return 0;
  }
  if ( v7 == 44 )
    goto LABEL_7;
  if ( *(_BYTE *)(a3 + 81) == 1 && *(_WORD *)(a3 + 86) == 15 )
  {
    if ( *(_DWORD *)(a1 + 212) )
    {
      get_sreg();
      v7 = *(_WORD *)(a3 + 24);
    }
    if ( v7 == 14 || v7 == 12 )
      goto LABEL_7;
  }
  return 0;
}

