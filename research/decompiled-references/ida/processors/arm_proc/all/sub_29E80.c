__int64 sub_29E80()
{
  unsigned __int64 *v0; // rax
  char i; // al
  unsigned __int8 v2; // al
  __int64 v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-198h]
  __int64 v7; // [rsp+48h] [rbp-190h]
  __int64 v8; // [rsp+50h] [rbp-188h]
  char v9; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v10; // [rsp+198h] [rbp-40h] BYREF

  v10 = __readfsqword(0x28u);
  v0 = (unsigned __int64 *)&v9;
  v6 = -1;
  v7 = 0;
  v8 = 0;
  v5 = -1;
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
  while ( &v10 != v0 );
  for ( i = func_tail_iterator_set(); i; i = func_item_iterator_next() )
  {
    v2 = netnode_charval();
    v3 = v2;
    if ( v2 )
    {
      decode_insn();
      sub_22060(&v5, (char *)&v5 + 40 * v3);
      netnode_supdel();
    }
  }
  return 1;
}

