__int64 __fastcall sub_11F70(__int64 a1, __int64 a2, unsigned __int8 *a3, double a4, __int64 a5, char a6)
{
  unsigned __int8 v6; // cl
  __int64 result; // rax
  int v10; // ebx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx

  v6 = a3[1];
  result = v6;
  switch ( v6 )
  {
    case 1u:
      result = (unsigned int)a3[33] - 9;
      if ( (unsigned __int8)(a3[33] - 9) <= 2u )
      {
        result = set_immd();
        if ( *((_WORD *)a3 + 3) == 67 )
        {
          if ( a3[33] != 9 )
            return result;
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
                  result = op_stkvar();
              }
            }
          }
        }
      }
      else if ( *((_WORD *)a3 + 3) == 67 )
      {
        return result;
      }
      if ( !a6 )
      {
        v10 = *((unsigned __int16 *)a3 + 3);
        result = (unsigned int)(v10 - 136);
        if ( (unsigned __int16)(v10 - 136) <= 2u )
          goto LABEL_14;
      }
      return result;
    case 2u:
      result = sub_11E40(a2, (__int64)a3);
      v11 = result;
      if ( result != -1 )
      {
        insn_add_dref();
        result = insn_create_op_data();
        if ( !a6 )
        {
          v12 = v11 >> 1;
          if ( (*(_BYTE *)(a1 + 256) & 2) != 0 && v12 <= 0x4F )
          {
            result = (unsigned int)(*((_DWORD *)qword_18EE0 + (int)v12) - 136);
            if ( (unsigned int)result <= 2 )
            {
LABEL_14:
              get_item_end();
              return split_sreg_range();
            }
          }
        }
      }
      return result;
    case 5u:
      if ( a6 )
      {
        set_immd();
        if ( !(unsigned __int8)is_defarg() )
        {
          v13 = *(unsigned __int16 *)(a2 + 24);
          if ( (unsigned __int16)v13 <= 0x104u )
          {
            if ( (unsigned __int16)v13 > 0xC6u )
            {
              v14 = 0x28F0000101B6000DLL;
              LOWORD(v13) = v13 - 199;
              if ( _bittest64(&v14, v13) )
                goto LABEL_22;
            }
            else if ( (unsigned __int16)v13 > 0x82u )
            {
              if ( (unsigned __int16)(v13 - 193) <= 1u )
                goto LABEL_22;
            }
            else
            {
              if ( (unsigned __int16)v13 <= 0x58u )
              {
                if ( (unsigned __int16)(v13 - 5) > 1u )
                  goto LABEL_23;
                goto LABEL_22;
              }
              v15 = 0x3C00003C007LL;
              if ( _bittest64(&v15, (unsigned int)(v13 - 89)) )
              {
LABEL_22:
                num_flag();
                set_op_type();
              }
            }
          }
        }
LABEL_23:
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          return insn_add_off_drefs();
        return result;
      }
      if ( under_debugger )
        BUG();
      interr();
      return sub_12340(10114);
    case 7u:
      if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 249) <= 1u )
        return insn_add_dref();
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 259) = 0;
      return insn_add_cref();
    case 8u:
    case 9u:
    case 0xBu:
      return result;
    case 0xAu:
      if ( a3[33] == 2 )
        return set_immd();
      return result;
    default:
      return sub_11D70((__int64)"interr: emu2 address:%a operand:%d type:%d", a4, *(_QWORD *)(a2 + 16), *a3);
  }
}

