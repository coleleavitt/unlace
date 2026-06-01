unsigned __int64 __fastcall sub_3260D0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  int flags; // eax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 ph; // rax
  _BYTE *v11; // rcx
  char i; // al
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-140h]
  unsigned __int8 *v16; // [rsp+8h] [rbp-140h]
  __int64 func; // [rsp+8h] [rbp-140h]
  unsigned __int64 v18; // [rsp+48h] [rbp-100h]
  unsigned __int64 v19; // [rsp+108h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  flags = get_flags_ex();
  v7 = flags & 0x600;
  if ( !a4 )
    goto LABEL_11;
  if ( v7 == 1536 )
  {
    if ( (flags & 0x10000000) == 0 )
    {
      v8 = get_item_end() - a3;
      goto LABEL_12;
    }
    func = get_func();
    if ( (unsigned __int8)func_tail_iterator_set() )
    {
      do
      {
        for ( i = xrefblk_t_first_from(); i; i = xrefblk_t_next_from() )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) >= v18 && (unsigned __int8)is_mapped() )
          {
            v13 = a4;
            if ( a4 == 1 )
            {
              v14 = get_func();
              v13 = 1;
              if ( v14 )
              {
                if ( v18 == *(_QWORD *)v14 )
                  v13 = ((*(_BYTE *)(v14 + 18) & 2) != 0) + 1;
              }
            }
            if ( func != get_func() )
              sub_3260D0(a1, a2, v18, v13 - 1);
          }
        }
        rangeset_t_add();
        get_switch_info();
        if ( (get_flags_ex() & 0x10000) != 0 )
          sub_3260D0(a1, a2, 0, a4 - 1);
      }
      while ( (unsigned __int8)func_item_iterator_next() );
    }
  }
  else
  {
    v8 = get_item_end() - a3;
    while ( 1 )
    {
      rangeset_t_add();
      if ( (unsigned int)sub_343460(a1, a3, v8) != 3 )
        break;
      a3 = v8 == 4 ? (unsigned int)get_dword() : get_qword();
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < a3 || !(unsigned __int8)is_mapped() )
        break;
      v7 = get_flags_ex() & 0x600;
LABEL_11:
      v15 = v7;
      v8 = get_item_end() - a3;
      if ( v15 == 1536 )
      {
LABEL_12:
        ph = get_ph();
        v11 = *(_BYTE **)(ph + 96);
        if ( v11 && *v11 )
        {
          v16 = *(unsigned __int8 **)(ph + 96);
          put_bytes();
          create_insn();
          v8 = *v16;
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}

