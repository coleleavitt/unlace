__int64 __fastcall sub_6810(__int64 a1, unsigned __int8 *a2, char a3, char a4, __int64 a5, double a6)
{
  unsigned __int8 v10; // r8
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rsi
  int v15; // ecx

  map_code_ea();
  map_code_ea();
  v10 = a2[1];
  result = v10;
  switch ( v10 )
  {
    case 0u:
      return result;
    case 1u:
      if ( !a3 )
      {
        get_flags_ex();
        result = is_off();
        if ( (_BYTE)result )
          goto LABEL_9;
      }
      return result;
    case 2u:
      goto LABEL_8;
    case 5u:
      if ( !a4 )
        goto LABEL_2;
      result = set_immd();
      if ( !a3 )
      {
        get_flags_ex();
        result = is_off();
        if ( (_BYTE)result )
          goto LABEL_9;
      }
      return result;
    case 7u:
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      insn_add_cref();
      result = func_does_return();
      *(_BYTE *)(a1 + 224) = result;
      return result;
    case 8u:
      result = (unsigned int)a2[32] - 32;
      if ( ((a2[32] - 32) & 0xDF) != 0 )
        return result;
LABEL_8:
      insn_create_op_data();
LABEL_9:
      result = insn_add_dref();
      break;
    default:
LABEL_2:
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(unsigned __int16 *)(a5 + 24);
      LODWORD(v14) = 0;
      v15 = *(_DWORD *)(v12 + 104);
      if ( v13 >= v15 && v13 < *(_DWORD *)(v12 + 108) )
        v14 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v13 - v15));
      result = sub_6740((__int64)"%a %s,%d: bad optype %d", a6, *(const char **)(a5 + 16), v14, *a2);
      break;
  }
  return result;
}

