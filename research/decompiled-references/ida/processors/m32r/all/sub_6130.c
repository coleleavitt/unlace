__int64 __fastcall sub_6130(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int16 flags; // r13
  __int64 result; // rax

  flags = get_flags_ex();
  result = *(unsigned __int8 *)(a3 + 1);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
    case 1:
      return result;
    case 3:
      if ( !*(_BYTE *)(a3 + 32) )
      {
        result = getinf_flag();
        if ( (_BYTE)result )
        {
          result = get_auto_state();
          if ( (_DWORD)result == 40 )
          {
            result = is_defarg();
            if ( !(_BYTE)result )
            {
              result = get_func();
              if ( result )
              {
                if ( (*(_WORD *)(a3 + 6) & 0xFFFD) == 0xD && (*(_BYTE *)(result + 16) & 0x10) != 0 )
                  goto LABEL_29;
              }
            }
          }
        }
      }
      return result;
    case 4:
      set_immd();
      if ( (unsigned __int8)op_adds_xrefs() )
        insn_add_off_drefs();
      result = getinf_flag();
      if ( (_BYTE)result )
      {
        result = get_auto_state();
        if ( (_DWORD)result == 40 )
        {
          result = is_defarg();
          if ( !(_BYTE)result )
          {
            result = get_func();
            if ( result )
            {
              if ( (*(_WORD *)(a3 + 6) & 0xFFFD) == 0xD && (*(_BYTE *)(result + 16) & 0x10) != 0 )
              {
LABEL_29:
                result = insn_create_stkvar();
                if ( (_BYTE)result )
                  return op_stkvar();
              }
            }
          }
        }
      }
      return result;
    case 5:
      if ( a4 )
      {
        set_immd();
        if ( (unsigned __int8)op_adds_xrefs() )
          insn_add_off_drefs();
        result = sub_93D0(a1, *(_QWORD *)(a3 + 8));
        if ( result && (flags & 0x800) == 0 )
          return set_cmt();
      }
      else
      {
        if ( under_debugger )
LABEL_37:
          BUG();
        interr();
        return sub_6420(10135, 0);
      }
      return result;
    case 7:
      if ( *(_WORD *)(a2 + 24) == 14 && !(unsigned __int8)sub_5740(a2) && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 240) = 0;
      return insn_add_cref();
    default:
      if ( under_debugger )
        goto LABEL_37;
      interr();
      return set_cmt();
  }
}

