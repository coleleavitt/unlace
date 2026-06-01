__int64 __fastcall sub_6100(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v7; // rbp

  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 1:
    case 3:
      return result;
    case 2:
      insn_create_op_data();
      goto LABEL_10;
    case 4:
      set_immd();
      if ( *(_WORD *)(a3 + 6) == 66 )
      {
LABEL_10:
        result = insn_add_dref();
      }
      else
      {
        get_flags_ex();
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          goto LABEL_13;
      }
      break;
    case 5:
      get_flags_ex();
      if ( a4 )
      {
        set_immd();
        result = op_adds_xrefs();
        if ( (_BYTE)result )
LABEL_13:
          result = insn_add_off_drefs();
      }
      else
      {
        if ( under_debugger )
LABEL_21:
          BUG();
        interr();
        result = sub_6300(10105, 0);
      }
      break;
    case 7:
      v7 = *(_QWORD *)(a3 + 16) + 16LL * *(_QWORD *)a2;
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      result = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
      if ( v7 != result )
      {
        *(_BYTE *)(a1 + 2760) = func_does_return();
        return insn_add_cref();
      }
      return result;
    default:
      if ( under_debugger )
        goto LABEL_21;
      interr();
      goto LABEL_13;
  }
  return result;
}

