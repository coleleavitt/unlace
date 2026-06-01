__int64 __fastcall sub_38E0(__int64 a1, unsigned __int8 *a2, char a3, __int64 a4, _BYTE *a5, double a6)
{
  unsigned __int8 v9; // r8
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ecx
  unsigned int v15; // r13d

  v9 = a2[1];
  result = v9;
  switch ( v9 )
  {
    case 1u:
      return result;
    case 2u:
      calc_dataseg();
      insn_create_op_data();
      result = insn_add_dref();
      if ( *(_WORD *)(a4 + 24) == 35 && a2[5] == 1 )
      {
        result = is_loaded();
        if ( (_BYTE)result )
        {
          result = get_word();
          if ( (unsigned __int16)result > 0x20u )
          {
            result = is_mapped();
            if ( (_BYTE)result )
            {
              add_cref();
              result = get_flags_ex();
              if ( (result & 0xF00000) == 0 )
              {
                get_default_reftype();
                return op_offset();
              }
            }
          }
        }
      }
      return result;
    case 4u:
      goto LABEL_10;
    case 5u:
      if ( !a3 )
        goto LABEL_5;
LABEL_10:
      set_immd();
      v15 = *a2;
      get_flags_ex();
      result = op_adds_xrefs();
      if ( (_BYTE)result )
      {
        sub_3EE0(a2, v15);
        result = insn_add_off_drefs();
      }
      break;
    case 7u:
      map_code_ea();
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      result = insn_add_cref();
      if ( *a5 )
      {
        result = func_does_return();
        *a5 = result;
      }
      return result;
    default:
LABEL_5:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(unsigned __int16 *)(a4 + 24);
      LODWORD(v13) = 0;
      v14 = *(_DWORD *)(v11 + 104);
      if ( v12 >= v14 && v12 < *(_DWORD *)(v11 + 108) )
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 112) + 16LL * (v12 - v14));
      result = sub_3810((__int64)"%a: %s,%d: bad optype %d", a6, *(const char **)(a4 + 16), v13, *a2);
      break;
  }
  return result;
}

