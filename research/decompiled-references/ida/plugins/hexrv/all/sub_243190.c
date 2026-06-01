__int64 __fastcall sub_243190(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, _QWORD *a5, int a6, char a7)
{
  unsigned __int64 not_tail; // r12
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  not_tail = a4;
  v15 = __readfsqword(0x28u);
  sub_250A30(a3);
  if ( (get_flags_ex() & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  *(_QWORD *)(a3 + 24) = not_tail;
  *(_DWORD *)(a3 + 8) = 64;
  while ( !(unsigned __int8)sub_37BE20(a1, not_tail, a3 + 48, 3) )
  {
    if ( *(_BYTE *)a5
      && (*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < not_tail || (unsigned __int8)is_mapped() != 1 || a6 > 0) )
    {
      copy_tinfo_t();
      goto LABEL_9;
    }
    if ( a4 != not_tail || !(unsigned __int8)sub_EE500(a4) )
    {
      s1 = (char *)&dword_30;
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_9;
    }
  }
  if ( a4 == not_tail && (get_tinfo_property() & 0xF) == 0xC )
    sub_EE500(a4);
LABEL_9:
  if ( !(unsigned __int8)*(_QWORD *)(a3 + 48) )
  {
    if ( !under_debugger )
      sub_37DDE0(50387);
    BUG();
  }
  if ( (get_tinfo_property() & 0xF) == 0xC && ((unsigned __int8)segtype() == 1 || (get_tinfo_property() & 0xF) == 0xA) )
  {
    sub_327290(&s1, *(_QWORD *)(a1 + 112), a3 + 48);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (unsigned __int8)sub_25CEA0(*(_QWORD *)(a1 + 112), not_tail, (a7 & 8) == 0) )
  {
    *(_DWORD *)(a3 + 56) |= 0x10u;
    if ( !(unsigned __int8)sub_25CC70(*(_QWORD *)(a1 + 112), not_tail, 0, 0) )
    {
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xB || (get_tinfo_property() & 0xF) == 0xA )
      {
        s1 = nullptr;
        s1 = (char *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( (unsigned int)get_tinfo_size() - 1 <= 1 )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB )
        {
          s1 = nullptr;
          *(_QWORD *)&v14 = 0;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
        }
      }
      else
      {
        s1 = nullptr;
        v14 = 0;
        get_stock_tinfo();
      }
      clear_tinfo_t();
    }
  }
  return sub_242AA0(a1, a2, a3, a4 - not_tail, a5, a6, a7);
}

