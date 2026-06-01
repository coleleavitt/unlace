__int64 __fastcall sub_34670(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // r13
  int auto_state; // eax
  char v7; // r15
  __int16 v8; // ax
  __int64 v9; // rax
  int flags; // eax
  __int64 dword; // [rsp+10h] [rbp-88h]
  __int64 qword; // [rsp+10h] [rbp-88h]
  __int64 v13; // [rsp+28h] [rbp-70h]

  get_flags_ex();
  get_flags_ex();
  v4 = *(_BYTE *)(a3 + 5) == 7 || *(_BYTE *)(a3 + 5) == 2;
  if ( v4 )
  {
    if ( !(unsigned __int8)is_defarg() )
    {
      if ( *(_BYTE *)(a3 + 5) == 2 )
        dword = (unsigned int)get_dword();
      else
        dword = get_qword();
      auto_state = get_auto_state();
      if ( auto_state == 45 )
      {
        if ( (unsigned __int8)sub_341F0(a1, *(_QWORD *)(a2 + 16), dword, 1) )
        {
          get_default_reftype();
          op_offset();
          get_flags_ex();
        }
      }
      else if ( auto_state == 40 )
      {
        auto_mark_range();
      }
    }
    v7 = is_off();
    if ( v7 )
    {
      if ( *(_BYTE *)(a3 + 5) == 2 )
        qword = (unsigned int)get_dword();
      else
        qword = get_qword();
      if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
      {
        if ( !(unsigned __int8)is_defarg() )
        {
          get_default_reftype();
          op_offset();
        }
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( qword != v9 && qword != -1 && ((16LL * *(_QWORD *)a2) & v9) != v13 )
        {
          del_dref();
          flags = get_flags_ex();
          if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 && (flags & 0x1000) == 0 )
          {
            del_items();
            auto_mark_range();
          }
        }
        get_name_base_ea();
        v4 = 0;
        add_dref();
        netnode_supdel();
        netnode_supdel();
      }
      else
      {
        v4 = v7;
      }
    }
    if ( (unsigned __int8)netnode_charval() != 0xFF && v4 )
    {
      if ( netnode_altval() != 2 )
        netnode_supset();
      if ( (*(_BYTE *)(a1 + 184) & 2) == 0 && *(_BYTE *)(a3 + 1) == 2 )
      {
        v8 = *(_WORD *)(a2 + 24);
        if ( v8 == 480
          || (unsigned __int16)(v8 - 30) <= 1u
          || (unsigned __int16)(v8 - 113) <= 1u
          || (LOBYTE(v8) = v8 & 0x7F, v8 == 344) )
        {
          netnode_supset();
        }
      }
    }
  }
  return 1;
}

