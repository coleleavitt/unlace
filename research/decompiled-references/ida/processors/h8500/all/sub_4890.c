__int64 __fastcall sub_4890(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rdx
  __int64 result; // rax
  char v11; // r14
  __int64 v12; // rsi
  unsigned int v13; // r12d
  __int16 v14; // dx

  v8 = a3[1];
  result = (unsigned __int8)v8;
  switch ( (char)v8 )
  {
    case 1:
    case 8:
      return result;
    case 2:
      sub_5740(a2, a3, v8, a4, a5, a6, a7);
      insn_add_dref();
      return insn_create_op_data();
    case 3:
    case 4:
      v11 = a4;
      result = sub_44F0(a2);
      if ( !v11 )
      {
        get_flags_ex();
        v12 = *a3;
        result = op_adds_xrefs();
        if ( (_BYTE)result )
        {
          sub_5AB0(a2, v12);
          result = insn_add_off_drefs();
          if ( result != -1 )
            result = insn_create_op_data();
        }
        if ( a3[1] == 4 )
        {
          result = getinf_flag();
          if ( (_BYTE)result )
          {
            result = get_auto_state();
            if ( (_DWORD)result == 40 )
            {
              result = is_defarg();
              if ( !(_BYTE)result )
              {
                result = get_func();
                if ( result )
                {
                  v14 = *((_WORD *)a3 + 3);
                  if ( v14 == 7 || v14 == 6 && (*(_BYTE *)(result + 16) & 0x10) != 0 )
                  {
                    result = insn_create_stkvar();
                    if ( (_BYTE)result )
                      return op_stkvar();
                  }
                }
              }
            }
          }
        }
      }
      return result;
    case 5:
      if ( !(_BYTE)a5 )
        goto LABEL_28;
      sub_44F0(a2);
      v13 = *a3;
      get_flags_ex();
      result = op_adds_xrefs();
      if ( (_BYTE)result )
      {
        sub_5A90(a2, v13);
        result = insn_add_off_drefs();
      }
      break;
    case 6:
    case 7:
      sub_5740(a2, a3, v8, a4, a5, a6, a7);
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 154) = 0;
      return insn_add_cref();
    default:
      if ( under_debugger )
        goto LABEL_30;
      interr();
LABEL_28:
      if ( under_debugger )
LABEL_30:
        BUG();
      interr();
      result = sub_4B40(10090);
      break;
  }
  return result;
}

