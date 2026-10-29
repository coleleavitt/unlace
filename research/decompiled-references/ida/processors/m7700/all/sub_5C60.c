__int64 __fastcall sub_5C60(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 flags; // r13
  __int64 result; // rax
  char v6; // al
  __int64 v7; // rax

  flags = get_flags_ex();
  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
    case 1:
      return result;
    case 2:
      if ( (*(_BYTE *)(a3 + 32) & 0x40) == 0 )
        goto LABEL_10;
      result = get_sreg();
      if ( result != -1 )
        goto LABEL_10;
      break;
    case 4:
      result = op_adds_xrefs();
      if ( (_BYTE)result )
      {
        insn_add_off_drefs();
        goto LABEL_11;
      }
      break;
    case 5:
      sub_5AD0(a2);
      goto LABEL_7;
    case 7:
      if ( *(_WORD *)(a2 + 24) == 34 && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 261) = 0;
      insn_add_cref();
      result = is_loaded();
      if ( (_BYTE)result )
      {
        get_sreg();
        split_sreg_range();
        get_sreg();
        result = split_sreg_range();
      }
      break;
    case 8:
      sub_5AD0(a2);
      if ( !*(_BYTE *)a3 )
      {
        v6 = *(_BYTE *)(a2 + 81);
        if ( v6 == 7 || v6 == 2 )
        {
          v7 = sub_9480(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a3 + 8));
          if ( v7 )
          {
            if ( *(_QWORD *)(v7 + 8) > 1u && (flags & 0x800) == 0 )
              set_cmt();
          }
        }
      }
LABEL_7:
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        result = insn_add_off_drefs();
      break;
    default:
      if ( under_debugger )
        BUG();
      interr();
LABEL_10:
      insn_add_dref();
LABEL_11:
      result = insn_create_op_data();
      break;
  }
  return result;
}

