unsigned __int64 __fastcall sub_62D20(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 i; // rbx
  unsigned __int16 v4; // ax
  __int64 v6; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v7; // [rsp+408h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v2 = netnode_supfirst();
  if ( v2 != -1 )
  {
    for ( i = v2; i != -1; i = netnode_supnext() )
    {
      if ( netnode_supval() <= 0 )
        goto LABEL_3;
      v4 = WORD2(v6);
      if ( WORD2(v6) < WORD1(v6) )
        v4 = WORD1(v6);
      if ( v4 > 0x3FFu )
LABEL_3:
        netnode_supdel();
      else
        sub_62760(a1, i, (unsigned int)a2, (__int64)&v6);
    }
  }
  return v7 - __readfsqword(0x28u);
}

