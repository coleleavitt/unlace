__int64 __fastcall sub_6AB0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 result; // rax
  unsigned int v9; // r12d
  char v10; // [rsp+0h] [rbp-38h]

  result = a3[1];
  switch ( a3[1] )
  {
    case 0u:
    case 8u:
      return result;
    case 1u:
      if ( *((_WORD *)a3 + 3) == 15 )
        goto LABEL_8;
      break;
    case 2u:
      sub_7AD0(a1, *((_QWORD *)a3 + 2));
      insn_add_dref();
      result = insn_create_op_data();
      break;
    case 3u:
      if ( *((_WORD *)a3 + 3) == 15 )
      {
        result = (unsigned int)a3[32] - 2;
        if ( (unsigned __int8)(a3[32] - 2) <= 3u )
LABEL_8:
          *(_BYTE *)(a1 + 281) = 1;
      }
      break;
    case 4u:
      set_immd();
      get_flags_ex();
      if ( (unsigned __int8)op_adds_xrefs() )
        goto LABEL_22;
      result = (unsigned int)*((unsigned __int16 *)a3 + 3) - 14;
      if ( (unsigned __int16)(*((_WORD *)a3 + 3) - 14) <= 1u )
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
                result = insn_create_stkvar();
                if ( (_BYTE)result )
                  result = op_stkvar();
              }
            }
          }
        }
      }
      break;
    case 5u:
      if ( !(_BYTE)a4 )
        sub_6930((__int64)"interr: emu", a2, (__int64)a3, a4, a5, a6, v10);
      set_immd();
      v9 = *a3;
      get_flags_ex();
      result = op_adds_xrefs();
      if ( (_BYTE)result )
      {
        sub_7AF0(a3, v9);
LABEL_22:
        result = insn_add_off_drefs();
      }
      break;
    case 7u:
      sub_7AC0(a2, *((_QWORD *)a3 + 2));
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 282) = 0;
      result = insn_add_cref();
      break;
    default:
      result = sub_69E0((__int64)"interr: emu2 %a", a7);
      break;
  }
  return result;
}

