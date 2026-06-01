__int64 __fastcall sub_5690(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, char a5, double a6)
{
  unsigned __int8 v8; // dl
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // r14

  v8 = a3[1];
  result = v8;
  switch ( v8 )
  {
    case 1u:
    case 3u:
      return result;
    case 2u:
      calc_dataseg();
      return insn_add_dref();
    case 4u:
      result = sub_5550(a2);
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
    case 5u:
      if ( !a5 )
        goto LABEL_4;
      sub_5550(a2);
      get_flags_ex();
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        result = insn_add_off_drefs();
      break;
    case 7u:
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 350) = 0;
      return insn_add_cref();
    case 8u:
      v13 = *(_QWORD *)(a1 + 328);
      if ( v13 != -1 )
      {
        v14 = *((_QWORD *)a3 + 2) + v13;
        if ( *(int *)(a1 + 320) <= 99 )
          v14 += 32;
        result = sub_8130(a1);
        if ( result )
        {
          if ( *(_QWORD *)(result + 16) > 1u )
          {
            result = get_name_ea();
            if ( v14 == result )
              return insn_add_dref();
          }
        }
      }
      return result;
    default:
LABEL_4:
      result = *(unsigned __int16 *)(a2 + 24);
      if ( (_WORD)result != 68 && (_WORD)result != 104 )
      {
        v10 = *(_QWORD *)(a1 + 16);
        LODWORD(v11) = 0;
        v12 = *(_DWORD *)(v10 + 104);
        if ( (int)result >= v12 && (int)result < *(_DWORD *)(v10 + 108) )
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 112) + 16LL * ((int)result - v12));
        result = sub_55C0((__int64)"%a: %s,%d: bad optype %d", a6, *(const char **)(a2 + 16), v11, *a3);
      }
      break;
  }
  return result;
}

