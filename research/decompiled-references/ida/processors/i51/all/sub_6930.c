__int64 __fastcall sub_6930(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
{
  __int64 v6; // rbp
  __int64 v8; // r14
  __int64 result; // rax
  __int16 v10; // cx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx

  v6 = a2;
  v8 = *((_QWORD *)a3 + 2);
  result = get_flags_ex();
  switch ( a3[1] )
  {
    case 1u:
    case 3u:
      return result;
    case 2u:
      goto LABEL_6;
    case 4u:
      sub_66B0(a2, result);
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        goto LABEL_14;
      return result;
    case 5u:
      if ( !a4 )
        goto LABEL_15;
      sub_66B0(a2, result);
      result = op_adds_xrefs();
      if ( (_BYTE)result )
LABEL_14:
        result = insn_add_off_drefs();
      break;
    case 7u:
      map_code_ea();
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      result = insn_add_cref();
      if ( *(_BYTE *)(a1 + 280) )
      {
        result = func_does_return();
        *(_BYTE *)(a1 + 280) = result;
      }
      return result;
    case 8u:
    case 9u:
      v10 = *((_WORD *)a3 + 3);
      v8 = (unsigned __int8)v10 & 0xF8;
      if ( (v10 & 0x80u) == 0 )
        v8 = ((unsigned __int64)((unsigned __int8)*((_WORD *)a3 + 3) & 0xF8) >> 3) + 32;
      sub_6810(a1, a2, v8, v10 & 7);
      goto LABEL_6;
    case 0xAu:
      sub_6810(a1, a2, v8, (char)a3[32]);
LABEL_6:
      sub_6880(a1, a2, v8);
      insn_create_op_data();
      result = insn_add_dref();
      break;
    default:
LABEL_15:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v13 = *(_DWORD *)(v11 + 104);
      if ( v12 >= v13 && v12 < *(_DWORD *)(v11 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v11 + 112) + 16LL * (v12 - v13));
      result = sub_6740((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v6 + 16), a2, *a3);
      break;
  }
  return result;
}

