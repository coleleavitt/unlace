__int64 __fastcall sub_5810(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v7; // r14

  result = *(unsigned __int8 *)(a4 + 1);
  if ( (_BYTE)result == 5 )
  {
    get_flags_ex();
    result = op_adds_xrefs();
    if ( (_BYTE)result )
    {
      sub_7520(a3, a4);
      return insn_add_off_drefs();
    }
  }
  else if ( (unsigned __int8)result > 5u )
  {
    if ( (_BYTE)result == 7 )
    {
      v7 = has_insn_feature();
      map_code_ea();
      if ( v7 )
      {
        result = insn_add_cref();
        if ( *a2 )
        {
          result = func_does_return();
          *a2 = result;
        }
      }
      else
      {
        return insn_add_cref();
      }
    }
  }
  else if ( (_BYTE)result == 2 )
  {
    if ( (*(_BYTE *)(a4 + 32) & 8) != 0 )
      get_sreg();
    use_mapping();
    insn_add_dref();
    return insn_create_op_data();
  }
  else if ( (_BYTE)result == 4 )
  {
    get_flags_ex();
    result = op_adds_xrefs();
    if ( (_BYTE)result )
    {
      sub_7520(a3, a4);
      result = insn_add_off_drefs();
    }
    if ( *(_WORD *)(a4 + 6) == 12 )
    {
      result = getinf_flag();
      if ( (_BYTE)result )
      {
        result = get_auto_state();
        if ( (_DWORD)result == 40 )
        {
          get_flags_ex();
          result = is_defarg();
          if ( !(_BYTE)result )
          {
            result = insn_create_stkvar();
            if ( (_BYTE)result )
              return op_stkvar();
          }
        }
      }
    }
  }
  return result;
}

