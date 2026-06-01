__int64 __fastcall sub_70A0(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // cx

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    v3 = *(_WORD *)(a1 + 24);
    if ( v3 <= 0x53u )
    {
      if ( v3 <= 0x24u )
      {
        if ( v3 == 5 )
        {
LABEL_13:
          num_flag();
          return set_op_type();
        }
        if ( v3 == 8 )
          return set_op_type();
      }
      else
      {
        result = 1LL << ((unsigned __int8)v3 - 37);
        if ( (result & 0x6000000001LL) != 0 )
          return set_op_type();
        if ( (result & 0x16) == 0 )
        {
          if ( (result & 0x400000800000LL) == 0 )
            return result;
          goto LABEL_13;
        }
        if ( a2 )
          return set_op_type();
      }
    }
  }
  return result;
}

