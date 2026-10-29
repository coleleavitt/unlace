void __fastcall sub_111C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 not_tail; // rdi
  unsigned __int64 item_end; // rax

  if ( a3 )
  {
    v3 = a3 + a2;
    v4 = get_flags_ex() & 0x600;
    if ( v4 == 512 )
    {
      not_tail = prev_not_tail();
    }
    else
    {
      if ( !v4 )
      {
LABEL_9:
        del_items();
        return;
      }
      not_tail = v3;
    }
    if ( not_tail != -1 )
    {
      item_end = get_item_end();
      if ( item_end != -1 && v3 < item_end )
      {
        del_items();
        auto_mark_range();
        return;
      }
    }
    goto LABEL_9;
  }
  if ( under_debugger )
    BUG();
  interr();
  nullsub_2();
}

