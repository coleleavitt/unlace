__int64 __fastcall sub_318F0(__int64 a1, char a2)
{
  __int64 flags; // rax
  __int64 v3; // rdx
  __int64 not_tail; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 item_end; // rbp

  if ( (unsigned __int8)is_spec_ea() )
    return 2;
  flags = get_flags_ex(a1, 4);
  v3 = flags & 0x600;
  if ( v3 == 1024 )
    return 2;
  if ( a2 != 2 )
  {
    if ( v3 != 1536 )
    {
      if ( v3 != 512 )
        return 2 * (unsigned int)((flags & 0xD000) != 0);
      return 0;
    }
    goto LABEL_7;
  }
  if ( (flags & 0x600) == 0 )
    return 2;
  if ( v3 == 1536 )
  {
LABEL_7:
    if ( (flags & 0x10000) != 0 )
      return 2 * (unsigned int)((flags & 0xD000) != 0);
    return 2;
  }
  if ( v3 != 512 )
    return 2 * (unsigned int)((flags & 0xD000) != 0);
  not_tail = prev_not_tail(a1);
  v6 = not_tail;
  if ( not_tail == -1 )
    return 0;
  v7 = get_flags_ex(not_tail, 4);
  if ( (v7 & 0x600) != 0x400 )
    return 0;
  if ( (v7 & 0xF0000000) == 0x50000000 )
    return 2;
  if ( (unsigned __int8)is_problem_present(13, v6) )
  {
    item_end = get_item_end(v6);
    del_items(v6, 0, item_end - v6, 0);
    auto_mark_range(v6, item_end, 200);
    return 2;
  }
  return 0;
}

