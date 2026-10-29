__int64 __fastcall sub_3090(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
{
  __int64 v5; // rbp
  unsigned __int8 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx

  v5 = a2;
  v7 = a3[1];
  result = v7;
  switch ( v7 )
  {
    case 0u:
    case 1u:
    case 8u:
    case 9u:
    case 0xAu:
      return result;
    case 2u:
      calc_dataseg();
      insn_create_op_data();
      return insn_add_dref();
    case 4u:
      goto LABEL_10;
    case 5u:
      if ( !a4 )
        goto LABEL_5;
LABEL_10:
      set_immd();
      get_flags_ex();
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        result = insn_add_off_drefs();
      break;
    case 7u:
      map_code_ea();
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      result = insn_add_cref();
      if ( *(_BYTE *)(a1 + 124) )
      {
        result = func_does_return();
        *(_BYTE *)(a1 + 124) = result;
      }
      return result;
    default:
LABEL_5:
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v11 = *(_DWORD *)(v9 + 104);
      if ( v10 >= v11 && v10 < *(_DWORD *)(v9 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 16LL * (v10 - v11));
      result = sub_2FC0((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), a2, *a3);
      break;
  }
  return result;
}

