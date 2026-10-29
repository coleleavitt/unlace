__int64 __fastcall sub_6E90(__int64 a1, __int64 a2, unsigned __int8 *a3, double a4, __int64 a5, char a6)
{
  unsigned __int8 v6; // cl
  __int64 result; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx

  v6 = a3[1];
  result = v6;
  switch ( v6 )
  {
    case 1u:
    case 8u:
    case 9u:
    case 0xAu:
      return result;
    case 2u:
    case 0xCu:
    case 0xDu:
      if ( v6 != 2 || (result = get_sreg(), result != -1) )
      {
        result = use_mapping();
        if ( result != -1 )
        {
          insn_add_dref();
          return insn_create_op_data();
        }
      }
      return result;
    case 4u:
      return set_immd();
    case 5u:
      if ( a6 )
      {
        set_immd();
        if ( (unsigned __int8)is_defarg() )
          goto LABEL_22;
        v9 = *(unsigned __int16 *)(a2 + 24);
        if ( (unsigned __int16)v9 > 0x5Eu )
        {
          LOWORD(v9) = v9 - 140;
          if ( (unsigned __int16)v9 <= 0x22u )
          {
            v12 = 0x410400009LL;
            if ( _bittest64(&v12, v9) )
              goto LABEL_21;
          }
        }
        else if ( (unsigned __int16)v9 > 0x48u )
        {
          v11 = 2622259;
          if ( _bittest64(&v11, (unsigned int)(v9 - 73)) )
          {
LABEL_21:
            num_flag();
            set_op_type();
          }
        }
        else if ( (unsigned __int16)(v9 - 3) <= 0x10u )
        {
          v10 = 533032;
          if ( _bittest64(&v10, v9) )
            goto LABEL_21;
        }
LABEL_22:
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          return insn_add_off_drefs();
        return result;
      }
      if ( under_debugger )
        BUG();
      interr();
      return sub_7230(10113);
    case 6u:
    case 7u:
      if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 141) <= 1u )
      {
        get_sreg();
        use_mapping();
        return insn_add_dref();
      }
      if ( v6 == 7 )
        get_sreg();
      use_mapping();
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 235) = 0;
      if ( !a3[5] )
        return insn_add_dref();
      return insn_add_cref();
    case 0xBu:
      result = getinf_flag();
      if ( (_BYTE)result )
      {
        result = get_auto_state();
        if ( (_DWORD)result == 40 )
        {
          result = get_func();
          if ( result )
          {
            result = insn_create_stkvar();
            if ( (_BYTE)result )
              return op_stkvar();
          }
        }
      }
      return result;
    default:
      return sub_6CD0((__int64)"interr: emu2 address:%a operand:%d type:%d", a4, *(_QWORD *)(a2 + 16), *a3);
  }
}

