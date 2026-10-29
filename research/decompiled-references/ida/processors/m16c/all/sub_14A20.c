__int64 __fastcall sub_14A20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rax

  if ( (unsigned __int8)is_defarg() )
    return 0;
  v4 = getinf_flag();
  if ( !(_BYTE)v4 || (unsigned int)get_auto_state() != 40 || *(_BYTE *)(a3 + 1) != 4 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)(a3 + 6) - 29) > 1u )
  {
    if ( *(_DWORD *)(a1 + 4328) == 6 )
    {
      getseg();
      segm_adjust_ea();
      v6 = getseg();
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 184) != 12 && (get_flags_ex() & 0x600) != 0x200 )
        {
          get_default_reftype();
          op_offset();
        }
      }
    }
    return 0;
  }
  if ( (unsigned __int8)insn_create_stkvar() )
    op_stkvar();
  return v4;
}

