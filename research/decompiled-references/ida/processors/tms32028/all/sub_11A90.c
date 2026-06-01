__int64 __fastcall sub_11A90(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // r13

  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result != 5 )
  {
    v5 = a1;
    if ( (unsigned __int8)result <= 5u )
    {
      if ( (_BYTE)result != 2 )
      {
        if ( (_BYTE)result == 4 )
        {
          set_immd();
          if ( *(_WORD *)(a3 + 6) == 63 && sub_117A0(a2, *(_QWORD *)(a3 + 16)) != -1 )
          {
            insn_create_op_data();
            insn_add_dref();
            sub_11880();
          }
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
                  if ( *(_WORD *)(a3 + 6) == 27 )
                  {
                    result = insn_create_stkvar();
                    if ( (_BYTE)result )
                      return op_stkvar();
                  }
                }
              }
            }
          }
        }
        return result;
      }
      if ( *(_BYTE *)(a3 + 33) == 3 )
        return result;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v9 = *(_QWORD *)(a3 + 16) + 16LL * *a2;
      if ( v9 == result )
      {
        if ( v9 == -1 )
          return result;
      }
      else if ( v9 == -1 )
      {
        return result;
      }
      insn_create_op_data();
      return insn_add_dref();
    }
    if ( (_BYTE)result != 7 )
      return result;
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v8 = *(_QWORD *)(a3 + 16) + 16LL * *a2;
    if ( v8 == result )
    {
      if ( v8 == -1 )
        return result;
    }
    else if ( v8 == -1 )
    {
      return result;
    }
    if ( !(unsigned __int8)has_insn_feature() )
      return insn_add_cref();
LABEL_38:
    if ( !(unsigned __int8)func_does_return() )
      *(_BYTE *)(v5 + 255) = 0;
    return insn_add_cref();
  }
  if ( !a5 )
  {
    if ( under_debugger )
      BUG();
    interr();
    goto LABEL_38;
  }
  set_immd();
  if ( !(unsigned __int8)is_defarg() )
    set_op_type();
  result = op_adds_xrefs();
  if ( (_BYTE)result )
    result = insn_add_off_drefs();
  if ( *(_BYTE *)(a3 + 33) == 2 )
  {
    result = sub_11800((__int64)a2, *(_QWORD *)(a3 + 8));
    if ( result != -1 )
      return insn_add_dref();
  }
  return result;
}

