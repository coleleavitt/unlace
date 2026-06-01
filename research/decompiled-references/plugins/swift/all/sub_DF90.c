__int64 __fastcall sub_DF90(__int64 a1, __int64 *a2, __int64 a3, double a4, double a5)
{
  __int64 strlit_contents; // rax
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbp
  int flags; // eax

  strlit_contents = get_strlit_contents(a2, a3, -1, 0, 0, 0);
  if ( strlit_contents > 0 )
  {
    v7 = strlit_contents;
    if ( !(unsigned __int8)get_byte(strlit_contents + a3) )
    {
      if ( (*(_BYTE *)(a1 + 240) & 4) == 0 )
        return 1;
      v10 = v7 + 1;
      flags = get_flags_ex(a3, 4);
      if ( (flags & 0x600) == 0x400 )
      {
        if ( (flags & 0xF0000000) == 0x50000000 && v10 == get_item_end(a3) - a3 )
          return 1;
      }
      else if ( (flags & 0x600) == 0 )
      {
        if ( next_head(a3 + 1, v10 + a3) != -1 )
        {
LABEL_11:
          sub_CB10(
            (__int64)"could not create the string literal for the type name at %a, because there is already data at %a\n",
            a4,
            a5);
          return 1;
        }
LABEL_14:
        if ( !(unsigned __int8)create_strlit(a3, v10, 0) )
          sub_CB10((__int64)"could not create the string literal for the type name at %a\n", a4);
        return 1;
      }
      if ( a3 != -1 )
        goto LABEL_11;
      goto LABEL_14;
    }
    v9 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v9);
      *a2 = 0;
      a2[2] = 0;
    }
  }
  return 0;
}
