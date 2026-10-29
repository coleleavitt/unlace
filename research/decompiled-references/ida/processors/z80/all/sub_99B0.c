__int16 __fastcall sub_99B0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  set_immd();
  get_flags_ex();
  LOWORD(v1) = is_defarg();
  if ( !(_BYTE)v1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)v1 <= 0x4Cu )
    {
      if ( (unsigned __int16)v1 > 0x1Au )
      {
        v3 = 0x2004000300001LL;
        v1 = (unsigned int)(v1 - 27);
        if ( !_bittest64(&v3, v1) )
          return v1;
      }
      else if ( (_WORD)v1 != 6 )
      {
        return v1;
      }
      goto LABEL_8;
    }
    LOWORD(v1) = v1 - 139;
    if ( (unsigned __int16)v1 <= 9u )
    {
      v2 = 577;
      if ( _bittest64(&v2, v1) )
      {
LABEL_8:
        num_flag();
        LOWORD(v1) = set_op_type();
      }
    }
  }
  return v1;
}

