__int64 __fastcall sub_7C40(__int64 a1, __int64 a2, unsigned __int8 *a3, double a4, __int64 a5, char a6)
{
  unsigned __int8 v7; // cl
  __int64 result; // rax

  v7 = a3[1];
  result = v7;
  switch ( v7 )
  {
    case 1u:
    case 3u:
      return result;
    case 2u:
      result = get_sreg();
      if ( result != -1 )
      {
        result <<= 16;
        if ( (*((_QWORD *)a3 + 2) | result & 0xFF0000) != 0xFFFFFFFFFFFFFFFFLL )
        {
          insn_add_dref();
          result = insn_create_op_data();
        }
      }
      break;
    case 4u:
      result = set_immd();
      break;
    case 5u:
      if ( a6 )
      {
        set_immd();
        if ( !(unsigned __int8)is_defarg() )
        {
          num_flag();
          set_op_type();
        }
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          result = insn_add_off_drefs();
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr();
        result = sub_7E80(10112);
      }
      break;
    case 7u:
      if ( *(_WORD *)(a2 + 24) == 80 )
      {
        result = insn_add_dref();
      }
      else
      {
        if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
          *(_BYTE *)(a1 + 240) = 0;
        result = insn_add_cref();
      }
      break;
    default:
      if ( v7
        || (result = (unsigned int)*(unsigned __int16 *)(a2 + 24) - 1, (unsigned __int16)(*(_WORD *)(a2 + 24) - 1) > 1u) )
      {
        result = sub_7B30((__int64)"interr: emu2 address:%a operand:%d type:%d", a4, *(_QWORD *)(a2 + 16), *a3);
      }
      break;
  }
  return result;
}

