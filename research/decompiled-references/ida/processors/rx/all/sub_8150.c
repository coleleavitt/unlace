__int64 __fastcall sub_8150(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  int flags; // r15d
  __int64 result; // rax

  v4 = has_insn_feature();
  flags = get_flags_ex();
  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result == 5 )
  {
    if ( *(_WORD *)(a2 + 24) == 68 && *(_BYTE *)(a2 + 45) == 2 )
    {
      result = *(unsigned __int8 *)(a2 + 81);
      if ( (_BYTE)result == 1 || (_BYTE)result == 4 || (_BYTE)result == 3 && !*(_BYTE *)(a2 + 112) )
      {
        result = *(_QWORD *)(a3 + 8);
        if ( result != -1 )
        {
          result = is_mapped();
          if ( (_BYTE)result )
          {
            if ( (flags & 0xF000000) == 0 )
              op_offset();
            return insn_add_dref();
          }
        }
      }
    }
  }
  else if ( (unsigned __int8)result > 5u )
  {
    if ( (_BYTE)result == 7 )
    {
      if ( v4 )
      {
        result = insn_add_cref();
        if ( *(_BYTE *)(a1 + 128) )
        {
          result = func_does_return();
          *(_BYTE *)(a1 + 128) = result;
        }
      }
      else
      {
        return insn_add_cref();
      }
    }
  }
  else
  {
    result = (unsigned int)(result - 3);
    if ( (unsigned __int8)result <= 1u )
    {
      result = getinf_flag();
      if ( (_BYTE)result )
      {
        result = get_auto_state();
        if ( (_DWORD)result == 40 )
        {
          result = is_defarg();
          if ( !(_BYTE)result && !*(_WORD *)(a3 + 6) && (*(_BYTE *)(a3 + 1) == 4 || !*(_BYTE *)(a3 + 32)) )
          {
            result = insn_create_stkvar();
            if ( (_BYTE)result )
            {
              op_stkvar();
              result = is_off();
              if ( (_BYTE)result )
                return insn_add_off_drefs();
            }
          }
        }
      }
    }
  }
  return result;
}

