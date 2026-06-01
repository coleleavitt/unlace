__int64 __fastcall sub_70350(__int64 a1)
{
  __int64 fchunk; // rax
  int v3; // r13d
  int v4; // r15d
  int flags; // eax
  unsigned __int64 *v6; // rax
  char v7; // [rsp+11h] [rbp-1B7h]
  char v8; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v9; // [rsp+188h] [rbp-40h] BYREF

  v9 = __readfsqword(0x28u);
  if ( (int)get_func_chunknum() >= 0 )
    return 0;
  fchunk = get_fchunk();
  if ( fchunk && *(char *)(fchunk + 17) >= 0 )
  {
    if ( (unsigned __int8)sub_6F3C0(*(_QWORD *)(a1 + 5304), (__int64 *)fchunk, 0, 1u) )
      return 0;
    if ( (unsigned __int8)xrefblk_t_first_to() )
    {
      v3 = 0;
      v4 = 0;
      while ( (int)get_func_chunknum() >= 0 )
      {
        if ( v7 == 17 )
        {
          if ( ++v4 > 1 )
            return 0;
        }
        else
        {
          if ( v7 != 19 )
            return 0;
          if ( ++v3 > 1 )
            return 0;
        }
        if ( !(unsigned __int8)xrefblk_t_next_to() )
          goto LABEL_15;
      }
      return 0;
    }
LABEL_15:
    if ( (get_flags_ex() & 0x10000) != 0 )
    {
      flags = get_flags_ex();
      if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 )
      {
        v6 = (unsigned __int64 *)&v8;
        do
        {
          *(_WORD *)v6 = 0;
          v6 += 5;
          *((_WORD *)v6 - 19) = 0;
          *((_WORD *)v6 - 18) = 0;
          *((_DWORD *)v6 - 2) = 0;
          *((_WORD *)v6 - 17) = 0;
          *((_OWORD *)v6 - 2) = 0;
          *(v6 - 2) = 0;
        }
        while ( &v9 != v6 );
        if ( (!(unsigned int)decode_insn() || !(unsigned __int8)is_ret_insn()) && netnode_supval() != 8 )
          return 0;
      }
    }
  }
  return 1;
}
