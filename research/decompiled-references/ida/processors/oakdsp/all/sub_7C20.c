__int64 __fastcall sub_7C20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // kr00_8
  __int64 result; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // cx

  v5 = v4;
  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
    case 1:
    case 4:
    case 6:
    case 8:
      return result;
    case 2:
      sub_7B50(a1, (_QWORD *)a2, a3);
      insn_add_dref();
      return insn_create_op_data();
    case 3:
      if ( !a4 )
      {
        get_flags_ex();
        result = op_adds_xrefs();
        if ( (_BYTE)result )
        {
          result = insn_add_off_drefs();
          if ( result != -1 )
            return insn_create_op_data();
        }
      }
      return result;
    case 5:
      set_immd();
      get_flags_ex();
      if ( (unsigned __int8)is_defarg() )
        goto LABEL_13;
      v7 = *(_WORD *)(a2 + 24);
      if ( v7 <= 0x11u )
      {
        if ( v7 <= 1u )
          goto LABEL_13;
        goto LABEL_29;
      }
      v8 = v7 - 36;
      if ( v8 > 0x3Cu )
        goto LABEL_13;
      if ( ((1LL << v8) & 0x18100031047FF0FFLL) != 0 )
      {
LABEL_29:
        num_flag();
        set_op_type();
        goto LABEL_13;
      }
      if ( ((1LL << v8) & 0x21000000) != 0 )
        set_op_type();
LABEL_13:
      get_flags_ex();
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        return insn_add_off_drefs();
      return result;
    case 7:
      sub_7B50(a1, (_QWORD *)a2, a3);
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 256) = 0;
      return insn_add_cref();
    case 9:
      result = getinf_flag();
      if ( (_BYTE)result )
      {
        result = get_auto_state();
        if ( (_DWORD)result == 40 )
        {
          result = get_func();
          if ( result )
          {
            if ( (*(_BYTE *)(result + 16) & 0x10) != 0 )
            {
              result = insn_create_stkvar();
              if ( (_BYTE)result )
                return op_stkvar();
            }
          }
        }
      }
      return result;
    default:
      return v5;
  }
}

