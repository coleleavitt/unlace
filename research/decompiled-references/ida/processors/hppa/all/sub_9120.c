__int64 __fastcall sub_9120(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // cx

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    v3 = *(_WORD *)(a1 + 24);
    if ( v3 > 0x2Bu )
    {
      v4 = v3 - 78;
      if ( v4 <= 0x3Du )
      {
        result = 1LL << v4;
        if ( ((1LL << v4) & 0x3C00000000000380LL) != 0 )
          return set_op_type();
        if ( (result & 0x4041) != 0 )
        {
LABEL_12:
          num_flag();
          return set_op_type();
        }
      }
    }
    else if ( v3 > 0x19u )
    {
      result = 1LL << v3;
      if ( ((1LL << v3) & 0xF0314000000LL) != 0 )
        return set_op_type();
      if ( (result & 0x28000000) != 0 )
      {
        if ( a2 )
          return set_op_type();
        goto LABEL_12;
      }
    }
  }
  return result;
}

