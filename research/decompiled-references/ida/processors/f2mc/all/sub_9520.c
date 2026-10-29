__int64 __fastcall sub_9520(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
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
    case 1u:
    case 3u:
    case 8u:
      return result;
    case 2u:
      get_sreg();
      insn_add_dref();
      result = insn_create_op_data();
      break;
    case 4u:
      sub_9380(a2, a3);
      result = getinf_flag();
      if ( (_BYTE)result )
      {
        result = get_auto_state();
        if ( (_DWORD)result == 40 && *((_WORD *)a3 + 3) == 16 )
        {
          result = get_func();
          if ( result )
          {
            if ( (*(_BYTE *)(result + 16) & 0x10) != 0 )
            {
              result = insn_create_stkvar();
              if ( (_BYTE)result )
                result = op_stkvar();
            }
          }
        }
      }
      break;
    case 5u:
      if ( a4 )
      {
        result = sub_9380(a2, a3);
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr();
        result = sub_9780(10102);
      }
      break;
    case 6u:
    case 7u:
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 244) = 0;
      result = insn_add_cref();
      break;
    default:
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v11 = *(_DWORD *)(v9 + 104);
      if ( v10 >= v11 && v10 < *(_DWORD *)(v9 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 16LL * (v10 - v11));
      result = sub_9450((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), a2, *a3);
      break;
  }
  return result;
}

