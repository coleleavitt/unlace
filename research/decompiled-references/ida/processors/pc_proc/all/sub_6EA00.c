__int64 __fastcall sub_6EA00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12

  if ( *(_WORD *)(a2 + 24) == 92 )
  {
    if ( *(_BYTE *)(a2 + 81) != 2 )
      goto LABEL_8;
    if ( (get_flags_ex() & 0xF000000) == 0 && sub_80460(a2, a3) != -1 )
    {
      sel2para();
      if ( (unsigned __int8)is_mapped() )
      {
        get_default_reftype();
        op_offset();
      }
    }
    if ( *(_WORD *)(a2 + 24) == 92 )
    {
LABEL_8:
      if ( *(_WORD *)(a3 + 26) != 30 )
      {
        get_flags_ex();
        if ( !(unsigned __int8)is_off() )
          return -1;
      }
    }
  }
  v4 = sub_80350(a1, a2, a3);
  if ( v4 == -1 )
    return -1;
  if ( *(_WORD *)(a2 + 24) != 92 )
    insn_create_op_data();
  insn_add_dref();
  return v4;
}

