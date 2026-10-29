__int64 __fastcall sub_9DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int16 flags; // r13
  __int64 func; // rax
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
    case 1:
    case 3:
      goto LABEL_6;
    case 2:
      sub_9D60((_QWORD *)a2, a3);
      insn_add_dref();
      return insn_create_op_data();
    case 4:
      set_immd();
      get_flags_ex();
      if ( (unsigned __int8)op_adds_xrefs() )
      {
        insn_add_off_drefs();
        insn_create_op_data();
      }
      if ( (unsigned __int8)getinf_flag() )
      {
        if ( (unsigned int)get_auto_state() == 40 && !(unsigned __int8)is_defarg() && *(_WORD *)(a3 + 6) == 542 )
        {
          func = get_func();
          if ( func )
          {
            if ( (*(_BYTE *)(func + 16) & 0x10) != 0 )
            {
              if ( (unsigned __int8)insn_create_stkvar() )
              {
                op_stkvar();
                if ( *(_BYTE *)(a2 + 81) == 1 )
                {
                  if ( find_regvar() )
                  {
                    get_frame_var();
                    clear_tinfo_t();
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_6;
    case 5:
      set_immd();
      flags = get_flags_ex();
      if ( sub_D760(a1, *(_QWORD *)(a3 + 8)) && (flags & 0x800) == 0 )
        set_cmt();
      if ( (unsigned __int8)op_adds_xrefs() )
        result = insn_add_off_drefs();
      else
LABEL_6:
        result = v7 - __readfsqword(0x28u);
      break;
    case 6:
    case 7:
      sub_9D60((_QWORD *)a2, a3);
      if ( (unsigned __int8)is_call_insn() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 4682) = 0;
      result = insn_add_cref();
      break;
    default:
      if ( !under_debugger )
        interr();
      BUG();
  }
  return result;
}

