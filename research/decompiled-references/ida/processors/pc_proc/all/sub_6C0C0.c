__int64 __fastcall sub_6C0C0(__int64 a1, __int64 insn, __int64 *a3)
{
  __int64 v5; // rax
  __int64 func; // r13
  unsigned __int64 *v8; // rax
  char v9; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v10; // [rsp+178h] [rbp-40h] BYREF

  v10 = __readfsqword(0x28u);
  v5 = netnode_altval();
  if ( !v5 )
  {
    func = get_func();
    do
    {
      v8 = (unsigned __int64 *)&v9;
      do
      {
        *(_WORD *)v8 = 0;
        v8 += 5;
        *((_WORD *)v8 - 19) = 0;
        *((_WORD *)v8 - 18) = 0;
        *((_DWORD *)v8 - 2) = 0;
        *((_WORD *)v8 - 17) = 0;
        *((_OWORD *)v8 - 2) = 0;
        *(v8 - 2) = 0;
      }
      while ( &v10 != v8 );
      if ( (get_flags_ex() & 0x10000) != 0 )
      {
        insn = decode_prev_insn();
        if ( insn == -1 )
          goto LABEL_15;
      }
      else
      {
        insn = decode_preceding_insn();
        if ( insn == -1 )
        {
LABEL_15:
          if ( !a3 )
            return -1;
          goto LABEL_16;
        }
      }
      if ( func )
      {
        if ( (int)get_func_chunknum() < 0 )
          goto LABEL_15;
      }
      else if ( get_func() )
      {
        if ( !a3 )
          return -1;
LABEL_16:
        *a3 = -1;
        return -1;
      }
      v5 = netnode_altval();
    }
    while ( !v5 );
  }
  if ( a3 )
    *a3 = insn;
  return insn + v5;
}

