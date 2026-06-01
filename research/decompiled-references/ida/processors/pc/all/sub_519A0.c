__int64 __fastcall sub_519A0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rax
  __int64 not_tail; // rdi
  unsigned __int64 item_end; // rax
  unsigned __int64 v8; // r15
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 + a1;
    v5 = get_flags_ex() & 0x600;
    if ( v5 == 512 )
    {
      not_tail = prev_not_tail();
    }
    else
    {
      if ( !v5 )
        return del_items();
      not_tail = a2 + a1;
    }
    if ( not_tail != -1 )
    {
      item_end = get_item_end();
      v8 = item_end;
      if ( item_end != -1 && v3 < item_end )
      {
        result = del_items();
        if ( !a3 )
          return auto_mark_range();
        if ( *a3 < v8 )
          *a3 = v8;
        return result;
      }
    }
    return del_items();
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_51B00(10138);
}
