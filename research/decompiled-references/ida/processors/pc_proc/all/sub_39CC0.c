__int64 __fastcall sub_39CC0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // rax
  __int64 flags; // rax
  __int128 v7; // [rsp+0h] [rbp-198h] BYREF
  __int64 v8; // [rsp+10h] [rbp-188h]
  __int64 v9; // [rsp+18h] [rbp-180h]
  __int64 v10; // [rsp+20h] [rbp-178h]
  _BYTE v11[320]; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    v8 = -1;
    v9 = 0;
    v5 = (unsigned __int64 *)v11;
    v10 = 0;
    v7 = -1;
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
    while ( &v12 != v5 );
    while ( (unsigned int)decode_insn() )
    {
      if ( (_WORD)v9 == 86 || (_WORD)v9 == 89 )
        return sub_80350(a1, &v7, v11);
      if ( get_item_end() < a3 )
      {
        flags = get_flags_ex();
        if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000) != 0 )
          continue;
      }
      return -1;
    }
  }
  return -1;
}

