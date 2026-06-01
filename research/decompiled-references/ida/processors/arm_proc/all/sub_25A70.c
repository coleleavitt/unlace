void __fastcall sub_25A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a3 != -1 && (*(_BYTE *)(a1 + 184) & 0x10) == 0 && !(unsigned __int8)sub_55C30(a3) )
  {
    v5 = is_loaded();
    if ( v5 )
    {
      if ( *(_DWORD *)(a1 + 212) )
        v5 = (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL;
      v6 = get_flags_ex() & 0x600;
      if ( v6 != 1536 )
      {
        if ( v6 == 512 && (unsigned int)get_auto_state() != 25 )
        {
          if ( (get_flags_ex() & 0x600) == 0x200 )
            prev_not_tail();
          if ( (unsigned __int8)is_problem_present() )
          {
            v7 = get_flags_ex() & 0x600;
            if ( v7 == 1024 || v7 == 1536 && a4 != v5 )
              del_items();
          }
        }
        goto LABEL_10;
      }
      if ( a4 == v5 )
      {
LABEL_10:
        split_sreg_range();
        return;
      }
    }
    remember_problem();
  }
}

