__int64 __fastcall sub_58A0(__int64 a1, unsigned __int8 *a2, char a3, double a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // r8
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ecx

  v7 = a2[1];
  result = v7;
  switch ( v7 )
  {
    case 0u:
    case 1u:
    case 3u:
      return result;
    case 2u:
    case 8u:
      map_code_ea();
      goto LABEL_10;
    case 4u:
    case 5u:
      result = set_immd();
      if ( !a3 )
      {
        if ( a2[1] == 4 )
        {
          map_code_ea();
LABEL_10:
          insn_create_op_data();
          result = insn_add_dref();
        }
        else
        {
          get_flags_ex();
          result = op_adds_xrefs();
          if ( (_BYTE)result )
            result = insn_add_off_drefs();
        }
      }
      break;
    case 7u:
      if ( (unsigned __int8)has_insn_feature() )
      {
        insn_add_cref();
        result = func_does_return();
        *(_BYTE *)(a1 + 224) = result;
      }
      else
      {
        result = insn_add_cref();
      }
      break;
    default:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(unsigned __int16 *)(a6 + 24);
      LODWORD(v13) = 0;
      v14 = *(_DWORD *)(v11 + 104);
      if ( v12 >= v14 && v12 < *(_DWORD *)(v11 + 108) )
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 112) + 16LL * (v12 - v14));
      result = sub_57D0((__int64)"%a: %s,%d: bad optype %d", a4, *(const char **)(a6 + 16), v13, *a2);
      break;
  }
  return result;
}

