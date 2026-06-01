unsigned __int64 __fastcall sub_AC40(_QWORD *a1, char a2)
{
  __int64 v2; // rax
  int v3; // r13d
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 v9; // [rsp+408h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v2 = 0;
  if ( (a2 & 1) != 0 && a1[21] )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1[20] + 88 * v2);
      if ( getseg() )
      {
        create_data();
        if ( (get_flags_ex() & 0x600) == 0x200 )
          del_items();
        set_cmt();
        if ( v4 != get_name_ea() )
        {
          set_name();
          if ( !(unsigned __int8)set_name() )
            set_cmt();
        }
      }
      v2 = ++v3;
    }
    while ( (unsigned __int64)v3 < a1[21] );
  }
  if ( (a2 & 4) != 0 )
  {
    v5 = a1[30];
    v6 = v5 + 56LL * a1[31];
    if ( v6 != v5 )
    {
      v7 = a1[30];
      do
      {
        if ( (unsigned __int8)is_loaded() )
        {
          create_insn();
          set_name();
          qsnprintf();
          get_first_fcref_from();
          set_name();
        }
        v7 += 56;
      }
      while ( v6 != v7 );
    }
  }
  return v9 - __readfsqword(0x28u);
}

