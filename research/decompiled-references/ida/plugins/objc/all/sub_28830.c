unsigned __int64 __fastcall sub_28830(__int64 a1, unsigned __int64 *a2)
{
  __int64 i; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 j; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int128 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int128 v18; // [rsp+38h] [rbp-70h]
  unsigned __int64 v19; // [rsp+68h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v15 = 0;
  sub_283D0(a1, a2);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  for ( i = netnode_supfirst(); i != -1; i = netnode_supnext() )
  {
    v4 = node2ea();
    v5 = a2[1];
    if ( *a2 >= v5 || v4 < v5 && v4 >= *a2 )
    {
      v6 = netnode_altval();
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 2) != 0 )
        {
          v7 = v16;
          v8 = v15;
          if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
          {
            v15 = qvector_reserve();
            v8 = v15;
            v7 = v16;
          }
          *(_QWORD *)(v8 + 8 * v7) = v4;
          *(_QWORD *)&v16 = v16 + 1;
        }
        else
        {
          v9 = v18;
          v10 = v17;
          if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
          {
            v17 = qvector_reserve();
            v10 = v17;
            v9 = v18;
          }
          *(_QWORD *)(v10 + 8 * v9) = v4;
          *(_QWORD *)&v18 = v18 + 1;
        }
      }
    }
  }
  sub_EC40();
  if ( *(_BYTE *)(*(_QWORD *)a1 + 2216LL) )
  {
    sub_EC40();
    for ( j = netnode_supfirst(); j != -1; j = netnode_supnext() )
    {
      node2ea();
      get_ea_name();
      sub_EC40();
    }
    if ( (_QWORD)v16 )
    {
      sub_EC40();
      v13 = 0;
      do
      {
        sub_EC40();
        ++v13;
      }
      while ( v13 != (_QWORD)v16 );
      if ( !(_QWORD)v18 )
      {
LABEL_26:
        if ( v17 )
          qfree();
        if ( v15 )
          goto LABEL_19;
        return v19 - __readfsqword(0x28u);
      }
    }
    else if ( !(_QWORD)v18 )
    {
      goto LABEL_26;
    }
    sub_EC40();
    v14 = 0;
    do
    {
      sub_EC40();
      ++v14;
    }
    while ( v14 != (_QWORD)v18 );
    goto LABEL_26;
  }
  if ( v17 )
    qfree();
  if ( v15 )
LABEL_19:
    qfree();
  return v19 - __readfsqword(0x28u);
}
