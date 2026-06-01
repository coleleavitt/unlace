unsigned __int64 __fastcall sub_1B030(__int64 a1)
{
  char **v1; // rbx
  char i; // si
  char v4; // al
  __int64 v5; // [rsp+8h] [rbp-40h]
  unsigned __int64 v6; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  netnode_check();
  if ( v5 != -1 )
  {
    v1 = &off_71060;
    for ( i = 2; ; i = *((_BYTE *)v1 + 9) )
    {
      if ( i == -1 )
        goto LABEL_4;
      if ( *((_BYTE *)v1 + 8) != 1 )
        break;
      v1 += 4;
      netnode_supstr();
      if ( v1 == &off_711C0 )
        return v7 - __readfsqword(0x28u);
LABEL_5:
      ;
    }
    if ( netnode_supval() != 8 )
    {
LABEL_4:
      v1 += 4;
      if ( v1 == &off_711C0 )
        return v7 - __readfsqword(0x28u);
      goto LABEL_5;
    }
    v4 = *((_BYTE *)v1 + 9);
    if ( v4 == 8 )
    {
      if ( v6 == 2 )
      {
        v6 = 0;
        sub_16290(a1, (__int64)v1, (int *)&v6, 0);
        goto LABEL_4;
      }
    }
    else if ( v4 == 6 && v6 > 3 )
    {
      v6 = 3;
    }
    sub_16290(a1, (__int64)v1, (int *)&v6, 0);
    goto LABEL_4;
  }
  return v7 - __readfsqword(0x28u);
}

