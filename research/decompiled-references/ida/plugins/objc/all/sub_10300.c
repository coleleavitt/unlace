unsigned __int64 __fastcall sub_10300(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 *v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v9; // [rsp+30h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( netnode_qhashfirst() >= 0 )
  {
    do
    {
      v4 = netnode_hashval_long();
      v5 = *(_QWORD *)(a2 + 8);
      if ( v5 )
      {
        v6 = *(unsigned __int64 **)a2;
        v7 = 0;
        while ( v4 < *v6 || v4 >= v6[2] + *v6 )
        {
          ++v7;
          v6 += 3;
          if ( v5 == v7 )
            goto LABEL_7;
        }
        if ( v6 )
        {
          netnode_hashset();
          if ( *(_BYTE *)(a1 + 2216) )
            sub_EC40();
        }
      }
LABEL_7:
      ;
    }
    while ( netnode_qhashnext() >= 0 );
  }
  return v9 - __readfsqword(0x28u);
}
