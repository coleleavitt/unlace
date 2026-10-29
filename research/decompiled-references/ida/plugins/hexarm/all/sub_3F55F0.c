char __fastcall sub_3F55F0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 flags; // rax
  __int64 v5; // r12
  unsigned __int64 first_fcref_from; // rax

  LOBYTE(flags) = sub_11E2E0(a2);
  if ( (_BYTE)flags )
  {
    flags = *(int *)(*(_QWORD *)(a1 + 8) + 1184LL);
    if ( flags == a3 )
    {
      flags = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 864) < flags )
      {
        flags = sub_CF9B0();
        if ( flags != 1 )
        {
          if ( *(_WORD *)(a1 + 48) != 33 || (LOBYTE(flags) = is_ret_insn(), !(_BYTE)flags) )
          {
            v5 = *(_QWORD *)(a1 + 8);
            first_fcref_from = get_first_fcref_from();
            if ( first_fcref_from == -1
              || (unsigned __int8)sub_332C60(v5 + 8, first_fcref_from)
              || (get_item_end(), flags = get_flags_ex(), (flags & 0x10000) != 0) )
            {
              flags = *(_QWORD *)(a1 + 8);
              *(_DWORD *)(flags + 1184) = -1;
            }
          }
        }
      }
    }
  }
  return flags;
}

