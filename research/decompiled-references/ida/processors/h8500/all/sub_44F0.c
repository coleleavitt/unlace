__int64 __fastcall sub_44F0(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax

  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    v2 = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)v2 > 0x30u )
    {
      result = (unsigned int)(v2 - 83);
      if ( (unsigned __int16)result <= 2u )
        goto LABEL_6;
    }
    else
    {
      if ( (unsigned __int16)v2 > 0x2Cu || (_WORD)v2 == 14 )
        return set_op_type();
      result = (unsigned int)(v2 - 33);
      if ( (unsigned __int16)result <= 2u )
      {
LABEL_6:
        num_flag();
        return set_op_type();
      }
    }
  }
  return result;
}

