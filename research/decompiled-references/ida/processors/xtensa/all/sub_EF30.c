__int64 __fastcall sub_EF30(__int64 a1, _WORD *a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v4; // kr00_8
  __int64 result; // rax
  __int64 v7; // r12
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  __int64 v13; // r14
  int v14; // edx
  int v15; // eax
  __int64 func; // r15
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // eax
  int v21; // edx

  v4 = v3;
  result = a3[1];
  switch ( a3[1] )
  {
    case 0u:
    case 3u:
    case 6u:
      return result;
    case 1u:
      get_flags_ex();
      result = getinf_flag();
      if ( !(_BYTE)result )
        return result;
      result = get_auto_state();
      if ( (_DWORD)result != 40 )
        return result;
      result = is_defarg();
      if ( (_BYTE)result )
        return result;
      result = get_func();
      v7 = result;
      if ( !result || a2[12] != 66 || *a3 != 1 )
        return result;
      if ( *((_WORD *)a3 + 3) != 1 )
        goto LABEL_13;
      result = *(unsigned int *)(a1 + 592);
      if ( (_DWORD)result == 1 )
      {
        v21 = 7;
      }
      else
      {
        if ( (_DWORD)result != 2 )
          goto LABEL_71;
        v21 = 15;
      }
      if ( (unsigned __int16)a2[23] == v21 )
      {
        v8 = *((unsigned __int16 *)a3 + 3);
        if ( (_DWORD)result == 1 )
          return result;
        goto LABEL_14;
      }
LABEL_71:
      result = insn_create_stkvar();
      if ( (_BYTE)result )
        result = op_stkvar();
      if ( *a3 != 1 )
        return result;
LABEL_13:
      result = *(unsigned int *)(a1 + 592);
      v8 = *((unsigned __int16 *)a3 + 3);
      if ( (_DWORD)result == 1 )
      {
        result = 7;
LABEL_16:
        if ( (_DWORD)result == v8 && a2[23] != 1 && (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
        {
          result = insn_create_stkvar();
          if ( (_BYTE)result )
            return op_stkvar();
        }
        return result;
      }
LABEL_14:
      if ( (_DWORD)result != 2 )
        return result;
      result = 15;
      goto LABEL_16;
    case 2u:
      map_code_ea();
      insn_create_op_data();
      return insn_add_dref();
    case 4u:
      get_flags_ex();
      if ( !(unsigned __int8)getinf_flag() )
        goto LABEL_22;
      if ( (unsigned int)get_auto_state() != 40 )
        goto LABEL_22;
      if ( (unsigned __int8)is_defarg() )
        goto LABEL_22;
      func = get_func();
      if ( !func )
        goto LABEL_22;
      v17 = *((unsigned __int16 *)a3 + 3);
      if ( (_WORD)v17 == 1 )
      {
        if ( (unsigned __int8)insn_create_stkvar() )
          op_stkvar();
        v17 = *((unsigned __int16 *)a3 + 3);
      }
      v18 = *(_DWORD *)(a1 + 592);
      if ( v18 == 1 )
      {
        v19 = 7;
      }
      else
      {
        if ( v18 != 2 )
          goto LABEL_22;
        v19 = 15;
      }
      if ( v17 == v19 && (*(_BYTE *)(func + 16) & 0x10) != 0 && (unsigned __int8)insn_create_stkvar() )
        op_stkvar();
LABEL_22:
      result = op_adds_xrefs();
      if ( (_BYTE)result )
      {
        sub_10450((__int64)a3);
        result = insn_add_off_drefs();
        if ( result != -1 )
          return insn_create_op_data();
      }
      return result;
    case 5u:
      get_flags_ex();
      if ( !(unsigned __int8)getinf_flag()
        || (unsigned int)get_auto_state() != 40
        || (unsigned __int8)is_defarg()
        || a2[12] != 3
        || *a3 != 2 )
      {
        goto LABEL_27;
      }
      v9 = (unsigned __int16)a2[23];
      if ( (_WORD)v9 == 1 )
      {
        v20 = *(_DWORD *)(a1 + 592);
        if ( v20 != 1 )
        {
          if ( v20 != 2 )
            goto LABEL_27;
          v10 = (unsigned __int16)a2[43];
LABEL_39:
          v12 = 15;
          goto LABEL_40;
        }
        v10 = (unsigned __int16)a2[43];
        v12 = 7;
      }
      else
      {
        v10 = (unsigned __int16)a2[43];
        if ( (_WORD)v10 == 1 )
          goto LABEL_41;
        v11 = *(_DWORD *)(a1 + 592);
        if ( v11 != 1 )
        {
          if ( v11 != 2 || v9 == 15 )
            goto LABEL_27;
          goto LABEL_39;
        }
        if ( v9 == 7 )
          goto LABEL_27;
        v12 = 7;
      }
LABEL_40:
      if ( v12 != v10 )
        goto LABEL_27;
LABEL_41:
      v13 = get_func();
      if ( !v13 )
        goto LABEL_27;
      if ( a2[43] == 1 && (unsigned __int8)insn_create_stkvar() )
        op_stkvar();
      v14 = *(_DWORD *)(a1 + 592);
      if ( v14 == 1 )
      {
        v15 = 7;
      }
      else
      {
        v15 = 15;
        if ( v14 != 2 )
          goto LABEL_27;
      }
      if ( (unsigned __int16)a2[43] == v15
        && (*(_BYTE *)(v13 + 16) & 0x10) != 0
        && (unsigned __int8)insn_create_stkvar() )
      {
        op_stkvar();
      }
LABEL_27:
      result = op_adds_xrefs();
      if ( (_BYTE)result )
      {
        sub_10450((__int64)a3);
        return insn_add_off_drefs();
      }
      return result;
    case 7u:
      map_code_ea();
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      result = insn_add_cref();
      if ( *(_BYTE *)(a1 + 600) )
      {
        result = func_does_return();
        *(_BYTE *)(a1 + 600) = result;
      }
      return result;
    default:
      return v4;
  }
}

