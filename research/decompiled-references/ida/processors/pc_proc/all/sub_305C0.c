__int64 __fastcall sub_305C0(__int64 a1, __int64 insn)
{
  unsigned __int64 *v3; // rax
  int v4; // r12d
  __int64 v5; // rbp
  __int64 flags; // rax
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-198h]
  __int64 v11; // [rsp+48h] [rbp-190h]
  __int64 v12; // [rsp+50h] [rbp-188h]
  char v13; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v14; // [rsp+198h] [rbp-40h] BYREF

  v14 = __readfsqword(0x28u);
  if ( !(unsigned __int8)get_fixup() )
  {
    v10 = -1;
    v3 = (unsigned __int64 *)&v13;
    v11 = 0;
    v12 = 0;
    v9 = -1;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 5;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *(v3 - 2) = 0;
    }
    while ( &v14 != v3 );
    v4 = 20;
    get_flags_ex();
    while ( 1 )
    {
      v5 = insn;
      insn = decode_prev_insn();
      if ( insn == -1 || (int)get_func_chunknum() < 0 || insn + WORD1(v11) != v5 )
        break;
      flags = get_flags_ex();
      if ( (_WORD)v11 != 129 )
        goto LABEL_11;
      if ( (flags & 0xD000) != 0 )
        return 1;
      if ( !--v4 )
      {
LABEL_11:
        LOBYTE(v7) = sub_303E0(a1, (__int64)&v9);
        return v7 ^ 1u;
      }
    }
  }
  return 0;
}

