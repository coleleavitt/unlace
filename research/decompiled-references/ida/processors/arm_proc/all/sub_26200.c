__int64 __fastcall sub_26200(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 result; // rax

  result = is_mapped();
  if ( (_BYTE)result )
  {
    if ( a3 )
    {
      result = insn_add_cref();
      if ( *(_BYTE *)(a1 + 368) )
      {
        result = *(_BYTE *)(a1 + 40) & 0xF;
        if ( (_BYTE)result == 14 )
        {
          result = func_does_return();
          if ( !(_BYTE)result )
          {
            *(_BYTE *)(a1 + 368) = 0;
            result = set_noret_insn();
          }
        }
      }
      if ( a4 )
        return auto_apply_type();
    }
    else
    {
      return insn_add_cref();
    }
  }
  return result;
}

