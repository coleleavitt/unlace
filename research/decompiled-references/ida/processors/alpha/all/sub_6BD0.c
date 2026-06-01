char __fastcall sub_6BD0(__int64 a1, _WORD *a2, __int64 a3, char a4, char a5, double a6)
{
  int auto_state; // eax
  bool v9; // dl
  int v10; // edx

  LOBYTE(auto_state) = *(_BYTE *)(a3 + 1);
  switch ( (char)auto_state )
  {
    case 1:
      if ( *(_WORD *)(a3 + 6) == 29 )
      {
        LOWORD(auto_state) = a2[12];
        v9 = (unsigned __int16)(auto_state - 108) > 1u;
        LOBYTE(auto_state) = (_WORD)auto_state != 21;
        if ( ((unsigned __int8)auto_state & v9) != 0 && !a5 )
          LOBYTE(auto_state) = split_sreg_range();
      }
      break;
    case 3:
      goto LABEL_5;
    case 4:
      if ( a2[12] != 109 )
        sub_6AC0(a1, a2, a3);
      LOBYTE(auto_state) = sub_6510((__int64)a2);
LABEL_5:
      if ( !a4 )
      {
        get_flags_ex();
        if ( (unsigned __int8)is_off() && (unsigned __int16)(a2[12] - 108) > 1u
          || (get_flags_ex(), (unsigned __int8)is_stroff()) )
        {
          if ( insn_add_off_drefs() != -1 )
            insn_create_op_data();
        }
        LOBYTE(auto_state) = getinf_flag();
        if ( (_BYTE)auto_state )
        {
          auto_state = get_auto_state();
          if ( auto_state == 40 )
          {
            auto_state = *(unsigned __int16 *)(a3 + 6);
            if ( auto_state == 15 || auto_state == 30 )
            {
              get_flags_ex();
              LOBYTE(auto_state) = is_defarg();
              if ( !(_BYTE)auto_state )
              {
                if ( a2[12] == 108 && ((v10 = (unsigned __int16)a2[23], v10 == 15) || v10 == 30) )
                {
                  num_flag();
                  LOBYTE(auto_state) = set_op_type();
                }
                else
                {
                  LOBYTE(auto_state) = insn_create_stkvar();
                  if ( (_BYTE)auto_state )
                    LOBYTE(auto_state) = op_stkvar();
                }
              }
            }
          }
        }
      }
      break;
    case 5:
      if ( !a5 )
        sub_6470((__int64)a2, a6);
      sub_6510((__int64)a2);
      get_flags_ex();
      LOBYTE(auto_state) = op_adds_xrefs();
      if ( (_BYTE)auto_state )
        LOBYTE(auto_state) = insn_add_off_drefs();
      break;
    case 7:
      if ( (unsigned __int8)has_insn_feature() )
      {
        *(_DWORD *)(a1 + 220) = (unsigned __int8)func_does_return();
        auto_apply_type();
      }
      LOBYTE(auto_state) = insn_add_cref();
      break;
    default:
      LOBYTE(auto_state) = sub_6470((__int64)a2, a6);
      break;
  }
  return auto_state;
}

