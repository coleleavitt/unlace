__int64 sub_29E80()
{
  unsigned __int64 *v0; // rax
  char i; // al
  __int128 v3; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+40h] [rbp-198h]
  __int64 v5; // [rsp+48h] [rbp-190h]
  __int64 v6; // [rsp+50h] [rbp-188h]
  char v7; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v8; // [rsp+198h] [rbp-40h] BYREF

  v8 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v7;
  v4 = -1;
  v5 = 0;
  v6 = 0;
  v3 = -1;
  do
  {
    *(_WORD *)v0 = 0;
    v0 += 5;
    *((_WORD *)v0 - 19) = 0;
    *((_WORD *)v0 - 18) = 0;
    *((_DWORD *)v0 - 2) = 0;
    *((_WORD *)v0 - 17) = 0;
    *((_OWORD *)v0 - 2) = 0;
    *(v0 - 2) = 0;
  }
  while ( &v8 != v0 );
  for ( i = func_tail_iterator_set(); i; i = func_item_iterator_next() )
  {
    if ( (unsigned __int8)netnode_charval() )
    {
      decode_insn();
      sub_22060((__int64)&v3);
      netnode_supdel();
    }
  }
  return 1;
}
