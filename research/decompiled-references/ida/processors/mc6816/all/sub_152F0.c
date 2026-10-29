__int64 __fastcall sub_152F0(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
{
  unsigned __int8 v6; // cl
  __int64 result; // rax
  __int64 func; // r12

  v6 = a3[1];
  result = v6;
  switch ( v6 )
  {
    case 2u:
      get_sreg();
      insn_add_dref();
      result = insn_create_op_data();
      break;
    case 3u:
    case 8u:
      return result;
    case 4u:
      func = get_func();
      if ( !(unsigned __int8)getinf_flag()
        || (unsigned int)get_auto_state() != 40
        || !func
        || (*(_BYTE *)(func + 17) & 1) == 0
        || *((_WORD *)a3 + 3)
        || !(unsigned __int8)insn_create_stkvar() )
      {
        goto LABEL_6;
      }
      result = op_stkvar();
      break;
    case 5u:
      if ( !a4 )
      {
        if ( under_debugger )
          BUG();
        interr();
        goto LABEL_10;
      }
LABEL_6:
      result = sub_150A0(a2, (__int64)a3);
      break;
    case 6u:
    case 7u:
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_DWORD *)(a1 + 228) = 0;
      result = insn_add_cref();
      break;
    default:
LABEL_10:
      result = sub_151D0((__int64)"interr: emu2 address:%a operand:%d type:%d", a5, *(_QWORD *)(a2 + 16), *a3);
      break;
  }
  return result;
}

