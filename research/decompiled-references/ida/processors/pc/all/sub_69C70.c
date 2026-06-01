unsigned __int64 __fastcall sub_69C70(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r14
  unsigned __int64 result; // rax
  char v6; // al
  __int64 v7; // rdx

  v2 = a1 + 80;
  v3 = a1 + 40;
  v4 = a1 + 40;
  if ( a2 )
    v4 = a1 + 80;
  set_immd();
  get_flags_ex();
  result = is_defarg();
  if ( !(_BYTE)result )
  {
    if ( !(unsigned __int8)has_insn_feature() )
    {
      result = *(unsigned __int16 *)(a1 + 24);
      if ( (_WORD)result != 131 )
      {
        if ( (unsigned __int16)result <= 0x83u )
        {
          if ( (unsigned __int16)(result - 6) > 0x2Au )
            goto LABEL_24;
          v7 = 0x148F000000000LL;
          if ( !_bittest64(&v7, result) )
          {
            if ( (_WORD)result != 7 )
            {
              if ( (_WORD)result == 6 )
              {
                if ( !a2 )
                  v3 = a1 + 80;
                if ( *(_BYTE *)(v3 + 1) == 1 && *(_WORD *)(v3 + 6) == 4 )
                  goto LABEL_15;
                if ( *(_BYTE *)(v4 + 1) == 5 )
                  return result;
              }
              goto LABEL_24;
            }
            goto LABEL_13;
          }
          goto LABEL_15;
        }
        if ( (_WORD)result == 209 )
        {
          if ( a2 )
          {
            v2 = a1 + 40;
            if ( *(_BYTE *)(a1 + 41) != 1 )
              goto LABEL_24;
          }
          else if ( *(_BYTE *)(a1 + 81) != 1 )
          {
            goto LABEL_24;
          }
          if ( *(_WORD *)(v2 + 6) != 4 )
            goto LABEL_24;
          goto LABEL_15;
        }
        if ( (unsigned __int16)result <= 0xD1u )
        {
          if ( (_WORD)result == 132 || (unsigned __int16)(result - 159) <= 1u )
            goto LABEL_15;
          goto LABEL_24;
        }
        if ( (_WORD)result != 216 )
        {
          if ( (unsigned __int16)result <= 0xD8u )
          {
            if ( (_WORD)result != 210 )
              goto LABEL_24;
            goto LABEL_13;
          }
          if ( (unsigned __int16)(result - 736) > 5u )
            goto LABEL_24;
LABEL_15:
          num_flag();
          return set_op_type();
        }
      }
    }
LABEL_13:
    v6 = *(_BYTE *)(v4 + 1);
    if ( v6 != 4 && (v6 != 2 || !*(_BYTE *)(v4 + 32)) )
      goto LABEL_15;
LABEL_24:
    result = get_auto_state();
    if ( (_DWORD)result == 40 )
    {
      if ( (unsigned int)getinf() == 25 || (result = getinf(), (_DWORD)result == 18) )
      {
        getseg();
        result = segm_adjust_ea();
        if ( result > 0xFFFF )
        {
          result = getseg();
          if ( result )
          {
            result = get_flags_ex() & 0x600;
            if ( result != 512 )
            {
              get_default_reftype();
              return op_offset();
            }
          }
        }
      }
    }
  }
  return result;
}
